#pragma once

#include <dt-bindings/zmk/keys.h>

// --- Letters ---
#define CH_Z Z
#define CH_Y Y
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

// --- Number Row ---
#define CH_1 N1       // 1
#define CH_2 N2       // 2
#define CH_3 N3       // 3
#define CH_4 N4       // 4
#define CH_5 N5       // 5
#define CH_6 N6       // 6
#define CH_7 N7       // 7
#define CH_8 N8       // 8
#define CH_9 N9       // 9
#define CH_0 N0       // 0

// --- Unshifted Symbols ---
#define CH_SECT GRAVE       // §
#define CH_QUOT MINUS     // '
#define CH_CIRC EQUAL     // ^
#define CH_UDIA LBRC      // ü
#define CH_DIAE RBRC      // ¨
#define CH_ODIA SEMICOLON      // ö
#define CH_ADIA QUOTE      // ä
#define CH_DLR  NUHS      // $
#define CH_LABK NUBS      // <
#define CH_COMM COMMA     // ,
#define CH_DOT  DOT       // .
#define CH_MINS SLASH     // -

// --- Shifted Symbols ---
#define CH_DEGR LS(GRAVE)    // °
#define CH_PLUS LS(N1)       // +
#define CH_DQUO LS(N2)       // "
#define CH_ASTR LS(N3)       // *
#define CH_CCED LS(N4)       // ç
#define CH_PERC LS(N5)       // %
#define CH_AMPR LS(N6)       // &
#define CH_SLSH LS(N7)       // /
#define CH_LPRN LS(N8)       // (
#define CH_RPRN LS(N9)       // )
#define CH_EQL  LS(N0)       // =
#define CH_QUES LS(QUOTE)     // ?
#define CH_GRV  LS(EQUAL)    // `
#define CH_EGRV LS(LBRC)    // è
#define CH_EXLM LS(RBRC)    // !
#define CH_EACU LS(SEMICOLON)    // é
#define CH_AGRV LS(QUOTE)    // à
#define CH_PND  LS(NUHS)     // £
#define CH_RABK LS(NUBS)    // >
#define CH_SCLN LS(COMMA)    // ;
#define CH_COLN LS(DOT)     // :
#define CH_UNDS LS(MINUS)    // _

// --- AltGr Symbols ---
#define CH_BRKP RA(N1)       // ¦
#define CH_AT   RA(N2)       // @
#define CH_HASH RA(N3)       // #
#define CH_NOT  RA(N6)       // ¬
#define CH_PIPE RA(N7)       // |
#define CH_CENT RA(N8)       // ¢
#define CH_ACUT RA(MINUS)    // ´
#define CH_TILD RA(EQUAL)    // ~
#define CH_EURO RA(E)       // €
#define CH_LBRC RA(LBRC)    // [
#define CH_RBRC RA(RBRC)    // ]
#define CH_LCBR RA(QUOTE)    // {
#define CH_RCBR RA(NUHS)     // }
#define CH_BSLS RA(NUBS)    // backslash

