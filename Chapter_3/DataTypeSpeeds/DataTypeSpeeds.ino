/* DataTypeSpeeds
 * 
 * Homework problem - Exercise to show the difference in speed of
 * various data types
 *
 * Author: 
 * Assisted by: 
 * Date: 
 */

byte byteVar = 0;
int intVar = 0;
float floatVar = 0;
double doubleVar = 0;
unsigned const long ITERATIONS = 1000000;  // 1 million

void setup() {
  Serial.begin(9600);

  // Test byte var processing time
  long startTime = micros();
  for (unsigned long i = 0; i < ITERATIONS; i++) {
    if (i % 2 == 0) {
      byteVar = byteVar + 1;
    } else {
      byteVar = byteVar - 1;
    }
  }
  long duration = micros() - startTime;
  displayDuration(duration, "byte");

  // Test int var processing time
  startTime = micros();
  for (unsigned long i = 0; i < ITERATIONS; i++) {
    if (i % 2 == 0) {
      intVar = intVar + 1;
    } else {
      intVar = intVar - 1;
    }
  }
  duration = micros() - startTime;
  displayDuration(duration, "int");

  // Test float var processing time
  startTime = micros();
  for (unsigned long i = 0; i < ITERATIONS; i++) {
    if (i % 2 == 0) {
      floatVar = floatVar + 1;
    } else {
      floatVar = floatVar - 1;
    }
  }
  duration = micros() - startTime;
  displayDuration(duration, "float");

  // Test double var processing time
  startTime = micros();
  for (unsigned long i = 0; i < ITERATIONS; i++) {
    if (i % 2 == 0) {
      doubleVar = doubleVar + 1;
    } else {
      doubleVar = doubleVar - 1;
    }
  }
  duration = micros() - startTime;
  displayDuration(duration, "double");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void displayDuration(long duration, String type) {
  Serial.print(ITERATIONS);
  Serial.print(" ");
  Serial.print(type);
  Serial.print(" assignments took ");
  Serial.print(duration);
  Serial.println(" microseconds");
}
