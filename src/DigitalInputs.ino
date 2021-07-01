/*
 * Project DigitalInputs
 * Description:
 * Author:
 * Date:
 */
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
  pinMode(D6, OUTPUT);  // setup LED  
  pinMode(D7,INPUT);    // setup button
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  
  bool value;
  value = digitalRead(D7);  // reads the button either true or false
  if (value == true) {
    digitalWrite(D6, HIGH); // if the btton is pressed the led will turn on
  } else {
    digitalWrite(D6, LOW); // else if the button isn't pressed it will be turned off
  }
}