#include <string.h>

int pinGnd = A0;
int pinVcc = A1;
int pinX = A2;
int pinY = A3;
int pinSwitch = A4;

//adding a function to show the number sting on FND
int aPinFndData[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //A-H pins
int aPinFndSel[2] = {4, 3}; //S0-S5 pin- position

//0-F data
uint8_t aFndData[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};
uint8_t aFndSelData[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F}; //여러개중 하나만 0으로 만드는 코드

void setup() {
  Serial.begin(115200);
  int i;
  for (i = 0; i < 8; i++) {
    pinMode(aPinFndData[i], OUTPUT);
  }
  for (i = 0; i < 2; i++) {
    pinMode(aPinFndSel[i], OUTPUT);
  }
  //joy stick
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinSwitch, INPUT_PULLUP);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}
int px, pw;
int count = 0;

void loop() {
  px = map(analogRead(pinX), 0, 1023, -5, 5);
  pw = digitalRead(pinSwitch);
  if (px == 0 && pw !=0) {

  }
  else if(pw==0){
    count=0;
  }
  else if (px < 0) {
    count--;
  }
  else if ( px > 0) {
    count ++;
  }
  count = constrain(count, 0,99);
//  if(count <0){
//    count=0;
//  }
//  if(count >99){
//    count =99;
//  }
  
  ArrayFndDisplay(count);
}


void ArrayFndDisplay(int a) {
  int k[2]={0};
  int i = 0;

  if (a < 10) {
    k[0] = 0;
    k[1] = a;
  }
  else {
    k[0] = a/10;
    k[1] = a%10;
  }



  for (int j = 0; j < 2; j++) {
    fndSelOut(aFndSelData[j]);
    fndDataOut(aFndData[k[j]]);
    delay(10);
  }

}
void fndDataOut(uint8_t data) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(aPinFndData[i], (data >> i) & 0x1);
  }
}

void fndSelOut(uint8_t data) { // FND sel output function
  for (int i = 0; i < 2; i++) {
    digitalWrite(aPinFndSel[i], (data >> i) & 0x1);
  }
}
