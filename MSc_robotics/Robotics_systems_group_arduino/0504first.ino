#include "pid.h"
#include "pidIR.h"
#include "encoders.h"
#include <math.h>
#include "pins.h"
#include "utils.h"
#include "mapping.h"
#include "Pushbutton.h"
#define RIR_sensor A2
#define LIR_sensor A3 //changed!!!!
#define MIR_sensor A4
#define L_PWM_PIN 10
#define R_PWM_PIN  9
#define L_DIR_PIN 16
#define R_DIR_PIN 15

Mapper        Map; //Class for representing the map

Pushbutton    ButtonB(BUTTON_B, DEFAULT_STATE_HIGH);

PIDIR leftIR(0.45, 0.0, 0.0);
int end_flag = 0;
int cornor = 0;
int x_input = 0;
int y_input = 0;
int WHEEL_RADIUS = 35;
int GEAR_RATIO = 120;
int COUNTS_PER_SHAFT_REVOLUTION = 12;
const int BUZZER_PIN = 6;
float WHEEL_SEPERATION = 143;
float WHEEL_PREMETER = 219.91;
float Kp_pose = 0.8; //Proportional gain for position controller
float Kd_pose = 0; //Derivative gain for position controller
float Ki_pose = 0; //Integral gain for position controller
PID leftPose(Kp_pose, Kd_pose, Ki_pose); //Position controller for left wheel position
PID rightPose(Kp_pose, Kd_pose, Ki_pose); //Position controller for left wheel position

double increment=0;
int i = 0;
int old_count = 0;
int count_incre = 0;
int aver_count = 0;
float d = 0;
float A = 0;
float d_left_old = 0;
float d_right_old = 0;
float d_left_new = 0;
float d_right_new = 0;
float theta_old = 0;
float theta_new = 0;
float d_left = 0;
float d_right = 0;


float x_new = 0;
float y_new = 0;
float x_old = 0;
float y_old = 0;
double target_x = 0;
double target_y = 0;
double delta_x = 0;
double delta_y = 0;
double target_theta = 0;
float delta_theta = 0;
double turn_initial = 0.785;
double go_turn_demand = 0;
double turn_demand = 0;
double straight_distance = 0;
double straight_demand = 6000;


bool straight_initial = 1;
int track_process = 0;
bool cal_preparation = 0;
bool turn_process = 0;
bool straight_process = 0;


int STATEIR = 0; //for total system
int stage = 0;



void setup() {
  pinMode(RIR_sensor, INPUT);
  pinMode(LIR_sensor, INPUT);
  pinMode(MIR_sensor, INPUT);
  pinMode( L_PWM_PIN, OUTPUT );
  pinMode( L_DIR_PIN, OUTPUT );
  pinMode( R_PWM_PIN, OUTPUT );
  pinMode( R_DIR_PIN, OUTPUT );
  Serial.begin( 9600 );
  setupEncoder0();
  setupEncoder1();
  digitalWrite( L_DIR_PIN, LOW );
  digitalWrite( R_DIR_PIN, LOW );
  leftIR.setMax(150);
  pinMode(6, OUTPUT);
  Serial.begin( 9600 );
  delay(1000);
  Serial.println("Board Reset");

  // Romi will wait for you to press a button and then print
  // the current map.
  //
  // !!! A second button press will erase the map !!!
  ButtonB.waitForButton();

  Map.printMap();

  // Watch for second button press, then begin autonomous mode.
  ButtonB.waitForButton();

  Serial.println("Map Erased - Mapping Started");
  Map.resetMap();
  analogWrite(L_PWM_PIN, 20);
  analogWrite(R_PWM_PIN, 20);

}

void loop() {
  int ValR = analogRead(RIR_sensor);
  int ValL = analogRead(LIR_sensor);
  int ValM = analogRead(MIR_sensor);
  float output1 = leftIR.update(600, ValL);
  Serial.println(output1);



  switch (STATEIR) {
    case 0:
      //this is where searching method should come!!!

      doMovement() ;
      //delay(2);
      break;


    case 1:
      //following the wall of the obstacle happens here
      //  cornor =0;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
      convert();

      if (cornor > 2) {
        if ((x_input - 100 < x_new) && (x_new < x_input + 100) && (y_input - 100 < y_new) && (y_new < y_input + 100)) {
          STATEIR = 0;
          stage = 2;
          cornor = 0;
          analogWrite(L_PWM_PIN, 0);
          analogWrite(R_PWM_PIN, 0);
          delay(100);

          analogWrite(6, 100);
          delay(200);
          analogWrite(6, 0);
          delay(200);
        }
      }




      //when to stop following and then go back to case 0????

      break;
  }


  aver_count = (count_e1 + count_e0) / 2;
  count_incre = aver_count - old_count;
  old_count = aver_count;
  d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

  d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
  d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
  d_left = d_left_new - d_left_old;
  d_left_old = d_left_new;
  d_right = d_right_new - d_right_old;
  d_right_old = d_right_new;
  theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
  if (theta_new > 6.283)
  {
    theta_new = theta_new - 6.283;
  }


  theta_old = theta_new;
  x_new = x_old + (d * cos(theta_new));
  y_new = y_old + (d * sin(theta_new));
  y_old = y_new;
  x_old = x_new;
  //  Serial.println( theta_new );
  //  Serial.println( count_e0 );
  //  Serial.println(count_e1 );
  //  Serial.print( "STATEIR:" );
  //  Serial.println( STATEIR );
  //  Serial.print( "stage" );
  //  Serial.println( stage );

}





void convert() {
  int ValR = analogRead(RIR_sensor);
  int ValL = analogRead(LIR_sensor);
  int ValM = analogRead(MIR_sensor);

  digitalWrite(L_DIR_PIN, LOW);
  digitalWrite(R_DIR_PIN, LOW);

  float output1 = leftIR.update(600, ValL);


  analogWrite( R_PWM_PIN, 0);
  analogWrite( L_PWM_PIN, 0);
  delay(5);

  if (ValM > 700) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(L_DIR_PIN, LOW);
      digitalWrite(R_DIR_PIN, HIGH);
      analogWrite( R_PWM_PIN, 30);
      analogWrite( L_PWM_PIN, 30);
      delay(350);
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }
      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }
    //    digitalWrite(L_DIR_PIN, LOW);
    //    digitalWrite(R_DIR_PIN, HIGH);
    //    analogWrite( R_PWM_PIN, 30);
    //    analogWrite( L_PWM_PIN, 30);
    //    delay(1000);
    //    digitalWrite(L_DIR_PIN, LOW);
    //    digitalWrite(R_DIR_PIN, LOW);
    analogWrite( R_PWM_PIN, 0);
    analogWrite( L_PWM_PIN, 0);
    delay(10);
    analogWrite(6, 100);
    delay(100);
    analogWrite(6, 0);
    delay(100);

  }
  else if (output1 < -130) {
    analogWrite( L_PWM_PIN, 60);
    delay(20);
  }
  else if (output1 > -80 && output1 < 100) {
    analogWrite( R_PWM_PIN, 60);
    delay(20);
  }
  else if (output1 > 100) {
    analogWrite( R_PWM_PIN, 0);
    analogWrite( L_PWM_PIN, 0);
    delay(50);
    for (int i = 0; i < 3; i++) {
      analogWrite( R_PWM_PIN, 30);
      analogWrite( L_PWM_PIN, 30);
      delay(500);
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }
      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }
    while ( abs(output1) > 90) { //90?
      digitalWrite( L_DIR_PIN, HIGH  );
      analogWrite( L_PWM_PIN, 20);
      analogWrite( R_PWM_PIN, 20);
      delay(5);
      int ValL = analogRead(LIR_sensor);
      output1 = leftIR.update(600, ValL);
//      Serial.print("output:");
//      Serial.println(output1);
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }


      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }

    analogWrite(6, 100);
    delay(100);
    analogWrite(6, 0);
    delay(100);
    cornor++;
  }
  else
  {
    analogWrite( R_PWM_PIN, 30);
    analogWrite( L_PWM_PIN, 30);
    delay(30); //5?
  }

}







void doMovement() {
  float output0 = leftPose.update(0, count_e0 - count_e1);
  float output1 = rightPose.update(0, count_e1 - count_e0);
  Serial.println( "in the switch" );
  if (stage == 0) {
    go_turn_demand = ((((WHEEL_SEPERATION * turn_initial) / 2) / WHEEL_PREMETER) * 1440) * 1.07;

    digitalWrite( L_DIR_PIN, HIGH  );
    digitalWrite( R_DIR_PIN, LOW );

    output0 = constrain(output0, 25, 30);
    output1 = constrain(output1, 25, 30);
    analogWrite( L_PWM_PIN, output0);
    analogWrite( R_PWM_PIN, output1 );

    if (count_e1 > go_turn_demand || count_e0 < -go_turn_demand) {
      digitalWrite( L_DIR_PIN, LOW  );
      digitalWrite( R_DIR_PIN, LOW );
      analogWrite(L_PWM_PIN, 0);
      analogWrite(R_PWM_PIN, 0);
      delay(1000);
      theta_old = theta_new;
      x_old = x_new;
      y_old = y_new;
      count_e1 = 0;
      count_e0 = 0;
      old_count = 0;
      d_left_old = 0;
      d_right_old = 0;

      stage++;
    }

  }
  else if (stage == 1) {
    Serial.println( "go straight" );


    output0 = constrain(output0, 25, 30);
    output1 = constrain(output1, 25, 30);
    analogWrite( L_PWM_PIN, output0);
    analogWrite( R_PWM_PIN, output1 );


    int ValR = analogRead(RIR_sensor);
    int ValL = analogRead(LIR_sensor);
    int ValM = analogRead(MIR_sensor);

    if (ValL > 700) { // when left IR sensor has value
      analogWrite( R_PWM_PIN, 0);
      analogWrite( L_PWM_PIN, 0);
      delay(100);
      analogWrite( L_PWM_PIN, 20);
      analogWrite( R_PWM_PIN, 20);
      delay(10);
      for (int i = 0; i < 1; i++) {
        analogWrite(6, 100);
        delay(200);
        analogWrite(6, 0);
        delay(200);
      }
      digitalWrite(L_DIR_PIN, LOW);
      digitalWrite(R_DIR_PIN, HIGH);
      analogWrite( R_PWM_PIN, 30);
      analogWrite( L_PWM_PIN, 30);
      delay(300); //400?
      STATEIR = 1;
      x_input = x_new;
      y_input = y_old;
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }


      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }
    else if (ValM > 700) { //when right IR sensor has value
      analogWrite( R_PWM_PIN, 0);
      analogWrite( L_PWM_PIN, 0);
      delay(100);
//      analogWrite( L_PWM_PIN, 20);
//      analogWrite( R_PWM_PIN, 20);
//      delay(10);
      for (int i = 0; i < 2; i++) {
        delay(100);
        analogWrite(6, 100);
        delay(200);
        analogWrite(6, 0);
        delay(200);
      }
      STATEIR = 1;
            x_input = x_new;
            y_input = y_old;
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }


      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }
    else if (ValR > 700) { //when middle IR sensor has value
      analogWrite( R_PWM_PIN, 0);
      analogWrite( L_PWM_PIN, 0);
      delay(100);

      for (int i = 0; i < 3; i++) {
        delay(100);
        analogWrite(6, 100);
        delay(200);
        analogWrite(6, 0);
        delay(200);
      }
      digitalWrite(L_DIR_PIN, LOW);
      digitalWrite(R_DIR_PIN, HIGH);
      analogWrite( R_PWM_PIN, 30);
      analogWrite( L_PWM_PIN, 30);
      delay(1400);
      STATEIR = 1;
            x_input = x_new;
            y_input = y_old;
      aver_count = (count_e1 + count_e0) / 2;
      count_incre = aver_count - old_count;
      old_count = aver_count;
      d = count_incre * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;

      d_left_new = count_e0 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_right_new = count_e1 * (2 * PI / ( GEAR_RATIO * COUNTS_PER_SHAFT_REVOLUTION) ) * WHEEL_RADIUS;
      d_left = d_left_new - d_left_old;
      d_left_old = d_left_new;
      d_right = d_right_new - d_right_old;
      d_right_old = d_right_new;
      theta_new = (theta_old + ((d_right - d_left) / WHEEL_SEPERATION));
      if (theta_new > 6.283)
      {
        theta_new = theta_new - 6.283;
      }


      theta_old = theta_new;
      x_new = x_old + (d * cos(theta_new));
      y_new = y_old + (d * sin(theta_new));
      y_old = y_new;
      x_old = x_new;
      Map.updateMapFeature( (byte)'O', y_new + 900, x_new + 900);
    }

    straight_demand = 6000;
    if (count_e1 > straight_demand || count_e0 > straight_demand) {
      analogWrite(L_PWM_PIN, 0);
      analogWrite(R_PWM_PIN, 0);
      delay(1000);
      Serial.println( "go finish" );
      stage++;
    }

  }
  else if (stage == 2) {
    analogWrite(6, 100);
    delay(200);
    analogWrite(6, 0);
    delay(200);
    Serial.println("calculation");

    delta_x = target_x - x_new;
    delta_y = target_y - y_new;
    target_theta = atan2(delta_y, delta_x);
    if (target_x < x_new && target_y < y_new || target_x > x_new && target_y < y_new) {
      target_theta = target_theta + 6.283;
    }
    delta_theta = target_theta - theta_new;
    if (delta_theta < 0) {
      delta_theta = delta_theta + 6.283;
    }
    turn_demand = ((((WHEEL_SEPERATION * delta_theta) / 2) / WHEEL_PREMETER) * 1440) * 1.10;
    straight_distance = sqrt(((target_x - x_new) * (target_x - x_new)) + ((target_y - y_new) * (target_y - y_new)));
    straight_demand = (straight_distance * 1440 / (WHEEL_PREMETER)) * 1.04;
    count_e1 = 0;
    count_e0 = 0;
    old_count = 0;
    d_left_old = 0;
    d_right_old = 0;

    stage++;

  }
  else if (stage == 3) {
    //turn to aim the target
    Serial.println( "back turn" );
    digitalWrite( L_DIR_PIN, HIGH  );
    digitalWrite( R_DIR_PIN, LOW );

    Serial.println( delta_theta );

    output0 = constrain(output0, 25, 30);
    output1 = constrain(output1, 25, 30);
    analogWrite( L_PWM_PIN, output0);
    analogWrite( R_PWM_PIN, output1 );

    if (count_e1 > turn_demand || count_e0 < -turn_demand) {
      digitalWrite( L_DIR_PIN, LOW  );
      digitalWrite( R_DIR_PIN, LOW );
      analogWrite(L_PWM_PIN, 0);
      analogWrite(R_PWM_PIN, 0);
      theta_old = theta_new;
      x_old = x_new;
      y_old = y_new;
      count_e1 = 0;
      count_e0 = 0;
      old_count = 0;
      d_left_old = 0;
      d_right_old = 0;
      delay(1000);
      stage++;
    }

  }
  else if (stage == 4) {
    Serial.println( "back straight" );
    //boost to the initial point

    output0 = constrain(output0, 25, 30);
    output1 = constrain(output1, 25, 30);
    analogWrite( L_PWM_PIN, output0);
    analogWrite( R_PWM_PIN, output1 );

    if (count_e1 > straight_demand || count_e0 > straight_demand) {
      analogWrite(L_PWM_PIN, 0);
      analogWrite(R_PWM_PIN, 0);
      delay(1000);
      turn_initial = 4.712;
      increment=increment+0.05;
      turn_initial=turn_initial+increment;
      stage = 0;
      theta_old = theta_new;
      x_old = x_new;
      y_old = y_new;
      count_e1 = 0;
      count_e0 = 0;
      old_count = 0;
      d_left_old = 0;
      d_right_old = 0;
    }

  }


}
