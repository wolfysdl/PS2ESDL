#ifndef _MASS_STOR_H
#define _MASS_STOR_H

struct _mass_dev
{
	int controlEp;		//config endpoint id
	int bulkEpI;		//in endpoint id
	unsigned char bulkEpIAddr; // in endpoint address
	int bulkEpO;		//out endpoint id
	unsigned char bulkEpOAddr; // out endpoint address
	int packetSzI;		//packet size in
	int packetSzO;		//packet size out
	int devId;		//device id
	int configId;	//configuration id
	int status;
	int interfaceNumber;	//interface number
	int interfaceAlt;	//interface alternate setting
	unsigned int sectorSize; // = 512; // store size of sector from usb mass
	unsigned long int maxLBA;
};

void InitUSBSTOR(void);
int mass_stor_disconnect(int devId);
int mass_stor_connect(int devId);
int mass_stor_probe(int devId);
u16 mass_stor_configureNextDevice(void);

#endif
