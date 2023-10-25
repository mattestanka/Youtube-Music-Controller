
#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}

void loop() {
  if (bleKeyboard.isConnected()) {

    // Check if data is available to read from the Serial Monitor
    if (Serial.available()) {

      // Read the incoming byte
      char incomingByte = Serial.read();

      // Check if the incoming byte is '-'
      if (incomingByte == '-') {
        Serial.println("Sending Numpad - key...");
        bleKeyboard.write(KEY_NUM_MINUS);
      }
      if (incomingByte == '+') {
        Serial.println("Sending Numpad + key...");
        bleKeyboard.write(KEY_NUM_PLUS);
      }
      else if (incomingByte == 'p') {
        Serial.println("Sending play/pause key...");
        bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
      }
      else if (incomingByte == 'n') {
        Serial.println("Sending next song key...");
        bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
      }
      else if (incomingByte == 'b') {
        Serial.println("Sending previus song key...");
        bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
      }          
    }
  }
}