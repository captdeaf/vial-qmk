const uint16_t PROGMEM keymaps[DYNAMIC_KEYMAP_LAYER_COUNT][MATRIX_ROWS][MATRIX_COLS] = {
    [NORMAL] = LAYOUT(
        /*Center           North           East            South           West*/

        /*R1*/ KC_J,            KC_U,           KC_QUOTE,       KC_M,           KC_H, XXXXXXX,
        /*R2*/ KC_K,            KC_I,           KC_COLON,       KC_COMMA,       KC_Y, XXXXXXX,
        /*R3*/ KC_L,            KC_O,           KC_LGUI,        KC_DOT,         KC_N, XXXXXXX,
        /*R4*/ KC_SEMICOLON,    KC_P,           KC_BSLS,        KC_SLASH,       KC_RBRC, XXXXXXX,

        /*L1*/ KC_F,            KC_R,           KC_G,           KC_V,           KC_DOUBLE_QUOTE, XXXXXXX,
        /*L2*/ KC_D,            KC_E,           KC_T,           KC_C,           KC_GRAVE, XXXXXXX,
        /*L3*/ KC_S,            KC_W,           KC_B,           KC_X,           KC_ESC, XXXXXXX,
        /*L4*/ KC_A,            KC_Q,           KC_LBRC,        KC_Z,           KC_DEL, XXXXXXX,

        /*     Down            Pad            Up             Nail           Knuckle    DoubleDown*/
        /*RT*/ MO(NAS),         KC_SPACE,       TO(FUNC),       KC_BSPC,        KC_LALT,     XXXXXXX,
        /*LT*/ KC_LSFT,         KC_ENTER,       TO(NORMAL),          KC_TAB,         KC_LCTL,     KC_CAPS
        ),

    [FUNC] = LAYOUT(
        /*Center           North           East            South           West*/
        /*R1*/ KC_HOME,         KC_UP,          KC_RIGHT,       KC_DOWN,        KC_LEFT, XXXXXXX,
        /*R2*/ XXXXXXX,         KC_F8,          XXXXXXX,        KC_F7,          KC_END, XXXXXXX,
        /*R3*/ KC_PSCR,         KC_F10,         KC_LGUI,        KC_F9,          KC_INS, XXXXXXX,
        /*R4*/ KC_PAUSE,        KC_PGUP,        KC_F12,         KC_PGDN,        KC_F11, XXXXXXX,

        /*L1*/ KC_HOME,         KC_UP,          KC_RIGHT,       KC_DOWN,        KC_LEFT, XXXXXXX,
        /*L2*/ XXXXXXX,         KC_F6,          XXXXXXX,        KC_F5,          XXXXXXX, XXXXXXX,
        /*L3*/ XXXXXXX,         KC_F4,          XXXXXXX,        KC_F3,          KC_ESC, XXXXXXX,
        /*L4*/ XXXXXXX,         KC_F2,          XXXXXXX,        KC_F1,          KC_DEL, XXXXXXX,

        /*     Down            Pad            Up             Nail           Knuckle    DoubleDown*/
        /*RT*/ MO(NAS),         KC_SPACE,       _______,       KC_BSPC,      KC_LALT, _______,
        /*LT*/ KC_LSFT,       KC_ENTER,         _______, KC_TAB,         KC_LCTL, _______
        ),

    [NAS] = LAYOUT(
        /*Center           North           East            South           West*/
        /*R1*/ KC_7,            KC_AMPR,        KC_UNDS,        KC_KP_PLUS,     KC_6, XXXXXXX,
        /*R2*/ KC_8,            KC_KP_ASTERISK, KC_COLON,       KC_COMMA,       KC_CIRCUMFLEX, XXXXXXX,
        /*R3*/ KC_9,            KC_LPRN,        KC_LGUI,        KC_DOT,         KC_SEMICOLON, XXXXXXX,
        /*R4*/ KC_0,            KC_RPRN,        XXXXXXX,        KC_QUES,        KC_RBRC, XXXXXXX,

        /*L1*/ KC_4,            KC_DOLLAR,      KC_5,           KC_MINUS,       KC_SLASH, XXXXXXX,
        /*L2*/ KC_3,            KC_HASH,        KC_GT,          KC_PERCENT,     KC_LT, XXXXXXX,
        /*L3*/ KC_2,            KC_AT,          XXXXXXX,        KC_X,           KC_ESC, XXXXXXX,
        /*L4*/ KC_1,            KC_EXCLAIM,     KC_TILDE,       KC_EQUAL,       KC_DEL, XXXXXXX,

        /*     Down            Pad            Up             Nail           Knuckle    DoubleDown*/
        /*RT*/ MO(NAS),         KC_SPACE,       _______,       KC_BSPC,        KC_LALT, _______,
        /*LT*/ KC_LSFT,         KC_ENTER,       _______,        KC_TAB,         KC_LCTL, _______
        ),

    [MBO] = LAYOUT(
        /*Center           North           East            South           West*/
        /*R1*/ KC_BTN1,        KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, XXXXXXX,
        /*R2*/ KC_BTN3,        KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, XXXXXXX,
        /*R3*/ KC_BTN2,        KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, XXXXXXX,
        /*R4*/ SV_RECALIBRATE_POINTER,        KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, XXXXXXX,
        /*L1*/ KC_BTN1,        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_TRNS, XXXXXXX,
        /*L2*/ KC_BTN3,        KC_TRNS,       KC_TRNS,       SV_SNIPER_2,        KC_TRNS, XXXXXXX,
        /*L3*/ KC_BTN2,        KC_TRNS,       KC_TRNS,       SV_SNIPER_3,        KC_TRNS, XXXXXXX,
        /*L4*/ SV_RECALIBRATE_POINTER, KC_TRNS, KC_TRNS,       SV_SNIPER_5,      KC_TRNS, XXXXXXX,
        /*     Down            Pad            Up             Nail           Knuckle    DoubleDown*/
        /*RT*/ KC_TRNS,        KC_BTN1,       KC_TRNS,       KC_BTN2,       KC_BTN3,   KC_TRNS,
        /*LT*/ KC_TRNS,        KC_BTN1,       KC_TRNS,       KC_BTN2,       KC_BTN3,   KC_TRNS
        )

};
