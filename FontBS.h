#ifndef FontBS_h
#define FontBS_h

#ifdef VSCODE
#include <Arduino.h>
#include <LEDText.h>
#endif

// TODO: lower case letters?
const uint8_t BSFontData[] = {
	7,		// Font Width
	6,		// Font Height
	32,		// Font First Character
	96,		// Font Last Character

	B8(00000000),	// Char  
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(01110000),	// Char !
	B8(01110000),
	B8(01110000),
	B8(01110000),
	B8(00000000),
	B8(01110000),

	B8(00110110),	// Char "
	B8(00110110),
	B8(01101100),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(00000000),	// Char #
	B8(00101000),
	B8(11111110),
	B8(00101000),
	B8(11111110),
	B8(00101000),

	// TODO: write this!
	B8(00000000),	// Char $
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(11000110),	// Char %
	B8(11001100),
	B8(00011000),
	B8(00110000),
	B8(01100110),
	B8(11000110),

	B8(00000000),	// Char &
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(00011000),	// Char '
	B8(00011000),
	B8(00110000),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(00001100),	// Char (
	B8(00011000),
	B8(00011000),
	B8(00011000),
	B8(00011000),
	B8(00001100),

	B8(01100000),	// Char )
	B8(00110000),
	B8(00110000),
	B8(00110000),
	B8(00110000),
	B8(01100000),

	B8(00000000),	// Char *
	B8(01010100),
	B8(00111000),
	B8(11111110),
	B8(00111000),
	B8(01010100),

	B8(00000000),	// Char +
	B8(00011000),
	B8(00011000),
	B8(01111110),
	B8(00011000),
	B8(00011000),

	B8(00000000),	// Char ,
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00011000),
	B8(00110000),

	B8(00000000),	// Char -
	B8(00000000),
	B8(00000000),
	B8(01111100),
	B8(00000000),
	B8(00000000),

	B8(00000000),	// Char .
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00110000),
	B8(00110000),

	B8(00000110),	// Char /
	B8(00001100),
	B8(00011000),
	B8(00110000),
	B8(01100000),
	B8(11000000),

	B8(01111100),	// Char 0
	B8(11000110),
	B8(11000110),
	B8(11000110),
	B8(11000110),
	B8(01111100),

	B8(00011000),	// Char 1
	B8(00111000),
	B8(00011000),
	B8(00011000),
	B8(00011000),
	B8(00011000),

	B8(01111100),	// Char 2
	B8(11000110),
	B8(00000110),
	B8(00011000),
	B8(01100000),
	B8(11111110),

	B8(01111100),	// Char 3
	B8(11000110),
	B8(00011100),
	B8(00000110),
	B8(11000110),
	B8(01111100),

	B8(00111100),	// Char 4
	B8(01101100),
	B8(11001100),
	B8(11111110),
	B8(00001100),
	B8(00001100),

	B8(11111110),	// Char 5
	B8(11000000),
	B8(11111110),
	B8(00000110),
	B8(11000110),
	B8(01111100),

	B8(01111100),	// Char 6
	B8(11000000),
	B8(11111100),
	B8(11000110),
	B8(11000110),
	B8(01111100),

	B8(11111110),	// Char 7
	B8(00000110),
	B8(00001100),
	B8(00011000),
	B8(00110000),
	B8(00110000),

	B8(01111100),	// Char 8
	B8(11000110),
	B8(01111100),
	B8(11000110),
	B8(11000110),
	B8(01111100),

	B8(01111100),	// Char 9
	B8(11000110),
	B8(01111110),
	B8(00000110),
	B8(00001100),
	B8(01111000),

	B8(00000000),	// Char :
	B8(00000000),
	B8(00110000),
	B8(00000000),
	B8(00110000),
	B8(00000000),

	B8(00000000),	// Char ;
	B8(00000000),
	B8(00110000),
	B8(00000000),
	B8(00110000),
	B8(01100000),

	B8(00000000),	// Char <
	B8(00001100),
	B8(00011000),
	B8(00110000),
	B8(00011000),
	B8(00001100),

	B8(00000000),	// Char =
	B8(00000000),
	B8(01111100),
	B8(00000000),
	B8(01111100),
	B8(00000000),

	B8(00000000),	// Char >
	B8(00110000),
	B8(00011000),
	B8(00001100),
	B8(00011000),
	B8(00110000),

	B8(01111100),	// Char ?
	B8(11000110),
	B8(00000110),
	B8(00011100),
	B8(00000000),
	B8(00011000),

	B8(01111100),	// Char @
	B8(11000110),
	B8(11011110),
	B8(11011110),
	B8(11000000),
	B8(01111000),

	B8(00111000),	// Char A
	B8(01111100),
	B8(11000110),
	B8(11111110),
	B8(11000110),
	B8(11000110),

	B8(11111100),	// Char B
	B8(11000110),
	B8(11111100),
	B8(11000110),
	B8(11000110),
	B8(11111100),

	B8(00111100),	// Char C
	B8(01100110),
	B8(11000000),
	B8(11000000),
	B8(01100110),
	B8(00111100),

	B8(11111000),	// Char D
	B8(11001100),
	B8(11000110),
	B8(11000110),
	B8(11001100),
	B8(11111000),

	B8(11111110),	// Char E
	B8(11000000),
	B8(11111000),
	B8(11000000),
	B8(11000000),
	B8(11111110),

	B8(11111110),	// Char F
	B8(11000000),
	B8(11111000),
	B8(11000000),
	B8(11000000),
	B8(11000000),

	B8(00111100),	// Char G
	B8(01100110),
	B8(11000000),
	B8(11001110),
	B8(01100110),
	B8(00111110),

	B8(11000110),	// Char H
	B8(11000110),
	B8(11111110),
	B8(11000110),
	B8(11000110),
	B8(11000110),

	B8(00111000),	// Char I
	B8(00111000),
	B8(00111000),
	B8(00111000),
	B8(00111000),
	B8(00111000),

	B8(00000110),	// Char J
	B8(00000110),
	B8(00000110),
	B8(11000110),
	B8(11000110),
	B8(01111100),

	B8(11001110),	// Char K
	B8(11011000),
	B8(11110000),
	B8(11011000),
	B8(11001110),
	B8(11000110),

	B8(11000000),	// Char L
	B8(11000000),
	B8(11000000),
	B8(11000000),
	B8(11000000),
	B8(11111110),

	B8(11000110),	// Char M
	B8(11101110),
	B8(11111110),
	B8(11010110),
	B8(11000110),
	B8(11000110),

	B8(11000110),	// Char N
	B8(11100110),
	B8(11011110),
	B8(11001110),
	B8(11000110),
	B8(11000110),

	B8(01111100),	// Char O
	B8(11000110),
	B8(11000110),
	B8(11000110),
	B8(11000110),
	B8(01111100),

	B8(11111100),	// Char P
	B8(11000110),
	B8(11111100),
	B8(11000000),
	B8(11000000),
	B8(11000000),

	B8(01111100),	// Char Q
	B8(11000110),
	B8(11000110),
	B8(11011110),
	B8(01111100),
	B8(00001110),

	B8(11111100),	// Char R
	B8(11000110),
	B8(11111100),
	B8(11001100),
	B8(11000110),
	B8(11000110),

	B8(01111100),	// Char S
	B8(11000110),
	B8(01110000),
	B8(00011110),
	B8(11000110),
	B8(01111100),

	B8(11111110),	// Char T
	B8(00111000),
	B8(00111000),
	B8(00111000),
	B8(00111000),
	B8(00111000),

	B8(11000110),	// Char U
	B8(11000110),
	B8(11000110),
	B8(11000110),
	B8(11100110),
	B8(01111110),

	B8(11000110),	// Char V
	B8(11000110),
	B8(11000110),
	B8(11101110),
	B8(01111100),
	B8(00111000),

	B8(11000110),	// Char W
	B8(11000110),
	B8(11010110),
	B8(11111110),
	B8(11101110),
	B8(11000110),

	B8(11000110),	// Char X
	B8(01111100),
	B8(00111000),
	B8(01111100),
	B8(11101110),
	B8(11000110),

	B8(01100110),	// Char Y
	B8(01100110),
	B8(00111100),
	B8(00011000),
	B8(00011000),
	B8(00011000),

	B8(11111110),	// Char Z
	B8(00000110),
	B8(00001100),
	B8(00110000),
	B8(01100000),
	B8(11111110),

	B8(01111100),	// Char [
	B8(01100000),
	B8(01100000),
	B8(01100000),
	B8(01100000),
	B8(01111100),

	B8(11000000),	// Char backslash
	B8(01100000),
	B8(00110000),
	B8(00011000),
	B8(00001100),
	B8(00000110),

	B8(01111100),	// Char ]
	B8(00001100),
	B8(00001100),
	B8(00001100),
	B8(00001100),
	B8(01111100),

	B8(00010000),	// Char ^
	B8(00111000),
	B8(01101100),
	B8(00000000),
	B8(00000000),
	B8(00000000),

	B8(00000000),	// Char _
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(11111110),

	B8(00110000),	// Char `
	B8(00011000),
	B8(00000000),
	B8(00000000),
	B8(00000000),
	B8(00000000)
};

#endif
