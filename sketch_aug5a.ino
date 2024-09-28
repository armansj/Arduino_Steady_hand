const int numKeys = 6;  
const int resistorPins[numKeys] = {A0, A1, A2, A3, A4, A5}; 
const int buzzerPin = 8; 

const int resistorValues[numKeys] = {47000, 6800, 5100, 68000, 20000, 10000};  // Example resistor values

const int notes[numKeys] = {200, 294, 330, 400, 490, 480};  // C4, D4, E4, F4, G4, A4

int threshold = 300; 

void setup() {
  pinMode(buzzerPin, OUTPUT); 
  Serial.begin(9600);  
}

void playTone(int frequency) {
  tone(buzzerPin, frequency);  // Play tone on buzzer
}

void stopTone() {
  noTone(buzzerPin);  // Stop the tone
}

void loop() {
  int detectedNote = -1;

  for (int i = 0; i < numKeys; i++) {
    int sensorValue = analogRead(resistorPins[i]);  // Read the analog value from each pin
    Serial.print("Pin A");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(sensorValue);  

    if (sensorValue > threshold) {
      detectedNote = notes[i];
      Serial.print("Detected touch on pin A");
      Serial.print(i);
      Serial.print(". Playing note: ");
      Serial.println(notes[i]);
      break;  
    }
  }

  if (detectedNote != -1) {
    playTone(detectedNote);  
    delay(500);  
  } else {
    stopTone(); 
  }

  delay(100);  
}
