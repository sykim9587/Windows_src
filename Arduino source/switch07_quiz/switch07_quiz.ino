//스위치 엣지 체크를 이용한 led 제어
int aLED = 13;
int aSW = 11;
boolean output = LOW;
int flag = 0;

boolean pre_val = LOW;
boolean cur_val = LOW;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(aLED, OUTPUT);
  pinMode(aSW, INPUT);
  digitalWrite(aLED, output);
}
int state=0;
void loop() {
  cur_val = digitalRead(aSW);
  if (pre_val == LOW && cur_val == HIGH ) { //rising edge check
    if(flag == 0){
      //처음 들어왔으니까 점멸
      state=1;
      flag=1;
    }
    else if(flag == 1){
      //끄기
      state = 0;
      flag=0;
      digitalWrite(aLED,LOW);
    }
    
  }
  //점멸
  if(state){
    output= !output;
    digitalWrite(aLED, output);
    delay(100);
  }
  pre_val = cur_val;
}
