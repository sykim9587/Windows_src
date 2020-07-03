int aPinSwitch[8] = {13, 12, 11, 10, 9, 8, 7, 6};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial Test!!");
  Serial.print("Echo >> ");
  
  for (int i = 0; i < 8; i++) {
    pinMode(aPinSwitch[i], INPUT);
  }
}

void loop() {


  for (int i = 0; i < 8; i++) {
    if (digitalRead(aPinSwitch[i])) {
      Serial.print(i);
      Serial.print("# ");
      Serial.println("Switch PUSH");
      
    }
    //delay 여기 있으면 안됨. 
    delay(300);
  }

}

void serialEvent(void){
    char data;
  if(Serial.available()>0){
    data = Serial.read();
    Serial.write(data);
  }  

}
