
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_numpad_4x4(
        KC_7, KC_8, KC_9, KC_PPLS,  // Rij 0
        KC_4, KC_5, KC_6, KC_PMNS,  // Rij 1
        KC_1, KC_2, KC_3, KC_PENT,  // Rij 2
        KC_0, KC_A, KC_DOT, KC_BSPC // Rij 3 (voorbeeld)
    )
};
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