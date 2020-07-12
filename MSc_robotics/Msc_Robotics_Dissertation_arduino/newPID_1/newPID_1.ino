
#include "pid.h"
#include "MegunoLink.h"

//float output = motorspeed.update(Goal, vout);
//digitalWrite(in1, HIGH);
//digitalWrite(in2, LOW);
//analogWrite(enA, Pspeed);
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
float Goal;
int Pspeed;
long interval = 10;
int Flag=1;
unsigned long startMillis;
unsigned long flagMillis = 0;
PID motorspeed(23, 0.0, 0.001); //P D I

void setup() {

  pinMode(FF, INPUT);
  Serial.begin(115200);
  startMillis = millis();

}

void loop()
{
  TimePlot ffoutput("ffoutput"), goal("goal"), PWM("PWM");
  unsigned long currentMillis = millis();

  if (Flag==1) {
    Goal = 0.5;
  }
  else {
    Goal = 1.5;
  }

  if (currentMillis - flagMillis  >= 5000) {
    flagMillis = currentMillis;
    Flag = !Flag;
  }

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    FFdata = analogRead(FF);
    vout3 = (FFdata * 3.3) / 1023.0;
    vout3 = CF3 * vout3;
    SUM = SUM + vout3;
    num++;


    //    Serial.print(previousMillis);
    //    Serial.print (":");
    //    Serial.println(vout3);

  }

  if (num == 10) {
    FFmeasure = SUM / 10;
    Serial.print(previousMillis);
    Serial.print (": average");
    Serial.println(FFmeasure );
    //motorspeed.print_components();
    num = 0;
    SUM = 0;

    float output = motorspeed.update(Goal, FFmeasure );
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
    goal.SendData("goal", Goal);
    PWM.SendData("pwm speed", Pspeed);
  }







}
