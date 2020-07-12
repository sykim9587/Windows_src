#include <math.h>
#include "pid.h"
#include "MegunoLink.h"

//float output = motorspeed.update(Goal, vout);
//digitalWrite(in1, HIGH);
//digitalWrite(in2, LOW);
//analogWrite(enA, Pspeed);
float i;
int enA = 10;
int in1 = 9;
int in2 = 8;
unsigned long previousMillis = 0;
float CF3 = 11;
int FF = A3;
int FFdata = 0;
float vout3;
float SUM = 0;
int num = 0;
float FFmeasure = 0;
float GoalS;
int Pspeed;
long interval = 10;
unsigned long startMillis;
PID motorspeed(23, 0.0, 0.001); //P D I

void setup() {

  pinMode(FF, INPUT);
  Serial.begin(115200);
  startMillis = millis();

}

void loop()
{
  TimePlot ffoutput("ffoutput"), goals("goal"), PWM("PWM");
  unsigned long currentMillis = millis();


  //      if (currentMillis - startMillis < 10000) {
  //        GoalS = 0.5 * sin(i) + 1;
  ////    //goal.SendData("sine", 0.5 * sin(i) + 1 );
  //        i = i + 0.01;
  ////    startMillis = currentMillis;
  //      }
  ////      else if((currentMillis - startMillis >= 10000) &&  (currentMillis - startMillis < 20000)){
  ////        Goal = 1.3;
  ////      }
  ////      else {
  ////        Goal = 0.3;
  ////      }

  //  if (currentMillis - previousMillis >= 10 ) {
  //    GoalS = 0.5 * sin(i) + 1;
  //    goals.SendData("goal", GoalS );
  //
  //    previousMillis = currentMillis;
  //  }

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    FFdata = analogRead(FF);
    vout3 = (FFdata * 3.3) / 1023.0;
    vout3 = CF3 * vout3;
    SUM = SUM + vout3;
    num++;
    GoalS = 0.5 * sin(i) + 1;
    goals.SendData("goal", GoalS );
    i = i + 0.001;

  }

  if (num == 10) {
    FFmeasure = SUM / 10;
    Serial.print(previousMillis);
    Serial.print (": average");
    Serial.println(FFmeasure );
    //motorspeed.print_components();
    num = 0;
    SUM = 0;



    float output = motorspeed.update(GoalS, FFmeasure );
    Pspeed = Pspeed + output;
    if (Pspeed > 254) {
      Pspeed = 254;
    }
    if (Pspeed < 0) {
      Pspeed = 0;
    }
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, Pspeed);
    ffoutput.SendData("flexiforce output", FFmeasure );
    //goal.SendData("goal", Goal);
    PWM.SendData("pwm speed", Pspeed);
  }







}
