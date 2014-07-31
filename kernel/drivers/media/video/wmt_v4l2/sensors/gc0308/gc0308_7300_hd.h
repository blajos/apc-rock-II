/*++
	linux/drivers/media/video/wmt_v4l2/sensors/gc0308/gc0308_7300_hd.h

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

#ifndef GC0308_H
#define GC0308_H

#define GC0308_I2C_ADDR		0x21

#define gc0308_read_reg(r) 	wmt_vid_i2c_read(GC0308_I2C_ADDR, r)

#define gc0308_write_reg(r, d)	wmt_vid_i2c_write(GC0308_I2C_ADDR, r, d)

#define gc0308_write_array(a)					\
do {								\
	cmos_init_8bit_addr(a, ARRAY_SIZE(a), GC0308_I2C_ADDR);	\
} while (0)


// Scene Mode
unsigned char gc0308_scene_mode_auto[] = {
	0xec, 0x20,
};

unsigned char gc0308_scene_mode_night[] = {
	0xec, 0x30,
};


// White Balance
unsigned char gc0308_wb_auto [] = {
	0x5a, 0x56,
	0x5b, 0x40,
	0x5c, 0x4a,
	0x22, 0x57,
};

unsigned char gc0308_wb_incandescent [] = {
	0x22, 0x55,
	0x5a, 0x48,
	0x5b, 0x40,
	0x5c, 0x5c,
};

unsigned char gc0308_wb_fluorescent [] = {
	0x22, 0x55,
	0x5a, 0x40,
	0x5b, 0x42,
	0x5c, 0x50,
};

unsigned char gc0308_wb_daylight [] = {
	0x22, 0x55,
	0x5a, 0x74,
	0x5b, 0x52,
	0x5c, 0x40,
};

unsigned char gc0308_wb_cloudy [] = {
	0x22, 0x55,
	0x5a, 0x8c,
	0x5b, 0x50,
	0x5c, 0x40,
};


// Exposure
unsigned char gc0308_exposure_neg6[] = {
	0xb5, 0xe0,
	0xd3, 0x38,
};

unsigned char gc0308_exposure_neg3[] = {
	0xb5, 0xf0,
	0xd3, 0x40,
};

unsigned char gc0308_exposure_zero[] = {
	0xb5, 0x00,
	0xd3, 0x40,
};

unsigned char gc0308_exposure_pos3[] = {
	0xb5, 0x10,
	0xd3, 0x50,
};

unsigned char gc0308_exposure_pos6[] = {
	0xb5, 0x20,
	0xd3, 0x58,
};


// Resolution
unsigned char gc0308_320x240[]= {
0xfe,  0x01, 0x54, 0x22, 0x55, 0x03, 0x56, 0x00, 0x57, 0x00, 0x58, 0x00, 0x59, 0x00, 0xfe, 0x00
};

unsigned char gc0308_640x480[]={
0xfe,0x80, 	
		
0xfe,0x00,  // set page0
	
0xd2,0x10,  // close AEC
0x22,0x55,  // close AWB

0x03,0x01,                                 
0x04,0x2c,                                 
0x5a,0x56,
0x5b,0x40,
0x5c,0x4a,			

0x22,0x57,  // Open AWB

0x01,0xfa,                                   
0x02,0x70,                                 
0x0f,0x01,                                 
                                                                  
0xe2,0x00,  //anti-flicker step [11:8]     
0xe3,0x64,  //anti-flicker step [7:0]      
         
0xe4,0x02,  //exp level 1  16.67fps        
0xe5,0x58,                                 
0xe6,0x03,  //exp level 2  12.5fps         
0xe7,0x20,                                 
0xe8,0x04,  //exp level 3  8.33fps         
0xe9,0xb0,                                 
0xea,0x09,  //exp level 4  4.00fps         
0xeb,0xc4,                                 

0xec,0x20,
	   
0x05,0x00,                                 
0x06,0x00,                                 
0x07,0x00,                                 
0x08,0x00,                                 
0x09,0x01,                                 
0x0a,0xe8,                                 
0x0b,0x02,                                 
0x0c,0x88,                                 
0x0d,0x02,                                 
0x0e,0x02,                                 
0x10,0x22,                                 
0x11,0xfd,                                 
0x12,0x2a,                                 
0x13,0x00,                                 
0x14,0x10, //0x10		 
                           
0x15,0x0a,                                 
0x16,0x05,                                 
0x17,0x01,                                 
0x18,0x44,                                 
0x19,0x44,                                 
0x1a,0x1e,                                 
0x1b,0x00,                                 
0x1c,0xc1,                                 
0x1d,0x08,                                 
0x1e,0x60,                                 
0x1f,0x03,                                              

                                                   
        
0x20,0xff,                                 
0x21,0xf8,                                 
0x22,0x57,                                 
0x24,0xa2,                                 
0x25,0x0f,                                 
  
//output sync_mode                                              

 
0x26,0x02,  //0x03  20101016 zhj                 
            
0x2f,0x01,                                 
0x30,0xf7,                                 
0x31,0x50,
0x32,0x00,
0x39,0x04,
0x3a,0x18,
0x3b,0x20,                                 
0x3c,0x00,                                 
0x3d,0x00,                                 
0x3e,0x00,                                 
0x3f,0x00,                                 
0x50,0x10,                                 
0x53,0x82,                                 
0x54,0x80,                                 
0x55,0x80,                                 
0x56,0x82,                                 
0x8b,0x40,                                 
0x8c,0x40,                                 
0x8d,0x40,                                 
0x8e,0x2e,                                 
0x8f,0x2e,                                 
0x90,0x2e,                                 
0x91,0x3c,                                 
0x92,0x50,                                 
0x5d,0x12,                                 
0x5e,0x1a,                                 
0x5f,0x24,                                 
0x60,0x07,                                 
0x61,0x15,                                 
0x62,0x08,                                 
0x64,0x03,                                 
0x66,0xe8,                                 
0x67,0x86,                                 
0x68,0xa2,                                 
0x69,0x18,                                 
0x6a,0x0f,                                 
0x6b,0x00,                                 
0x6c,0x5f,                                 
0x6d,0x8f,                                 
0x6e,0x55,                                 
0x6f,0x38,                                 
0x70,0x15,                                 
0x71,0x33,                                 
0x72,0xdc,                                 
0x73,0x80,                                 
0x74,0x02,                                 
0x75,0x3f,                                 
0x76,0x02,                                 
0x77,0x54,                                 
0x78,0x88,                                 
0x79,0x81,                                 
0x7a,0x81,                                 
0x7b,0x22,                                 
0x7c,0xff,                                 
0x93,0x48,                                 
0x94,0x00,                                 
0x95,0x05,                                 
0x96,0xe8,                                 
0x97,0x40,                                 
0x98,0xf0,                                 
0xb1,0x38,                                 
0xb2,0x38,                                 
0xbd,0x38,                                 
0xbe,0x36,                                 
0xd0,0xc9,                                 
0xd1,0x10,                                 
//{{0xd2,0x90,                               
0xd3,0x80,                                 
0xd5,0xf2,                                 
0xd6,0x16,                                 
0xdb,0x92,                                 
0xdc,0xa5,                                 
0xdf,0x23,                                 
0xd9,0x00,                                 
0xda,0x00,                                 
0xe0,0x09,                                 
                               
0xed,0x04,                                 
0xee,0xa0,                                 
0xef,0x40,                                 
0x80,0x03,                                 
0x80,0x03,   

	
0x9F,0x10,                                 
0xA0,0x20,                                 
0xA1,0x38,                                 
0xA2,0x4E,                                 
0xA3,0x63,                                 
0xA4,0x76,                                 
0xA5,0x87,                                 
0xA6,0xA2,                                 
0xA7,0xB8,                                 
0xA8,0xCA,                                 
0xA9,0xD8,                                 
0xAA,0xE3,                                 
0xAB,0xEB,                                 
0xAC,0xF0,                                 
0xAD,0xF8,                                 
0xAE,0xFD,                                 
0xAF,0xFF,                                 
	
0xc0,0x00,                                 
0xc1,0x10,                                 
0xc2,0x1C,                                 
0xc3,0x30,                                 
0xc4,0x43,                                 
0xc5,0x54,                                 
0xc6,0x65,                                 
0xc7,0x75,                                 
0xc8,0x93,                                 
0xc9,0xB0,                                 
0xca,0xCB,                                 
0xcb,0xE6,                                 
0xcc,0xFF,                                 
0xf0,0x02,                                 
0xf1,0x01,                                 
0xf2,0x01,                                 
0xf3,0x30,                                 
0xf9,0x9f,                                 
0xfa,0x78,                                 
//----------------------------
0xfe,0x01,// set page1                           
0x00,0xf5,                                 
0x02,0x1a,                                 
0x0a,0xa0,                                 
0x0b,0x60,                                 
0x0c,0x08,                                 
0x0e,0x4c,                                 
0x0f,0x39,                                 
0x11,0x3f,                                 
0x12,0x72,                                 
0x13,0x13,                                 
0x14,0x42,                                 
0x15,0x43,                                 
0x16,0xc2,                                 
0x17,0xa8,                                 
0x18,0x18,                                 
0x19,0x40,                                 
0x1a,0xd0,                                 
0x1b,0xf5,                                 
0x70,0x40,                                 
0x71,0x58,                                 
0x72,0x30,                                 
0x73,0x48,                                 
0x74,0x20,                                 
0x75,0x60,                                 
0x77,0x20,                                 
0x78,0x32,                                 
0x30,0x03,                                 
0x31,0x40,                                 
0x32,0xe0,                                 
0x33,0xe0,                                 
0x34,0xe0,                                 
0x35,0xb0,                                 
0x36,0xc0,                                 
0x37,0xc0,                                 
0x38,0x04,                                 
0x39,0x09,                                 
0x3a,0x12,                                 
0x3b,0x1C,                                 
0x3c,0x28,                                 
0x3d,0x31,                                 
0x3e,0x44,                                 
0x3f,0x57,                                 
0x40,0x6C,                                 
0x41,0x81,                                 
0x42,0x94,                                 
0x43,0xA7,                                 
0x44,0xB8,                                 
0x45,0xD6,                                 
0x46,0xEE,                                 
0x47,0x0d,                                 
0xfe,0x00,// set page0
	 
//-----------Update the registers 2010/07/06-----------
	//Registers of Page0
0xfe,0x00,// set page0
0x10,0x26,                                
0x11,0x0d, // fd},{modified by mormo 2010/07/06  
                         
0x1a,0x2a, // 1e},{modified by mormo 2010/07/06         

       
0x1c,0x49,// c1},{modified by mormo 2010/07/06   
0x1d,0x9a,// 08},{modified by mormo 2010/07/06          

               
0x1e,0x61,// 60},{modified by mormo 2010/07/06   

0x3a,0x20,

0x50,0x14, // 10},{modified by mormo 2010/07/06         

                   
0x53,0x80,                                 
0x56,0x80,
	
0x8b,0x20,//LSC                                 
0x8c,0x20,                                 
0x8d,0x20,                                 
0x8e,0x14,                                 
0x8f,0x10,                                 
0x90,0x14,                                 

0x94,0x02,                                 
0x95,0x07,                                 
0x96,0xe0,                                 

0xb1,0x40,// YCPT                                
0xb2,0x40,                                 
0xb3,0x38,
0xb6,0xe0,

0xd0,0xcb,// AECT  c9},{modifed by mormo 2010/07/06     

                           
0xd3,0x40,// 80},{modified by mormor 2010/07/06         

               

0xf2,0x02,                                 
0xf7,0x12,
0xf8,0x0a,

	//Registers of Page1
0xfe,0x01,// set page1    
0x02,0x20,
0x04,0x10,
0x05,0x08,
0x06,0x20,
0x08,0x0a,

0x0e,0x44,                                 
0x0f,0x32,
0x10,0x41,                                 
0x11,0x37,                                 
0x12,0x22,                                 
0x13,0x19,                                 
0x14,0x44,                                 
0x15,0x44, 
	
0x19,0x50,                                 
0x1a,0xd8,
	
0x32,0x10,
	
0x35,0x00,                                 
0x36,0x80,                                 
0x37,0x00,
//-----------Update the registers end---------//
0xfe,0x00,// set page0
0xd2,0x90,
};
#endif
