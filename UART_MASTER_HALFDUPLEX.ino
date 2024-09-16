void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Sender (Transmitter)
  Serial.print("H here");
  delay(5000);

  // Receiver
  if (Serial.available()) {
    String receivedData = Serial.readString();
    Serial.println("Received: ");
    Serial.println(receivedData);
  }

  // Add a delay at the end of the loop
  delay(1000);
}
