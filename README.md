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

Circuit Components and Functions:

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

Web application:
<img width="738" height="450" alt="WhatsApp Image 2026-08-04 at 4 49 42 PM" src="https://github.com/user-attachments/assets/6a2bb734-2613-40c8-a0b4-6883c55326ca" />

The web application was developed using HTML5, CSS3, and JavaScript in Antigravity IDE. The application works as the software interface between Luma and the game. It receives the sensor data sent by the ESP32-C3 through the Web Serial API and interprets the values of the flex sensors as finger movements.

The current demonstration is a Pong-style game. Each flex sensor is assigned to a different direction:

Flex Sensor 1 → Up
Flex Sensor 2 → Down
Flex Sensor 3 → Left
Flex Sensor 4 → Right

When a finger bends, the corresponding flex sensor produces a different analog reading. The ESP32-C3 reads these values and sends them to the browser. JavaScript processes the incoming data and translates the detected movements into game controls.

This allows the player to interact with the game using hand and finger movements instead of a traditional keyboard or controller.

The Web Serial API is responsible for establishing communication between the browser and the ESP32-C3, while JavaScript handles the sensor data and game logic.
Current Status

How it Works:

The system follows this process:

1. The user moves or bends their fingers.
2. The flex sensors detect the changes in finger position.
3. The ESP32-C3 reads the analog sensor values.
4. The firmware processes the sensor readings.
5. The ESP32-C3 sends the data to the browser through the Web Serial API.
6. JavaScript interprets the sensor values.
7. The corresponding movement is applied to the Pong game.
8. The user controls the game through natural hand and finger movements.

Luma Glove can currently:

- Detect finger movements using four flex sensors.
- Process sensor data using the ESP32-C3.
- Send sensor data from the ESP32 to a browser.
- Control a browser-based game using hand and finger movements.
- Communicate with the web application through the Web Serial API.
- Operate as a functional wearable prototype.
<img width="1600" height="1200" alt="WhatsApp Image 2026-08-04 at 6 30 06 PM" src="https://github.com/user-attachments/assets/3ce083f9-059e-4672-8a23-ef8427ba3317" />

The project is still under development, and future versions will include:

- Independent calibration for each flex sensor.
- Haptic feedback for tactile interaction.
- RGB lighting effects.
- Bluetooth communication.
- An improved and more integrated wearable enclosure.
- Additional applications and games controlled through hand movements.


A complete Bill of Materials (BOM) is included in this repository.
You can find the wiring diagram at "Images".
