int pinRelay = 2;
int pinVcc = 3;
int pinGnd = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRelay, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinGnd, OUTPUT);
  digitalWrite(pinVcc, HIGH);
  digitalWrite(pinGnd, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRelay, HIGH);
  delay(3000);
  digitalWrite(pinRelay, LOW);
  delay(3000);
}
