int aPinRow[4] = {13, 12, 11, 10};
int aPinCol[4] = {9, 8, 7, 6};
int nNum;
int pw;
int apw[2];
int sw;
int asw[2] = {0};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(A0, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(aPinRow[i], OUTPUT);
    pinMode(aPinCol[i], INPUT);
  }
  randomSeed(analogRead(0));
  pw = random(100);
  if (pw < 10) {
    apw[0] = 0;
  }
  else {
    apw[0] = pw / 10;
  }

  apw[1] = pw % 10;


  Serial.println("random password initialized!");

}
int index=0;
int flag=1;
int stepnum=0;

void loop() {
  switch (stepnum){
    case 0: insertnum(); break;
    case 1: check(); break;
    case 2: while(1);
    
  }
}

void check(){
  Serial.println("checking!");
  int ball =0, strike =0;
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      if(apw[i]==asw[j]){
        if(i==j) strike++;
        else ball++;
      }
    }
  }
  Serial.print("Strike: ");
  Serial.print(strike);
  Serial.print(",  Ball: ");
  Serial.println(ball);

  if(strike == 2){
    Serial.println("Success!");
    stepnum = 2;
  }
  else{
    Serial.println("Fail, Agian!");
    stepnum = 0;
  }
  
}

void insertnum(){
    Serial.print("Insert 2 digit number: ");
  // put your main code here, to run repeatedly:
  while (flag) { // getting the number
    for (int i = 0; i < 4; i++) {
      digitalWrite(aPinRow[i], HIGH);
      for (int j = 0; j < 4; j++) {
        nNum = i * 4 + j;
        if (digitalRead(aPinCol[j])) {
          //if it's HIGH
          asw[index++]=nNum;
          if(index==2){
            flag=0;
          }
          Serial.print("x");
        }
      }
      digitalWrite(aPinRow[i], LOW);
      delay(80);
    }
  }
  Serial.print(" ");
  Serial.print(asw[0]);
  Serial.println(asw[1]);
  index=0;
  stepnum=1;
  flag=1;
}
