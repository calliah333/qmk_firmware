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
