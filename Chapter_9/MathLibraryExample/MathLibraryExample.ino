

void setup() {
  // Setup serial communication
  Serial.begin(9600);
  
  //*** The following will test each of your functions

  // **** ADD *****
  Serial.println("**** Testing add() ****");
  // Test simple
  Serial.print("add(5,6) - ");
  Serial.println(add(5,6) == 11 ? "Pass" : "Fail");

  // Test no byte rollover
  Serial.print("add(255,6) - ");
  Serial.println(add(255,6) == 261 ? "Pass" : "Fail");

  // Test negative
  Serial.print("add(5,-6) - ");
  Serial.println(add(5,-6) == -1 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("add(300,300) - ");
  Serial.println(add(300,300) == 600 ? "Pass" : "Fail");

  // **** SUBTRACT ****
  Serial.println("\n**** Testing subtract() ****");
  // Test simple subtract
  Serial.print("subtract(10,6) - ");
  Serial.println(subtract(10,6) == 4 ? "Pass" : "Fail");

  // Test no byte rollover
  Serial.print("subtract(255,256) - ");
  Serial.println(subtract(255,256) == -1 ? "Pass" : "Fail");

  // Test negative
  Serial.print("subtract(10,-10) - ");
  Serial.println(subtract(10,-10) == 20 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("subtract(300,300) - ");
  Serial.println(subtract(300,300) == 0 ? "Pass" : "Fail");

  // **** MULTIPLY ****
  Serial.println("\n**** Testing multiply() ****");
  // Test simple
  Serial.print("multiply(10,10) - ");
  Serial.println(multiply(10,10) == 100 ? "Pass" : "Fail");

  // Test no byte rollover
  Serial.print("multiply(10,50) - ");
  Serial.println(multiply(10,50) == 500 ? "Pass" : "Fail");

  // Test negative
  Serial.print("multiply(10,-10) - ");
  Serial.println(multiply(10,-10) == -100 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("multiply(300,100) - ");
  Serial.println(multiply(300,100) == 30000 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("multiply(100,300) - ");
  Serial.println(multiply(100,300) == 30000 ? "Pass" : "Fail");

  // **** DIVIDE ****
  Serial.println("\n**** Testing divide() ****");
  // Test simple int
  Serial.print("divide(10,5) - ");
  Serial.println(divide(10,5) == 2 ? "Pass" : "Fail");

  // Test no byte rollover
  Serial.print("divide(256,1) - ");
  Serial.println(divide(256,1) == 256 ? "Pass" : "Fail");

  // Test negative int
  Serial.print("divide(10,-5) - ");
  Serial.println(divide(10,-5) == -2 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("divide(3000,1000) - ");
  Serial.println(divide(3000,1000) == 3 ? "Pass" : "Fail");

  // Test simple float
  Serial.print("divide(10.0,3.0) - ");
  Serial.println(divide(10.0,3.0) == 10.0/3.0 ? "Pass" : "Fail");

  // Test negative float
  Serial.print("divide(10.0,-3.0) - ");
  Serial.println(divide(10.0,-3.0) == 10.0/-3.0 ? "Pass" : "Fail");

  // **** REMAINDER ****
  Serial.println("\n**** Testing remainder() ****");
  // Test simple int
  Serial.print("remainder(10,5) - ");
  Serial.println(remainder(10,5) == 0 ? "Pass" : "Fail");

  // Test no byte rollover
  Serial.print("remainder(513,257) - ");
  Serial.println(remainder(513,257) == 256 ? "Pass" : "Fail");

  // Test negative int
  Serial.print("remainder(-10,-3) - ");
  Serial.println(remainder(-10,-3) == -1 ? "Pass" : "Fail");

  // Test int parameters
  Serial.print("remainder(3000,1000) - ");
  Serial.println(remainder(3000,1000) == 0 ? "Pass" : "Fail");

  // Test simple float
  Serial.print("remainder(10.0,3.0) - ");
  Serial.println(remainder(10.0,3.0) == 1.0 ? "Pass" : "Fail");

  // Test negative float
  Serial.print("remainder(-10.0,-3.0) - ");
  Serial.println(remainder(-10.0,-3.0) == -1.0 ? "Pass" : "Fail");

  // **** REMAINDER ****
  Serial.println("\n**** Testing getPi() ****");
  // Test get
  Serial.print("getPi() - ");
  Serial.println(getPi() == 22.0/7.0 ? "Pass" : "Fail");
}

void loop() {
  // Nothing here, just want to run it once

}
