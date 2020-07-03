int pinGnd = A2;
int pinVcc = A1;
int pinCds = A0;
int pinLed = 13;


void setup() {
  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinCds, INPUT);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
  digitalWrite(pinLed, LOW);
}

void loop() {
  int adcData = analogRead(pinCds);
  Serial.print("CDS: ");
  Serial.print(adcData);
  Serial.print(", Voltage: ");
  double voltage = adcData * (5.0/1024);
  Serial.println(voltage);
  if(adcData >= 500){
    digitalWrite(pinLed, HIGH);
  }
  else{
    digitalWrite(pinLed, LOW);
  }
  delay(500);

}
