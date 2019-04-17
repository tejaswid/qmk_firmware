/* Copyright 2019 Sundara Tejaswi Digumarti
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
 */
#include QMK_KEYBOARD_H

// We are defining a name for each layer for readability. 
// This name is used in the keymap matrix
#define _QWERTY 0
#define _SYMBOLS 1
#define _NAVI 2
#define _EXTRA 3

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMBOLS,
  NAVI,
  EXTRA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( /* Base Layer*/
  //				          ┌────────┬────────┬────────┬────────┬────────┐                                       ┌────────┬────────┬────────┬────────┬────────┐
     				           KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                   		  KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,
  //┌────────┬────────┼────────┼────────┼────────┼────────┼────────┤                         			         ├────────┼────────┼────────┼────────┼────────┼────────┬────────┐
     KC_ESC  ,KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                          				      KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_MINS ,KC_EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         			         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PGUP ,KC_CAPS  ,KC_A   ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                          				      KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,KC_BSLS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤       									               ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PGDN ,KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,       			 						                KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,KC_1    ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤       									               ├────────┼────────┼────────┴────────┼────────┼────────┼────────┤
     KC_LGUI ,KC_5    ,KC_6    ,KC_7    ,KC_8    ,    	   KC_BSPC ,        								                KC_BSPC ,         KC_LBRC ,KC_RBRC ,KC_GRV  ,KC_2    ,KC_3    ,
  //└────────┴────────┴────────┴────────┴────────┘		    └────────┼────────┬────────┐   ┌────────┬────────┼────────┘		     └────────┴────────┴────────┴────────┴────────┘
                                             	  		  		          KC_HOME , KC_INS ,   	KC_END  ,KC_END  ,
  //                                        	  		  		         └────────┴────────┘   └────────┴────────┘
     									    	  		  		                            KC_BSPC , KC_BSPC,   	KC_ENT  ,KC_SPC  
  //										   	  		  		                           └────────┴────────┘   └────────┴────────┘
  )

  // [_SYMBOLS] = LAYOUT( /* SYMBOLS LAYER */
  // //                  ┌────────┬────────┬────────┬────────┬────────┐                                       ┌────────┬────────┬────────┬────────┬────────┐
  //                      KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5                                             KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,
  // //┌────────┬────────┼────────┼────────┼────────┼────────┼────────┤                                       ├────────┼────────┼────────┼────────┼────────┼────────┬────────┐
  //    KC_ESC  ,KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T                                             KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_MINS ,KC_EQL
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_PGUP ,KC_CAPS  ,KC_A    ,KC_S    ,KC_D    ,KC_F   ,KC_G                                             KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,KC_BSLS
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                       ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_PGDN ,KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,                                        KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                                       ├────────┼────────┼────────┴────────┼────────┼────────┼────────┤
  //    KC_LGUI ,        ,        ,        ,        ,         KC_BSPC ,                                        KC_BSPC ,         KC_LBRC ,KC_RBRC ,KC_GRV  ,
  // //└────────┴────────┴────────┴────────┴────────┘        └────────┼────────┬────────┐   ┌────────┬────────┼────────┘        └────────┴────────┴────────┴────────┴────────┘
  //                                                                   KC_HOME , KC_INS      KC_END  ,KC_END  ,
  // //                                                               └────────┴────────┘   └────────┴────────┘
  //                                                                   KC_BSPC , KC_BSPC     KC_ENT  ,KC_SPC  
  // //                                                               └────────┴────────┘   └────────┴────────┘
  // ),

  // [_NAVI] = LAYOUT(),

  // [_EXTRA] = LAYOUT(),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // switch (keycode) {
  //   case QMKBEST:
  //     if (record->event.pressed) {
  //       // when keycode QMKBEST is pressed
  //       SEND_STRING("QMK is the best thing ever!");
  //     } else {
  //       // when keycode QMKBEST is released
  //     }
  //     break;
  //   case QMKURL:
  //     if (record->event.pressed) {
  //       // when keycode QMKURL is pressed
  //       SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
  //     } else {
  //       // when keycode QMKURL is released
  //     }
  //     break;
  // }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
