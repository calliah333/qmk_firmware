// Copyright 2022 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <print.h>
// #include <assert.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(

      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,  KC_PGUP,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,  KC_END,  KC_PGDN,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,          KC_DOT,  KC_SLSH,          KC_RSFT,                   KC_UP,
      KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_RALT, MO(2),   MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

  [1] = LAYOUT(
      KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_SCLN, UC(0x03c2), UC(0x03b5), UC(0x03c1), UC(0x03c4), UC(0x03c5), UC(0x03b8), UC(0x03b9), UC(0x03bf), UC(0x03c0), KC_LBRC, KC_RBRC, KC_TRNS,
      KC_TRNS, UC(0x03b1), UC(0x03c3), UC(0x03b4), UC(0x03d5), UC(0x03b3), UC(0x03b7), UC(0x03be), UC(0x03ba), UC(0x03bb), KC_TRNS, KC_TRNS,          KC_TRNS,
      KC_TRNS, UC(0x03b6), UC(0x03c7), UC(0x03c8), UC(0x03c9), UC(0x03b2), UC(0x03bd), UC(0x03bc), KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_UP,
      KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), //  if F (03d5) gives the wrong code, then attempt UC(0x06c6)

  [2] = LAYOUT(
      KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_SCLN, UC(0x0385), UC(0x0395), UC(0x03a1), UC(0x03a4), UC(0x03a5), UC(0x0398), UC(0x0399), UC(0x039f), UC(0x03a0), KC_LBRC, KC_RBRC, KC_TRNS,
      KC_TRNS, UC(0x0391), UC(0x03a3), UC(0x0394), UC(0x03a6), UC(0x0393), UC(0x0397), UC(0x039e), UC(0x039a), UC(0x039b), KC_TRNS, KC_TRNS,          KC_TRNS,
      KC_TRNS, UC(0x0396), UC(0x03a7), UC(0x03a8), UC(0x03a9), UC(0x0392), UC(0x039d), UC(0x039c), KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                   KC_UP,
      KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};


// Simple matrix debug info
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  return true;
}
