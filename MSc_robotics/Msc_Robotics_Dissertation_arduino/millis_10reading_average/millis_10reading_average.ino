
#include "pid.h"
#include "MegunoLink.h"

//float output = motorspeed.update(Goal, vout);
//digitalWrite(in1, HIGH);
//digitalWrite(in2, LOW);
//analogWrite(enA, Pspeed);
int enA = 10;
int in1 = 9;
int in2 = 8;
long previousMillis = 0;
float CF3 = 11;
int FF = A3;
int FFdata = 0;
float vout3;
float SUM = 0;
int num = 0;
float FFmeasure = 0;
float Goal = 1.0;
int Pspeed =50;
long interval = 10;
PID motorspeed(1.0, 0.0, 0.0); //P D I

void setup() {

  pinMode(FF, INPUT);
  Serial.begin(115200);

}

void loop()
{

  unsigned long currentMillis = millis();
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, Pspeed);

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
    motorspeed.print_components();
    num = 0;
    SUM = 0;

    //float output = motorspeed.update(Goal, FFmeasure );
  }






}
