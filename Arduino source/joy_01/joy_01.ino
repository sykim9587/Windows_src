int pinGnd = A0;
int pinVcc = A1;
int pinX = A2;
int pinY = A3;
int pinSwitch = A4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinSwitch, INPUT_PULLUP);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}

int px, py, pw;
void loop() {
  // put your main code here, to run repeatedly:
  px=map(analogRead(pinX), 0, 1023, -5, 5);
  py=map(analogRead(pinY), 0, 1023, -5, 5);
  pw=digitalRead(pinSwitch);
  Serial.print("pinX: ");
  Serial.print(px);
  Serial.print(",  pinY: ");
  Serial.print(py);
  Serial.print(", Switch: ");
   if(pw){
    Serial.println("OFF");
   }
   else{
    Serial.println("ON");
   }
  delay(1000);
}
