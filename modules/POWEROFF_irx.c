#ifndef __POWEROFF_irx__
#define __POWEROFF_irx__

static unsigned int size_POWEROFF_irx = 3413;
static unsigned char POWEROFF_irx[] __attribute__((aligned(16))) = {
	0x7f, 0x45, 0x4c, 0x46, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0xff, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa0, 0x03, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 
	0x24, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x34, 0x00, 0x20, 0x00, 0x02, 0x00, 0x28, 0x00, 
	0x09, 0x00, 0x08, 0x00, 0x80, 0x00, 0x00, 0x70, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x50, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0xa0, 0x03, 0x00, 0x00, 0x50, 0x87, 0x00, 0x00, 
	0x40, 0x06, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x01, 0x01, 0x50, 0x6f, 
	0x77, 0x65, 0x72, 0x6f, 0x66, 0x66, 0x5f, 0x48, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x72, 0x00, 0x00, 
	0xe8, 0xff, 0xbd, 0x27, 0x40, 0xbf, 0x02, 0x3c, 0x10, 0x00, 0xb0, 0xaf, 0x14, 0x00, 0xbf, 0xaf, 
	0x08, 0x20, 0x42, 0x34, 0x00, 0x00, 0x43, 0x90, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x63, 0x30, 
	0x0c, 0x00, 0x60, 0x14, 0x21, 0x80, 0x80, 0x00, 0x40, 0xbf, 0x02, 0x3c, 0x08, 0x20, 0x42, 0x90, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x42, 0x30, 0x06, 0x00, 0x40, 0x10, 0x04, 0x00, 0x02, 0x24, 
	0x00, 0x00, 0x03, 0x3c, 0x3c, 0x07, 0x63, 0x8c, 0x40, 0xbf, 0x01, 0x3c, 0x0a, 0x00, 0x60, 0x14, 
	0x08, 0x20, 0x22, 0xa0, 0x00, 0x00, 0x02, 0x3c, 0x38, 0x07, 0x42, 0x8c, 0x00, 0x00, 0x00, 0x00, 
	0x09, 0xf8, 0x40, 0x00, 0x21, 0x20, 0x00, 0x02, 0x14, 0x00, 0xbf, 0x8f, 0x10, 0x00, 0xb0, 0x8f, 
	0x08, 0x00, 0xe0, 0x03, 0x18, 0x00, 0xbd, 0x27, 0x00, 0x00, 0x04, 0x3c, 0x40, 0x07, 0x84, 0x8c, 
	0x09, 0xf8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
	0xe0, 0xff, 0xbd, 0x27, 0x14, 0x00, 0xb1, 0xaf, 0x10, 0x00, 0xb0, 0xaf, 0x18, 0x00, 0xbf, 0xaf, 
	0x07, 0x00, 0x11, 0x24, 0x38, 0x00, 0x10, 0x24, 0x00, 0x00, 0x02, 0x3c, 0x21, 0x10, 0x50, 0x00, 
	0xc0, 0x07, 0x42, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x40, 0x14, 0xff, 0xff, 0x31, 0x26, 
	0xf8, 0xff, 0x10, 0x26, 0xf8, 0xff, 0x21, 0x06, 0x0f, 0x00, 0x02, 0x24, 0x18, 0x00, 0xbf, 0x8f, 
	0x14, 0x00, 0xb1, 0x8f, 0x10, 0x00, 0xb0, 0x8f, 0x40, 0xbf, 0x01, 0x3c, 0x16, 0x20, 0x22, 0xa0, 
	0x40, 0xbf, 0x01, 0x3c, 0x17, 0x20, 0x20, 0xa0, 0x08, 0x00, 0xe0, 0x03, 0x20, 0x00, 0xbd, 0x27, 
	0x00, 0x00, 0x04, 0x3c, 0x21, 0x20, 0x90, 0x00, 0xc4, 0x07, 0x84, 0x8c, 0x09, 0xf8, 0x40, 0x00, 
	0xf8, 0xff, 0x10, 0x26, 0x31, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xbd, 0x27, 
	0x00, 0x00, 0x05, 0x3c, 0x50, 0x07, 0xa5, 0x24, 0x14, 0x00, 0x04, 0x24, 0x10, 0x00, 0x06, 0x24, 
	0x21, 0x38, 0x00, 0x00, 0x18, 0x00, 0xbf, 0xaf, 0x10, 0x00, 0xa0, 0xaf, 0x55, 0x01, 0x00, 0x0c, 
	0x14, 0x00, 0xa0, 0xaf, 0x18, 0x00, 0xbf, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x20, 0x00, 0xbd, 0x27, 0x00, 0x00, 0x01, 0x3c, 0x3c, 0x07, 0x24, 0xac, 0x00, 0x00, 0x01, 0x3c, 
	0x08, 0x00, 0xe0, 0x03, 0x40, 0x07, 0x25, 0xac, 0xe8, 0xff, 0xbd, 0x27, 0x00, 0x00, 0x08, 0x3c, 
	0xc0, 0x07, 0x08, 0x25, 0x10, 0x00, 0xbf, 0xaf, 0x21, 0x38, 0x00, 0x00, 0x04, 0x00, 0x09, 0x25, 
	0xc0, 0x18, 0x07, 0x00, 0x21, 0x30, 0x68, 0x00, 0x00, 0x00, 0xc2, 0x8c, 0x00, 0x00, 0x00, 0x00, 
	0x11, 0x00, 0x40, 0x10, 0x21, 0x10, 0x69, 0x00, 0x01, 0x00, 0xe7, 0x24, 0x08, 0x00, 0xe2, 0x28, 
	0xf7, 0xff, 0x40, 0x14, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x02, 0x24, 0x05, 0x00, 0xe2, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xbf, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x18, 0x00, 0xbd, 0x27, 0x00, 0x00, 0x04, 0x3c, 0x66, 0x01, 0x00, 0x0c, 0x54, 0x06, 0x84, 0x24, 
	0x69, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xac, 0x66, 0x00, 0x00, 0x08, 
	0x00, 0x00, 0x45, 0xac, 0xe8, 0xff, 0xbd, 0x27, 0x10, 0x00, 0xbf, 0xaf, 0x21, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x3c, 0xc0, 0x07, 0x63, 0x24, 0x00, 0x00, 0x62, 0x8c, 0x00, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x44, 0x10, 0x08, 0x00, 0x63, 0x24, 0x01, 0x00, 0xc6, 0x24, 0x08, 0x00, 0xc2, 0x28, 
	0xf9, 0xff, 0x40, 0x14, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xbf, 0x8f, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0xe0, 0x03, 0x18, 0x00, 0xbd, 0x27, 0x08, 0x00, 0xc2, 0x28, 0xfa, 0xff, 0x40, 0x10, 
	0x07, 0x00, 0xc2, 0x28, 0x0f, 0x00, 0x40, 0x10, 0xc0, 0x20, 0x06, 0x00, 0x00, 0x00, 0x07, 0x3c, 
	0xc0, 0x07, 0xe7, 0x24, 0x08, 0x00, 0xe8, 0x24, 0xc0, 0x10, 0x06, 0x00, 0x21, 0x20, 0x48, 0x00, 
	0x00, 0x00, 0x83, 0x8c, 0x21, 0x10, 0x47, 0x00, 0x00, 0x00, 0x43, 0xac, 0x04, 0x00, 0x85, 0x8c, 
	0x01, 0x00, 0xc6, 0x24, 0x07, 0x00, 0xc3, 0x28, 0xf7, 0xff, 0x60, 0x14, 0x04, 0x00, 0x45, 0xac, 
	0xc0, 0x20, 0x06, 0x00, 0x00, 0x00, 0x01, 0x3c, 0xc0, 0x07, 0x21, 0x24, 0x21, 0x20, 0x24, 0x00, 
	0x21, 0x28, 0x00, 0x00, 0x6f, 0x01, 0x00, 0x0c, 0x08, 0x00, 0x06, 0x24, 0x82, 0x00, 0x00, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0xe8, 0xff, 0xbd, 0x27, 0x10, 0x00, 0xbf, 0xaf, 0x24, 0x00, 0x00, 0x0c, 
	0x21, 0x20, 0x00, 0x00, 0x10, 0x00, 0xbf, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x18, 0x00, 0xbd, 0x27, 0xe8, 0xff, 0xbd, 0x27, 0x21, 0x18, 0x80, 0x00, 0x01, 0x00, 0x02, 0x24, 
	0x10, 0x00, 0xb0, 0xaf, 0x14, 0x00, 0xbf, 0xaf, 0x21, 0x20, 0x00, 0x00, 0x17, 0x00, 0x62, 0x10, 
	0x21, 0x80, 0xa0, 0x00, 0x02, 0x00, 0x02, 0x24, 0x06, 0x00, 0x62, 0x10, 0x21, 0x18, 0x00, 0x00, 
	0x14, 0x00, 0xbf, 0x8f, 0x10, 0x00, 0xb0, 0x8f, 0x21, 0x10, 0x60, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x18, 0x00, 0xbd, 0x27, 0x00, 0x00, 0xa2, 0x8c, 0x00, 0x00, 0x04, 0x3c, 0x90, 0x00, 0x84, 0x24, 
	0x04, 0x00, 0x40, 0x14, 0x21, 0x28, 0x00, 0x00, 0x00, 0x00, 0x04, 0x3c, 0x0c, 0x01, 0x84, 0x24, 
	0x21, 0x28, 0x00, 0x00, 0x51, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x24, 
	0x21, 0x18, 0x00, 0x02, 0xb4, 0x00, 0x00, 0x08, 0x00, 0x00, 0x02, 0xae, 0x24, 0x00, 0x00, 0x0c, 
	0x00, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x08, 0x21, 0x18, 0x00, 0x00, 0xd8, 0xff, 0xbd, 0x27, 
	0x21, 0x20, 0x00, 0x00, 0x24, 0x00, 0xbf, 0xaf, 0x57, 0x01, 0x00, 0x0c, 0x20, 0x00, 0xb0, 0xaf, 
	0x00, 0x00, 0x10, 0x3c, 0x7c, 0x01, 0x00, 0x0c, 0x60, 0x07, 0x10, 0x26, 0x21, 0x28, 0x40, 0x00, 
	0x59, 0x01, 0x00, 0x0c, 0x21, 0x20, 0x00, 0x02, 0x09, 0x09, 0x05, 0x3c, 0x00, 0x00, 0x06, 0x3c, 
	0xa4, 0x02, 0xc6, 0x24, 0x00, 0x00, 0x07, 0x3c, 0x50, 0x07, 0xe7, 0x24, 0x00, 0x09, 0xa5, 0x34, 
	0x00, 0x00, 0x04, 0x3c, 0x78, 0x07, 0x84, 0x24, 0x18, 0x00, 0xb0, 0xaf, 0x10, 0x00, 0xa0, 0xaf, 
	0x5b, 0x01, 0x00, 0x0c, 0x14, 0x00, 0xa0, 0xaf, 0x5d, 0x01, 0x00, 0x0c, 0x21, 0x20, 0x00, 0x02, 
	0x24, 0x00, 0xbf, 0x8f, 0x20, 0x00, 0xb0, 0x8f, 0x08, 0x00, 0xe0, 0x03, 0x28, 0x00, 0xbd, 0x27, 
	0xc8, 0xff, 0xbd, 0x27, 0x00, 0x00, 0x04, 0x3c, 0x00, 0x06, 0x84, 0x24, 0x30, 0x00, 0xbf, 0xaf, 
	0x4c, 0x01, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x3c, 0x12, 0x00, 0x40, 0x14, 
	0x78, 0x06, 0x84, 0x24, 0x00, 0x00, 0x04, 0x3c, 0x90, 0x00, 0x84, 0x24, 0x51, 0x00, 0x00, 0x0c, 
	0x21, 0x28, 0x00, 0x00, 0x4a, 0x01, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x00, 0x0c, 
	0x21, 0x20, 0x00, 0x00, 0x90, 0x04, 0x04, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x80, 0x10, 
	0x03, 0x00, 0x83, 0x30, 0x01, 0x00, 0x02, 0x24, 0x0a, 0x00, 0x62, 0x10, 0x80, 0x04, 0x02, 0x24, 
	0x00, 0x00, 0x04, 0x3c, 0x98, 0x06, 0x84, 0x24, 0x66, 0x01, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x02, 0x24, 0x30, 0x00, 0xbf, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x38, 0x00, 0xbd, 0x27, 0x00, 0x00, 0x03, 0x3c, 0x00, 0x00, 0x63, 0x24, 0x01, 0x00, 0x63, 0x34, 
	0xfc, 0xff, 0x07, 0x24, 0x24, 0x38, 0x87, 0x00, 0x10, 0x00, 0x43, 0xac, 0x00, 0x00, 0x04, 0x3c, 
	0xc0, 0x07, 0x84, 0x24, 0x21, 0x28, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3c, 0x38, 0x07, 0x27, 0xac, 
	0x6f, 0x01, 0x00, 0x0c, 0x40, 0x00, 0x06, 0x24, 0x00, 0x02, 0x02, 0x3c, 0x00, 0x00, 0x03, 0x3c, 
	0x2c, 0x03, 0x63, 0x24, 0x10, 0x00, 0xa2, 0xaf, 0x18, 0x00, 0xa3, 0xaf, 0x00, 0x10, 0x02, 0x24, 
	0x27, 0x00, 0x03, 0x24, 0x10, 0x00, 0xa4, 0x27, 0x1c, 0x00, 0xa2, 0xaf, 0x20, 0x00, 0xa3, 0xaf, 
	0x78, 0x01, 0x00, 0x0c, 0x14, 0x00, 0xa0, 0xaf, 0x10, 0x00, 0x40, 0x18, 0x00, 0x00, 0x00, 0x00, 
	0x21, 0x20, 0x40, 0x00, 0x7a, 0x01, 0x00, 0x0c, 0x21, 0x28, 0x00, 0x00, 0x00, 0x00, 0x04, 0x3c, 
	0x06, 0x00, 0x40, 0x04, 0xb8, 0x06, 0x84, 0x24, 0x00, 0x00, 0x04, 0x3c, 0x66, 0x01, 0x00, 0x0c, 
	0xd4, 0x06, 0x84, 0x24, 0x05, 0x01, 0x00, 0x08, 0x21, 0x10, 0x00, 0x00, 0x66, 0x01, 0x00, 0x0c, 
	0x21, 0x28, 0x40, 0x00, 0x05, 0x01, 0x00, 0x08, 0x01, 0x00, 0x02, 0x24, 0x00, 0x00, 0x04, 0x3c, 
	0x2f, 0x01, 0x00, 0x08, 0xe8, 0x06, 0x84, 0x24, 0x00, 0x00, 0x04, 0x3c, 0x02, 0x01, 0x00, 0x08, 
	0x04, 0x07, 0x84, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xe0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x69, 0x6e, 0x74, 0x72, 
	0x6d, 0x61, 0x6e, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x09, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
	0x6c, 0x6f, 0x61, 0x64, 0x63, 0x6f, 0x72, 0x65, 0x08, 0x00, 0xe0, 0x03, 0x05, 0x00, 0x00, 0x24, 
	0x08, 0x00, 0xe0, 0x03, 0x06, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xe0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x73, 0x69, 0x66, 0x63, 
	0x6d, 0x64, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x0d, 0x00, 0x00, 0x24, 0x08, 0x00, 0xe0, 0x03, 
	0x0e, 0x00, 0x00, 0x24, 0x08, 0x00, 0xe0, 0x03, 0x13, 0x00, 0x00, 0x24, 0x08, 0x00, 0xe0, 0x03, 
	0x11, 0x00, 0x00, 0x24, 0x08, 0x00, 0xe0, 0x03, 0x16, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 
	0x73, 0x74, 0x64, 0x69, 0x6f, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x04, 0x00, 0x00, 0x24, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x41, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x00, 0x00, 0x73, 0x79, 0x73, 0x63, 0x6c, 0x69, 0x62, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x0e, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x74, 0x68, 0x62, 0x61, 0x73, 0x65, 0x00, 0x00, 
	0x08, 0x00, 0xe0, 0x03, 0x04, 0x00, 0x00, 0x24, 0x08, 0x00, 0xe0, 0x03, 0x06, 0x00, 0x00, 0x24, 
	0x08, 0x00, 0xe0, 0x03, 0x14, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xc0, 0x41, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x70, 0x6f, 0x77, 0x65, 
	0x72, 0x6f, 0x66, 0x66, 0xa0, 0x03, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 
	0x38, 0x06, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00, 
	0x84, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x50, 0x6f, 0x77, 0x65, 0x72, 0x6f, 0x66, 0x66, 0x5f, 0x48, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x72, 
	0x00, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x75, 0x6c, 0x64, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x61, 0x64, 
	0x64, 0x20, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x6f, 0x66, 0x66, 0x20, 0x63, 0x61, 0x6c, 0x6c, 0x62, 
	0x61, 0x63, 0x6b, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x50, 0x6f, 0x77, 0x65, 0x72, 0x6f, 0x66, 0x66, 
	0x20, 0x61, 0x6c, 0x72, 0x65, 0x61, 0x64, 0x79, 0x20, 0x72, 0x65, 0x67, 0x69, 0x73, 0x74, 0x65, 
	0x72, 0x65, 0x64, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x43, 0x61, 0x6e, 0x6e, 0x6f, 0x74, 0x20, 0x63, 
	0x68, 0x61, 0x69, 0x6e, 0x20, 0x74, 0x6f, 0x20, 0x6e, 0x6f, 0x6e, 0x2d, 0x43, 0x20, 0x68, 0x61, 
	0x6e, 0x64, 0x6c, 0x65, 0x72, 0x0a, 0x00, 0x00, 0x53, 0x74, 0x61, 0x72, 0x74, 0x54, 0x68, 0x72, 
	0x65, 0x61, 0x64, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x28, 0x25, 0x64, 0x29, 0x0a, 
	0x00, 0x00, 0x00, 0x00, 0x50, 0x6f, 0x77, 0x65, 0x72, 0x6f, 0x66, 0x66, 0x20, 0x69, 0x6e, 0x73, 
	0x74, 0x61, 0x6c, 0x6c, 0x65, 0x64, 0x0a, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x54, 0x68, 
	0x72, 0x65, 0x61, 0x64, 0x20, 0x66, 0x61, 0x69, 0x6c, 0x65, 0x64, 0x20, 0x28, 0x25, 0x64, 0x29, 
	0x0a, 0x00, 0x00, 0x00, 0x4e, 0x6f, 0x20, 0x43, 0x44, 0x52, 0x4f, 0x4d, 0x20, 0x68, 0x61, 0x6e, 
	0x64, 0x6c, 0x65, 0x72, 0x2e, 0x20, 0x52, 0x75, 0x6e, 0x20, 0x43, 0x44, 0x56, 0x44, 0x4d, 0x41, 
	0x4e, 0x20, 0x66, 0x69, 0x72, 0x73, 0x74, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x40, 0x06, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x2e, 0x73, 0x68, 0x73, 0x74, 0x72, 0x74, 0x61, 0x62, 0x00, 0x2e, 0x69, 0x6f, 0x70, 0x6d, 
	0x6f, 0x64, 0x00, 0x2e, 0x72, 0x65, 0x6c, 0x2e, 0x74, 0x65, 0x78, 0x74, 0x00, 0x2e, 0x72, 0x6f, 
	0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 0x72, 0x65, 0x6c, 0x2e, 0x64, 0x61, 0x74, 0x61, 0x00, 0x2e, 
	0x62, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 
	0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x09, 0x00, 0x00, 
	0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x40, 0x06, 0x00, 0x00, 0xe0, 0x06, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0xd0, 0x07, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xbc, 0x0c, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x50, 0x07, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 
	0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x05, 0x05, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x06, 0x05, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 
	0x05, 0x05, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x06, 0x05, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 
	0x05, 0x07, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 
	0x06, 0x05, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 
	0x06, 0x05, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, 0x05, 0x04, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 
	0x06, 0x04, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0xcc, 0x01, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0xe4, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2c, 0x02, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x64, 0x02, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x68, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x74, 0x02, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x7c, 0x02, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0x8c, 0x02, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0xec, 0x02, 0x00, 0x00, 
	0x06, 0x02, 0x00, 0x00, 0xf8, 0x02, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0xfc, 0x02, 0x00, 0x00, 
	0x06, 0x02, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0x1c, 0x03, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0x38, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x03, 0x00, 0x00, 
	0x05, 0x07, 0x00, 0x00, 0x48, 0x03, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x44, 0x03, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x50, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x03, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x64, 0x03, 0x00, 0x00, 
	0x05, 0x07, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x70, 0x03, 0x00, 0x00, 
	0x05, 0x07, 0x00, 0x00, 0x74, 0x03, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x88, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0xa8, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xb0, 0x03, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xb8, 0x03, 0x00, 0x00, 0x05, 0x04, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00, 
	0x06, 0x04, 0x00, 0x00, 0xc4, 0x03, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00, 
	0x06, 0x02, 0x00, 0x00, 0xcc, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xd4, 0x03, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xdc, 0x03, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
	0x05, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x24, 0x04, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0x28, 0x04, 0x00, 0x00, 
	0x06, 0x02, 0x00, 0x00, 0x3c, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x48, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x4c, 0x04, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x04, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x94, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9c, 0x04, 0x00, 0x00, 
	0x05, 0x04, 0x00, 0x00, 0xa4, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0xa8, 0x04, 0x00, 0x00, 
	0x05, 0x04, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0xac, 0x04, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xb4, 0x04, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0xbc, 0x04, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xc4, 0x04, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0xcc, 0x04, 0x00, 0x00, 
	0x05, 0x04, 0x00, 0x00, 0xd4, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0xd0, 0x04, 0x00, 0x00, 
	0x04, 0x02, 0x00, 0x00, 0xd8, 0x04, 0x00, 0x00, 0x05, 0x04, 0x00, 0x00, 0xe0, 0x04, 0x00, 0x00, 
	0x06, 0x04, 0x00, 0x00, 0xdc, 0x04, 0x00, 0x00, 0x04, 0x02, 0x00, 0x00, 0x14, 0x06, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x06, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x06, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x28, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2c, 0x06, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x30, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 
	0x02, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x08, 0x00, 0x00, 
};

#endif
