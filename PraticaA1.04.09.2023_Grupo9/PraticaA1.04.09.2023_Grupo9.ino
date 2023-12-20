
// Breno Amaral Santos
// Gustavo Henrique Neivas Simões
// João Victor Fernandes Lima - Líder
// Giovanna Silva Penido

int Pin_LED = 2;
// Definição da porta
void setup()
{
  pinMode(Pin_LED, OUTPUT);
}
// Definir o modo da porta de saída

void loop() // Inicio da repetição indefinida do código 
{
  for (int aux=0; aux<=2; aux++){
    repeticao(500); // Importação do método com a definição do tempo
  }
  for (int aux=0; aux<=2; aux++){
  	repeticao(2000); // Importação do método com a definição do tempo
  }
}

// Método que recebe como parâmetro o tempo da repetição
void repeticao(int tempo) {
    digitalWrite(Pin_LED, HIGH);
  	delay(tempo);
  	digitalWrite(Pin_LED, LOW);
  	delay(500);
}