/* Copyright 2021 Sleepdealer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _RAISE,
    _LOWER,
    _ADJUST
};

//Define custom keycodes
enum custom_keycodes {
    KC_LWR = SAFE_RANGE,
    KC_RSE,
    KC_ADJ
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_LCTL, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_GESC, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    /*Encoder Buttons*/  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
  //|--------|--------|--------|--------|--------|--------|--------|  |--------|--------|--------|--------|--------|--------|--------|
                                KC_LGUI, KC_RSE,  KC_SPC,  KC_NO,      KC_NO,   KC_ENT, KC_LWR,   KC_BSPC
                             //|--------|--------|--------|--------|  |--------|--------|--------|--------|

  ),

    [_RAISE] = LAYOUT(
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,                      KC_VOLU, KC_HOME, KC_PSCR, KC_PGUP, KC_SLCK, KC_CAPS,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,                      KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_INS,  KC_NO,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT,                      KC_VOLD, KC_END,  KC_DOWN, KC_PGDN, KC_PAUS, KC_NO,
  //|--------|--------|--------|--------|--------|--------|--------|  |--------|--------|--------|--------|--------|--------|--------|
                                KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO
                             //|--------|--------|--------|--------|  |--------|--------|--------|--------|
  ),

    [_LOWER] = LAYOUT(
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_TAB,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
  //|--------|--------|--------|--------|--------|--------|--------|  |--------|--------|--------|--------|--------|--------|--------|
                                KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO
                             //|--------|--------|--------|--------|  |--------|--------|--------|--------|
  ),

    [_ADJUST] = LAYOUT(
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------|--------|--------|--------|--------|--------|                    |--------|--------|--------|--------|--------|--------|
     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------|--------|--------|--------|--------|--------|--------|  |--------|--------|--------|--------|--------|--------|--------|
                                KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO
                             //|--------|--------|--------|--------|  |--------|--------|--------|--------|
  )

};

//Encoders
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { //LEFT
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) { // RIGHT
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

//Custom layer switching
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LWR:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_RSE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        case KC_ADJ:
            if (record->event.pressed) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            return false;
    }

    return true;
}

// OLED
// Code reused from Duckboard: https://github.com/doodboard/source-code/blob/main/duckboard_R2/keymaps/default/keymap.c
#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }


// WPM-responsive animation stuff here
#define IDLE_FRAMES 2
#define IDLE_SPEED 40 // below this wpm value your animation will idle

#define ANIM_FRAME_DURATION 200 // how long each frame lasts in ms
// #define SLEEP_TIMER 60000 // should sleep after this period of 0 wpm, needs fixing
#define ANIM_SIZE 636 // number of bytes in array, minimize for adequate firmware size, max is 1024

void oled_task_user(void) {

    oled_set_cursor(0,6);
    oled_write_P(PSTR("ILEX\n"), false);
    oled_write_P(PSTR("-----\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("MODE\n"), false);
    oled_write_P(PSTR("\n"), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("RAISE\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("LOWER\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("ADJ\n"), false);
            break;
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}
#endif
