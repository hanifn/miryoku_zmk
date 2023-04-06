// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_COLEMAKDH
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

#define XXX &none
#define HYPER LS(LC(LA(LGUI)))
#define MEH LS(LC(LALT))

// redefine base layer to switch quote <'> with semicolon <;>
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPC),  U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// mappings for the Kinesis Advantage 360 Pro
// #if defined (MIRYOKU_KEYBOAR_ADV360PRO)
	// define extra keys for the adv360
	#define MIRYOKU_LAYOUTMAPPING_ADV360( \
		K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
		K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
		K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
		N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
	) \
	&kp EQUAL  &kp N1     &kp N2        &kp N3   &kp N4       &kp N5  &tog U_EXTRA                                                   &tog U_NUM  &kp N6  &kp N7    &kp N8  &kp N9    &kp N0     &kp MINUS \
	&kp GRAVE  K00        K01           K02      K03          K04     &kp LBKT                                                       &kp RBKT    K05     K06       K07     K08       K09        &kp BSLH \
	&kp LCTRL  K10        K11           K12      K13          K14     &kp LPAR       K32  &kp LGUI              &kp RGUI   K37       &kp RPAR    K15     K16       K17     K18       K19        &kp SQT \
	&kp LSHFT  K20        K21           K22      K23          K24               XXX  XXX  &kp HOME  XXX    XXX  &kp PG_UP  XXX  XXX              K25     K26       K27     K28       K29        &kp RSHFT \
	&kp LALT   &kp HYPER  &u_caps_word  &kp MEH  &kp LC(SPC)                    K33  K34  &kp END               &kp PG_DN  K35  K36                      &kp LEFT  &kp UP  &kp DOWN  &kp RIGHT  &kp RALT

	// define EXTRA layer as dedicated gaming layer
	// No mod-taps or layer taps on left side
	#define MIRYOKU_LAYER_EXTRA \
	&kp Q, &kp W, &kp E,   &kp R,   &kp T,   &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
	&kp A, &kp S, &kp D,   &kp F,   &kp G,   &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
	&kp Z, &kp X, &kp C,   &kp V,   &kp B,   &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
	U_NP,  U_NP,  &kp ESC, &kp SPC, &kp TAB, U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
// #endif

#if defined (MIRYOKU_KEYBOARD_CORNEISH_ZEN)
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
