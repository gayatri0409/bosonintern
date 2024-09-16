const int maxBytes = 18; // Define the maximum number of bytes to store
char receivedIntegers[maxBytes]; // Array to store received integers
int numReceived = 0; // Counter for received bytes

void setup() {
  // Initialize serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming byte
    char incomingInt = Serial.read();

    // Store the received integer in the array
    if (numReceived < maxBytes) {
      receivedIntegers[numReceived] = incomingInt;
      numReceived++;
    }

    // Check if we've received enough integers
    if (numReceived == maxBytes) {
      // Print all received integers
      Serial.print("Received integers: ");
      for (int i = 0; i < maxBytes; i++) {
        Serial.print(receivedIntegers[i]);
        Serial.print(" ");
      }
      Serial.println(); // Print a newline

      // Send a response back to the serial monitor
      Serial.println("Message received!");

      // Reset the counter for the next batch of integers
      numReceived = 0;
    }
  }
}
