void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available()) {
    // Read data from the sender
    String receivedData = Serial.readString();
    Serial.print("Received: ");
    Serial.println(receivedData);
      delay(5000);

  }
  Serial.print("G here");
  delay(5000);

}
