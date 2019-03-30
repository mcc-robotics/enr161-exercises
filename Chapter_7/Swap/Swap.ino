/* Swap
 *
 * Homework Problem - Implement the swap function so the output is correct
 *
 * Author:
 * Assisted by:
 * Date:
 */


// ************************* NOTICE *****************************
// **************************************************************
// ******** Only write code in the swap() function **************
// **************************************************************
// **************************************************************

void setup() {
  Serial.begin(115200);
  int thisValue = 10;
  int thatValue = 50;

  printThisAndThat(thisValue, thatValue);
  Serial.println("------^ Before Swap ^--------------\n");

  Serial.println("Calling swap(thisValue, thatValue)\n");
  swap(thisValue, thatValue);

  Serial.println("------_ After Swap _-------------");
  printThisAndThat(thisValue, thatValue);


}

void loop() {

}

void printThisAndThat(int thisValue, int thatValue) {
  Serial.print("thisValue is ");
  Serial.println(thisValue);
  Serial.print("thatValue is ");
  Serial.println(thatValue);
}

void swap(int &a, int &b) {
  // Write your code here

}