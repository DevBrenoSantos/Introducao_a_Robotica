#include <LiquidCrystal.h>

// Inicialize o display LCD
LiquidCrystal lcd(13, 12, 7, 6, 5, 4);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Hello, world!");
  delay(5000);
}
