#include QMK_KEYBOARD_H

enum layers {
  _BL = 0,
  _NV
};

enum custom_keycodes {
  KC_DBL0 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BL: (Base Layer) Default Layer
 * ,-------------------.
 * | NV | /  | *  |-/FN|
 * |----|----|----|----|
 * | 7  | 8  | 9  |    |
 * |----|----|----| +  |
 * | 4  | 5  | 6  |    |
 * |----|----|----|----|
 * | 1  | 2  | 3  |    |
 * |----|----|----| En |
 * | 0  | 00 | .  |    |
 * `-------------------'
 */
  [_BL] = LAYOUT(
    TG(_NV),  KC_PSLS,  KC_PAST,   MO(KC_PMNS), \
    KC_P7,    KC_P8,    KC_P9,              \
    KC_P4,    KC_P5,    KC_P6,     KC_PPLS, \
    KC_P1,    KC_P2,    KC_P3,              \
    KC_P0,    KC_DBL0,  KC_PDOT,   KC_PENT
  ),

/* Keymap _NV: Navigation layer
 * ,-------------------.
 * |INS |HOME|PGUP|    |
 * |----|----|----|----|
 * |DEL |END |PGDN|    |
 * |----|----|----|    |
 * |    |    |    |    |
 * |----|----|----|----|
 * |    | UP |    |    |
 * |----|----|----|    |
 * |LEFT|DOWN|RIGH|    |
 * `-------------------'
 */
  [_NV] = LAYOUT(
    KC_INS,   KC_HOME,  KC_PGUP,   TG(_NV), \
    KC_DEL,   KC_END,   KC_PGDN,            \
    KC_NO,    KC_NO,      KC_NO,   KC_NO,   \
    KC_NO,    KC_UP,      KC_NO,            \
    KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_NO
  )
};
