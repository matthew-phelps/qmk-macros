#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_contributions.h"
#include "keymap_danish.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  DK_LSPO,
  DK_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    TT(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,                                          KC_NO,          DK_ACUT,        DK_AE,          DK_OSTR,        DK_ARNG,        KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(KC_F4),    KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_NO,                                          KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           DK_QUOT,        KC_NO,          
    KC_TAB,         LGUI_T(KC_A),   LALT_T(KC_R),   LCTL_T(KC_S),   LSFT_T(KC_T),   KC_G,           KC_CAPSLOCK,                                                                    KC_NO,          KC_M,           LSFT_T(KC_N),   LCTL_T(KC_E),   LALT_T(KC_I),   KC_O,           KC_ENTER,       
    KC_TRANSPARENT, KC_Z,           KC_X,           LT(3,KC_C),     LT(2,KC_D),     LT(3,KC_V),                                     KC_K,           KC_H,           KC_COMMA,       RALT_T(KC_DOT), DK_SLSH,        KC_NO,          
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEAD,          TT(1),          KC_ESCAPE,                                                                                                      LT(7,KC_ENTER), TT(3),          TT(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    LT(4,KC_SPACE), LT(5,KC_TAB),   LT(6,KC_ESCAPE),                LT(3,KC_ENTER), LT(2,KC_DELETE),KC_BSPACE
  ),
  [1] = LAYOUT_moonlander(
    RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RESET,          KC_NO,          KC_TRANSPARENT, KC_PC_UNDO,     LCTL(KC_Y),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_PC_COPY,     KC_UP,          KC_PC_CUT,      DK_DQUO,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      LCTL(LSFT(KC_Z)),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PC_PASTE,    KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        LSFT(KC_LCTRL), KC_PC_COPY,     KC_PC_PASTE,                                    KC_INSERT,      KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, TO(3),          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                          KC_ENTER,       KC_DELETE,      KC_BSPACE
  ),
  [2] = LAYOUT_moonlander(
    RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRACKET,    KC_NO,          KC_NO,          KC_NO,          KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_SLASH,    KC_KP_7,        KC_8,           KC_9,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCOLON,      KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_EQUAL,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DK_UNDS,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_ENTER,       
    KC_TRANSPARENT, KC_GRAVE,       KC_RALT,        KC_NO,          KC_TRANSPARENT, KC_BSLASH,                                      KC_0,           KC_1,           KC_2,           KC_3,           KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          KC_ESCAPE,                                                                                                      KC_ENTER,       TO(3),          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DOT,         KC_0,           KC_MINUS,                       KC_NO,          KC_TRANSPARENT, KC_BSPACE
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DK_EXLM,        DK_AT,          DK_HASH,        DK_DLR,         DK_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, DK_CIRC,        DK_LBRC,        DK_RBRC,        DK_EQL,         DK_MINS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DK_COLN,        DK_LCBR,        DK_RCBR,        DK_LABK,        DK_RABK,        DK_PIPE,                                                                        KC_TRANSPARENT, DK_TILD,        DK_LPRN,        DK_RPRN,        KC_KP_PLUS,     KC_LGUI,        KC_A,           
    KC_TRANSPARENT, DK_GRV,         KC_RPRN,        KC_TRANSPARENT, KC_LALT,        KC_TRANSPARENT,                                 DK_BSLS,        DK_AMPR,        KC_KP_ASTERISK, KC_NO,          DK_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          KC_ESCAPE,                                                                                                      KC_TRANSPARENT, TO(0),          TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_NO,          KC_UNDS,                        KC_TRANSPARENT, KC_DELETE,      KC_BSPACE
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_F10)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          LALT(LSFT(KC_G)),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LCTL(DK_DOT),   LALT(DK_MINS),  LCTL(LSFT(KC_M)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     KC_TRANSPARENT,                                 ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          ST_MACRO_9,     ST_MACRO_10,    KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, ST_MACRO_11,    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,                                          ST_MACRO_12,    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_MS_BTN2,     KC_MS_BTN3,     KC_MS_BTN1
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RESET,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        RGB_MOD,        RGB_HUI,        KC_NO,          RGB_VAI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_RALT,        KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                 KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_AUDIO_MUTE
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCREEN,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCROLLLOCK,  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          KC_LSHIFT,      KC_LCTRL,       KC_LALT,        KC_LGUI,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,                                       KC_NO,          KC_NO,          KC_NO,          KC_RALT,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SPACE,       KC_TAB,                         KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_S,           KC_D,           LSFT_T(KC_F),   KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           RSFT_T(KC_N),   KC_L,           KC_L,           KC_TRANSPARENT, KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE,                                                                                                      KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_DELETE,      KC_BSPACE
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {81,210,199}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,235,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,235,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,235,213}, {0,0,0}, {0,0,0}, {0,235,213}, {0,235,213}, {0,235,213}, {0,0,0}, {0,0,0}, {0,235,213}, {0,235,213}, {0,235,213}, {0,0,0}, {0,0,0}, {0,235,213}, {0,235,213}, {0,235,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,235,213}, {0,235,213}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {81,210,199}, {81,210,199}, {0,0,0}, {0,0,0}, {0,0,0}, {81,210,199}, {81,210,199}, {81,210,199}, {0,0,0}, {0,0,0}, {81,210,199}, {81,210,199}, {81,210,199}, {0,0,0}, {0,0,0}, {81,210,199}, {81,210,199}, {81,210,199}, {81,210,199}, {0,0,0}, {81,210,199}, {81,210,199}, {81,210,199}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {0,0,0}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {174,229,224}, {174,229,224}, {174,229,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250}, {45,206,250} },

    [8] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING("git add /A");

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING("browser*(");

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING("debugonce*(" SS_DELAY(100) SS_TAP(X_LEFT));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING("git commit /m " SS_LSFT(SS_TAP(X_2)) SS_LSFT(SS_TAP(X_2)) SS_TAP(X_LEFT) );

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) "3573");

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) "6818");

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) "6582");

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) "6322");

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER) SS_DELAY(1000) "3740");

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RIGHT) SS_DELAY(100) SS_TAP(X_RIGHT) SS_DELAY(100) SS_TAP(X_DOWN) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RIGHT) SS_DELAY(100) SS_TAP(X_RIGHT) SS_DELAY(100) SS_TAP(X_DOWN)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F10) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT) SS_DELAY(100) SS_TAP(X_LEFT)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;

    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING("mphelps" SS_RALT(SS_TAP(X_2)) "hjerteforening.dk");

    }
    break;
    case DK_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case DK_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    // Replace the sequences below with your own sequences.
    SEQ_ONE_KEY(KC_T) {
      // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
      SEND_STRING(SS_LCTRL(SS_LSFT("t")));
    }
    // Note: This is not an array, you don't need to put any commas
    // or semicolons between sequences.
    SEQ_TWO_KEYS(KC_E, KC_M) {
      // When I press KC_LEAD and then N followed by T, this sends CTRL + T
      SEND_STRING("mphelps" SS_RALT(SS_TAP(X_2)) "hjerteforening.dk");
    }
  }
}
