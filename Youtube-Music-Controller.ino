#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

const int buttonMinusPin = 13;
const int buttonPlusPin = 14;
const int buttonPlayPausePin = 15;
const int buttonNextPin = 18;
const int buttonPrevPin = 19;
const int debounceDelay = 200;  // debounce time in milliseconds

int lastButtonMinusState = HIGH;
int lastButtonPlusState = HIGH;
int lastButtonPlayPauseState = HIGH;
int lastButtonNextState = HIGH;
int lastButtonPrevState = HIGH;

void setup() {
  Serial.begin(115200);
  bleKeyboard.begin();

  pinMode(buttonMinusPin, INPUT_PULLUP);
  pinMode(buttonPlusPin, INPUT_PULLUP);
  pinMode(buttonPlayPausePin, INPUT_PULLUP);
  pinMode(buttonNextPin, INPUT_PULLUP);
  pinMode(buttonPrevPin, INPUT_PULLUP);
}

void loop() {
  if (bleKeyboard.isConnected()) {

    // Check the state of the button for '-'
    int currentButtonMinusState = digitalRead(buttonMinusPin);
    if (currentButtonMinusState == LOW && lastButtonMinusState == HIGH) {
      bleKeyboard.write(KEY_NUM_MINUS);
      Serial.println("Sent Numpad - key");
      delay(debounceDelay);
    }
    lastButtonMinusState = currentButtonMinusState;

    // Check the state of the button for '+'
    int currentButtonPlusState = digitalRead(buttonPlusPin);
    if (currentButtonPlusState == LOW && lastButtonPlusState == HIGH) {
      bleKeyboard.write(KEY_NUM_PLUS);
      Serial.println("Sent Numpad + key");
      delay(debounceDelay);
    }
    lastButtonPlusState = currentButtonPlusState;

    // Check the state of the button for 'p'
    int currentButtonPlayPauseState = digitalRead(buttonPlayPausePin);
    if (currentButtonPlayPauseState == LOW && lastButtonPlayPauseState == HIGH) {
      bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
      Serial.println("Sent play/pause key");
      delay(debounceDelay);
    }
    lastButtonPlayPauseState = currentButtonPlayPauseState;

    // Check the state of the button for 'n'
    int currentButtonNextState = digitalRead(buttonNextPin);
    if (currentButtonNextState == LOW && lastButtonNextState == HIGH) {
      bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
      Serial.println("Sent next song key");
      delay(debounceDelay);
    }
    lastButtonNextState = currentButtonNextState;

    // Check the state of the button for 'b'
    int currentButtonPrevState = digitalRead(buttonPrevPin);
    if (currentButtonPrevState == LOW && lastButtonPrevState == HIGH) {
      bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
      Serial.println("Sent previous song key");
      delay(debounceDelay);
    }
    lastButtonPrevState = currentButtonPrevState;
  }
}
