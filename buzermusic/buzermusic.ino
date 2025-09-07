// ESP32 Song Player using PWM (LEDC) on a speaker or buzzer
const int speakerPin = 18; // Pin connected to speaker/buzzer

// Define the melody (frequencies in Hz)
// Example: "Mary Had a Little Lamb" snippet
int melody[] = { 262, 294, 330, 262, 262, 262, 294, 294, 294, 262 };

// Duration of each note in milliseconds
int noteDurations[] = { 500, 500, 500, 500, 500, 500, 500, 500, 500, 500 };

void setup() {
  // Attach the speaker pin to LEDC channel 0
  ledcAttachPin(speakerPin, 0);
}

void loop() {
  // Play the melody
  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    int freq = melody[i];          // Note frequency
    int dur = noteDurations[i];    // Note duration

    ledcSetup(0, freq, 8);        // Configure LEDC channel: frequency and 8-bit resolution
    ledcWrite(0, 128);            // Start tone at 50% duty cycle

    delay(dur);                    // Play note for its duration
    ledcWrite(0, 0);               // Stop tone
    delay(50);                     // Short gap between notes
  }

  delay(2000);                     // Wait 2 seconds before repeating the melody
}
