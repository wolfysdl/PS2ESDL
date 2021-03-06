#ifndef _USBHD_COMMON_H
#define _USBHD_COMMON_H

#define USBHD_INLINE inline

struct _cache_set;
typedef struct _cache_set cache_set;
struct _mass_dev;
typedef struct _mass_dev mass_dev;

//---------------------------------------------------------------------------
static USBHD_INLINE int getI32(unsigned char* buf)
{
	return (buf[0]  + (buf[1] <<8) + (buf[2] << 16) + (buf[3] << 24));
}

//---------------------------------------------------------------------------
static USBHD_INLINE int getI32_2(unsigned char* buf1, unsigned char* buf2)
{
	return (buf1[0]  + (buf1[1] <<8) + (buf2[0] << 16) + (buf2[1] << 24));
}

//---------------------------------------------------------------------------
static USBHD_INLINE int getI16(unsigned char* buf)
{
	return (buf[0] + (buf[1] <<8) );
}

int cbw_scsi_read_sector(unsigned int lba, void* buffer, unsigned int sectorCount);

#endif // _USBHD_COMMON_H
