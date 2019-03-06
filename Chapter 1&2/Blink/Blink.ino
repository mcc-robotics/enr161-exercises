/* Blink
 * 
 * Homework problem - Replace global variable "led" with the built in 
 * library variable LED_BUILTIN. Don't forget to update comments as
 * necessary.
 *
 * Author: 
 * Assisted by: 
 * Date: 
 */

char led = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin "led" as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
