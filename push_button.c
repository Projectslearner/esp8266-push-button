/*
    Project name : ESP8266 Push button
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-push-button
*/

// Define the GPIO pin connected to the push button
const int buttonPin = D2; // GPIO pin D2 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the button
  int buttonState = digitalRead(buttonPin);

  // Print the button state to Serial Monitor
  if (buttonState == LOW) {
    Serial.println("Button pressed");
  } else {
    Serial.println("Button not pressed");
  }

  delay(100); // Add a small delay to debounce the button
}
