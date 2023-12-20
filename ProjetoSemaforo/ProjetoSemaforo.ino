int LEDVERMELHO = 4;
int LEDAMARELO = 3;
int LEDVERDE = 2;
void setup() {
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
}

void loop() {
  digitalWrite(LEDVERMELHO, LOW);
  digitalWrite(LEDAMARELO, LOW);
  digitalWrite(LEDVERDE, HIGH);
  delay(5000);
  
  digitalWrite(LEDVERMELHO, LOW);
  digitalWrite(LEDAMARELO, HIGH);
  digitalWrite(LEDVERDE, LOW);
  delay(1500);
  
  digitalWrite(LEDVERMELHO, HIGH);
  digitalWrite(LEDAMARELO, LOW);
  digitalWrite(LEDVERDE, LOW);
  delay(5000); 
  )
}
