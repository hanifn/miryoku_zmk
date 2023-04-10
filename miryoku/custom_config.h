// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

#define HYPER LS(LC(LA(LGUI)))
#define MEH LS(LC(LALT))

// redefine base layer to switch quote <'> with semicolon <;>
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// mappings for the Kinesis Advantage 360 Pro
// #if defined (MIRYOKU_KEYBOARD_adv360pro)
	// add new function layer that uses the top num row and allow the other keys to still be used as normal.
	// specifically for some games that uses funtion keys along with WASD
	#define MIRYOKU_LAYER_LIST \
	MIRYOKU_X(BASE,   "Base") \
	MIRYOKU_X(EXTRA,  "Extra") \
	MIRYOKU_X(TAP,    "Tap") \
	MIRYOKU_X(BUTTON, "Button") \
	MIRYOKU_X(NAV,    "Nav") \
	MIRYOKU_X(MOUSE,  "Mouse") \
	MIRYOKU_X(MEDIA,  "Media") \
	MIRYOKU_X(NUM,    "Num") \
	MIRYOKU_X(SYM,    "Sym") \
	MIRYOKU_X(FUN,    "Fun") \
	MIRYOKU_X(FUNG,   "FunGame")

	#define U_BASE   0
	#define U_EXTRA  1
	#define U_TAP    2
	#define U_BUTTON 3
	#define U_NAV    4
	#define U_MOUSE  5
	#define U_MEDIA  6
	#define U_NUM    7
	#define U_SYM    8
	#define U_FUN    9
	#define U_FUNG   10

	// define extra keys for the adv360
	#define MIRYOKU_LAYOUTMAPPING_ADV360( \
		K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
		K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
		K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
		N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
	) \
	&kp EQUAL   &kp N1     &kp N2    &kp N3     &kp N4  &kp N5  &tog U_TAP                                                                              &tog U_NUM  &kp N6  &kp N7  &kp N8  &kp N9    &kp N0     &kp MINUS \
	&kp GRAVE   K00        K01       K02        K03     K04     &kp LBKT                                                                                &kp RBKT    K05     K06     K07     K08       K09        &kp BSLH \
	&kp LCTRL   K10        K11       K12        K13     K14     &kp LPAR         &kp LALT  &u_caps_word                  &kp LGUI   &kp RCTRL           &kp RPAR    K15     K16     K17     K18       K19        &kp SQT \
	&kp LSHFT   K20        K21       K22        K23     K24               &none  &none     &kp HOME      &none    &none  &kp PG_UP  &none      &none                K25     K26     K27     K28       K29        &kp RSHFT \
	&mo U_FUNG  &kp HYPER  &kp LEFT  &kp RIGHT  K32                       K33    K34       &kp END                       &kp PG_DN  K35        K36                          K37     &kp UP  &kp DOWN  &kp HYPER  &mo U_FUNG

	// define define layer mapping for new FUN layer
	#define MIRYOKU_LAYOUTMAPPING_FUNG( \
		K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
		K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
		K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
		N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
	) \
	&kp EQUAL   &kp F1     &kp F2    &kp F3      &kp F4  &kp F5  &tog U_TAP                                                                              &tog U_NUM  &kp F6  &kp F7  &kp F8  &kp F9    &kp F10    &kp MINUS \
	&kp GRAVE   K00        K01       K02         K03     K04     &kp LBKT                                                                                &kp RBKT    K05     K06     K07     K08       K09        &kp BSLH \
	&kp LCTRL   K10        K11       K12         K13     K14     &kp LPAR         &kp LALT  &u_caps_word                  &kp LGUI   &kp RCTRL           &kp RPAR    K15     K16     K17     K18       K19        &kp SQT \
	&kp LSHFT   K20        K21       K22         K23     K24               &none  &none     &kp HOME      &none    &none  &kp PG_UP  &none      &none                K25     K26     K27     K28       K29        &kp RSHFT \
	&mo U_FUNG  &kp HYPER  &kp LEFT  &kp RIGHT   K32                       K33    K34       &kp END                       &kp PG_DN  K35        K36                          K37     &kp UP  &kp DOWN  &kp HYPER  &mo U_FUNG
	
	// all trans keys so that it can be used in whatever layer
	#define MIRYOKU_LAYER_FUNG \
	&trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans, \
	&trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans, \
	&trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  &trans, \
	U_NP,    U_NP,    &trans,  &trans,  &trans,  &trans,  &trans,  &trans,  U_NP,    U_NP
// #endif

#if defined (MIRYOKU_KEYBOARD_corneish_zen_v2)
	// define EXTRA layer as dedicated gaming layer
	#define MIRYOKU_LAYER_EXTRA \
	&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
	&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
	&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
	U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

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
	#define MIRYOKU_LAYOUTMAPPING_EXTRA( \
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
