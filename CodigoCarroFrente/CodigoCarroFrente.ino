const int motorA = 9; //velocidade motor A - de 0 a 255
const int motorB = 11; //velocidade motor B - de 0 a 255
const int dirA = 8; //direcao do motor A - HIGH ou LOW
const int dirB = 10; //direcao do motor B - HIGH ou LOW

void setup() {
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(dirA, OUTPUT);
  pinMode(dirB, OUTPUT);
}

void loop() {
  digitalWrite(dirA, HIGH); //SENTIDO DE ROTACAO
  digitalWrite(dirB, LOW);
  analogWrite(motorA, 0); //VELOCIDADE
  analogWrite(motorB, 150);
}