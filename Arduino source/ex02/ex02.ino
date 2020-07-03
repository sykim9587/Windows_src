int apinLed[8] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<8; i++){
    pinMode(apinLed[i],OUTPUT); 
  }
  
}
int q=0;
void loop() {
  // put your main code here, to run repeatedly:
  //to turn from led0 to led7 and go back

  if(q<8){
    digitalWrite(apinLed[q],HIGH);
    delay(100);
    digitalWrite(apinLed[q],LOW); 
  }
  
  else if(q>=8 && q<15){
    int a = q%8;
    digitalWrite(apinLed[6-a],HIGH);
    delay(100);
    digitalWrite(apinLed[6-a],LOW);
  }
  
  q++;
  if(q==15) q=0;
}
