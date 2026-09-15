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
#define CH_SECT GRV       // §
#define CH_QUOT MINUS     // '
#define CH_CIRC EQUAL     // ^
#define CH_UDIA LBRC      // ü
#define CH_DIAE RBRC      // ¨
#define CH_ODIA SCLN      // ö
#define CH_ADIA QUOT      // ä
#define CH_DLR  NUHS      // $
#define CH_LABK NUBS      // <
#define CH_COMM COMMA     // ,
#define CH_DOT  DOT       // .
#define CH_MINS SLASH     // -

// --- Shifted Symbols ---
#define CH_DEG  LS(CH_SECT)    // °
#define CH_PLUS LS(CH_1)       // +
#define CH_DQUO LS(CH_2)       // "
#define CH_ASTR LS(CH_3)       // *
#define CH_CCED LS(CH_4)       // ç
#define CH_PERC LS(CH_5)       // %
#define CH_AMPR LS(CH_6)       // &
#define CH_SLSH LS(CH_7)       // /
#define CH_LPRN LS(CH_8)       // (
#define CH_RPRN LS(CH_9)       // )
#define CH_EQL  LS(CH_0)       // =
#define CH_QUES LS(CH_QUOT)    // ?
#define CH_GRV  LS(CH_CIRC)    // `
#define CH_EGRV LS(CH_UDIA)    // è
#define CH_EXLM LS(CH_DIAE)    // !
#define CH_EACU LS(CH_ODIA)    // é
#define CH_AGRV LS(CH_ADIA)    // à
#define CH_PND  LS(CH_DLR)     // £
#define CH_RABK LS(CH_LABK)    // >
#define CH_SCLN LS(CH_COMM)    // ;
#define CH_COLN LS(CH_DOT)     // :
#define CH_UNDS LS(CH_MINS)    // _

// --- AltGr Symbols ---
#define CH_BRKP RA(CH_1)       // ¦
#define CH_AT   RA(CH_2)       // @
#define CH_HASH RA(CH_3)       // #
#define CH_NOT  RA(CH_6)       // ¬
#define CH_PIPE RA(CH_7)       // |
#define CH_CENT RA(CH_8)       // ¢
#define CH_ACUT RA(CH_QUOT)    // ´
#define CH_TILD RA(CH_CIRC)    // ~
#define CH_EURO RA(CH_E)       // €
#define CH_LBRC RA(CH_UDIA)    // [
#define CH_RBRC RA(CH_DIAE)    // ]
#define CH_LCBR RA(CH_ADIA)    // {
#define CH_RCBR RA(CH_DLR)     // }
#define CH_BSLS RA(CH_LABK)    // \
