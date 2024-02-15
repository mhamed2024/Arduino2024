/**********************************************************************************
**                                                                               **
**                           on/off button control LED                           **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************
// No s'han afegit cap inclús, ja que el programa actual no requereix cap.

//********** Variables ***********************************************************
const byte led0 = 5;          // Donar nom al pin 5 de l’Arduino com a LED
const byte buttonPin = 2;     // Donar nom al pin 2 de l’Arduino com a polsador
byte buttonState = 0;         // Per guardar l’estat en què es troba el polsador

//********** Setup ***************************************************************
void setup() {
  pinMode(led0, OUTPUT);     // Definir el pin 5 com una sortida per al LED
  pinMode(buttonPin, INPUT); // Definir el pin 2 com una entrada per al polsador
}

//********** Loop *****************************************************************
void loop() {
  buttonState = digitalRead(buttonPin);  // Llegir l’estat del polsador i guardar-lo

  if (buttonState == LOW) {  // Polsador premut (muntat amb Pull-up)
    digitalWrite(led0, HIGH); // Encendre el LED quan el polsador està premut
  } else {   // Polsador no premut (muntat amb Pull-up)
    digitalWrite(led0, LOW); // Apagar el LED quan el polsador no està premut
  }

  delay(200);  // Per evitar una lectura molt ràpida del polsador
}