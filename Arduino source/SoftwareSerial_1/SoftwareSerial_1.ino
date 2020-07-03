#include <SoftwareSerial.h>

int RX =A0;
int TX = A1;
int incomingByte = 0;

SoftwareSerial mySerial= SoftwareSerial (RX, TX); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  mySerial.begin(115200);
  Serial.begin(115200);
}

void loop() { // run over and over
  char arr;
  while(Serial.available()){   
    arr = (char)Serial.read();
    mySerial.write(arr);
  }
  
  while(mySerial.available()){   
    arr = (char)mySerial.read();
    Serial.write(arr);
  }

}
