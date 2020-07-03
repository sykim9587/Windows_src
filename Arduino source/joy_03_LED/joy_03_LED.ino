int pinGnd = A0;
int pinVcc = A1;
int pinX = A2;
int pinY = A3;
int pinSwitch = A4;
int px, py, pw;
int count = 0;

//LED
int LED0 = 11;
int LED1 = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinX, INPUT);
  pinMode(pinY, INPUT);
  pinMode(pinSwitch, INPUT_PULLUP);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
  Serial.begin(115200);

  pinMode(LED0, OUTPUT);
  analogWrite(LED0, 0); //pwm 0 - 255
  pinMode(LED1, OUTPUT);
  analogWrite(LED1, 0); //pwm 0 - 255
}

void loop() {
  // put your main code here, to run repeatedly:
  px = map(analogRead(pinX), 0, 1023, 0, 256);
  analogWrite(LED0, px);
  py = map(analogRead(pinY), 0, 1023, 0, 256);
  analogWrite(LED1, py);
  
  pw = digitalRead(pinSwitch);


}
