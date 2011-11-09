#include "common.h"
#include "tiles.h"
const uint8_t tiles[128][4] = 
{
	{0xFF,0xFF,0xFF,0xFF,},
	{0xF7,0xE3,0xC1,0xE3,},
	{0xFF,0xAB,0x55,0xAB,},
	{0xFF,0xE0,0xDB,0x00,},
	{0xE0,0xFA,0x06,0xD7,},
	{0xFD,0xFA,0x0A,0xAF,},
	{0xF0,0xF7,0x07,0xAF,},
	{0xFF,0xE1,0xED,0xE1,},
	{0xFF,0xDB,0xD1,0xDB,},
	{0xF0,0xFD,0x0B,0x70,},
	{0xF8,0xF7,0xE8,0x0F,},
	{0xF7,0xF7,0xF0,0xFF,},
	{0xF7,0xF7,0x07,0xFF,},
	{0xFF,0xFF,0x07,0xF7,},
	{0xFF,0xFF,0xF0,0xF7,},
	{0xF7,0xF7,0x00,0xF7,},
	{0xFF,0xFD,0xFD,0xFD,},
	{0xFF,0xFB,0xFB,0xFB,},
	{0xFF,0xF7,0xF7,0xF7,},
	{0xFF,0xEF,0xEF,0xEF,},
	{0xFF,0xDF,0xDF,0xDF,},
	{0xFF,0xFF,0x00,0xF7,},
	{0xF7,0xF7,0x00,0xFF,},
	{0xEF,0xEF,0xE0,0xEF,},
	{0xEF,0xEF,0x0F,0xEF,},
	{0xFF,0xFF,0x00,0xFF,},
	{0xFF,0xB7,0xAB,0x9D,},
	{0xFF,0x9D,0xAB,0xB7,},
	{0xFD,0xC1,0xFD,0xC1,},
	{0xEB,0xCB,0xE3,0xE9,},
	{0xDB,0x81,0xEA,0xCE,},
	{0xFF,0xFF,0xF7,0xFF,},
	{0xFF,0xFF,0xFF,0xFF,},
	{0xFF,0xA1,0xFF,0xFF,},
	{0xF9,0xFF,0xF9,0xFF,},
	{0x81,0xDB,0x81,0xFF,},
	{0xDB,0x34,0xCB,0xFF,},
	{0x9D,0xE7,0xB9,0xFF,},
	{0xC5,0x9A,0xA5,0xFF,},
	{0xFF,0xF9,0xFF,0xFF,},
	{0xFF,0xC3,0xBD,0xFF,},
	{0xBD,0xC3,0xFF,0xFF,},
	{0xD5,0xE3,0xD5,0xFF,},
	{0xF7,0xC1,0xF7,0xFF,},
	{0x7F,0x9F,0xFF,0xFF,},
	{0xF7,0xF7,0xF7,0xFF,},
	{0xFF,0x9F,0xFF,0xFF,},
	{0x9F,0xE7,0xF9,0xFF,},
	{0xC3,0xB5,0xC3,0xFF,},
	{0xBB,0x81,0xBF,0xFF,},
	{0x9B,0xAD,0xB3,0xFF,},
	{0xDD,0xB5,0xC9,0xFF,},
	{0xE7,0xEB,0x81,0xFF,},
	{0xD1,0xB5,0xCD,0xFF,},
	{0xC3,0xB5,0xCD,0xFF,},
	{0xFD,0x8D,0xF1,0xFF,},
	{0xCB,0xB5,0xCB,0xFF,},
	{0xB3,0xAD,0xC3,0xFF,},
	{0xFF,0xDB,0xFF,0xFF,},
	{0xBF,0xDB,0xFF,0xFF,},
	{0xEF,0xD7,0xBB,0xFF,},
	{0xEB,0xEB,0xEB,0xFF,},
	{0xBB,0xD7,0xEF,0xFF,},
	{0xFB,0xAD,0xF3,0xFF,},
	{0xC3,0xBD,0xB3,0xFF,},
	{0x83,0xED,0x83,0xFF,},
	{0x81,0xB5,0xCB,0xFF,},
	{0xC3,0xBD,0xDB,0xFF,},
	{0x81,0xBD,0xC3,0xFF,},
	{0x81,0xB5,0xB5,0xFF,},
	{0x81,0xF5,0xF5,0xFF,},
	{0xC3,0xBD,0xCB,0xFF,},
	{0x81,0xF7,0x81,0xFF,},
	{0xBD,0x81,0xBD,0xFF,},
	{0xDF,0xBF,0xC1,0xFF,},
	{0x81,0xF7,0x89,0xFF,},
	{0x81,0xBF,0xBF,0xFF,},
	{0x81,0xFB,0x81,0xFF,},
	{0x83,0xE7,0xC1,0xFF,},
	{0xC3,0xBD,0xC3,0xFF,},
	{0x81,0xED,0xF3,0xFF,},
	{0xC3,0x9D,0xA3,0xFF,},
	{0x81,0xED,0x93,0xFF,},
	{0xDB,0xB5,0xCB,0xFF,},
	{0xFD,0x81,0xFD,0xFF,},
	{0x81,0xBF,0x81,0xFF,},
	{0xC1,0xBF,0xC1,0xFF,},
	{0x81,0xDF,0x81,0xFF,},
	{0x89,0xF7,0x89,0xFF,},
	{0xF9,0x87,0xF9,0xFF,},
	{0x9D,0xA5,0xB9,0xFF,},
	{0xFF,0x81,0xBD,0xFF,},
	{0xF9,0xE7,0x9F,0xFF,},
	{0xBD,0x81,0xFF,0xFF,},
	{0xFB,0xFD,0xFB,0xFF,},
	{0x7F,0x7F,0x7F,0x7F,},
	{0xFD,0xFB,0xFF,0xFF,},
	{0xDB,0xAB,0x87,0xFF,},
	{0x81,0xB7,0xCF,0xFF,},
	{0xC7,0xBB,0xBB,0xFF,},
	{0xCF,0xB7,0x81,0xFF,},
	{0xC7,0xAB,0xA7,0xFF,},
	{0xF7,0x83,0xF5,0xFF,},
	{0x67,0x5B,0x83,0xFF,},
	{0x81,0xF7,0x8F,0xFF,},
	{0xB7,0x85,0xBF,0xFF,},
	{0x7F,0x77,0x85,0xFF,},
	{0x81,0xEF,0x97,0xFF,},
	{0xFF,0x81,0xFF,0xFF,},
	{0x83,0xF7,0x83,0xFF,},
	{0x83,0xFB,0x87,0xFF,},
	{0xC7,0xBB,0xC7,0xFF,},
	{0x03,0xDB,0xE7,0xFF,},
	{0xE7,0xDB,0x03,0xFF,},
	{0x87,0xFB,0xFB,0xFF,},
	{0xB7,0xAB,0xDB,0xFF,},
	{0xF7,0x81,0xF7,0xFF,},
	{0x83,0xBF,0x83,0xFF,},
	{0xC3,0xBF,0xC3,0xFF,},
	{0x83,0xDF,0x83,0xFF,},
	{0x93,0xEF,0x93,0xFF,},
	{0x63,0x5F,0x83,0xFF,},
	{0x9B,0xAB,0xB3,0xFF,},
	{0xF7,0xC9,0xBE,0xFF,},
	{0xFF,0x88,0xFF,0xFF,},
	{0xBE,0xC9,0xF7,0xFF,},
	{0xFB,0xF3,0xF7,0xFF,},
	{0xFF,0xFF,0xFF,0xFF,},
};
