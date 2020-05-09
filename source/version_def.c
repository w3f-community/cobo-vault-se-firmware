/*************************************************************************************************
Copyright (c) 2020 Cobo

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
in the file COPYING.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************************************/
/** Header file reference */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <version_def.h>

/** Variable declarations */
#if VER_REL
// release update pub key
uint8_t update_key_ex[422] = 
{
	0x30,0x82,0x01,0xa2,0x30,0x0d,0x06,0x09,0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x01,0x8f,0x00,
	0x30,0x82,0x01,0x8a,0x02,0x82,0x01,0x81,0x00,0xdf,0x75,0xe9,0xc2,0xf8,0x2e,0x91,0x13,0xe9,0x3c,0xf5,0xcf,0x17,0x39,0x43,
	0x66,0x94,0xf1,0x2b,0x90,0x09,0xc6,0xbc,0x37,0x15,0x6f,0x3c,0xc3,0x0f,0x25,0x9f,0x3a,0x06,0x61,0xbd,0xd2,0x23,0xa8,0x33,
	0xd3,0x9a,0x46,0x81,0x61,0x75,0x1c,0x58,0xa8,0x70,0xf2,0x50,0x22,0xc6,0x19,0xa4,0x01,0x0b,0x49,0x05,0x8a,0xe2,0x3c,0x2b,
	0x67,0xda,0xb4,0xd6,0xe3,0xcb,0x92,0xa1,0x19,0xa0,0xde,0x32,0x63,0x03,0xdb,0xad,0x67,0xb3,0x3c,0x79,0xa8,0xa1,0x64,0x3d,
	0xb6,0xf1,0xa5,0xe9,0x55,0xbc,0x7d,0x4d,0xe6,0xe9,0x08,0x07,0x80,0xdf,0x37,0xac,0x0b,0xc8,0xad,0x32,0xe9,0xb0,0x13,0xe4,
	0x67,0xf0,0x4b,0xf0,0xab,0x15,0x80,0x59,0xf5,0xbd,0x72,0x8b,0x82,0x24,0x56,0xb7,0x28,0xb7,0xec,0x0b,0xa8,0x94,0x43,0x3f,
	0x30,0x9a,0x7f,0x17,0xfd,0xa5,0xdf,0x46,0x3b,0x09,0xec,0xc8,0xaf,0x5d,0xfb,0xb1,0x15,0x91,0x27,0xaa,0xee,0x39,0x36,0x96,
	0xbf,0xb5,0x29,0x13,0x53,0x52,0x2a,0x54,0x28,0x89,0x78,0x24,0x90,0x4f,0x25,0xf0,0xb6,0x14,0x53,0xd2,0x95,0xfd,0x92,0x03,
	0x03,0xe2,0xf7,0x29,0x28,0xe1,0x72,0x12,0xcb,0xb1,0x1d,0x0c,0x70,0x1e,0x13,0x02,0x97,0x61,0xc5,0x70,0xcc,0x46,0xc6,0xfa,
	0x1d,0xdb,0xbc,0x97,0x38,0x64,0x59,0x5d,0x86,0x0e,0xbb,0xca,0x03,0xbd,0xb9,0xe7,0x01,0x36,0xf0,0x92,0x10,0xe9,0x4e,0x61,
	0x4d,0xf9,0x88,0xa2,0xda,0xc7,0xbf,0xcc,0x9a,0xcb,0x99,0x7e,0xd0,0x1a,0xb4,0xf7,0x5c,0xbf,0x02,0x33,0x6c,0x6a,0x75,0x3a,
	0x4e,0xc6,0xb5,0x17,0xe0,0xec,0x84,0xf2,0x60,0xd6,0x1a,0x4e,0x00,0xee,0x56,0xd9,0xe1,0x52,0xbd,0x8b,0x9a,0x2f,0x0a,0x48,
	0x84,0x69,0x93,0xbd,0x95,0xe2,0xdb,0x30,0x8c,0x23,0xae,0xdc,0x2e,0x52,0x7b,0x53,0x22,0x28,0x66,0x1c,0x6f,0xb6,0x3e,0x2b,
	0x0d,0xd0,0x90,0x0b,0x2a,0x1a,0x36,0xa6,0xd0,0x46,0xd6,0x4a,0x3a,0x59,0xfe,0xf9,0xc5,0x66,0x77,0x1f,0xd5,0x41,0xb5,0xcd,
	0xb0,0x74,0xef,0xfd,0x02,0x57,0x4a,0x6b,0x5e,0xaa,0x11,0x94,0xe8,0xfc,0x1f,0x2f,0x83,0x56,0x57,0xac,0x9a,0x72,0xa2,0x04,
	0x12,0xe4,0x46,0xb3,0xa4,0x71,0x05,0xee,0x65,0x74,0x5e,0x6b,0x81,0x6b,0x90,0x6e,0xf3,0x45,0x45,0xfe,0x6f,0xb4,0xaa,0xad,
	0xc3,0x77,0x03,0xe6,0xf5,0x99,0xdc,0x6d,0x37,0x02,0x03,0x01,0x00,0x01,
};
#else
// test update pub key
uint8_t update_key_ex[422] = 
{
	0x30,0x82,0x01,0xa2,0x30,0x0d,0x06,0x09,0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x01,0x8f,0x00,
	0x30,0x82,0x01,0x8a,0x02,0x82,0x01,0x81,0x00,0xc0,0x65,0xab,0xb8,0x9e,0xc7,0x2e,0xd1,0x69,0x2a,0xf3,0xc0,0x1e,0xab,0x81,
	0x56,0xbd,0x79,0x7e,0xff,0xcf,0xac,0xbc,0x9c,0x98,0x3c,0x0d,0x97,0xcf,0x38,0xbb,0xc2,0x8c,0x08,0xdd,0x3c,0xae,0xfd,0x79,
	0x33,0xdc,0x5d,0x44,0x74,0xf0,0x08,0x13,0x8c,0x5c,0x5f,0xbd,0x4a,0x49,0x88,0xbb,0xad,0xd1,0xaa,0x5f,0xaa,0x6a,0xca,0x9f,
	0x7d,0x2c,0x83,0xa0,0x03,0xc3,0x84,0xb2,0x47,0x13,0xc7,0x11,0x40,0x10,0x51,0x04,0x6d,0x82,0xee,0xdd,0x49,0xde,0xfd,0x5b,
	0xc2,0x8d,0xe4,0x7a,0x27,0xd8,0xe1,0x1b,0x5d,0xb0,0xf3,0x08,0x3c,0x5d,0xd5,0x62,0x9c,0xfd,0xb2,0x17,0x08,0xad,0x85,0xab,
	0x5a,0x84,0x82,0xa0,0x96,0x1f,0x59,0x32,0x47,0x57,0x0c,0x0e,0x14,0x25,0xb0,0xd1,0x47,0xec,0x47,0xe4,0x5f,0x96,0x6a,0x0e,
	0xc2,0x4d,0x90,0x12,0xbf,0x72,0x16,0x74,0xb3,0x15,0xc2,0xeb,0x8f,0x80,0xd2,0xe9,0x75,0xf3,0x6d,0xb1,0x38,0x7a,0x2c,0xed,
	0xfc,0x62,0xcf,0x66,0x1b,0x3f,0x75,0xc1,0x3f,0x17,0xcc,0x78,0x39,0x85,0x91,0x06,0x51,0xf2,0x27,0xfe,0xe1,0xeb,0x98,0x79,
	0x0d,0xba,0xcd,0x6f,0x0d,0x10,0x62,0x7a,0x7b,0x62,0x83,0xa8,0x6d,0x49,0xd5,0x05,0xaf,0x5b,0x6e,0xfa,0x62,0x77,0xbd,0xbf,
	0xe9,0x02,0xda,0x0a,0x61,0xb1,0x1f,0x4e,0xa2,0xd6,0x57,0xc8,0x97,0x85,0x7f,0xa5,0x55,0x08,0x5d,0x9f,0x90,0x82,0xc5,0x36,
	0xc1,0xca,0x07,0x5b,0x3b,0x1f,0x79,0xe7,0x77,0xbc,0xbd,0xa6,0x81,0x48,0x76,0x2e,0x2d,0x4f,0x6e,0xc0,0xa3,0x86,0xdb,0x88,
	0xd9,0x08,0xb0,0x24,0xa1,0xff,0x9d,0xbc,0xdf,0x35,0x5c,0x8a,0xbc,0x84,0xa6,0x19,0x4a,0x4f,0x6d,0x83,0x9d,0x71,0x62,0xb8,
	0x91,0xd0,0x2d,0x48,0x8f,0xb2,0x6f,0x4e,0x3a,0xf9,0x37,0xa2,0xdc,0xad,0xbc,0x96,0xcb,0x1d,0x44,0x7b,0xa9,0x50,0x3c,0xb9,
	0xb7,0x84,0x09,0x10,0x24,0x6d,0x81,0x2f,0xfd,0x9d,0xb0,0xe2,0x42,0x61,0xc3,0x79,0x50,0xf1,0x23,0xf3,0x8e,0x74,0x5d,0xfb,
	0xa2,0xe1,0x64,0x7a,0x48,0xb8,0xdf,0xae,0x6c,0x42,0xaa,0x02,0xb6,0x9d,0xc7,0x6d,0xdb,0x28,0xa1,0x5b,0x86,0x64,0x3b,0xf3,
	0x6a,0xe8,0x03,0xa0,0x01,0x0c,0xa8,0x51,0xab,0x0d,0x26,0x85,0x17,0x1a,0xbc,0x8d,0xc8,0x7f,0x3a,0x2f,0x55,0xb3,0x57,0xaa,
	0xd0,0x57,0x74,0x6a,0x6c,0x51,0xc5,0x3d,0x7f,0x02,0x03,0x01,0x00,0x01,
};
#endif