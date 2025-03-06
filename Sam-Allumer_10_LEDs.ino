const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; //Déclaration des broches de LEDs
int numLeds = 10; //Nombre total de LEDs

void setup() {
  // Initialisation des LEDs comme sorties:
  for(int i=0; i<numLeds; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Allumer les LEDs une par une:
  for(int i=0; i<numLeds; i++){
    digitalWrite (ledPins[i], HIGH); //Allume la LED
    delay(50); //Pause de 1 seconde
  }

  // Eteindre les LEDs une par une dans le même sens:
  for(int i=0; i<numLeds; i++){
    digitalWrite (ledPins[i], LOW); //Allume la LED
    delay(50); //Pause de 1 seconde
  }

}
