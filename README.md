Hi! I'm Samuel Arredondo Ramírez, and I created Luma Glove as a project for Hack Club's Macondo program. My goal is to build a wearable device that transforms natural hand and finger movements into intuitive controls for video games and other interactive applications.
<img width="1200" height="1600" alt="WhatsApp Image 2026-08-04 at 6 08 26 PM" src="https://github.com/user-attachments/assets/a3adfc1a-2b51-4f38-a771-5b8248d43ee8" />

You can find me on the Hack Club Slack as: "@Luma" or "@Samuel Arredondo Ramírez"

Luma Glove is a wearable smart glove based on the ESP32-C3 microcontroller, flex sensors, and motion sensors. The system captures finger and hand movements, processes them with the ESP32, and sends the data to a browser using the Web Serial API, allowing users to control games and interactive applications through natural gestures. The project explores human-computer interaction, accessibility, ergonomics, gamification, and immersive interfaces through a modular and expandable hardware design.

Programs used:

- Arduino IDE: Firmware development for the ESP32-C3.
- Antigravity IDE: HTML, CSS, and JavaScript development.
- Python: Main programming language.
- JavaScript: Game logic and Web Serial communication.
- HTML5: Browser interface
- CSS3: User interface styling
- Web Serial API: Communication between the browser and the ESP32

# Circuit Components and Functions

| Component | Function |
|-----------|----------|
| ESP32-C3 Super Mini | Main microcontroller. Reads the sensors, processes their values, and communicates with the web application. |
| Flex Sensors | Detect finger bending. Their electrical resistance changes when the sensor is bent, allowing Luma to determine finger movement. |
| 10 kΩ Resistors | Work with the flex sensors as voltage dividers, converting changes in resistance into measurable analog voltage values for the ESP32-C3. |
| MPU6050 | Measures movement and orientation using an accelerometer and gyroscope. It can be used to detect hand motion and rotation. |
| Capacitors | Help filter electrical noise and stabilize sensor signals, making the analog readings more stable. |
| LEDs | Provide visual feedback about the device's state or detected interactions. |
| WS2812B RGB LED Strip | Provides programmable RGB lighting effects and visual feedback. |
| Li-ion Battery | Provides portable power for the glove. |
| USB-C Charging Module | Allows the rechargeable battery to be charged through USB-C. |
| Breadboard | Used to prototype and test the electronic circuit without permanently soldering the components. |
| Dupont Jumper Wires | Connect the sensors, resistors, ESP32-C3, and other components in the prototype circuit. |

Current Status

Luma Glove can currently:

- Detect finger movements using four flex sensors.
- Process sensor data using the ESP32-C3.
- Send sensor data from the ESP32 to a browser.
- Control a browser-based game using hand and finger movements.
- Communicate with the web application through the Web Serial API.
- Operate as a functional wearable prototype.

The project is still under development, and future versions will include:

- Independent calibration for each flex sensor.
- Haptic feedback for tactile interaction.
- RGB lighting effects.
- Bluetooth communication.
- An improved and more integrated wearable enclosure.
- Additional applications and games controlled through hand movements.
