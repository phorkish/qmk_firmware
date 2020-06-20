#include QMK_KEYBOARD_H

enum tapdance_keycodes {
    TD_KEY_1,
    TD_KEY_2,
};

void dance_key_one (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3 && state->pressed) {
        cycle_unicode_input_mode(+1);
        send_unicode_hex_string("2795"); // ➕
    } else {
        if (state->count == 1) {
            send_unicode_hex_string("1F3F3 FE0F 200D 1F308"); // 🏳️‍🌈
            reset_tap_dance (state);
        } else if (state->count == 2) {
            send_unicode_hex_string("1F4AF"); // 💯
            reset_tap_dance (state);
        } else if (state->count == 3) {
            send_unicode_hex_string("1F4A9"); // 💩
            reset_tap_dance (state);
        }
    }
}

void dance_key_two (qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3 && state->pressed) {
        cycle_unicode_input_mode(-1);
        send_unicode_hex_string("2796"); // ➖
    } else {
        if (state->count == 1) {
            send_unicode_hex_string("1F419"); // 🐙
            reset_tap_dance (state);
        } else if (state->count == 2) {
            send_unicode_hex_string("1F40B"); // 🐋
            reset_tap_dance (state);
        } else if (state->count == 3) {
            send_unicode_hex_string("1F418"); // 🐘
            reset_tap_dance (state);
        }
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_KEY_1] = ACTION_TAP_DANCE_FN(dance_key_one),
    [TD_KEY_2] = ACTION_TAP_DANCE_FN(dance_key_two),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        TD(TD_KEY_1),
        TD(TD_KEY_2)
    ),
};
