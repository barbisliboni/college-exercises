//TESTING DIGITAL PINS

void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.println(digitalRead(7));
  delay(10); 
}

//TESTING ANALOGICAL PINS

void setup()
{
  pinMode(A3, INPUT);
  Serial.begin(9600);

}

void loop()
{
  Serial.println(analogRead(A3));
  delay(10); 
}