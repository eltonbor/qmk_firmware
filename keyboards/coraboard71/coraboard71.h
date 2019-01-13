#include "quantum.h"

/**
 * Keys matrix, 71 keys total, KF6 is not used
 *  9 Rows (1 to 9)
 *  8 Cols (A to H)
 */


#define LAYOUT( \
	/* All keys available, the same order here should be in the keymap.c */ \
	/* Keys position here should math what you see in the board */          \
	KA1, KA2, KB1, KB2, KC1, KC2, KD1, KD2, KE1, KE2, KF1, KF2, KG1, KG2,     KH1, KH2, \
	KA3, KA4, KB3, KB4, KC3, KC4, KD3, KD4, KE3, KE4, KF3, KF4, KG3, KG4,     KH3, KH4, \
	KA5, KA6, KB5, KB6, KC5, KC6, KD5, KD6, KE5, KE6, KF5, KG5,      KG6,     KH5, KH6, \
	KA7, KA8, KB7, KB8, KC7, KC8, KD7, KD8, KE7, KE8, KF7, KF8,      KG7,     KH7,      \
	KA9, KB9, KC9,                KD9,                KE9, KF9, KG8,     KG9, KH8, KH9  \
) { \
	/* Keys position in the matrix */ \
	/*         A      B      C      D      E      F      G      H */  \
	/* 1 */ { KA1,   KB1,   KC1,   KD1,   KE1,   KF1,   KG1,   KH1 }, \
	/* 2 */ { KA2,   KB2,   KC2,   KD2,   KE2,   KF2,   KG2,   KH2 }, \
	/* 3 */ { KA3,   KB3,   KC3,   KD3,   KE3,   KF3,   KG3,   KH3 }, \
	/* 4 */ { KA4,   KB4,   KC4,   KD4,   KE4,   KF4,   KG4,   KH4 }, \
	/* 5 */ { KA5,   KB5,   KC5,   KD5,   KE5,   KF5,   KG5,   KH5 }, \
	/* 6 */ { KA6,   KB6,   KC6,   KD6,   KE6,  KC_NO,  KG6,   KH6 }, \
	/* 7 */ { KA7,   KB7,   KC7,   KD7,   KE7,   KF7,   KG7,   KH7 }, \
	/* 8 */ { KA8,   KB8,   KC8,   KD8,   KE8,   KF8,   KG8,   KH8 }, \
	/* 9 */ { KA9,   KB9,   KC9,   KD9,   KE9,   KF9,   KG9,   KH9 }  \
}
