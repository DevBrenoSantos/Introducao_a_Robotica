const int ledVerde = 8; //PINO DIGITAL UTILIZADO PELO LED VERDE​
const int ledAmarelo = 9; //PINO DIGITAL UTILIZADO PELO LED AMARELO​
const int ledVermelho = 10; //PINO DIGITAL UTILIZADO PELO LED VERMELHO​

void setup() {

  pinMode(ledVerde,OUTPUT); //DEFINE O PINO COMO SAÍDA​

  pinMode(ledAmarelo,OUTPUT); //DEFINE O PINO COMO SAÍDA​

  pinMode(ledVermelho,OUTPUT); //DEFINE O PINO COMO SAÍDA​

}

void loop() {

  digitalWrite(ledVerde,HIGH); //ACENDE O LED VERDE​

  delay(2000); //INTERVALO DE 2 SEGUNDOS​

  digitalWrite(ledVerde,LOW); //APAGA O LED VERDE​

  digitalWrite(ledAmarelo,HIGH); //ACENDE O LED AMARELO​

  delay(1000); //INTERVALO DE 1 SEGUNDO​

  digitalWrite(ledAmarelo,LOW); //APAGA O LED AMARELO
  digitalWrite(ledVermelho,HIGH); //ACENDE O LED VERMELHO​

  delay(2000); //INTERVALO DE 2 SEGUNDOS​

  digitalWrite(ledVermelho,LOW); //APAGA O LED VERMELHO​

  delay(1000); //INTERVALO DE 1 SEGUNDO​

  digitalWrite(ledVerde,HIGH); //ACENDE O LED VERDE​

  digitalWrite(ledAmarelo,HIGH); //ACENDE O LED AMARELO​

  digitalWrite(ledVermelho,HIGH); //ACENDE O LED VERMELHO​

  delay(3000); //INTERVALO DE 3 SEGUNDOS​

  digitalWrite(ledVerde,LOW); //APAGA O LED VERDE​

  digitalWrite(ledAmarelo,LOW); //APAGA O LED AMARELO​

  digitalWrite(ledVermelho,LOW); //APAGA O LED VERMELHO​

  delay(1000); //INTERVALO DE 1 SEGUNDO​

}
