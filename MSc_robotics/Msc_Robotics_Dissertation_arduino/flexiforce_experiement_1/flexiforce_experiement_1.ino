//float cf = 3.2; // caliberation factor
 
int ffs1 = A0;  
 
int ffsdata = 0; 
float vout; 
void setup()
{
  Serial.begin(9600); 
  pinMode(ffs1, INPUT); 
  
}
 
void loop()
{
 
 
ffsdata = analogRead(ffs1);
vout = (ffsdata * 5.0) / 1023.0; 
Serial.println(vout); 
//vout = vout * cf ; 
//Serial.print("Flexi Force sensor: "); 
//Serial.println(vout); 
//Serial.println("KG"); 
delay(1000); 
  
}
