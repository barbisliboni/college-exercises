void setup()
{
  pinMode(A3, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A3));

  if (analogRead(A3) >= 300) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  delay(10); 
}