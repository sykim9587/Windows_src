void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Serial Test!!");
  Serial.print("ECHO >> ");
}
int flag = 0;

void loop() {
  // put your main code here, to run repeatedly:
  char data;
  if (Serial.available() > 0)
  {
    data = Serial.read(); //read() only reads 1byte each time
    Serial.write(data);
    flag = 1;
    
  }

  if(data=='\n' && flag ==1){
    Serial.print("ECHO >> ");
    flag = 0;
  }

}
