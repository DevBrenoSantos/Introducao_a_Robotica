// GUSTAVO HENRIQUE NEIVA
// GIOVANNA SILVA PENIDO
// JOÃO VICTOR FERNANDES LIMA
// BRENO AMARAL SANTOS
// CC2MA

#include "SevSeg.h"
SevSeg sevseg; // Criando um objeto SevSeg

const int pinVerde = 13;
const int pinAmarelo = 10;
const int pinVermelho = 11;
const int pinBotao = 12;

const int pinPedVerde = 8;
const int pinPedVermelho = 9;

void setup() {
// Configuração do display

byte numDigits = 1;
byte digitPins[] = {};
byte segmentPins[] = {1, 7, 2, 4, 3, 5, 6, 0};
bool resistoresSegmentos = true;


sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistoresSegmentos);
sevseg.setBrightness(100);

//  acender o verde
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop() {
    sevseg.refreshDisplay();
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);
    
    digitalWrite(pinPedVerde, LOW);
    digitalWrite(pinPedVermelho, HIGH);

//condição para chamar o método 
  if (digitalRead(pinBotao) == HIGH){
    botaoPedestre();
  }
}

//método do botão
void botaoPedestre(){
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, HIGH);
  delay(2000);

  for (int i = 9; i >= 0; i--) {
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, HIGH);
  digitalWrite(pinPedVermelho, LOW);
  digitalWrite(pinPedVerde, HIGH);
    sevseg.setNumber(i);
    sevseg.refreshDisplay();
    if (i == 2 || i == 1 || i == 0) {
      digitalWrite(pinPedVerde, LOW);
      delay(500);
      digitalWrite(pinPedVerde, HIGH);
      delay(500);
    }
    if (i > 2)
      delay(1000);
  }
}