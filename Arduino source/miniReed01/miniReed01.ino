int pinGnd = 4;
int pinVcc = 3;
int pinReed = 2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinReed, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinReed)){ //high -> disconnected
    Serial.println("mini Reed OFF");
  }
  else { // low -> connected
    Serial.println("Mini Reed ON");
  }
  delay(500);
}
