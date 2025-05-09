void setup() {
  pinMode(7, OUTPUT); // Green LED
  pinMode(8, OUTPUT); // Red LED
}

void loop() {
  digitalWrite(7, HIGH); // Turn on Green LED
  delay(1000);           // Wait for 1 second
  digitalWrite(7, LOW);  // Turn off Green LED
  digitalWrite(8, HIGH); // Turn on Red LED
  delay(1000);           // Wait for 1 second
  digitalWrite(8, LOW);  // Turn off Red LED
}