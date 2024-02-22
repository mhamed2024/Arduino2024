const int ledPin = 13; // Defineix el pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin com a sortida
}

void loop() {
  for (int contador = 0; contador < 30; contador++) {
    digitalWrite(ledPin, HIGH); // Encén el LED
    delay(1000); // Espera 1 segon
    digitalWrite(ledPin, LOW); // Apaga el LED
    delay(1000); // Espera 1 segon
  }
}