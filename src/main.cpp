#include <Arduino.h>
// #include "FocusLight.h"

void setup() {
  Serial.begin(115200);
}

void loop() {
  String caracter = "";
  for(int i = 0; i < 7; i++) {
    caracter += Serial.read();
  } 
  Serial.println(caracter);
  delay(100);
}