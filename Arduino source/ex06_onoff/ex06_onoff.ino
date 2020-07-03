
int loop_val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  pinMode(13,OUTPUT); 
  
}

void loop() {
  // led 0 and led 4 together and go back 
  //
  
  String data;
  
  if(Serial.available()>0)
  {
    data=Serial.readStringUntil('\n');
    if (data == "LED_ON"){
      Serial.println("LED ON!");
      digitalWrite(13, HIGH);
    }
    else if(data == "LED_OFF"){
      Serial.println("LED OFF!");
      digitalWrite(13,LOW);
    }
    else{
      Serial.println("Wrong input");
    }
  }

}
