# Robótica em C
### Estrutura:
**A estrutura** básisa da linguagem de programação de Arduino é bastante simples; ela é formada por dois blocos de funções que corregam outros blocos de funções escritas em linguagem C/C++. O primeiro bloco de funções forma a função **setup();**, o segundo, a função **loop();**

## Funções
Em liguagens de programação são sub-rotinas ou procedimentos; são pequenos blocos de programas usados para montar o programa principal. Elas são escritas pelo programador para realizar tarefas repetitivas, ou podem ser importadas prontas para o programa em forma de bibliotecas.
## Declaração da função
Toda função deve ser declarada antes de ser chamada atribuindo-lhe um tipo e um nome seguido de parênteses, onde serão colocados os parâmetros de passagem da função. Depois do nome são definidos entre chaves "{" e "}" os procedimentos que a função vai executar.
## setup():
Essa é a primeira função a ser chamada quando o programa inicia. E é executada apenas nessa primeira vez. Esta é uma função de preparação: Ela dita o comportamento dos pinos do Arduino e inicializa a porta serial.
## loop():
A função **loop()** é chamada logo a seguir e todas as funções embarcadas nela são repetidamente executadas. Ela fica lendo os pinos de entrada do Arduino e comandando os pinos de saída e a porta serial.
### Exemplo
    /*Nesse código a função setup() ativa a porta serial em 9600 bits/s e a função loop() fica transmitindo a frase 'Hello World!' pela porta serial a cada 2 segundos */
    
    void setup() {
        Serial.begin(9600);        //inicializa a porta serial
    }
    void loop() {
        Serial.println("Hello World!");    // Transmite frase
        delay(2000);
    }

### Exemplo
    /* Esse programa escrito em C do Arduino aumenta e diminui gradativamente o brilho de um LED conectado no pino PWM 10 do Arduino.*/
    int i=0; // Declaração da variável global inteira i iniciada com 0

    void ledOn(); // Declaração da função criada ledOn do tipo void
    
    void setup() {
        pinMode(10, OUTPUT); // Aqui 2 parâmetros são passados à função pinMode()
    }
    void loop() {
        for (i=0; i<=255; i++)ledOn(); // Aumenta o brilho do led
        for (i=255; i>=0; i++)ledOn(); // Diminui o brilho do led
    }
    void ledOn() {
        analogWrite(10, i); // O n° do pino e o valor de i são passados à função analogWrite()
        delay(10);
    }