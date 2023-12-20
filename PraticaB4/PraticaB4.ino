
#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 7, 6, 5, 4); // Definição das portas do display
const int pinTrigger = 9;
const int pinEcho = 10;
const int greenLED = 3;
const int yellowLED = 2;
const int redLED = 1;

const float VelSom_mpors = 340;
const float VelSom_mporus = 0.000340;
void setup() {
  lcd.begin(16, 2);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);

  pinMode(pinTrigger, OUTPUT);
  digitalWrite(pinTrigger, LOW);
  pinMode(pinEcho, INPUT);
}

void loop() {
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  // Dispara o pulso para disparar o sensor
  DisparaPulsoUltrassonico();

  // Mede a duração do sinal do pino de leitura(us)
  float TempEcho = pulseIn(pinEcho, HIGH);
  Serial.println("Distancia em metros: ");
  Serial.println(CalculaDistancia(TempEcho));

  float distance = CalculaDistancia(TempEcho);

  // Exibe a distância no display LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distancia: ");
  lcd.print(CalculaDistancia(TempEcho), 2);
  lcd.print("m");

  // Controle dos LEDs com base na distância
  if (distance > 1.0) {
    digitalWrite(greenLED, HIGH);
    
  } else if (distance > 0.5) {
    digitalWrite(yellowLED, HIGH);
  } else if (distance > 0.2) {
    digitalWrite(redLED, HIGH); 
  } else {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, HIGH);
  }

  // Exibe a condição no monitor serial e display
  if (distance > 1.0) {
    lcd.setCursor(0, 1);
    lcd.print("SEGURO");
    Serial.println("Seguro");
  }else if (distance > 0.5) {
    lcd.setCursor(0, 1);
    lcd.print("CUIDADO");
    Serial.println("Cuidado");
  }else if (distance > 0.05) {
    lcd.setCursor(0, 1);
    lcd.print("VAI BATER");
    Serial.println("Vai Bater");
  } else {
    lcd.setCursor(0, 1);
    lcd.print("BATEU");
    Serial.println("Bateu");
  }

  delay(1000);
}

// Função para enviar o pulso de trigger
void DisparaPulsoUltrassonico(){
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger,LOW);
}

// Função para calcular a distância em metros
float CalculaDistancia(float tempo_us) {
  return (tempo_us*VelSom_mporus/2);
}