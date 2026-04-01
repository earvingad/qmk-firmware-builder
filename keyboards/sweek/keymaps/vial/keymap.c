// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
/* #include <stdio.h> */


enum layers {
    L0,
    L1,
    L2,
    L3,
    L4,
    L5,
    L6
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
    [L0] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L1] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L2] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L3] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L4] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L5] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    ),
    [L6] = LAYOUT(

        KC_Q    , KC_W    , KC_F    , KC_P    , KC_G   ,              KC_J     , KC_L      , KC_O      , KC_Y      , KC_SCLN ,
        KC_A    , KC_R    , KC_S    , KC_T    , KC_D   ,              KC_H     , KC_N      , KC_E      , KC_I      , KC_U    ,
        KC_Z    , KC_X    , KC_C    , KC_V    , KC_B   ,              KC_K     , KC_M      , KC_COMMA  , KC_APP    , KC_SLSH ,
                            KC_LCTL , KC_SPC , KC_ESC  ,              KC_ENT   , KC_BSPC   , KC_RSFT
    )
};

/* void keyboard_post_init_user(void) { */
  /* Customise these values to desired behaviour */
  /* debug_enable=true; */
  /* debug_matrix=true; */
  /* debug_keyboard=true; */
  /* debug_mouse=true; */
/* } */

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [L0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [L1] = { ENCODER_CCW_CW(UG_HUED, UG_HUEU),  ENCODER_CCW_CW(UG_SATD, UG_SATU)  },
    [L2] = { ENCODER_CCW_CW(UG_VALD, UG_VALU),  ENCODER_CCW_CW(UG_SPDD, UG_SPDU)  },
    [L3] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [L4] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [L5] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    [L6] = { ENCODER_CCW_CW(UG_PREV, UG_NEXT),  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

const rgblight_segment_t PROGMEM _L0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_RED}
);
const rgblight_segment_t PROGMEM _L1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_BLUE}
);
const rgblight_segment_t PROGMEM _L2[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM _L3[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_WHITE}
);
const rgblight_segment_t PROGMEM _L4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM _L5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_CYAN}
);
const rgblight_segment_t PROGMEM _L6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_CYAN}
);
// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    _L0,
    _L1,
    _L2,
    _L3,
    _L4,
    _L5,
    _L6
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, L0));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, L1));
    rgblight_set_layer_state(2, layer_state_cmp(state, L2));
    rgblight_set_layer_state(3, layer_state_cmp(state, L3));
    rgblight_set_layer_state(4, layer_state_cmp(state, L4));
    rgblight_set_layer_state(5, layer_state_cmp(state, L5));
    rgblight_set_layer_state(6, layer_state_cmp(state, L6));
    return state;
}
