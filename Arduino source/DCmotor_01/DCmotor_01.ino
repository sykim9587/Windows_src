int pinPos = 5;
int pinNeg = 4;
int pinEn = 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(pinPos, OUTPUT);
  pinMode(pinNeg, OUTPUT);
  pinMode(pinEn, OUTPUT);

  digitalWrite(pinPos, LOW);
  digitalWrite(pinNeg, LOW);
  digitalWrite(pinEn, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  ClockWise(250);
  delay(2000);
  MotorBreak();
  delay(1);
  CounterClockWise(250);
  delay(2000);
  MotorBreak();
  delay(1);
}

void ClockWise(int Speed) {
  digitalWrite(pinPos, HIGH);
  digitalWrite(pinNeg, LOW);
  analogWrite(pinEn, Speed);
}

void CounterClockWise(int Speed) {
  digitalWrite(pinPos, LOW);
  digitalWrite(pinNeg, HIGH);
  analogWrite(pinEn, Speed);
}

void MotorStop() {
  digitalWrite(pinPos, LOW);
  digitalWrite(pinNeg, LOW);
  //analogWrite(pinEn, 0);
}

void MotorBreak() {
  digitalWrite(pinPos, HIGH);
  digitalWrite(pinNeg, HIGH);
  //analogWrite(pinEn, 0);
}
