# Youtube Music Controller

This repository hosts a project that allows for simplified control over YouTube Music on Android. Should you wish to create a similar version, you might find this useful. The project combines T-vK's `ESP32-BLE-Keyboard` library with Android's `Tasker` app to execute various actions.

## Key Discoveries:
1. **YouTube Music's AndroidManifest.xml**: I uncovered the intents used by the app's widget - `com.google.android.youtube.music.pendingintent.controller_widget_like` and `com.google.android.youtube.music.pendingintent.controller_widget_dislike`. These can be employed within Tasker to control the app.
   
2. **ESP32-BLE-Keyboard Library**: This library offers handy keys for control like `KEY_MEDIA_PLAY_PAUSE`, `KEY_MEDIA_NEXT_TRACK`, and `KEY_MEDIA_PREVIOUS_TRACK`.

## Workflow:
The Tasker task gets activated upon sending the `-` or `+` numpad key from the ESP-32, provided Tasker detects the ESP-32 keyboard's connection.

## Dependencies:
- [ESP32-BLE-Keyboard Library](https://github.com/T-vK/ESP32-BLE-Keyboard)
- [Tasker for Android](https://play.google.com/store/apps/details?id=net.dinglisch.android.taskerm&hl=en&gl=US)

## How to Use:
Detailed instructions on how to set up and utilize this project will be provided soon. Stay tuned!

---

Feel free to contribute, raise issues, or suggest enhancements. Your feedback and contributions are always welcome!

---

