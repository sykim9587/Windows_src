int pinGnd = 4;
int pinVcc = 3;
int pinHit = 2;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinHit, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);

  //source: pinHit, ISR: hitISR, mode: rising
  attachInterrupt(0,hitISR, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hit : ");
  Serial.println(count);
  delay(500);
}

void hitISR(void){
  count++;
}
