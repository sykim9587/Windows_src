int Led0 = 13;
int sw0 = 2;
boolean state = LOW;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(Led0, OUTPUT);
  pinMode(sw0, INPUT);
  digitalWrite(Led0, LOW);

  attachInterrupt(0,swISR,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void swISR(void){
  Serial.println("switch pushed!");
  state = !state;
  digitalWrite(Led0, state);
}
