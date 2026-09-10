// swiss_de.h
#pragma once

#include <dt-bindings/zmk/keys.h>

#define CH_Z Y
#define CH_Y Z
#define CH_Q Q
#define CH_W W
#define CH_E E
#define CH_R R
#define CH_T T
#define CH_U U
#define CH_I I
#define CH_O O
#define CH_P P
#define CH_A A
#define CH_S S
#define CH_D D
#define CH_F F
#define CH_G G
#define CH_H H
#define CH_J J
#define CH_K K
#define CH_L L
#define CH_X X
#define CH_C C
#define CH_V V
#define CH_B B
#define CH_N N
#define CH_M M

// --- Top Row Numbers & Symbols (Shift + Number) ---
#define CH_N1 N1       // 1
#define CH_N2 N2       // 2
#define CH_N3 N3       // 3
#define CH_N4 N4       // 4
#define CH_N5 N5       // 5
#define CH_N6 N6       // 6
#define CH_N7 N7       // 7
#define CH_N8 N8       // 8
#define CH_N9 N9       // 9
#define CH_N0 N0       // 0

#define CH_EXLM LS(N1)    // !
#define CH_DQUO LS(N2)    // "
#define CH_ASTR LS(N3)    // * (Note: some layouts use LS(BSLH), but SG is LS(N3))
#define CH_PND  LS(N4)    // ç (French/Swiss) or $
#define CH_PERC LS(N5)    // %
#define CH_AMPR LS(N6)    // &
#define CH_SLSH LS(N7)    // /
#define CH_LPRN LS(N8)    // (
#define CH_RPRN LS(N9)    // )
#define CH_EQL  LS(N0)    // =
#define CH_QUES LS(MINUS) // ?
#define CH_QUOT LS(NON_US_HASH) // '

// --- Special Swiss Characters (Umlauts) ---
#define CH_UDIA LBKT            // ü
#define CH_ODIA SEMI            // ö
#define CH_ADIA QUOT            // ä
#define CH_EACU LS(LBKT)        // è
#define CH_EGRV LS(SEMI)        // é
#define CH_AGRV LS(QUOT)        // à

// --- Punctuation and Symbols ---
#define CH_SCLN LS(COMMA)       // ;
#define CH_COLN LS(DOT)         // :
#define CH_UNDS LS(SLASH)       // _
#define CH_DOT  DOT             // .
#define CH_COMM COMMA           // ,
#define CH_MINS SLASH           // -
#define CH_PLUS PLUS            // +
#define CH_LABK NON_US_BSLH     // <
#define CH_RABK LS(NON_US_BSLH) // >
#define CH_SECT LS(N4)          // §
#define CH_DEGR LS(GRAVE)       // °
#define CH_CIRC GRAVE           // ^

// --- AltGr (Right Alt) Combinations ---
#define CH_AT   RA(N2)          // @
#define CH_HASH RA(N3)          // #
#define CH_EURO RA(E)           // €
#define CH_LBRC RA(N8)          // [
#define CH_RBRC RA(N9)          // ]
#define CH_LCBR RA(SINGLE_QUOTE)// {
#define CH_RCBR RA(BACKSLASH)   // }
#define CH_PIPE RA(N7)          // |
#define CH_BSLS RA(LS(N7))      // \ (Backslash)
#define CH_TILD RA(BSLH)        // ~
#define CH_MICR RA(M)           // µ

// --- Dead Keys (Careful with these in ZMK) ---
#define CH_ACUT EQUAL           // ´ (Dead key)
#define CH_GRAV LS(EQUAL)       // ` (Dead key)
