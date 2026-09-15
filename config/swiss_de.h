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
#define CH_DEG  S(CH_SECT)    // °
#define CH_PLUS S(CH_1)       // +
#define CH_DQUO S(CH_2)       // "
#define CH_ASTR S(CH_3)       // *
#define CH_CCED S(CH_4)       // ç
#define CH_PERC S(CH_5)       // %
#define CH_AMPR S(CH_6)       // &
#define CH_SLSH S(CH_7)       // /
#define CH_LPRN S(CH_8)       // (
#define CH_RPRN S(CH_9)       // )
#define CH_EQL  S(CH_0)       // =
#define CH_QUES S(CH_QUOT)    // ?
#define CH_GRV  S(CH_CIRC)    // `
#define CH_EGRV S(CH_UDIA)    // è
#define CH_EXLM S(CH_DIAE)    // !
#define CH_EACU S(CH_ODIA)    // é
#define CH_AGRV S(CH_ADIA)    // à
#define CH_PND  S(CH_DLR)     // £
#define CH_RABK S(CH_LABK)    // >
#define CH_SCLN S(CH_COMM)    // ;
#define CH_COLN S(CH_DOT)     // :
#define CH_UNDS S(CH_MINS)    // _

// --- AltGr Symbols ---
#define CH_BRKP RALT(CH_1)       // ¦
#define CH_AT   RALT(CH_2)       // @
#define CH_HASH RALT(CH_3)       // #
#define CH_NOT  RALT(CH_6)       // ¬
#define CH_PIPE RALT(CH_7)       // |
#define CH_CENT RALT(CH_8)       // ¢
#define CH_ACUT RALT(CH_QUOT)    // ´
#define CH_TILD RALT(CH_CIRC)    // ~
#define CH_EURO RALT(CH_E)       // €
#define CH_LBRC RALT(CH_UDIA)    // [
#define CH_RBRC RALT(CH_DIAE)    // ]
#define CH_LCBR RALT(CH_ADIA)    // {
#define CH_RCBR RALT(CH_DLR)     // }
#define CH_BSLS RALT(CH_LABK)    // \
