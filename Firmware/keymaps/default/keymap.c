
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_numpad_4x4(
        KC_P7, KC_P4, KC_P1, KC_P0,  // Rij 0
        KC_P8, KC_P5, KC_P2, KC_PPLS,  // Rij 1
        KC_P9, KC_P6, KC_P3, KC_PMNS,  // Rij 2
        KC_DEL, KC_BSPC, KC_DOT, KC_PENT // Rij 3 (voorbeeld)
    )
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }, // Laag 0: Links = Zachter, Rechts = Harder
};
#endif
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */


