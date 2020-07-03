int pinGnd = 4;
int pinVcc = 3;
int pinTilt = 2;
int ledpin = 13;

void setup(){
  Serial.begin(115200);
  pinMode(ledpin, OUTPUT);
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinTilt, INPUT); //OUTPUT_PULLUP 가능
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
  digitalWrite(ledpin, LOW);
}

void loop(){
  if(!digitalRead(pinTilt)){
    Serial.println("Tilt ON");
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    Serial.println("Tilt OFF");
    digitalWrite(ledpin, LOW);
  }
  delay(500);
}
