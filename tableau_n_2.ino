int temps = 50;                                      //temps utilisé 
int led[] = {4, 6, 3, 8, 9, 7, 10, 5, 3, 4, 5, 6, 7, 8, 9, 10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 2, 4, 6, 8, 10, 1, 1, 3, 6, 9, 8, 7, 4, 5};              //nombre de leds 
int pinCount = 32;                                 //nombre de broches      

void setup() {
    for (int i = 0; i < pinCount; i++) {           // rechercher : array comment allumer 2 leds simultanement
    pinMode(led[i], OUTPUT);
  }
}

void loop() {

    for (int i = 0; i < pinCount-2; i++) {
    
    digitalWrite(led[i], HIGH);
    digitalWrite(led[i+1], HIGH);
    delay(temps);
  
    digitalWrite(led[i], LOW);
    digitalWrite(led[i+1], LOW);

  }


  for (int i = pinCount -2; i >= 1; i--) {
 
    digitalWrite(led[i], HIGH);
    digitalWrite(led[i+1], HIGH);
    delay(temps);
  
    digitalWrite(led[i], LOW);
    digitalWrite(led[i+1], LOW);
  }
}
