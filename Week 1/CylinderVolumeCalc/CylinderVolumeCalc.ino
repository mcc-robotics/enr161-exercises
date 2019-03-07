

int radius = 2;
int height = 24;

void setup() {
  // Set up communications
  Serial.begin(9600);

  // Compute the volume of a cylinder here
  int volume =

  // Print the results to the serial monitor
  Serial.print("The volume of a cylinder with a radius of ");
  Serial.print(radius);
  Serial.print(" and a height of ");
  Serial.print(height);
  Serial.print(" is ");
  Serial.println(volume);

}

void loop() {
  // Nothing needed here, we only want a calculation once.

}
