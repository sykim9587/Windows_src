#include <LiquidCrystal.h>
String a;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3); // creating CLASS
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.cursor();
  if (Serial.available()) {
    lcd.clear();
    lcd.setCursor(0,0);
    a = Serial.readStringUntil('\n');
    Serial.println(a);
    lcd.print(a);
  }

}
