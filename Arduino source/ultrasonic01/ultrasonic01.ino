int pinGnd = 5;
int pinEcho = 4;
int pinTrigger = 3;
int pinVcc = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  float fDuration, fDistance;

  //giving the ultrasonic burst
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
  //time that the echo pin was HIGH
  fDuration = pulseIn(pinEcho, HIGH);
  Serial.print(fDuration);
  Serial.print("    ");
  //340m -> cm 로 변환, duration micro-> second 
  fDistance = ((float)(340 * fDuration)) / 10000 / 2;
  Serial.print(fDistance);
  Serial.println("cm");
  delay(500);
}
