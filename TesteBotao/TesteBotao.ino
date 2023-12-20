const int startStopButton = 6;
const int resetButton = 7;

void setup() {
  Serial.begin(9600);
  pinMode(startStopButton, INPUT);
  pinMode(resetButton, INPUT);
}

void loop() {
  int startStopState = digitalRead(startStopButton);
  int resetState = digitalRead(resetButton);

  if (startStopState == LOW) {
    Serial.println("Botão Iniciar/Parar pressionado.");
  }

  if (resetState == LOW) {
    Serial.println("Botão Reset pressionado.");
  }

  delay(100);
}

