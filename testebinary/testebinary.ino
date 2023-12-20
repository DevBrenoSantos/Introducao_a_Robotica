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
  int num;
  for (i=0; i<=15; i++) {
    num = serial.println(i, BIN);
    int bit_1 = num >> 3;
    int bit_2 = num >> 2;
    int bit_3 = num >> 1;
    int bit_4 = num >> 0;

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
