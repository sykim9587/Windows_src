#include <string.h>

//adding a function to show the number sting on FND
int aPinFndData[8] = {13, 12, 11, 10, 9, 8, 7, 6}; //A-H pins
int aPinFndSel[4] = {5, 4, 3, 2}; //S0-S5 pin- position

//0-F data
uint8_t aFndData[16] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x27, 0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71};
uint8_t aFndSelData[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F}; //여러개중 하나만 0으로 만드는 코드

void setup() {
  Serial.begin(115200);
  int i;
  for (i = 0; i < 8; i++) {
    pinMode(aPinFndData[i], OUTPUT);
  }
  for (i = 0; i < 6; i++) {
    pinMode(aPinFndSel[i], OUTPUT);
  }
}
int count=0;
char buf[100];
void loop() {
  //String str = '0'+count;
  sprintf(buf,"%d",count); // making it to string
  ArrayFndDisplay(buf);
  count++;
  delay(100);
}


void ArrayFndDisplay(String a) {
  int k[4];
  int i = 0;
  int num = 4 - a.length();
  for (int q = 0; q < 4; q++) {
    if (q < num) {
      k[q] = 0;
    }
    else k[q] = a[i++] - '0';
  }


  for (int j = 0; j < 4; j++) {
    fndSelOut(aFndSelData[j]);
    fndDataOut(aFndData[k[j]]);
    delay(5);
  }

}
void fndDataOut(uint8_t data) {
  for (int i = 0; i < 8; i++) {
    digitalWrite(aPinFndData[i], (data >> i) & 0x1);
  }
}

void fndSelOut(uint8_t data) { // FND sel output function
  for(int i=0; i<6; i++){
    digitalWrite(aPinFndSel[i],(data>>i) & 0x1);
  }
}
