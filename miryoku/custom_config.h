// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

// redefine base layer to switch quote <'> with semicolon <;>
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// add new gaming layer
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(GAME,   "Gaming") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_GAME   2
#define U_TAP    3
#define U_BUTTON 4
#define U_NAV    5
#define U_MOUSE  6
#define U_MEDIA  7
#define U_NUM    8
#define U_SYM    9
#define U_FUN    10

#if defined (MIRYOKU_KEYBOARD_CORNEISH_ZEN)
	// define extra keys on corne-ish zen for all layers
	#define MIRYOKU_LAYOUTMAPPING_CORNE( \
		K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
		K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
		K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
		N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
	) \
	&kp GRAVE  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSLH \
	&kp MINUS  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT \
	&kp LPAR   K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RPAR \
						K32  K33  K34       K35  K36  K37

	// assign extra keys for gaming layer
	#define MIRYOKU_LAYOUTMAPPING_GAME( \
		K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
		K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
		K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
		N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
	) \
	&kp GRAVE  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSLH \
	&kp LCTRL  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT \
	&kp LSHFT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RSHFT \
						 K32  K33  K34       K35  K36  K37
#endif