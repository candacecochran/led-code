/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  
            
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
             // wait for a second
  
             // wait for a second
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(6
  , LOW);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
}
