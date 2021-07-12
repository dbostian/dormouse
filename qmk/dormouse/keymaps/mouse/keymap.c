#include "kb.h"

enum my_layers{
    _QWERTY,
    _NAV,
    _FN,
    _NUM,
    _SYM,
    _MSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_QWERTY] = KEYMAP(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(2), KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT, 
		KC_LCTL, KC_LALT, LT(5, KC_SPC), MO(1), LT(4, KC_SPC), MO(3), KC_LGUI),

	[_NAV] = KEYMAP(
		KC_GRV, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_INS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, 
		KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_DEL, KC_TRNS, KC_TRNS, KC_SCLN, KC_QUOT, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS, KC_SLSH, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_FN] = KEYMAP(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, 
		KC_CAPS, KC_PSCR, KC_SLCK, KC_PAUS, KC_NLCK, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11, KC_F12, KC_TRNS, 
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_NUM] = KEYMAP(
		KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_EQL, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_SYM] = KEYMAP(
		KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    
    [_MSE] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_WH_D, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};



//uint32_t layer_state_set_user(uint32_t state) {
//    switch (biton32(state)) {
//        case _NAV:
//            rgblight_setrgb (0x22,  0x8B, 0x22);    //Green/Forest
//            break;
//        case _FN:
//            rgblight_setrgb (0xDC,  0x14, 0xC3);    //Red/Crimson
//            break;
//        case _NUM:
//            rgblight_setrgb (0x19,  0x19, 0x70);    //Blue/Midnight
//            break;
//        case _SYM:
//            rgblight_setrgb (0xFF,  0xA5, 0x00);    //Orange
//            break;
//        default: //  for any other layers, or the default layer
//            rgblight_setrgb (0xFF,  0xD7, 0x00);    //Yellow/Gold
//            break;
//        }
//    return state;
//}


//const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
//	keyevent_t event = record->event;
//
//	switch (id) {
//
//	}
//	return MACRO_NONE;
//}
//
//void matrix_init_user(void) {
//}
//
//void matrix_scan_user(void) {
//}
//
//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//	return true;
//}
//
//void led_set_user(uint8_t usb_led) {
//
//	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
//		
//	} else {
//		
//	}
//
//	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
//		
//	} else {
//		
//	}
//
//	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
//		
//	} else {
//		
//	}
//
//	if (usb_led & (1 << USB_LED_COMPOSE)) {
//		
//	} else {
//		
//	}
//
//	if (usb_led & (1 << USB_LED_KANA)) {
//		
//	} else {
//		
//	}
//
//}