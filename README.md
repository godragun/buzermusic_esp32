
# buzermusic_esp32

## Overview

`buzermusic_esp32` is a project designed for playing music using a buzzer connected to an ESP32 microcontroller. This project demonstrates how to generate musical tones using simple code and control logic on the ESP32, making it ideal for educational, hobbyist, or embedded systems applications.

## Features

- Play predefined melodies through a piezo buzzer.
- Simple API for adding and customizing tunes.
- Easy integration with other ESP32 projects.
- Example code for tone generation and timing.

## Getting Started

### Hardware Requirements

- ESP32 development board
- Piezoelectric buzzer
- Jumper wires
- Breadboard (optional)

### Wiring

1. Connect the positive pin of the buzzer to a GPIO pin on the ESP32 (e.g., GPIO 15).
2. Connect the negative pin of the buzzer to the GND of the ESP32.

### Software Setup

1. Clone this repository:
    ```bash
    git clone https://github.com/godragun/buzermusic_esp32.git
    ```
2. Open the project in your preferred IDE (e.g., Arduino IDE, PlatformIO).
3. Select the correct ESP32 board and port.
4. Upload the code to your ESP32.

## Example Usage

Below is an example of how to play a simple melody:

```cpp
#define BUZZER_PIN 15

int melody[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4 };
int noteDurations[] = { 4, 8, 8, 4, 4, 4, 4, 4 };

void setup() {
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    delay(noteDuration * 1.30);
    noTone(BUZZER_PIN);
  }
}

void loop() {
  // Nothing to do here
}
```

## Customizing Melodies

- Modify the `melody` and `noteDurations` arrays to play different tunes.
- Use standard note definitions (e.g., NOTE_C4, NOTE_G4). If not defined, include a notes header file.

## License

This project is licensed under the MIT License.

## Author

[godragun](https://github.com/godragun)



Feel free to contribute by submitting issues or pull requests!
````
