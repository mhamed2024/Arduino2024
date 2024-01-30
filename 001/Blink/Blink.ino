void setup()
{
  pinMode(13, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH); //Primer latido
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH); //Segundo latido
  delay(100);
  digitalWrite(13, LOW);
  delay(3000); //Espacio entre latidos
}