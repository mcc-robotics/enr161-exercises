/* InteractiveDigitalLED
 * 
 * Input/Output Example InteractiveDigitalLED.ino
 * Add the appropriate code between the comment blocks to turn 
 * the LED on or off with the serial input "on" or "off".
 *
 * Author: 
 * Assisted by: 
 * Date: 
 */

String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
  // Setup the pin mode
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
    Serial.println(inputString);
    // *********************************************************
    // ***************** Add your code below *******************
    // *********************************************************
 




    // *********************************************************
    // ***************** Add your code above *******************
    // *********************************************************
    inputString = "";
    stringComplete = false;
  }
}

/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    } else {
      // add it to the inputString only if it isn't a newline
      inputString += inChar; 
    }
    
  }
}
