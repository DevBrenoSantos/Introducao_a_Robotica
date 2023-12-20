// Breno Amaral Santos
// Gustavo Henrique Neivas Simões
// João Victor Fernandes Lima - Líder
// Giovanna Silva Penido

const int led_1 = 7;
const int led_2 = 8;
const int led_3 = 9;
const int led_4 = 10;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
}

void loop() {
  for (int i=0; i<=15; i++) {
    int bit_1 = i & 0x01; // "&" Operador de comparação
    int bit_2 = (i >> 1) & 0x01; // ">>" operador de deslocamento
    int bit_3 = (i >> 2) & 0x01;
    int bit_4 = (i >> 3) & 0x01;

    digitalWrite(led_1, bit_1);
    digitalWrite(led_2, bit_2);
    digitalWrite(led_3, bit_3);
    digitalWrite(led_4, bit_4);

    delay(500);

    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
    digitalWrite(led_4, LOW);

    delay(500);
  }
}