// Copyright 2021 Sleepdealer (@Sleepdealr)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "yamp.h"



bool process_record_kb(uint16_t keycode, keyrecord_t* record) {
    if (!process_record_user(keycode, record)) {
        return false;
    }
    switch (keycode) {
        case MC_00:
            if (record->event.pressed) {
                SEND_STRING("00");
            }
            break;
    }
    return true;
}


// OLED
#ifdef OLED_ENABLE
__attribute__((weak)) oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }
__attribute__((weak)) void oled_task_user(void) {
    // Credit to u/Pop-X- for the initial code. You can find his commit here https://github.com/qmk/qmk_firmware/pull/9264/files#diff-303f6e3a7a5ee54be0a9a13630842956R196-R333.


    oled_set_cursor(0, 4);
    oled_write_P(PSTR("YET\nANTHRMACROPAD\n"), false);
    oled_write_P(PSTR("-----\n"), false);
    // Host Keyboard Layer Status
    oled_write_P(PSTR("MODE\n"), false);
    oled_write_P(PSTR("\n"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("BASE\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("FUNC\n"), false);
            break;
    }
}
#endif
