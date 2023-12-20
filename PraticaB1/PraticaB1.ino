// BRENO AMARAL SANTOS
// GIOVANNA SILVA PENIDO
// GUSTAVO HENRIQUE NEIVA
// JOÃO VICTOR FERNANDES LIMA
// CC2MA

const int sensPin = 2;
const int botaoPin = 3;
const int ledPinAmarelo = 7;
const int ledPinVermelho = 4;

int cont = 0;

void setup() {
  // Configuração dos pinos
  pinMode(sensPin, INPUT);
  pinMode(botaoPin, INPUT);
  pinMode(ledPinAmarelo, OUTPUT);
  pinMode(ledPinVermelho, OUTPUT);
  // Inicialização da comunicação serial (Configuração da comunicação entra o Arduino e o computador)
  Serial.begin(9600);

}

void loop() {
  // Leitura do estado do sensor PIR
  int sensState = digitalRead(sensPin); 
  // Mantém o led desligado se não houver movimento
  digitalWrite(ledPinAmarelo, LOW);
  // Condicionamento da leitura do sensor para execução do comando
  if (sensState == HIGH) {
    // Contador de detecção de movimentos
    cont++;
    for (int i = 0; i<=2; i++) {
      // Repetição para piscar o led quando o movimento for detectado
      digitalWrite(ledPinAmarelo, HIGH);
      delay(500);
      digitalWrite(ledPinAmarelo, LOW);
      delay(500);
    }
    // Impressões no monitor serial
    Serial.println("Movimento detectado!");
    Serial.println("Numero de detecções: ");
    Serial.println(cont);
    digitalWrite(ledPinVermelho, HIGH);
  }
  // Declaração do botão reset
  if (digitalRead(botaoPin) == HIGH) {
    botaoReset();
  }
}

// Método do botão reset
void botaoReset() {
  digitalWrite(ledPinVermelho, LOW);
  cont = 0;
}
