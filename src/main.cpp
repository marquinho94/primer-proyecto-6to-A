#include <Arduino.h>



// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(9600);
  Serial.println("setup");
}

// Comentario para prueba de github 6to A 


void loop() {
  digitalWrite(14, HIGH); // turn the LED on (HIGH is the voltage level)
  Serial.println("Led_on");
  delay(1000); // wait for a second
  digitalWrite(14, LOW); 
  Serial.println("Led_off");
  delay(1000); // wait for a second
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}