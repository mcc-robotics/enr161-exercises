/* NumberToLetterGrade
 * 
 * Homework Problem - Why does this output the wrong information?
 *
 * Author: 
 * Assisted by: 
 * Date: 
 */


void setup() {
  // Setup serial monitor
  Serial.begin(9600);

  // Create some local variables
  char letterGrade = ' ';     // Stores the resulting letter grade
  char numericalGrade = 75;   // Stores the numerical grade

  // Convert from a numerical grade to a letter grade
  if (numericalGrade >= 90) {
    letterGrade = 'A';
  }
  if (numericalGrade >= 80) {
    letterGrade = 'B';
  }
  if (numericalGrade >= 70) {
    letterGrade = 'C';
  }
  if (numericalGrade >= 60) {
    letterGrade = 'D';
  }
  if (numericalGrade < 60) {
    letterGrade = 'F';
  }

  // Print out our results
  Serial.print("The letter grade for a ");
  Serial.print(numericalGrade, DEC);
  Serial.print(" is ");
  Serial.print(letterGrade);


}

void loop() {
  // put your main code here, to run repeatedly:

}
