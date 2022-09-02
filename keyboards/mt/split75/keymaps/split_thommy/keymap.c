/* Copyright 2022 Thommy Jakobsson
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Originating from iso keymap by Johannes Krude
 */

#include QMK_KEYBOARD_H

enum layer_names {
  BASE = 0,
  OVRLY_L,
  OVRLY_R,
  NR_LAYERS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base          ,-----------------------------------------.     ,-----------------------------------------------------.
  *                | ESC | F1  | F2  | F3  | F4  | F5  | F6  |     | F7  | F8  | F9  | F10 | F11 | F12 |Print| Ins | Del |
  * ,-----------.  |-----+-----+-----+-----+-----+-----+-----|     |-----+-----+-----+-----+-----+-----+-----------+-----|
  * |  8  |  9  |  |  ~  |  1  |  2  |  3  |  4  |  5  |  6  |     |  7  |  8  |  9  |  0  |  -  |  =  | Backspac  | Home|
  * |-----+-----|  |-----------------------------------------'  ,--------------------------------------------------+-----|
  * |  6  |  7  |  | Tab   |  Q  |  W  |  E  |  R  |  T  |     |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |         | PgUp|
  * |-----+-----|  |---------------------------------------.    `------------------------------------------+ Enter +-----|
  * |  4  |  5  |  | Caps    |  A  |  S  |  D  |  F  |  G  |     |  H  |  J  |  K  |  L  |  ;  |  '  |  #  |       | PgDn|
  * |-----+-----|  |-----------------------------------------.   `-------------------------------------------------+-----|
  * |  2  |  3  |  | Shift | > |  Z  |  X  |  C  |  V  |  B  |     |  N  |  M  |  ,  |  .  |   /   |  Shift  | Up  | End |
  * |-----+-----|  |-----------------------------------------'   ,-------------------------------------------+-----+-----|
  * |  0  |  1  |  | Ctrl  |  GUI |  Alt |   Space   |Space|     | Space         |  Alt  | APP | Ctrl  | Left| Down|Right|
  * `-----------'  `---------------------------------------'     `-------------------------------------------------------'
  */
  [BASE] = LAYOUT_iso(
//--------------------------------Left Hand-----------------------------------| |--------------------------------Right Hand------------------------------------------------
                KC_ESC,   KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,                KC_F7,  KC_F8,   KC_F9,  KC_F10,  KC_F11,   KC_F12,   KC_PSCR,  KC_INS,  KC_DEL,
KC_8,  KC_9,    KC_GRAVE, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,                 KC_7,   KC_8,    KC_9,   KC_0,    KC_MINUS, KC_EQUAL, KC_BSPC,           KC_HOME,
KC_6,  KC_7,    KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC,  KC_RBRC,                     KC_PGUP,
KC_4,  KC_5,    KC_CAPS,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT,  KC_NUHS,  KC_ENTER,          KC_PGDN,
KC_2,  KC_3,    KC_LSFT,  KC_NUBS, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,                 KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT,  KC_UP,   KC_END,
KC_0,  KC_1,    KC_LCTL,  KC_LGUI, KC_LALT, KC_SPC, MO(OVRLY_L),                  KC_SPC,         KC_RALT,MO(OVRLY_R) ,KC_RCTL,                     KC_LEFT,  KC_DOWN, KC_RIGHT
  ),

  [OVRLY_L] = LAYOUT_iso(
//--------------------------------Left Hand-----------------------------------| |--------------------------------Right Hand------------------------------------------------
                _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______, _______, RGB_VAD,RGB_VAI, RGB_MODE_FORWARD,
KC_9,  KC_0,    _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______, _______, _______,          RGB_MODE_REVERSE,
KC_7,  KC_8,    _______, _______, _______, _______, _______,   _______,           _______, _______, _______, _______, _______, _______, _______,                   BL_INC,
KC_5,  KC_6,    _______, _______, _______, _______, _______,   _______,           _______, _______, _______, _______, _______, _______, _______, _______,          BL_DEC,
KC_3,  KC_4,    _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______,          _______, _______, _______,
KC_1,  KC_2,    _______, _______, _______, _______, MO(OVRLY_L),                      _______,       _______,  MO(OVRLY_R), _______,                      _______, _______, _______
  ),

  [OVRLY_R] = LAYOUT_iso(
//--------------------------------Left Hand-----------------------------------| |--------------------------------Right Hand------------------------------------------------
                _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______, _______, RGB_VAD,RGB_VAI, RGB_MODE_FORWARD,
KC_9,  KC_0,    _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______, _______, _______,          RGB_MODE_REVERSE,
KC_7,  KC_8,    _______, _______, _______, _______, _______,   _______,           _______, _______, _______, _______, _______, _______, _______,                   BL_INC,
KC_5,  KC_6,    _______, _______, _______, _______, _______,   _______,           _______, _______, _______, _______, _______, _______, _______, _______,          BL_DEC,
KC_3,  KC_4,    _______, _______, _______, _______, _______,   _______, _______,           _______, _______, _______, _______, _______,          _______, _______, _______,
KC_1,  KC_2,    _______, _______, _______, KC_BSPC, MO(OVRLY_L),                      _______,       _______,  MO(OVRLY_R), _______,                      _______, _______, _______
  ),
};

const rgblight_segment_t PROGMEM led_base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_RED}
);
const rgblight_segment_t PROGMEM led_ovrly_l[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM led_ovrly_r[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_TURQUOISE}
);
const rgblight_segment_t PROGMEM led_capslock[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 8, HSV_OFF}
);
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
	led_base_layer,
	led_ovrly_l,
	led_ovrly_r,
	led_capslock
);

void keyboard_post_init_user(void) {
	rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
	int highest_layer = get_highest_layer(state);

	rgblight_set_layer_state(highest_layer, true);
	for(int i=0; i < 3; i++) {
		if(i == highest_layer)
			continue;
		rgblight_set_layer_state(i, false);
	}

	return state;
}

bool led_update_user(led_t led_state) {
	if(led_state.caps_lock) {
		rgblight_blink_layer_repeat(3, 100, 10);
	} else {
		rgblight_blink_layer_repeat(3, 1, 1);
		rgblight_set_layer_state(3, false);
	}

	return true;
}

