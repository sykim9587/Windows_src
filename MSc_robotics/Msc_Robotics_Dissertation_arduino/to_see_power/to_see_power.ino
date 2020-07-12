#include "pid.h"
#include "MegunoLink.h"
int enA = 10;
int in1 = 9;
int in2 = 8;
float cf = 10;
int FFs = A3;
int FFsdata = 0;
float vout;
float Svout;
float Goal;
bool flag = 1;

PID motorspeed(15, 0, 0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(FFs, INPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}

void loop() {

  closeG();
//  Goal = 0.5;
//  delay(5000);
//
//  float Pspeed = 100;
//  while (flag) {
//
//
//    digitalWrite(in1, HIGH);
//    digitalWrite(in2, LOW);
//    analogWrite(enA, Pspeed);
//    TimePlot ffoutput("ffoutput"), goal("goal"), PWM("PWM");
//
//    Svout = 0;
//    for (int i = 0; i < 30; i++) {
//      FFsdata = analogRead(FFs);
//      vout = (FFsdata * 3.3) / 1023.0;
//      vout = vout * cf;
//      Svout = Svout + vout ;
//      delay(10);
//    }
//    vout = (Svout / 30);
//
//
//
//    if (abs(Goal - vout) < 0.01) {
//      ffoutput.SendData("flexiforce output", vout);
//      goal.SendData("goal", Goal);
//      PWM.SendData("pwm speed", Pspeed);
//      flag = 0;
//      //      Svout = 0;
//      //      for (int i = 0; i < 10; i++) {
//      //        FFsdata = analogRead(FFs);
//      //        vout = (FFsdata * 3.3) / 1023.0;
//      //        vout = vout * cf;
//      //        Svout = Svout + vout ;
//      //        delay(10);
//      //      }
//      //      vout = (Svout / 10);
//      //
//      //      ffoutput.SendData("flexiforce output", vout);
//      //      goal.SendData("goal", Goal);
//      //      PWM.SendData("pwm speed", Pspeed);
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
//      analogWrite(enA, 0);
//      delay(1000);
//      openG();
//    }
//    else {
//      float output = motorspeed.update(Goal, vout);
//      Pspeed = Pspeed + output;
//      if (Pspeed > 254) {
//        Pspeed = 254;
//      }
//      digitalWrite(in1, HIGH);
//      digitalWrite(in2, LOW);
//      analogWrite(enA, Pspeed);
//      delay(100);
//      Svout = 0;
//      for (int i = 0; i < 30; i++) {
//        FFsdata = analogRead(FFs);
//        vout = (FFsdata * 3.3) / 1023.0;
//        vout = vout * cf;
//        Svout = Svout + vout ;
//        delay(10);
//      }
//      vout = (Svout / 30);
//
//      ffoutput.SendData("flexiforce output", vout);
//      goal.SendData("goal", Goal);
//      PWM.SendData("pwm speed", Pspeed);
//      //delay(10);
//
//    }
//
//
//
//  }
//
//  //openG();
//  while (1) {
//    Serial.print("goal matched");
//  }
}

void closeG()
{
  FFsdata = analogRead(FFs);
  vout = (FFsdata * 3.3) / 1023.0;
  vout = vout * cf ;

  while (vout < 0.1) {
    FFsdata = analogRead(FFs);
    vout = (FFsdata * 3.3) / 1023.0;
    vout = vout * cf ;
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(enA, 50);
    delay(50);
  }
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

}
void openG()
{

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 50);
  delay(300);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
