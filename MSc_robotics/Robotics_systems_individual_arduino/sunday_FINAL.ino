#include "encoders.h"
#include "pid.h"
#include "kinematics.h"
#include "line_sensors.h"

//Pin definitions for motor
#define L_PWM_PIN 10
#define L_DIR_PIN 16
#define R_PWM_PIN  9
#define R_DIR_PIN 15

float Kp_pose = 0.25; //Proportional gain for position controller
float Kd_pose = 0.001; //Derivative gain for position controller
float Ki_pose = 0; //Integral gain for position controller
PID leftPose(Kp_pose, Kd_pose, Ki_pose); //Position controller for left wheel position
PID rightPose(Kp_pose, Kd_pose, Ki_pose);

float X_pos = 0;
float Y_pos = 0;
float theta_pos = 0;
Kinematics kinematics(X_pos, Y_pos, theta_pos); //Kinematics class to store position

int total_value = 0; // to check if romi gets to the end of the line

#define LINE_LEFT_PIN A4 //Pin for the left line sensor
#define LINE_CENTRE_PIN A3 //Pin for the centre line sensor
#define LINE_RIGHT_PIN A2 //Pin for the right line sensor
Line_Sensor lineLeft(LINE_LEFT_PIN); //Create a line sensor object for the left sensor
Line_Sensor lineCentre(LINE_CENTRE_PIN); //Create a line sensor object for the centre sensor
Line_Sensor lineRight(LINE_RIGHT_PIN); //Create a line sensor object for the right sensor

#define BAUD_RATE = 115200;
#define LOOP_DELAY 100

int STATE = 0;

void setupMotorPins()
{
  // Set our motor driver pins as outputs.
  pinMode( L_PWM_PIN, OUTPUT );
  pinMode( L_DIR_PIN, OUTPUT );
  pinMode( R_PWM_PIN, OUTPUT );
  pinMode( R_DIR_PIN, OUTPUT );

  // Set initial direction for l and r
  // Which of these is foward, or backward?
  digitalWrite( L_DIR_PIN, LOW  );
  digitalWrite( R_DIR_PIN, LOW );

  //buzzer for line following
  pinMode(6, OUTPUT);
}

// put your setup code here, to run once:
void setup()
{

  //Assign motor pins and set direction
  setupMotorPins();
  // These two function set up the pin
  // change interrupts for the encoders.
  setupEncoder0();
  setupEncoder1();

  // Initialise the Serial communication
  Serial.begin( 9600 );

  lineLeft.calibrate();
  lineRight.calibrate();
  lineCentre.calibrate();
  for (int i = 0; i < 2; i++) {
    analogWrite(6, 10);
    delay(200);
    analogWrite(6, 0);
    delay(200);
  }



}

void loop()
{
  bool onLine;
  kinematics.update(count_e0, count_e1);
  switch (STATE) {

    case 0:
      onLine = checkForLine();
      if (onLine)
      {
        analogWrite(R_PWM_PIN, 0);
        analogWrite(L_PWM_PIN, 0);
        analogWrite(6, 10);
        delay(200);
        analogWrite(6, 0);
        delay(200);
        STATE = 1;
        delay(3000);
      }
      else
      {
        analogWrite(R_PWM_PIN, 40);
        analogWrite(L_PWM_PIN, 40);
        delay(10);
      }
      break;
    case 1: //following line
      lineFollowing();
      break;
    case 2: //coming home
      ComingHome();
      break;
    default:
      Serial.println("System Error, Unknown state!");
      break;

  }

}


void ComingHome() {
  Serial.println("now going home");
  for (int i = 0; i < 3; i++) {
    analogWrite(6, 10);
    delay(200);
    analogWrite(6, 0);
    delay(200);
  } // it goes to setup

  float goal = kinematics.goinghome();
  float HomeDistance = kinematics.homeD;


  int leftcount = 70 * goal / 0.15;
  int rightcount = -70 * goal / 0.15;
  setupEncoder0();
  setupEncoder1();

  leftPose.setMax(30);
  rightPose.setMax(30);
  leftPose.setGains(0.45, 0.3, 0.0);
  rightPose.setGains(0.45, 0.3, 0.0);
  while (true) {



    float output1 = leftPose.update(leftcount +29, count_e0); //to make it go left, do 30. to make it go right do 28 or 27
    float output2 = rightPose.update(rightcount -29, count_e1);

    //left wheel

    if (output1 < 0) {
      digitalWrite( L_DIR_PIN, HIGH );
    }
    else {
      digitalWrite(L_DIR_PIN, LOW);
    }




    analogWrite( L_PWM_PIN, abs(output1));


    //right wheel

    if (output2 < 0) {
      digitalWrite( R_DIR_PIN, HIGH );
    }
    else {
      digitalWrite(R_DIR_PIN, LOW);
    }

    analogWrite( R_PWM_PIN, abs(output2));


    if (abs(output2) < 10 && abs(output1) < 10) {

      //Serial.println("now move");
      analogWrite( L_PWM_PIN, 0);
      analogWrite( R_PWM_PIN, 0);
      delay(3000);


      for (int i = 0; i < 4; i++) { //now already turned, time to move towards home
        analogWrite(6, 10);
        delay(200);
        analogWrite(6, 0);
        delay(200);
      }

      setupEncoder0();
      setupEncoder1();
      leftPose.setGains(0.45, 0.0, 0.0);
      rightPose.setGains(0.45, 0.0, 0.0);
      leftPose.setMax(200);
      rightPose.setMax(200);
      while (true) {



        output1 = leftPose.update(HomeDistance-205, count_e0);  
        output2 = rightPose.update(HomeDistance-205, count_e1);
        int error_bias = count_e1 - count_e0; //plus: right is faster
        int bias;
        if (error_bias > 0) {
          bias = -2;
        }
        else if (error_bias < 0) {
          bias = +2;
        }
        else if (error_bias = 0) {
          bias = 0;
        }
        Serial.println("left wheel");
        Serial.println(count_e0);
        Serial.println(output1);
        Serial.println("right wheel");
        Serial.println(count_e1);
        Serial.println(output2);


        //left motor

        if (output1 < 0) {
          digitalWrite( L_DIR_PIN, HIGH );

        }
        else {
          digitalWrite(L_DIR_PIN, LOW);
        }
        if (abs(output1) > 50) {
          output1 = 50;
        }

        analogWrite( L_PWM_PIN, abs(output1) - bias);


        //right wheel

        if (output2 < 0) {
          digitalWrite( R_DIR_PIN, HIGH );

        }
        else {
          digitalWrite(R_DIR_PIN, LOW);
        }
        if (abs(output2) > 50) {
          output2 = 50;
        }

        analogWrite( R_PWM_PIN, abs(output2) + bias);
        if (abs(output1) < 10 ) {
          analogWrite( L_PWM_PIN, 0);
          analogWrite( R_PWM_PIN, 0);
          for (int i = 0; i < 4; i++) {
            analogWrite(6, 10);
            delay(200);
            analogWrite(6, 0);
            delay(200);
            while (1) {

            }

          }

        }

      }
    }


  }

}

bool checkForLine() {

  if ((lineLeft.read_calibrated() > 200) || (lineRight.read_calibrated() > 200) || (lineCentre.read_calibrated() > 200)) {
    return true;
  }
  else {
    return false;
  }

}

void lineFollowing() {
  float I_total = lineLeft.read_calibrated() + lineRight.read_calibrated() + lineCentre.read_calibrated();
  float P_3 = lineLeft.read_calibrated() / I_total;
  float P_2 = lineCentre.read_calibrated() / I_total;
  float P_1 = lineRight.read_calibrated() / I_total;
  float Line_centre = P_1 * 1000 + P_2 * 2000 + P_3 * 3000;
  float Direction = Line_centre - 2000;


  //if the centre of the line is to the right, positive value!
  //if the centre of the line is to the left, negative value

  float output1 = leftPose.update(0, Direction);
  float output2 = rightPose.update(0, Direction);
  //Serial.print("Dir:");
  //Serial.println(Direction);
  //  Serial.println(output2);

  if ((abs(Direction) > 50) && (Direction > 0)) {
    analogWrite(L_PWM_PIN, 30 - output1);
    digitalWrite( R_DIR_PIN, HIGH );
    analogWrite(R_PWM_PIN, 30 - output1);
  }
  if ((abs(Direction) > 50) && (Direction < 0)) {
    digitalWrite( L_DIR_PIN, HIGH  );
    analogWrite(L_PWM_PIN, 30 + output2);
    analogWrite(R_PWM_PIN, 30 + output2);
  }
  if (abs(Direction) < 50) {
    analogWrite(L_PWM_PIN, 20 - output1);
    analogWrite(R_PWM_PIN, 20 + output2);
  }

  delay(10);

  digitalWrite( L_DIR_PIN, LOW  );
  digitalWrite( R_DIR_PIN, LOW );
  Serial.println(I_total);
  if (I_total < 200) { //might have to adjust to the light of the room
    total_value = total_value + 1;
    Serial.print("total value:");
    Serial.println(total_value);
    if (total_value > 20) {  // might have to adjust to the big map
      STATE = 2;
      analogWrite(R_PWM_PIN, 0);
      analogWrite(L_PWM_PIN, 0);

    }

  }
}
