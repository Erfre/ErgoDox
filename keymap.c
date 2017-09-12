#include "lets_split.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0


#define CTL_ESC     CTL_T(KC_ESC)               // Tap for Esc, hold for Ctrl



enum custom_keycodes {
  QWERTY = SAFE_RANGE,

};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /******* Base Layer ****************************************************************************************************
     *
     * ,------------------------------------------------------.       ,------------------------------------------------------.
     * | Caps       |   1  |   2  |   3  |   4  |   5  | VolD |       |  VolU |   6  |   7  |   8  |   9  |   0  | =+ Special |
     * |------------+------+------+------+------+-------------|       |------+------+------+------+------+------+------------|
     * |Esc         |   Q  |   W  |   E  |   R  |   T  |   [  |       |  ]   |   Y  |   U  |   I  |   O  |   P  | \|   Media |
     * |------------+------+------+------+------+------|      |       |      |------+------+------+------+------+------------|
     * | Tab        |  ^A  |   S  |   D  |  ^F  |   G  |------|       |------|   H  |  ^J  |   K  |   L  |  ^;  | '"  Symbol |
     * |------------+------+------+------+------+------|    ( |       | )    |------+------+------+------+------+------------|
     * | Shift      |   Z  |   X  |   C  |   V  |   B  |      |       |      |   N  |   M  |   ,  |   .  |  /   |   Capitals |
     * `------------+------+------+------+------+-------------'       `-------------+------+------+------+------+------------'
     *      | LCtrl | GUI  |Alt  | Up   | Down |                                   | Left | Right | plus|  ?   |   Underscore|
     *      `-----------------------------------'                                   `-----------------------------------'
     *                                          ,-------------.       ,-------------.
     *                                          | Home | Pgup |       | Play | RAlt |
     *                                   ,------|------|------|       |------+------+------.
     *                                   |      |      |Pgdown|       |  Prev|      |      |
     *                                   |Backsp| Del  |------|       |------| Enter| Space|
     *                                   |      |      | Shif |       | Next |      |      |
     *                                   `--------------------'       `--------------------'
     */
 //left hand
[_QWERTY] = KEYMAP(\
 KC_CAPS,      KC_1,      KC_2,      KC_3,      KC_4,      KC_5,     KC_VOLD                     ,KC_VOLU,       KC_6,     KC_7,     KC_8,      KC_9,    KC_0,        KC_SPC
,KC_ESC,       KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,     KC_LBRC                     ,KC_RBRC,       KC_Y,     KC_U,     KC_I,      KC_O,    KC_P,        KC_SPC
,KC_TAB,       KC_A,      KC_S,      KC_D,      KC_F,      KC_G,     KC_LPRN                     ,KC_RPRN,       KC_H,     KC_J,     KC_K,      KC_L,    KC_SCLN,     KC_QUOT
,KC_LSFT,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,     KC_HOME                     ,KC_RCTL,       KC_N,     KC_M,     KC_COMM,   KC_DOT,  KC_SLASH,    KC_MINS
,CTL_ESC,      KC_LGUI,   KC_LALT,   KC_UP,     KC_DOWN   ,KC_PGDN,  KC_PGUP                     ,KC_MPLY,       KC_MPRV,  KC_LEFT,  KC_RGHT,   KC_PLUS, KC_QUES,     KC_UNDS

                                                    ,KC_BSPC, KC_DEL, KC_LSFT                    ,KC_MNXT, KC_ENT, KC_SPC
)
};
