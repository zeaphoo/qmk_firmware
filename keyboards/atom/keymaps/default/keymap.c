#include QMK_KEYBOARD_H

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//     /* QWERTY - GRID COMPATIBLE
//      * .--------------------------------------------------------------------------------------------------------------------------------------.
//      * | ESC    |   GRV  | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | BACKSP |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
//      * | TAB             | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \      |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
//      * | LCTRL1          | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | ENTER           |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
//      * | LSHIFT          | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | UP     | RSHIFT          |
//      * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
//      * | LCTRL           | LALT   |  LGUI  | SUPER  |    SPACE        |       SPACE     | SUPER  | RGUI   | LEFT   | DOWN   | RIGHT  | FN     |
//      * '--------------------------------------------------------------------------------------------------------------------------------------'
//      */
//     [0] = LAYOUT_semi_standard_67( /* QWERTY */
//         KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
//         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
//         KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,  KC_PGUP,
//         KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,   KC_PGDN,
//         BL_STEP, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_SPC,  KC_RCTL, KC_RALT, MO(1),   KC_LEFT, KC_DOWN, KC_RGHT
//     ),

//     /* FUNCTION
//      * .--------------------------------------------------------------------------------------------------------------------------------------.
//      * |        |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | DEL    |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
//      * |                 | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | PAGEUP |        | INSERT |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
//      * |                 | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |                 |
//      * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
//      * |                 | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | UP     | Mute            |
//      * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
//      * | RCTRL           | RALT   |        |        |                 |                 |        |        | LEFT   | DOWN   | RIGHT  | FN     |
//      * '--------------------------------------------------------------------------------------------------------------------------------------'
//      */
//     [1] = LAYOUT_semi_standard_67( /* FUNCTION LAYER*/
//         KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
//         KC_SLCK, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_PAUS, KC_PSCR,
//         KC_CAPS, KC_BTN5, KC_BTN4, KC_BTN3, KC_BTN2, KC_ACL0, KC_ACL2, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY, _______, _______, _______, KC_WH_U,
//         KC_NLCK, _______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_END,  KC_HOME, _______, _______, KC_MS_U, KC_WH_D,
//         _______, _______, MO(1),   _______, _______, KC_BTN1, KC_BTN1, _______, _______, _______, _______, MO(1),   KC_MS_L, KC_MS_D, KC_MS_R
//     ),
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT_semi_standard_67(
		KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,
		KC_LCTL, KC_LALT, KC_LGUI, MT(MOD_LCTL | MOD_LSFT, KC_NO), KC_SPC, KC_SPC,
		KC_9, KC_8, KC_BSPC, KC_EQL, KC_0, KC_MINS,
		KC_O, KC_I, KC_BSLS, KC_RBRC, KC_P, KC_LBRC,
		KC_L, KC_K, KC_ENT, KC_SCLN, KC_QUOT, KC_DOWN, KC_RGHT, FN_MO13,
		KC_DOT, KC_COMM, KC_RSFT, KC_SLSH, KC_UP, KC_LEFT, KC_RGUI, MT(MOD_LCTL | MOD_LSFT, KC_NO)),

	LAYOUT_semi_standard_67(
		KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_PSCR,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_RCTL, KC_RALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_F9, KC_F8, KC_DEL, KC_F12, KC_F10, KC_F11,
		KC_TRNS, KC_TRNS, KC_INS, KC_TRNS, KC_HOME, KC_PGUP,
		KC_PAUS, KC_SLCK, KC_TRNS, KC_END, KC_PGDN, KC_VOLD, KC_MNXT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_VOLU, KC_MPRV, KC_TRNS, KC_TRNS),

};
