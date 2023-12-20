// GIOVANNA SILVA PENIDO
// GUSTAVO HENRIQUE NEIVA
// JOÃO VICTOR FERNANDES LIMA
// CC2MA

#include <LiquidCrystal.h>

// Inicialize o display LCD
LiquidCrystal lcd(12, 13, 7, 6, 5, 4);

// Pinos dos botões
const int startStopButton = 9;
const int resetButton = 8;

// Pinos dos LEDs
const int greenLED = 3;
const int yellowLED = 2;
const int redLED = 1;

// Variáveis do cronômetro
unsigned long startTime = 0;
unsigned long elapsedTime = 0;
bool isRunning = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Cronometro");
  lcd.setCursor(0, 1);
  lcd.print("Pressione iniciar");
  pinMode(startStopButton, INPUT);
  pinMode(resetButton, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // Verifica o botão de iniciar/parar
  if (digitalRead(startStopButton) == HIGH) {
    if (isRunning) {
      isRunning = false;
      elapsedTime = millis() - startTime;
    } else {
      isRunning = true;
      startTime = millis() - elapsedTime;
    }
    delay(200);
  }

  // Verifica o botão de reset
  if (digitalRead(resetButton) == HIGH) {
    isRunning = false;
    elapsedTime = 0;
    startTime = millis();
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    lcd.clear();
    lcd.print("Cronometro");
    lcd.setCursor(0, 1);
    lcd.print("Pressione iniciar");
    delay(200);
  }

  // Atualiza o display
  if (isRunning) {
    elapsedTime = millis() - startTime;
  }

  int minutes = (elapsedTime / 60000);
  int seconds = (elapsedTime / 1000) % 60;
  int hours = 0;

  lcd.clear();
  lcd.setCursor(3, 0);
  lcd.print("Cronometro");
  lcd.setCursor(4, 1);

  if (seconds < 10 && minutes < 10) {
    lcd.print(String(hours) + "0:" + "0" + String(minutes) + ":0" + String(seconds));
  }
  if (seconds < 10 && minutes >= 10) {
    lcd.print(String(hours) + "0:" + String(minutes) + ":0" + String(seconds));
  }
  if (seconds >= 10 && minutes < 10) {
    lcd.print(String(hours) + "0:" + "0" + String(minutes) + ":" + String(seconds));
  }
  if (seconds < 9 && minutes > 10) {
    lcd.print(String(hours) + "0:" + String(minutes) + ":0" + String(seconds));
  }

//  if (seconds < 10) {
//    lcd.print("0" + String(minutes) + ":0" + String(seconds));
//  } else {
//    lcd.print("0" + String(minutes) + ":" + String(seconds));
//  } 


  // Atualiza os LEDs com base no tempo
  if (minutes < 1) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  } else if (minutes >= 1 && minutes < 2) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
  } else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }

  delay(1000);
}