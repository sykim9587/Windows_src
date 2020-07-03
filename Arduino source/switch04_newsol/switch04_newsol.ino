//LED 13,12,11,10, SW 9,8,7,6
int aLED[4] = {13, 12, 11, 10};
int aSW[4] = {9, 8, 7, 6};
int output[4] = {LOW, LOW, LOW, LOW};
//int flag_led[4] = {}; add comments. 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  for (int i = 0; i < 4; i++) {
    pinMode(aLED[i], OUTPUT);
    pinMode(aSW[i], INPUT);
    //digitalWrite(aLED[i],LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int k = 0; k < 4; k++) {
    if (digitalRead(aSW[k])) {
      if (output[k] == LOW) output[k] = HIGH;
      else output[k] = LOW;
 
      digitalWrite(aLED[k], output[k]);
      Serial.print(k);
      Serial.print("# ");
      Serial.println("switch pushed");
    }
    delay(100);
    
  }

}
