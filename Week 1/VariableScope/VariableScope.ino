// This is a global variable, everyone has access
int globalVariable = 10;

void setup() {
  Serial.begin(9600);
  
  // This is a member variable, only I have access
  int memberVariable = 10;

  Serial.println("\n***setup() START");

  // We have read access to the global variable
  Serial.print("The global variable should be 10: ");
  Serial.println(globalVariable);

  // We have write access to the global variable
  globalVariable = 20;
  Serial.print("I changed the global variable to 20: ");
  Serial.println(globalVariable);

  // We will call the custom function and provide access to our variable
  customFunction(memberVariable);

  // We passed by value so customFunction can do all it wants, we really just gave it a copy.
  Serial.print("The variable was passed by value so it should still be 10: ");
  Serial.println(memberVariable);

  Serial.println("***setup() END\n");
}

void loop() {

}

/**
 * In this custom function, any variable that is passed to it is only passed by value.
 * Therefore, it does not have access to change that variable directly. In fact, what 
 * happens is this new variable is created (parameterVariable) with the value of the 
 * variable that is passed in. So, if customFunction changes the value, it's really 
 * only changing the value of parameterVariable which gets destroyed when the function
 * is done.
 * 
 * However, global variables are accessible directly by any portion of code, therefore
 * this function has direct access and can change the value of a global variable.
 */
void customFunction(int parameterVariable) {
  Serial.println("\n***customFunction() START");

  // I can read the global variable too
  Serial.print("The global variable was changed to 20 by setup(): ");
  Serial.println(globalVariable);

  // Show that the value is 10, as it was in the other function
  Serial.print("I've been passed a parameter: ");
  Serial.println(parameterVariable);

  // Muahaha, I'm going to change this value
  parameterVariable = 0;
  Serial.print("I've changed the parameter value to 0: ");
  Serial.println(parameterVariable);

  Serial.println("***customFunction() END\n");
}

