int apinLed[8] = {13, 12, 11, 10, 9, 8, 7, 6};
int loop_val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   for(int i=0; i<8; i++){
    pinMode(apinLed[i],OUTPUT); 
  }
}

void loop() {
  // led 0 and led 4 together and go back 
  int i=0;
  for(i=0; i<4; i++){
    digitalWrite(apinLed[i],true);
    digitalWrite(apinLed[i+4], true);
    delay(100);
    digitalWrite(apinLed[i],false);
    digitalWrite(apinLed[i+4],false);
  }
   for(i=7; i>3; i--){
    digitalWrite(apinLed[i],HIGH);
    digitalWrite(apinLed[i-4],HIGH);
    delay(100);
    digitalWrite(apinLed[i-4],LOW);
    digitalWrite(apinLed[i],LOW);
  }
  Serial.println(loop_val);
  loop_val++;
}
