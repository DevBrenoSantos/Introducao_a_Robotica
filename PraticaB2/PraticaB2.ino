// BRENO AMARAL SANTOS
// GIOVANNA SILVA PENIDO
// GUSTAVO HENRIQUE NEIVA
// JOÃO VICTOR FERNANDES LIMA
// CC2MA

#include <LiquidCrystal.h> // importando a biblioteca

LiquidCrystal lcd(13, 12, 7, 6, 5, 4); // Definição das portas do display

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  // Impressão dos números em ordem crescente
  for(int i = 0; i < 9; i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    for (int j = 0; j < i; j++){
      lcd.print(i);
    }
    lcd.setCursor(0, 1);
    for (int k = 0; k < i+1; k++){
    	lcd.print(i+1);
    }
    delay(1000);
      
    }

  // Impressão dos números em ordem decrescente
  for(int i = 8; i > 0; i--) {
    lcd.clear();
    lcd.setCursor(0, 0);
    for (int j = 0; j < i+1; j++){
      lcd.print(i+1);
    }
    lcd.setCursor(0, 1);
    for (int k = 0; k < i; k++){
    	lcd.print(i);
    }
    delay(1000);
      
    }
  }  