
long previousMillis = 0;       
float CF3 = 11;
int FF = A3;
int FFdata = 0;
float vout3;

long interval = 10;           

void setup() {

  pinMode(FF, INPUT);
  Serial.begin(115200);
}

void loop()
{

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {

    previousMillis = currentMillis;

    FFdata = analogRead(FF);
    vout3 = (FFdata * 3.3) / 1023.0;
    vout3 = CF3 * vout3;


    Serial.print(previousMillis);
    Serial.print (":");
    Serial.println(vout3);

  }
}
