int aPinRow[4] = {13,12,11,10};
int aPinCol[4] = {9,8,7,6};
int nRow,nNum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  for(int i=0; i<4; i++){
    pinMode(aPinRow[i],OUTPUT);
    pinMode(aPinCol[i],INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<4; i++){
    digitalWrite(aPinRow[i],HIGH);
    nRow=i*4;
    for(int j=0; j<4; j++){
      nNum=nRow+j;
      if(digitalRead(aPinCol[j])){
        //if it's HIGH
        Serial.print("Key [");
        Serial.print(nNum,HEX);
        Serial.println("] push!");
        
      }
    }
    digitalWrite(aPinRow[i],LOW);
    delay(80);
  }
}
