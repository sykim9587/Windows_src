int pinSwitch = 13;
int cnt = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pinSwitch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinSwitch)) {
    cnt++;
    Serial.print(cnt);   
    Serial.println(": Pushed");
    //delay(500);
  }

}
