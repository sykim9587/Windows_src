
char data[15] = {0};
char newdataon[15] = {0};
char newdataoff[15] = {0};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(13, OUTPUT);
  for (int k = 0; k < 7; k++) {
    newdataon[k] = "LED_ON"[k];
  }
  for (int k = 0; k < 8; k++) {
    newdataoff[k] = "LED_OFF"[k];
  }
}

void loop() {
  if (Serial.available() > 0)
  {
    byte a = Serial.readBytesUntil('\n', data, 15);
    
    //strcmp gives 0 when they are equal
    int check1= strcmp(data,newdataon);
    int check2= strcmp(data,newdataoff);
    
    if (check1==0) {
      Serial.println("LED ON!");
      digitalWrite(13, HIGH);
    }
    else if (check2==0) {
      Serial.println("LED OFF!");
      digitalWrite(13, LOW);
    }
    else {
      Serial.println("Wrong input");
    }
  }

}
