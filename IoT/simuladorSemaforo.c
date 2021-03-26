/*
Programar um semáforo (3s no verde, 1s no amarelo e 4s no vermelho)

Componentes: LEDs vermelha, amarelo e verde;
3 Resistors;
Arduino UNO;

Circuitos > Criar novo circuito > Selecionar os componentes no menu lateral direito > 
Ligar os LEDs (Cathode) negativos (0 volts) nos Resistors > Conectar
o Resistor na porta GND (Ground) > Ligar o Anode dos LEDs em qualquer pino do 2 as 13 (escolhidos: ~3, ~5 e ~6)> 
Código > Comando de Saída/Output > Definir pino como/set pin 3 como ALTO/HIGH > Comando Controlar/Control > Aguardar 3 s/wait 3 sec >
Comando de Saída/Output > Definir pino como/set pin 3 como BAIXO/LOW>
Comando de Saída/Output > Definir pino como/set pin 5 como ALTO/HIGH > Comando Controlar/Control > Aguardar 1 s/wait 1 sec >
Comando de Saída/Output > Definir pino como/set pin 5 como BAIXO/LOW>
Comando de Saída/Output > Definir pino como/set pin 6 como ALTO/HIGH > Comando Controlar/Control > Aguardar 4 s/wait 4 sec >
Comando de Saída/Output > Definir pino como/set pin 6 como BAIXO/LOW>
*/

//Comando em C:  

#include <stdio.h>

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(6, LOW);
}