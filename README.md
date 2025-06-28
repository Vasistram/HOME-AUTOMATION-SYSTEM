COMPANY : CODTECH IT SOLUTIONS

NAME : MAJJI VASISTARAM

INTERN ID : CT04DF2108

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

As part of the second task in my IoT internship at CodTech, I designed a home automation system that allows two devices to be controlled independently using an Arduino Uno. The goal was to simulate how smart home appliances such as lights and fans can be turned on or off using digital commands, just like in real-world IoT systems. Since I was working in a virtual environment, I used Tinkercad, an online circuit simulator, to create and test the project. This tool allowed me to simulate hardware behavior, such as connecting LEDs and bulbs to Arduino pins and controlling them through serial input, which acts as a substitute for mobile app-based commands.

In the circuit, I connected two output devices to the Arduino board. One was an LED connected to digital pin 7, and the other was a bulb (represented by another LED or lamp icon in Tinkercad) connected to digital pin 9. Each device was connected through a 220-ohm resistor to protect the components from excess current. The GND pins of both components were connected back to the Arduino’s GND. I used jumper wires to complete the connections properly. This setup simulates two appliances that could be found in a smart home – for example, a living room light and a ceiling fan – and provides the ability to control them individually through serial input commands.

The Arduino was programmed using the Arduino IDE within Tinkercad. I wrote a code that listens for incoming serial data using Serial.parseInt() and checks the input value. When the user enters 1, it turns on the device connected to pin 7 (LED/light); entering 2 turns it off. Similarly, entering 3 turns on the device connected to pin 9 (bulb/fan), and entering 4 turns it off. This command structure simulates how a mobile app or cloud platform could send simple instructions to an IoT controller like Arduino. To test the system, I used the Serial Monitor in Tinkercad to enter these values, and the devices responded accordingly, switching ON and OFF based on the user’s input.

This project helped me understand the concept of multi-device control in an IoT system, and how communication between a controller and devices works in a basic home automation setup. Though I used serial input for this simulation, it closely represents how platforms like Blynk, MQTT, or mobile apps would send signals to connected devices in a real-world system. It also strengthened my skills in circuit design, Arduino programming, and logical structuring of control commands. Completing this task gave me a better appreciation of how IoT is applied in daily life and laid the groundwork for more advanced projects like smart security systems and air quality monitoring, which I’ll be working on in the upcoming internship tasks.

OUTPUT

![Image](https://github.com/user-attachments/assets/d24b5dc0-9f91-4068-b3c9-f8ddee5cd5ad)
