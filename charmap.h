#ifndef charmap
#define charmap

//Aliases to use with typechar() function
#define CHAR_A 0x04
#define CHAR_B 0x05
#define CHAR_C 0x06
#define CHAR_D 0x07
#define CHAR_E 0x08
#define CHAR_F 0x09
#define CHAR_G 0x0A
#define CHAR_H 0x0B
#define CHAR_I 0x0C
#define CHAR_J 0x0D
#define CHAR_K 0x0E
#define CHAR_L 0x0F
#define CHAR_M 0x10
#define CHAR_N 0x11
#define CHAR_O 0x12
#define CHAR_P 0x13
#define CHAR_Q 0x14
#define CHAR_R 0x15
#define CHAR_S 0x16
#define CHAR_T 0x17
#define CHAR_U 0x18
#define CHAR_V 0x19
#define CHAR_W 0x1A
#define CHAR_X 0x1B
#define CHAR_Y 0x1C
#define CHAR_Z 0x1D

#define CHAR_1 0x1E
#define CHAR_2 0x1F
#define CHAR_3 0x20
#define CHAR_4 0x21
#define CHAR_5 0x22
#define CHAR_6 0x23
#define CHAR_7 0x24
#define CHAR_8 0x25
#define CHAR_9 0x26
#define CHAR_0 0x27

#define CHAR_BACKSPACE 0x2A
#define CHAR_SPACE 0x2C
#define CHAR_EQUALS 0x2E
#define CHAR_COMMA 0x36
#define CHAR_DOT 0x37
#define CHAR_SLASH  0x38

//1-element
#define MORSE_E 0b00111111
#define MORSE_T 0b10111111
//2-element
#define MORSE_I 0b00011111
#define MORSE_N 0b01011111
#define MORSE_A 0b10011111
#define MORSE_M 0b11011111
//3-element
#define MORSE_S 0b00001111
#define MORSE_D 0b00101111
#define MORSE_R 0b01001111
#define MORSE_G 0b01101111
#define MORSE_U 0b10001111
#define MORSE_K 0b10101111
#define MORSE_W 0b11001111
#define MORSE_O 0b11101111
//4-element
#define MORSE_H 0b00000111
#define MORSE_B 0b00010111
#define MORSE_L 0b00100111
#define MORSE_Z 0b00110111
#define MORSE_F 0b01000111
#define MORSE_C 0b01010111
#define MORSE_P 0b01100111
#define FARCE_1 0b01110111
#define MORSE_V 0b10000111
#define MORSE_X 0b10010111
#define FARCE_2 0b10100111
#define MORSE_Q 0b10110111
#define FARCE_3 0b11000111
#define MORSE_Y 0b11010111
#define MORSE_J 0b11100111
#define FARCE_4 0b11110111

//5-element
#define MORSE_0 0b11111011
#define MORSE_9 0b01111011
#define MORSE_8 0b00111011
#define MORSE_7 0b00011011
#define MORSE_6 0b00001011
#define MORSE_5 0b00000011
#define MORSE_4 0b10000011
#define MORSE_3 0b11000011
#define MORSE_2 0b11100011
#define MORSE_1 0b11110011

//punctuation

#define MORSE_EQUAL    0b10001011
#define MORSE_QUESTION 0b00110001
#define MORSE_COMMA    0b11001101
#define MORSE_PERIOD   0b10101001
#define MORSE_SK       0b10100001
#define MORSE_STROKE   0b01001011



#endif
