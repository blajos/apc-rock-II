/*++
	linux/drivers/media/video/wmt_v4l2/sensors/ov7675/ov7675.h

	Copyright (c) 2013  WonderMedia Technologies, Inc.

	This program is free software: you can redistribute it and/or modify it under the
	terms of the GNU General Public License as published by the Free Software Foundation,
	either version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT
	ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
	PARTICULAR PURPOSE.  See the GNU General Public License for more details.
	You should have received a copy of the GNU General Public License along with
	this program.  If not, see <http://www.gnu.org/licenses/>.

	WonderMedia Technologies, Inc.
	10F, 529, Chung-Cheng Road, Hsin-Tien, Taipei 231, R.O.C.
--*/
#ifndef OV7675_H
#define OV7675_H


// Scene Mode
uint8_t ov7675_scene_mode_auto[] = {

};

uint8_t ov7675_scene_mode_night[] = {

};

// White Balance
uint8_t ov7675_wb_auto [] = {
	0x01,0x56,
	0x02,0x44,
	0x13, 0xe7,
};

uint8_t ov7675_wb_incandescent [] = {
	0x13, 0xe5,
	0x01,0x9a,
	0x02,0x40,
	0x6A, 0x48,
};

uint8_t ov7675_wb_fluorescent [] = {
	0x13, 0xe5,
	0x01,0x8b,
	0x02,0x42,
	0x6A, 0x40,
};

uint8_t ov7675_wb_daylight [] = {
	0x13, 0xe5,
	0x01,0x56,
	0x02,0x5c,
	0x6A, 0x42,
};

uint8_t ov7675_wb_cloudy [] = {
	0x13, 0xe5,
	0x01,0x58,
	0x02,0x60,
	0x6A, 0x40,
};


// Exposure
uint8_t ov7675_exposure_neg6[] = {
	0x55,0xb0,
};

uint8_t ov7675_exposure_neg3[] = {
	0x55,0x98,
};

uint8_t ov7675_exposure_zero[] = {
	0x55,0x00,
};

uint8_t ov7675_exposure_pos3[] = {
	0x55,0x18,
};

uint8_t ov7675_exposure_pos6[] = {
	0x55,0x30,
};


// Resolution
uint8_t ov7675_320x240[]= {

};

uint8_t ov7675_640x480[] = {
    0x17, 0x13,
    0x18, 0x01,
    0x32, 0xbf,
    0x19, 0x03,
    0x1a, 0x7b,
    0x03, 0x0a,
};

uint8_t ov7675_default_regs_init[] = {
	0x12, 0x80,
	0x11, 0x80,
	0x2a, 0x00,
	0x2b, 0x00,
	0x92, 0x66,
	0x93, 0x00,
	0x12, 0x00,
	0x3a, 0x04,
	0x3d, 0xC1,
	0x15, 0x00,
	0xc1, 0x7f,
	0x17, 0x13,
	0x18, 0x01,
	0x32, 0xbF,
	0x19, 0x03,
	0x1a, 0x7b,
	0x03, 0x0a,
	0x0c, 0x00,
	0x3e, 0x00,
	0x70, 0x3a,
	0x71, 0x35,
	0x72, 0x11,
	0x73, 0xf0,
	0xa2, 0x02,
	0x13, 0xe0,
	0x10, 0x00,
	0x14, 0x28,
	0xa5, 0x06,
	0xab, 0x07,
	0x24, 0x58,
	0x25, 0x48,
	0x26, 0x93,
	0x9f, 0x78,
	0xa0, 0x68,
	0xa1, 0x03,
	0xa6, 0xD8,
	0xa7, 0xD8,
	0xa8, 0xf0,
	0xa9, 0x90,
	0xaa, 0x14,
	0x13, 0xe5,
	0x0e, 0x61,
	0x0f, 0x4b,
	0x16, 0x02,
	0x1e, 0x17,       //0x07//0x27
	0x21, 0x02,
	0x22, 0x91,
	0x29, 0x07,
	0x33, 0x0b,
	0x35, 0x0b,
	0x37, 0x1d,
	0x38, 0x71,
	0x39, 0x2a,
	0x3c, 0x78,
	0x4d, 0x40,
	0x4e, 0x20,
	0x69, 0x00,
	0x6b, 0x0a,
	0x74, 0x10,
	0x8d, 0x4f,
	0x8e, 0x00,
	0x8f, 0x00,
	0x90, 0x00,
	0x91, 0x00,
	0x96, 0x00,
	0x9a, 0x80,
	0xb0, 0x84,
	0xb1, 0x0c,
	0xb2, 0x0e,
	0xb3, 0x82,
	0xb8, 0x0a,
	0xbb, 0xa1,
	0x0d, 0x60,
	0x42, 0x80,
	0x62, 0x00,
	0x63, 0x00,
	0x64, 0x10,
	0x65, 0x07,
	0x66, 0x05,
	0x94, 0x10,
	0x95, 0x12,
	0x7a, 0x20,//	0x7a, 0x24, 
	0x7b, 0x16,//	0x7b, 0x04, 
	0x7c, 0x23,//	0x7c, 0x07, 
	0x7d, 0x3c,//	0x7d, 0x12, 
	0x7e, 0x5c,//	0x7e, 0x2f, 
	0x7f, 0x69,//	0x7f, 0x3f, 
	0x80, 0x75,//	0x80, 0x4d, 
	0x81, 0x7e,//	0x81, 0x5a, 
	0x82, 0x88,//	0x82, 0x69, 
	0x83, 0x8f,//	0x83, 0x74, 
	0x84, 0x96,//	0x84, 0x7f, 
	0x85, 0xa3,//	0x85, 0x91, 
	0x86, 0xaf,//	0x86, 0x9e, 
	0x87, 0xc4,//	0x87, 0xbb, 
	0x88, 0xd7,//	0x88, 0xd2, 
	0x89, 0xe8,//	0x89, 0xe5, 
	0x43, 0x0a,
	0x44, 0xf0,
	0x45, 0x34,
	0x46, 0x58,
	0x47, 0x28,
	0x48, 0x3a,
	0x59, 0x88,
	0x5a, 0x88,
	0x5b, 0xc2,
	0x5c, 0x60,
	0x5d, 0x58,
	0x5e, 0x10,
	0x6c, 0x0a,
	0x6d, 0x55,
	0x6e, 0x11,
	0x6f, 0x9e,
	0x6a, 0x40,
	0x01, 0x56,
	0x02, 0x44,
	0x13, 0xe7,
	0x4f, 0x95,
	0x50, 0x99,
	0x51, 0x04,
	0x52, 0x1a,
	0x53, 0x7f,
	0x54, 0x99,
	0x58, 0x1a,
	0x3f, 0x02,
	0x75, 0x63,
	0x76, 0xe1,
	0x4c, 0x00,
	0x77, 0x04,//0x01
	0x4b, 0x09,
	0xc9, 0x60,
	0x41, 0x38,
	0x56, 0x40,
	0x34, 0x11,
	0x3b, 0xaa,
	0xa4, 0x88,
	0x96, 0x00,
	0x97, 0x30,
	0x98, 0x20,
	0x99, 0x30,
	0x9a, 0x84,
	0x9b, 0x29,
	0x9c, 0x03,
	0x9d, 0x99,
	0x9e, 0x99,
	0x78, 0x04,
	0x79, 0x01,
	0xc8, 0xf0,
	0x79, 0x0f,
	0xc8, 0x00,
	0x79, 0x10,
	0xc8, 0x7e,
	0x79, 0x0a,
	0xc8, 0x80,
	0x79, 0x0b,
	0xc8, 0x01,
	0x79, 0x0c,
	0xc8, 0x0f,
	0x79, 0x0d,
	0xc8, 0x20,
	0x79, 0x09,
	0xc8, 0x80,
	0x79, 0x02,
	0xc8, 0xc0,
	0x79, 0x03,
	0xc8, 0x40,
	0x79, 0x05,
	0xc8, 0x30,
	0x79, 0x26,
};

#endif
