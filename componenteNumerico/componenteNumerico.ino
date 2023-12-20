#include "SevSeg.h" // Adiciona a biblioteca “SevSeg" ao projeto​
SevSeg setSeg;

void setup() {

   // Definido como 1 para exibição de um dígito ​

   byte numDigitos = 1;

 

   // Define pinos comuns ao usar display de vários dígitos. Deixado vazio, pois temos um display de um único dígito      ​

   byte digitPinos[] = {}; 



   // Define as conexões de pinos do Arduino na ordem: A, B, C, D, E, F, G, DP ​

   byte pinosDisplay[] = {3, 2, 8, 7, 6, 4, 5, 9}; 

   bool resistoresSegmentos = true;



   setSeg.begin(COMMON_ANODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);

   // Remova o comentário da segunda linha se você usar o display de 7 segmentos de cátodo comum​

   //setSeg.begin(COMMON_CATHODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);​

   setSeg.setBrightness(90);
   void loop() { 

   // Exibir números um por um com 2 segundos de atraso​

   for(int i = 0; i < 10; i++) {

        setSeg.setNumber(i);

        setSeg.refreshDisplay(); 

        delay(2000);

   }

}