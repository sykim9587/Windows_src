
//#include "MegunoLink.h"
float CF3 = 12.5; //others 11, 0.5 is 12.5
//float CF5 = 5;
int FF = A0;
int FFdata = 0;
float vout3;
float Svout;
void setup()
{
  Serial.begin(115200);
  pinMode(FF, INPUT);

}

void loop()
{
  //TimePlot output3("3.3V");
  //FFdata = analogRead(FF);
  //vout3 = (FFdata * 3.3) / 1023.0;
  //vout5 = (FFdata * 5.0) / 1023.0;
  vout3 = CF3 * vout3;
  Svout=0;
  for (int i = 0; i < 5; i++) {
    FFdata = analogRead(FF);
    vout3 = (FFdata * 3.3) / 1023.0;
    vout3=vout3*CF3;
    Svout = Svout + vout3;
    Serial.print("vout:");
    Serial.println(vout3);
    Serial.print("Svout:");
    Serial.println(Svout);
    delay(10);
  }
  vout3 = (Svout / 5);
  //output3.SendData("3.3V output",vout3);
  //Serial.print("vout3,3:");
  Serial.println(vout3);
  //Serial.print(" ");
  // vout5 = CF5 * vout5;
  //output5.SendData("5.0V output",vout5);
  //Serial.print("vout5:");
  //Serial.println(vout5);
  delay(1000);

}
