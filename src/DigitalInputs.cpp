/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Vikash/Downloads/DigitalInputs/src/DigitalInputs.ino"
/*
 * Project DigitalInputs
 * Description:
 * Author:
 * Date:
 */
void setup();
void loop();
#line 7 "c:/Users/Vikash/Downloads/DigitalInputs/src/DigitalInputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D6, OUTPUT);  // setup
  pinMode(D7,INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  
  bool value;
  value = digitalRead(D7);  
  if (value == true) {
    digitalWrite(D6, HIGH);
  } else {
    digitalWrite(D6, LOW);
  }
}