 // GUSTAVO HENRIQUE NEIVA
 // GIOVANNA SILVA PENIDO
 // JOÃO VICTOR FERNANDES LIMA
 // CC2MA


const int pinVerde = 8;
const int pinAmarelo = 9;
const int pinVermelho = 10;
const int pinBotao = 12;

void setup() {
//  acender o verde
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAmarelo, OUTPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(pinBotao, INPUT);
}

void loop() {
//condição para chamar o método 

    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pinVermelho, LOW);
    
  if(digitalRead(pinBotao) == HIGH){
    botaoPedestre();
  }
}

//método do botão
void botaoPedestre(){
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarelo, HIGH);
  delay(2000);
  digitalWrite(pinAmarelo, LOW);
  digitalWrite(pinVermelho, HIGH);
  delay(10000);
}