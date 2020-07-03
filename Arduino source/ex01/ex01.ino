  int pinLed0 = 13;
  int pinLed1 = 12;

void setup() {
  // put your setup code here, to run once:

  pinMode(pinLed0, OUTPUT);
  pinMode(pinLed1, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed0, HIGH);
  digitalWrite(pinLed1, HIGH);
  delay(500);
  digitalWrite(pinLed1, LOW);
  delay(500);
  digitalWrite(pinLed0, LOW);
  digitalWrite(pinLed1, HIGH);
  delay(500);
  digitalWrite(pinLed0, LOW);
  digitalWrite(pinLed1, LOW);
  delay(500);
}
