# ESP8266 Push Button Project

#### Project Overview
This project illustrates how to use a push button with an ESP8266 microcontroller. The push button's state (pressed or not pressed) is monitored using a GPIO pin configured as an input with an internal pull-up resistor. The state changes are then displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **Push Button**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the Push Button to ESP8266:**
   - Connect one leg of the push button to GPIO pin D2 on the ESP8266.
   - Connect the other leg of the push button to ground (GND).
   - Optionally, a pull-down resistor can be used between the button and ground for more stable readings, but the internal pull-up resistor in the ESP8266 can suffice.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - Press and release the push button.
   - Observe the changes in the Serial Monitor: "Button pressed" when pressed, and "Button not pressed" when released.

#### Applications
- **User Input Control:** Use the push button to trigger specific actions in your ESP8266-based projects.
- **State Monitoring:** Monitor and react to user input events in real-time.
- **Interface Integration:** Integrate physical buttons for easier interaction with IoT devices.

#### Notes
- **Button Debouncing:** A small delay (100 milliseconds) is added to debounce the button and ensure stable readings.
- **Pull-up Resistor:** The ESP8266's internal pull-up resistor keeps the input stable when the button is not pressed. Ensure the pin is configured correctly for reliable operation.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Push Button](https://projectslearner.com/learn/esp8266-push-button)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner