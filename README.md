# Youtube Music Controller

This repository hosts a project that allows for simplified control over YouTube Music on Android. Should you wish to create a similar version, you might find this useful. The project combines T-vK's `ESP32-BLE-Keyboard` library with Android's `Tasker` app to execute various actions.

## Key Discoveries:
1. [**YouTube Music's AndroidManifest.xml**](https://pastebin.com/hZAZ4B8j): I uncovered the intents used by the app's widget - `com.google.android.youtube.music.pendingintent.controller_widget_like` and `com.google.android.youtube.music.pendingintent.controller_widget_dislike`. These can be employed within Tasker to control the app.
   
2. **ESP32-BLE-Keyboard Library**: This library offers handy keys for control like `KEY_MEDIA_PLAY_PAUSE`, `KEY_MEDIA_NEXT_TRACK`, and `KEY_MEDIA_PREVIOUS_TRACK`.

## Workflow:

The system operates as follows:

1. **Tasker Activation**: When the `-` or `+` numpad key is sent from the ESP-32, Tasker gets activated, assuming it detects the ESP-32 keyboard's connection.
2. **Other Commands**: Commands such as play/pause, skip, and back are managed directly by the ESP-32 without needing Tasker.

This ensures a seamless interaction between the ESP-32 and YouTube Music on Android.

## Dependencies:
- [ESP32-BLE-Keyboard Library](https://github.com/T-vK/ESP32-BLE-Keyboard)
- [Tasker for Android](https://play.google.com/store/apps/details?id=net.dinglisch.android.taskerm&hl=en&gl=US)

## Tasker Setup:

For those following my tutorial, setting up Tasker is straightforward. You'll need to import two profiles:

1. **Like Profile**: [Download Here](https://taskernet.com/shares/?user=AS35m8nw28MNvVfgmOBywOnzEZyZSumABPSUoM2%2B5ClQ0jYXGuLQOg3lMLnYZX%2F0Qg%2B0Wz%2BP&id=Profile%3ALike)
2. **Dislike Profile**: [Download Here](https://taskernet.com/shares/?user=AS35m8nw28MNvVfgmOBywOnzEZyZSumABPSUoM2%2B5ClQ0jYXGuLQOg3lMLnYZX%2F0Qg%2B0Wz%2BP&id=Profile%3ADislike)

Simply click on the provided links to import them into Tasker.

## How to Build:

To create this controller, follow these steps:

1. **Flash the ESP-32**:
   - Connect the ESP-32 to your computer. Ensure you have all necessary drivers installed.
   - Utilize the Arduino IDE to upload the code provided in this repo to the ESP-32.
   
2. **Button Connections**:
    - Connect one side of each button to a common ground.
    - Connect the other side of each button to the corresponding GPIO pin on the ESP-32:
      - **Dislike**: Pin 13
      - **Like**: Pin 14
      - **Play/Pause**: Pin 15
      - **Next Song**: Pin 18
      - **Previous Song**: Pin 19

3. **Assembly**: After making all the connections, i fitted all components into an enclosure to conceal the cables and give it a professional appearance.

Once assembled, your controller is ready for use with YouTube Music, just connect it using bluetooth to your Android device.

## Finished Build:

![WhatsApp Image 2023-10-26 at 14 15 07_8c7b3e8a](https://github.com/mattestanka/Youtube-Music-Controller/assets/53266220/5dc99bad-ac48-4968-824a-dcc554dbc227)

---

Feel free to contribute, raise issues, or suggest enhancements. Your feedback and contributions are always welcome!

---

