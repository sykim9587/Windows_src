//스위치 엣지 체크를 이용한 led 제어
int aLED[4] = {13, 12, 11, 10};
int aSW[4] = {9, 8, 7, 6};
int output[4] = {LOW, LOW, LOW, LOW};

boolean pre_val[4] = {LOW,LOW,LOW,LOW};
boolean cur_val[4] = {LOW,LOW,LOW,LOW};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  for (int i = 0; i < 4; i++) {
    pinMode(aLED[i], OUTPUT);
    pinMode(aSW[i], INPUT);
    digitalWrite(aLED[i], output[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int k = 0; k < 4; k++) {
    cur_val[k] = digitalRead(aSW[k]);
    if (pre_val[k] == LOW && cur_val[k] == HIGH ) { //rising edge check
      if (output[k] == LOW) output[k] = HIGH;
      else output[k] = LOW;
      digitalWrite(aLED[k],output[k]);
    }
    pre_val[k]=cur_val[k];
  }
  
}
