// GUSTAVO HENRIQUE NEIVA
// GIOVANNA SILVA PENIDO
// JOÃO VICTOR FERNANDES LIMA
// BRENO AMARAL SANTOS
// CC2MA

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 13, 7, 6, 5, 4);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(5, 1);
  lcd.print("Neiva");
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Neiva");
  lcd.setCursor(5, 1);
  lcd.print("Penido");
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Penido");
  lcd.setCursor(5, 1);
  lcd.print("Lima");
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Lima");
  lcd.setCursor(5, 1);
  lcd.print("Santos");
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Santos");
  delay(1000);
}
