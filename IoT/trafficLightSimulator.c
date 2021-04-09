/*
Program a traffic light (3s on green, 1s on yellow and 4s on red)

Component: red, yellow and green LEDs;
3 Resistors;
Arduino UNO;

Circuits > Create new circuit > Select all components on the side right menu > 
Turn on the LEDs (Cathode) negative (0 volts) on the Resistors > Conect
the Resistor on the GND port (Ground) >Turn on the LEDs Anode on any pin from 2 to 13 (choosen: ~3, ~5 and ~6)> 
Code > Output > Set pin 3 as HIGH > Control > Wait 3 sec >
Output > Set pin 3 as LOW>
Output > Set pin 5 as HIGH > Control > wait 1 sec >
Output > Set pin 5 as LOW>
Output > Set pin 6 as HIGH > Control > Wait 4 sec >
Output > Set pin 6 as LOW>
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