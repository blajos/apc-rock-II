/*++
	linux/drivers/media/video/wmt_v4l2/sensors/ov5640/ov5640-mid8-wms8368.h

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
#ifndef OV5640_H
#define OV5640_H

#include "ov5640_firmware.h"


// Scene Mode
uint32_t ov5640_scene_mode_auto[] = {
	0x3a00, 0x3c,
	0x3a02, 0x0b,
	0x3a03, 0x88,
	0x3a14, 0x0b,
	0x3a15, 0x88,
};

uint32_t ov5640_scene_mode_night[] = {
	0x3a00, 0x3c,
	0x3a02, 0x17,
	0x3a03, 0x10,
	0x3a14, 0x17,
	0x3a15, 0x10,
};


// White Balance
uint32_t ov5640_wb_auto [] = {
	0x3406, 0x00,
};

uint32_t ov5640_wb_incandescent [] = {
	0x3212, 0x03,
	0x3406, 0x01,
	0x3400, 0x05,
	0x3401, 0x48,
	0x3402, 0x04,
	0x3403, 0x00,
	0x3404, 0x07,
	0x3405, 0xcf,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_wb_fluorescent [] = {
	0x3212, 0x03,
	0x3406, 0x01,
	0x3400, 0x05,
	0x3401, 0x8c,
	0x3402, 0x04,
	0x3403, 0x00,
	0x3404, 0x06,
	0x3405, 0xe8,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_wb_daylight [] = {
	0x3212, 0x03,
	0x3406, 0x01,
	0x3400, 0x06,
	0x3401, 0x1c,
	0x3402, 0x04,
	0x3403, 0x00,
	0x3404, 0x04,
	0x3405, 0xf3,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_wb_cloudy [] = {
	0x3212, 0x03,
	0x3406, 0x01,
	0x3400, 0x06,
	0x3401, 0x48,
	0x3402, 0x04,
	0x3403, 0x00,
	0x3404, 0x04,
	0x3405, 0xd3,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_wb_tungsten [] = {
	0x3212, 0x03,
	0x3406, 0x01,
	0x3400, 0x04,
	0x3401, 0x10,
	0x3402, 0x04,
	0x3403, 0x00,
	0x3404, 0x08,
	0x3405, 0x40,
	0x3212, 0x13,
	0x3212, 0xa3,
};


// Exposure
uint32_t ov5640_exposure_neg6[] = {
	0x3a0f, 0x20,
	0x3a10, 0x18,
	0x3a11, 0x41,
	0x3a1b, 0x20,
	0x3a1e, 0x18,
	0x3a1f, 0x10,
};

uint32_t ov5640_exposure_neg3[] = {
	0x3a0f, 0x28,
	0x3a10, 0x20,
	0x3a11, 0x51,
	0x3a1b, 0x28,
	0x3a1e, 0x20,
	0x3a1f, 0x10,
};

uint32_t ov5640_exposure_zero[] = {
	0x3a0f, 0x30,
	0x3a10, 0x28,
	0x3a11, 0x61,
	0x3a1b, 0x30,
	0x3a1e, 0x28,
	0x3a1f, 0x10,
};

uint32_t ov5640_exposure_pos3[] = {
	0x3a0f, 0x40,
	0x3a10, 0x38,
	0x3a11, 0x71,
	0x3a1b, 0x40,
	0x3a1e, 0x38,
	0x3a1f, 0x10,
};

uint32_t ov5640_exposure_pos6[] = {
	0x3a0f, 0x50,
	0x3a10, 0x48,
	0x3a11, 0x90,
	0x3a1b, 0x50,
	0x3a1e, 0x48,
	0x3a1f, 0x20,
};

/*
 * The color effect settings
 */
uint32_t ov5640_colorfx_none[] = {
	0x3212, 0x03,
	0x5580, 0x06,
	0x5583, 0x40,
	0x5584, 0x10,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_colorfx_bw[] = {
	0x3212, 0x03,
	0x5580, 0x1e,
	0x5583, 0x80,
	0x5584, 0x80,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_colorfx_sepia[] = {
	0x3212, 0x03,
	0x5580, 0x1e,
	0x5583, 0x40,
	0x5584, 0xa0,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_colorfx_negative[] = {
	0x3212, 0x03,
	0x5580, 0x46,
	0x5583, 0x40,
	0x5584, 0x10,
	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_colorfx_emboss[] = {
};

uint32_t ov5640_colorfx_sketch[] = {
};

uint32_t ov5640_colorfx_sky_blue[] = {
};

uint32_t ov5640_colorfx_grass_green[] = {
};

uint32_t ov5640_colorfx_skin_whiten[] = {
};

uint32_t ov5640_colorfx_vivid[] = {
};

// Brightness
uint32_t ov5640_brightness_neg4[] = {
	0x3212, 0x03,

	0x5587, 0x40,
	0x5588, 0x09,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_neg3[] = {
	0x3212, 0x03,

	0x5587, 0x30,
	0x5588, 0x09,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_neg2[] = {
	0x3212, 0x03,

	0x5587, 0x20,
	0x5588, 0x09,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_neg1[] = {
	0x3212, 0x03,

	0x5587, 0x10,
	0x5588, 0x09,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_zero[] = {
	0x3212, 0x03,

	0x5587, 0x00,
	0x5588, 0x01,

	0x3212, 0x13,
	0x3212, 0xa3,

};

uint32_t ov5640_brightness_pos1[] = {
	0x3212, 0x03,

	0x5587, 0x10,
	0x5588, 0x01,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_pos2[] = {
	0x3212, 0x03,

	0x5587, 0x20,
	0x5588, 0x01,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_pos3[] = {
	0x3212, 0x03,

	0x5587, 0x30,
	0x5588, 0x01,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_brightness_pos4[] = {
	0x3212, 0x03,

	0x5587, 0x40,
	0x5588, 0x01,

	0x3212, 0x13,
	0x3212, 0xa3,
};

// Contrast
uint32_t ov5640_contrast_neg4[] = {
	0x3212, 0x03,

	0x5586, 0x10,
	0x5585, 0x10,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_neg3[] = {
	0x3212, 0x03,

	0x5586, 0x14,
	0x5585, 0x14,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_neg2[] = {
	0x3212, 0x03,

	0x5586, 0x18,
	0x5585, 0x18,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_neg1[] = {
	0x3212, 0x03,

	0x5586, 0x1c,
	0x5585, 0x1c,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_zero[] = {
	0x3212, 0x03,

	0x5586, 0x20,
	0x5585, 0x00,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_pos1[] = {
	0x3212, 0x03,

	0x5586, 0x24,
	0x5585, 0x10,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_pos2[] = {
	0x3212, 0x03,

	0x5586, 0x28,
	0x5585, 0x18,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_pos3[] = {
	0x3212, 0x03,

	0x5586, 0x2c,
	0x5585, 0x1c,

	0x3212, 0x13,
	0x3212, 0xa3,
};

uint32_t ov5640_contrast_pos4[] = {
	0x3212, 0x03,

	0x5586, 0x30,
	0x5585, 0x20,

	0x3212, 0x13,
	0x3212, 0xa3,
};

// Saturation
uint32_t ov5640_saturation_neg4[] = {
	0x5583, 0x20,
};

uint32_t ov5640_saturation_neg3[] = {
	0x5583, 0x28,
};

uint32_t ov5640_saturation_neg2[] = {
	0x5583, 0x30,
};

uint32_t ov5640_saturation_neg1[] = {
	0x5583, 0x38,
};

uint32_t ov5640_saturation_zero[] = {
	0x5583, 0x40,
};

uint32_t ov5640_saturation_pos1[] = {
	0x5583, 0x48,
};

uint32_t ov5640_saturation_pos2[] = {
	0x5583, 0x50,
};

uint32_t ov5640_saturation_pos3[] = {
	0x5583, 0x58,
};

uint32_t ov5640_saturation_pos4[] = {
	0x5583, 0x60,
};


uint32_t ov5640_2592_1944_regs[] = {
        0x4202, 0x0f,

	0x3c07, 0x07,
	0x5189, 0x66,

	0x5302, 0x1c,
	0x5303, 0x08,
	0x5306, 0x08,
	0x5307, 0x18,

        0x3503, 0x07,
	0x3a00, 0x38,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x00,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9f,

	/* Width * Height 2592x1944 */
	0x3808, 0x0a,
	0x3809, 0x20,
	0x380a, 0x07,
	0x380b, 0x98,

	0x3813, 0x04,
	0x3814, 0x11,
	0x3815, 0x11,

	0x3034, 0x1a,
	0x3035, 0x21,
	0x3036, 0x69,
	0x3037, 0x13,

	0x380c, 0x0b,
	0x380d, 0x1c,
	0x380e, 0x09,
	0x380f, 0x3a,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x08,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x09,

	0x3618, 0x04,
	0x3612, 0x2b,
	0x3709, 0x12,
	0x370c, 0x00,

	0x4004, 0x06,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x01,
        0x5001, 0x83,

	0x4713, 0x02,
	0x4407, 0x0c,
	0x460b, 0x37,
	0x460c, 0x20,

	0x4202, 0x00,
};

uint32_t ov5640_2048_1536_regs[] = {
        0x4202, 0x0f,

	0x3c07, 0x07,
	0x5189, 0x66,

        0x5302, 0x1c,
	0x5303, 0x08,
	0x5306, 0x08,
	0x5307, 0x18,

        0x3503, 0x07,
	0x3a00, 0x38,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x00,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9f,

	/* Width * Height 2048x1536 */
	0x3808, 0x08,
	0x3809, 0x00,
	0x380a, 0x06,
	0x380b, 0x00,

	0x3813, 0x04,
	0x3814, 0x11,
	0x3815, 0x11,

	0x3034, 0x1a,
	0x3035, 0x21,
	0x3036, 0x69,
	0x3037, 0x13,

	0x380c, 0x0b,
	0x380d, 0x1c,
	0x380e, 0x09,
	0x380f, 0x3a,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x08,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x09,

	0x3618, 0x04,
	0x3612, 0x2b,
	0x3709, 0x12,
	0x370c, 0x00,

	0x4004, 0x06,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x01,
        0x5001, 0xa3,

	0x4713, 0x02,
	0x4407, 0x0c,
	0x460b, 0x37,
	0x460c, 0x20,

	0x4202, 0x00,
};

uint32_t ov5640_1600_1200_regs[] = {
        0x4202, 0x0f,

	0x3c07, 0x07,
	0x5189, 0x66,

	0x5302, 0x1c,
	0x5303, 0x08,
	0x5306, 0x08,
	0x5307, 0x18,

        0x3503, 0x07,
	0x3a00, 0x38,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x00,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9f,

	/* Width * Height 1600x1200 */
	0x3808, 0x06,
	0x3809, 0x40,
	0x380a, 0x04,
	0x380b, 0xb0,

	0x3813, 0x04,
	0x3814, 0x11,
	0x3815, 0x11,

	0x3034, 0x1a,
	0x3035, 0x21,
	0x3036, 0x69,
	0x3037, 0x13,

	0x380c, 0x0b,
	0x380d, 0x1c,
	0x380e, 0x09,
	0x380f, 0x3a,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x08,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x09,

	0x3618, 0x04,
	0x3612, 0x2b,
	0x3709, 0x12,
	0x370c, 0x00,

	0x4004, 0x06,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x01,
        0x5001, 0xa3,

	0x4713, 0x02,
	0x4407, 0x0c,
	0x460b, 0x37,
	0x460c, 0x20,

	0x4202, 0x00,
};

uint32_t ov5640_1280_720_regs[] = {
	0x3008,0x42,
	0x3034,0x1a,
	//0x3035,0x21,	
	0x3036,0x69,
	0x3037,0x13,
	0x3108,0x01,
	0x3824,0x01,
	0xffff,0x32,
	0x3808,0x05,	
	0x3809,0x00,	
	0x380a,0x02,	
	0x380b,0xd0,	
	0x380c,0x07,	       
	0x380d,0x64,	
	0x380e,0x02,	  
	0x380f,0xe4,	   
	
	0x3a08,0x00, 
	0x3a09,0xdd, 
	0x3a0a,0x00, 
	0x3a0b,0xb8, 
	0x3a0e,0x03, 
	0x3a0d,0x04, 
	
	0x3c07,0x07,   
	0x3814,0x31, 
	0x3815,0x31, 
	0x3800,0x00,
	0x3801,0x00,   
	0x3802,0x00,	 
	0x3803,0xfa,  
	0x3804,0x0a, 
	0x3805,0x3f,  
	0x3806,0x06, 
	0x3807,0xa9, 
	0x3810,0x00, 
	0x3811,0x10, 
	0x3812,0x00, 
	0x3813,0x04,	
	
	0x5308,0x65,		
	0x5302,0x00,		
	0x4002,0x45,		
	0x4005,0x18,		
	
	0x3618,0x00,
	0x3612,0x29,
	0x3709,0x52,
	0x370c,0x03,
	0x3a02,0x02, 
	0x3a03,0xe0, 
	0x3a14,0x02, 
	0x3a15,0xe0,
	
	0x4004,0x02, 
	0x3002,0x1c, 
	0x3006,0xc3, 
	0x460b,0x37,	
	0x460c,0x20, 
	0x4837,0x16, 
	0x5001,0x83, 
	0x3503,0x00,
	
	0x302c,0xc2,
	0x3008,0x02,     
	0xffff,0x32,
};

uint32_t ov5640_800_600_regs[] = {
	0x4202, 0x0f,

	0x3c07, 0x08,
	0x5189, 0x72,

	0x3503, 0x00,
	0x3a00, 0x3c,

        0x5302, 0x38,
	0x5303, 0x18,
	0x5306, 0x06,
	0x5307, 0x16,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x04,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9b,

	/* Width * Height 800x600 */
	0x3808, 0x03,
	0x3809, 0x20,
	0x380a, 0x02,
	0x380b, 0x58,

	0x3810, 0x00,
	0x3811, 0x10,
	0x3812, 0x00,
	0x3813, 0x06,
	0x3814, 0x31,
	0x3815, 0x31,

	0x3034, 0x1a,
	0x3035, 0x11,
	0x3036, 0x46,
	0x3037, 0x13,

	0x380c, 0x07,
	0x380d, 0x68,
	0x380e, 0x03,
	0x380f, 0xd8,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x03,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x04,

	0x3618, 0x00,
	0x3612, 0x29,
	0x3709, 0x52,
	0x370c, 0x03,

	0x4004, 0x02,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x02,
	0x5001, 0xa3,

	0x4713, 0x03,
	0x4407, 0x04,
	0x460b, 0x35,
	0x460c, 0x22,
	0x4837, 0x22,

	0x4202, 0x00,

//	0x3023, 0x01,
//	0x3022, 0x04,
};

uint32_t ov5640_320_240_regs[] = {
	0x4202, 0x0f,

	0x3c07, 0x08,
	0x5189, 0x72,

	0x3503, 0x00,
	0x3a00, 0x3c,

	0x5302, 0x38,
	0x5303, 0x18,
	0x5306, 0x06,
	0x5307, 0x16,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x04,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9b,

	//320x240
	0x3808, 0x01,
	0x3809, 0x40,
	0x380a, 0x00,
	0x380b, 0xf0,

	0x3810, 0x00,
	0x3811, 0x10,
	0x3812, 0x00,
	0x3813, 0x06,
	0x3814, 0x31,
	0x3815, 0x31,

	0x3034, 0x1a,
	0x3035, 0x11,
	0x3036, 0x46,
	0x3037, 0x13,

	0x380c, 0x07,
	0x380d, 0x68,
	0x380e, 0x03,
	0x380f, 0xd8,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x03,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x04,

	0x3618, 0x00,
	0x3612, 0x29,
	0x3709, 0x52,
	0x370c, 0x03,

	0x4004, 0x02,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x02,
	0x5001, 0xa3,

	0x4713, 0x03,
	0x4407, 0x04,
	0x460b, 0x35,
	0x460c, 0x22,
	0x4837, 0x22,

	0x4202, 0x00,

//	0x3023, 0x01,
//	0x3022, 0x04,
};

uint32_t ov5640_640_480_regs[] = {
	0x4202, 0x0f,

	0x3c07, 0x08,
	0x5189, 0x72,

	0x3503, 0x00,
	0x3a00, 0x3c,

        0x5302, 0x20,//38
	0x5303, 0x08, //18
	0x5306, 0x26,//06
	0x5307, 0x1c,//16

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x04,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9b,

	0x3808, 0x02,
	0x3809, 0x80,
	0x380a, 0x01,
	0x380b, 0xe0,

	0x3810, 0x00,
	0x3811, 0x10,
	0x3812, 0x00,
	0x3813, 0x06,
	0x3814, 0x31,
	0x3815, 0x31,

	0x3034, 0x1a,
	0x3035, 0x11,  //11
	0x3036, 0x46,
	0x3037, 0x13,

	0x380c, 0x07,
	0x380d, 0x68,
	0x380e, 0x03,
	0x380f, 0xd8,

	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x03,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x04,

	0x3618, 0x00,
	0x3612, 0x29,
	0x3709, 0x52,
	0x370c, 0x03,

	0x4004, 0x02,
	0x3002, 0x1c,
	0x3006, 0xc3,
	0x3824, 0x02,
	0x5001, 0xa3,

	0x4713, 0x03,
	0x4407, 0x04,
	0x460b, 0x35,
	0x460c, 0x22,
	0x4837, 0x22,

	0x4202, 0x00,

//	0x3023, 0x01,
//	0x3022, 0x04,
};

uint32_t ov5640_default_regs_init[] = {
	0x3008, 0x42,
	0x3103, 0x03,
	0x3017, 0x7f,
	0x3018, 0xff,

	0x3031, 0x00,
	0x302c, 0xc2,

	0x3108, 0x01,
	0x3630, 0x36,
	0x3631, 0x0e,
	0x3632, 0xe2,
	0x3633, 0x12,
	0x3621, 0xe0,
	0x3704, 0xa0,
	0x3703, 0x5a,
	0x3715, 0x78,
	0x3717, 0x01,
	0x370b, 0x60,
	0x3705, 0x1a,
	0x3905, 0x02,
	0x3906, 0x10,
	0x3901, 0x0a,
	0x3731, 0x12,
	0x3600, 0x08,
	0x3601, 0x33,
	0x302d, 0x60,
	0x3620, 0x52,
	0x371b, 0x20,
	0x471c, 0x50,

	0x3a13, 0x43,
	0x3a18, 0x00,
	0x3a19, 0xf8,

	0x3635, 0x13,
	0x3636, 0x03,
	0x3634, 0x40,
	0x3622, 0x01,

	0x3c04, 0x28,
	0x3c05, 0x98,
	0x3c06, 0x00,
	0x3c07, 0x08,
	0x3c08, 0x00,
	0x3c09, 0x1c,
	0x3c0a, 0x9c,
	0x3c0b, 0x40,

	0x3820, 0x41,
	0x3821, 0x07,

	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x04,
	0x3804, 0x0a,
	0x3805, 0x3f,
	0x3806, 0x07,
	0x3807, 0x9b,
	0x3808, 0x02,
	0x3809, 0x80,
	0x380a, 0x01,
	0x380b, 0xe0,
	0x3810, 0x00,
	0x3811, 0x10,
	0x3812, 0x00,
	0x3813, 0x06,
	0x3814, 0x31,
	0x3815, 0x31,

	0x3034, 0x1a,
	0x3035, 0x11,
	0x3036, 0x46,
	0x3037, 0x13,

	0x380c, 0x07,
	0x380d, 0x68,
	0x380e, 0x03,
	0x380f, 0xd8,

	0x3c01, 0xb4,
	0x3c00, 0x04,
	0x3a08, 0x01,
	0x3a09, 0x27,
	0x3a0e, 0x03,
	0x3a0a, 0x00,
	0x3a0b, 0xf6,
	0x3a0d, 0x04,

	0x3a00, 0x3c,
	0x3a02, 0x0b,
	0x3a03, 0x88,
	0x3a14, 0x0b,
	0x3a15, 0x88,

	0x3618, 0x00,
	0x3612, 0x29,
	0x3708, 0x64,
	0x3709, 0x52,
	0x370c, 0x03,

	0x4001, 0x02,
	0x4004, 0x02,
	0x3000, 0x00,
	0x3002, 0x1c,
	0x3004, 0xff,
	0x3006, 0xc3,
	0x300e, 0x58,
	0x302e, 0x00,
	0x4300, 0x30,
	0x501f, 0x00,
	0x4713, 0x03,
	0x4407, 0x04,
	0x440e, 0x00,
	0x460b, 0x35,
	0x460c, 0x22,
	0x4837, 0x22,
	0x3824, 0x02,
	0x5001, 0xa3,

	0x5180, 0xff,
	0x5181, 0xf2,
	0x5182, 0x00,
	0x5183, 0x14,
	0x5184, 0x25,
	0x5185, 0x24,
	0x5186, 0x16,
	0x5187, 0x16,
	0x5188, 0x16,
	0x5189, 0x72,
	0x518a, 0x68,
	0x518b, 0xe0,
	0x518c, 0xb2,
	0x518d, 0x42,
	0x518e, 0x3e,
	0x518f, 0x4c,
	0x5190, 0x56,
	0x5191, 0xf8,
	0x5192, 0x04,
	0x5193, 0x70,
	0x5194, 0xf0,
	0x5195, 0xf0,
	0x5196, 0x03,
	0x5197, 0x01,
	0x5198, 0x04,
	0x5199, 0x12,
	0x519a, 0x04,
	0x519b, 0x00,
	0x519c, 0x06,
	0x519d, 0x82,
	0x519e, 0x38,

	0x5381, 0x1e,
	0x5382, 0x5b,
	0x5383, 0x12,
	0x5384, 0x07,
	0x5385, 0x7f,
	0x5386, 0x86,
	0x5387, 0x8a,
	0x5388, 0x80,
	0x5389, 0x0a,
	0x538a, 0x01,
	0x538b, 0x98,

	0x5480, 0x01,
	0x5481, 0x06,
	0x5482, 0x12,
	0x5483, 0x24,
	0x5484, 0x4a,
	0x5485, 0x58,
	0x5486, 0x65,
	0x5487, 0x72,
	0x5488, 0x7d,
	0x5489, 0x88,
	0x548a, 0x92,
	0x548b, 0xa3,
	0x548c, 0xb2,
	0x548d, 0xc8,
	0x548e, 0xdd,
	0x548f, 0xf0,
	0x5490, 0x15,

	0x5300, 0x08,
	0x5301, 0x30,
	0x5302, 0x3f,
	0x5303, 0x10,
	0x5304, 0x08,
	0x5305, 0x30,
	0x5306, 0x04,
	0x5307, 0x14,
	0x5309, 0x08,
	0x530a, 0x30,
	0x530b, 0x04,
	0x530c, 0x06,

	0x5580, 0x06,
	0x5583, 0x40,
	0x5584, 0x20,
	0x5589, 0x10,
	0x558a, 0x00,
	0x558b, 0xf8,

	0x5000, 0xa7,
#if 0
	0x5800, 0x20,
	0x5801, 0x19,
	0x5802, 0x17,
	0x5803, 0x16,
	0x5804, 0x18,
	0x5805, 0x21,
	0x5806, 0x0F,
	0x5807, 0x0A,
	0x5808, 0x07,
	0x5809, 0x07,
	0x580A, 0x0A,
	0x580B, 0x0C,
	0x580C, 0x0A,
	0x580D, 0x03,
	0x580E, 0x01,
	0x580F, 0x01,
	0x5810, 0x03,
	0x5811, 0x09,
	0x5812, 0x0A,
	0x5813, 0x03,
	0x5814, 0x01,
	0x5815, 0x01,
	0x5816, 0x03,
	0x5817, 0x08,
	0x5818, 0x10,
	0x5819, 0x0A,
	0x581A, 0x06,
	0x581B, 0x06,
	0x581C, 0x08,
	0x581D, 0x0E,
	0x581E, 0x22,
	0x581F, 0x18,
	0x5820, 0x13,
	0x5821, 0x12,
	0x5822, 0x16,
	0x5823, 0x1E,
	0x5824, 0x64,
	0x5825, 0x2A,
	0x5826, 0x2C,
	0x5827, 0x2A,
	0x5828, 0x46,
	0x5829, 0x2A,
	0x582A, 0x26,
	0x582B, 0x24,
	0x582C, 0x26,
	0x582D, 0x2A,
	0x582E, 0x28,
	0x582F, 0x42,
	0x5830, 0x40,
	0x5831, 0x42,
	0x5832, 0x08,
	0x5833, 0x28,
	0x5834, 0x26,
	0x5835, 0x24,
	0x5836, 0x26,
	0x5837, 0x2A,
	0x5838, 0x44,
	0x5839, 0x4A,
	0x583A, 0x2C,
	0x583B, 0x2a,
	0x583C, 0x46,
	0x583D, 0xCE,
#endif

	0x5800, 0x29,
	0x5801, 0x18,
	0x5802, 0x13,
	0x5803, 0x13,
	0x5804, 0x1A,
	0x5805, 0x28,
	0x5806, 0x0D,
	0x5807, 0x09,
	0x5808, 0x06,
	0x5809, 0x06,
	0x580a, 0x08,
	0x580b, 0x11,
	0x580c, 0x09,
	0x580d, 0x04,
	0x580e, 0x01,
	0x580f, 0x01,
	0x5810, 0x04,
	0x5811, 0x09,
	0x5812, 0x09,
	0x5813, 0x04,
	0x5814, 0x01,
	0x5815, 0x01,
	0x5816, 0x04,
	0x5817, 0x0A,
	0x5818, 0x0E,
	0x5819, 0x09,
	0x581a, 0x06,
	0x581b, 0x06,
	0x581c, 0x09,
	0x581d, 0x11,
	0x581e, 0x28,
	0x581f, 0x18,
	0x5820, 0x12,
	0x5821, 0x13,
	0x5822, 0x19,
	0x5823, 0x2C,
	0x5824, 0x3B,
	0x5825, 0x27,
	0x5826, 0x08,
	0x5827, 0x27,
	0x5828, 0x0E,
	0x5829, 0x17,
	0x582a, 0x25,
	0x582b, 0x23,
	0x582c, 0x15,
	0x582d, 0x06,
	0x582e, 0x08,
	0x582f, 0x42,
	0x5830, 0x40,
	0x5831, 0x32,
	0x5832, 0x07,
	0x5833, 0x27,
	0x5834, 0x25,
	0x5835, 0x24,
	0x5836, 0x25,
	0x5837, 0x05,
	0x5838, 0x29,
	0x5839, 0x2A,
	0x583a, 0x0A,
	0x583b, 0x18,
	0x583c, 0x4B,
	0x583d, 0xCE,
	0x5688, 0x11,//weight
	0x5689, 0x11,
	0x568a, 0x11,
	0x568b, 0x11,
	0x568c, 0x11,
	0x568d, 0x11,
	0x568e, 0x11,
	0x568f, 0x11,

	0x5025, 0x00,

	0x3a0f, 0x30,
	0x3a10, 0x28,
	0x3a1b, 0x30,
	0x3a1e, 0x28,
	0x3a11, 0x61,
	0x3a1f, 0x10,

	0x4005, 0x1a,

	0x3503, 0x00,
	0x3008, 0x02,
};
#endif
