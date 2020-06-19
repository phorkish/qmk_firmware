# Rainbow Octopus 🏳️‍🌈🐙

Based off the [Emoji keymap](../emoji)

# Unicode Setup

[Unicode input in QMK](https://beta.docs.qmk.fm/using-qmk/software-features/feature_unicode#input-modes) works by inputting a sequence of characters to the OS, sort of like a macro. Unfortunately, the way this is done differs for each platform. Specifically, each platform requires a different combination of keys to trigger Unicode input. Therefore, a corresponding input mode has to be set in QMK.

On this keymap the default unicode mode is `UC_LNX`. You can change it to the next keymap in the list by triple tapping and holding key 1, and to the previous in the list by triple tapping and holding key 2.

## Unicode Mode List
- UC_LNX
- UC_OSX
- UC_WIN
- UC_WINC

# Keymap
This keyboard uses the [tap dance](https://beta.docs.qmk.fm/using-qmk/software-features/feature_tap_dance) feature to allow each key to input one of several emojis. 
This means you can click once or click multiple times in rapid succession for different emojis.

## Key One

- 1 Tap: 🏳️‍🌈
- 2 Taps: 💯
- 3 Taps: 💩
- 3 Taps and hold: go to the previous unicode mode in the list

## Key Two

- 1 Tap: 🐙
- 2 Taps: 🐋
- 3 Taps: 🐘
- 3 Taps and hold: go to the next unicode mode in the list
