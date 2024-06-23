#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_5x12(
        KC_GRV,  KC_1,    KC_2,    KC_3,       KC_4,   KC_5,   KC_6,    KC_7,     KC_8,     KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,       KC_R,   KC_T,   KC_Y,    KC_U,     KC_I,     KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,       KC_F,   KC_G,   KC_H,    KC_J,     KC_K,     KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,       KC_V,   KC_B,   KC_N,    KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, MO(_RAISE), KC_ENT, KC_ENT, KC_SPC,  KC_SPC,   KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT
    ),
    [_RAISE] = LAYOUT_ortho_5x12(
        KC_GRV,  KC_1,    KC_2,    KC_3,       KC_4,   KC_5,   KC_6,    KC_7,     KC_8,     KC_9,    KC_0,    KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,       KC_R,   KC_T,   KC_LCBR, KC_UNDS,  KC_EQUAL, KC_RCBR, KC_P,    KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,       KC_F,   KC_G,   KC_LBRC, KC_MINUS, KC_PLUS,  KC_RBRC, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,       KC_V,   KC_B,   KC_N,    KC_M,     KC_LABK,  KC_RABK, KC_SLSH, KC_RSFT,
        QK_BOOT, KC_LALT, KC_LGUI, MO(_RAISE), KC_ENT, KC_ENT, KC_SPC,  KC_SPC,   KC_LEFT,  KC_DOWN, KC_UP,   KC_RGHT
    )
};
