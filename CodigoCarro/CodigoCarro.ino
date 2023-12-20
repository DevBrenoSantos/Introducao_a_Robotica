// BRENO AMARAL SANTOS
// GIOVANNA SILVA PENIDO
// GUSTAVO HENRIQUE NEIVA
// JOÃO VICTOR FERNANDES LIMA
// CC2MA

// Código Carro

//Definição dos pinos de controle do motor
#define M1 9 // Pino_Velocidade 1º Motor ( 0 a 255)_ Porta IN2 ponte H;
#define M2 11 //Pino_Velocidade 2º Motor ( 0 a 255) _ Porta IN4 ponte H;
#define dir1 8 //Pino_Direção do 1º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN1 ponte H;
#define dir2 10 //Pino_Direção do 2º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN3 ponte H;

//Definição dos pinos dos sensores
#define pin_S1 7
#define pin_S2 6
bool Sensor1 = 0;
bool Sensor2 = 0;

//variável responsável por controlar a velocidade dos motores
int velocidade1 = 150;
int velocidade2 = 120;

int velocidadeVirar = 30;

int distancia_percorrida = 0;
int distancia_girada = 0;

void setup(){
//Setamos os pinos de controle dos motores como saída
pinMode(M1, OUTPUT);
pinMode(M2, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);

//Setamos a direção inicial do motor como 0, isso fará com que ambos os motores girem para frente
digitalWrite(dir1, HIGH);
digitalWrite(dir2, HIGH);

//Setamos os pinos dos sensores como entrada
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
} 

void loop(){

    if (distancia_percorrida < 100) {  // 1 metro (assumindo que a unidade é arbitrária)
      analogWrite(M1, velocidade2);
      analogWrite(M2, velocidade1);
      distancia_percorrida++;
    } else if (distancia_girada < 50) {  // 50 cm (assumindo que a unidade é arbitrária)
      analogWrite(M1, velocidade2);
      analogWrite(M2, velocidade1);
      distancia_girada++;
    } else if (distancia_percorrida < 150) {  // 1 metro novamente
      analogWrite(M1, velocidade2);
      analogWrite(M2, velocidade1);
      distancia_percorrida++;
    }
}
