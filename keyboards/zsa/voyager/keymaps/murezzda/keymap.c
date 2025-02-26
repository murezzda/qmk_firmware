// Copyright 2023 ZSA Technology Labs, Inc <@zsa>
// Copyright 2023 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Main Layer
    [0] = LAYOUT(
        RGB_TOG,KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_SPC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        CW_TOGG, LALT_T(KC_A), LGUI_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,    KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RGUI_T(KC_L), KC_COLN, KC_DQUO,
        KC_NO,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,    KC_COMMA,KC_DOT,  KC_SLSH, KC_NO,
                                LT(2,KC_TAB), LT(1,KC_ENT),                       LT(1,KC_SPC), LT(2,KC_BSPC)
    ),
    // Movement Layer
    [1] = LAYOUT(
        KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
        MS_BTN3,   KC_NO,   KC_NO,   KC_DQUO, KC_PERC, KC_NO,                        KC_NO,   KC_PGUP, KC_PGDN, KC_NO,   KC_NO,  KC_NO,
        KC_NO,   KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,  KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_S,    KC_V,    KC_NO,                        RCTL(KC_W), RCTL(KC_B),   KC_NO,   KC_NO,   KC_NO,  KC_NO,
                                                     _______, _______,    KC_ESC, KC_NO
    ),
    // Additional Key Layer
    [2] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_ASTR, KC_LABK, KC_RABK, KC_PLUS, KC_AT,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_EQL,  KC_LPRN, KC_RPRN, KC_HASH, KC_PERC, KC_GRV,
        KC_NO,   KC_LALT, KC_LGUI, KC_LSFT, KC_LCTL, KC_NO,                        KC_MINS, KC_LBRC, KC_RBRC, KC_DLR,  KC_SCLN, KC_QUOT,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_UNDS, KC_LCBR, KC_RCBR, KC_TILD, KC_NO,   KC_NO,
                                                     _______, _______,    _______, _______
    ),
};
