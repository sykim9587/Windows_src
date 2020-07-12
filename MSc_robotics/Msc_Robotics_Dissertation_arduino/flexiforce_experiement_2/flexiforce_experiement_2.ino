float cf = 4.9012; // caliberation factor
//need to add 2 thermocouples!! 
int FF = A0;  
 
int FFdata = 0; 
float vout; 
void setup()
{
  Serial.begin(9600); 
  pinMode(FF, INPUT); 
  
}
 
void loop()
{
 
 
FFdata = analogRead(FF);
vout = (FFdata * 5.0) / 1023.0; 
//Serial.println(vout); 
vout = vout * cf - 0.0087; 
//Serial.print("Flexi Force sensor: "); 
Serial.print(vout); 
Serial.println("KG"); 
delay(1000); 
  
}
