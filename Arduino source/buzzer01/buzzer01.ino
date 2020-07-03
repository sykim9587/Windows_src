int pinBuzzer = 3;
int aPitchData[8] = {131, 147, 165, 175, 196, 220, 247, 262};

void setup() {
  // put your setup code here, to run once:
  pinMode(pinBuzzer, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 8; i++) {
    tone(pinBuzzer, aPitchData[i],1000);
    delay(100); // to distinguish  the tones 
    noTone(pinBuzzer);
  }
  delay(1000);
}
