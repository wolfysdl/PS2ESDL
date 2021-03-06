/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: interface.c 1682 2010-05-18 17:44:20Z jim $
# USB Driver function prototypes and constants.
*/
#include "usbdpriv.h"
#include "driver.h"
#include "mem.h"
#include "hcd.h"
#include "usbio.h"

int UsbRegisterDriver(UsbDriver *driver) {
	int res;

	if (usbdLock() != 0)
		return USB_RC_BADCONTEXT;

	res = doRegisterDriver(driver, NULL); // gp

	usbdUnlock();
	return res;
}

int UsbUnregisterDriver(UsbDriver *driver) {
	int res;

	if(usbdLock() != 0) return USB_RC_BADCONTEXT;

	res = doUnregisterDriver(driver);

	usbdUnlock();
	return res;
}

void *UsbGetDeviceStaticDescriptor(int devId, void *data, uint8 type) {
	void *res;

	if (usbdLock() != 0)
		return NULL;

	res = doGetDeviceStaticDescriptor(devId, data, type);

	usbdUnlock();
	return res;
}

int UsbGetDeviceLocation(int devId, uint8 *path) {
	Device *dev;
	int res;

	if (usbdLock() != 0)
		return USB_RC_BADCONTEXT;

	dev = fetchDeviceById(devId);
	res = dev?doGetDeviceLocation(dev, path):USB_RC_BADDEV;

	usbdUnlock();
	return res;
}

int UsbSetPrivateData(int devId, void *data) {
	Device *dev;
	int res = USB_RC_OK;

	if (usbdLock() != 0)
		return USB_RC_BADCONTEXT;

	if((dev = fetchDeviceById(devId))) dev->privDataField = data;
	else res = USB_RC_BADDEV;

	usbdUnlock();
	return res;
}

void *UsbGetPrivateData(int devId) {
	Device *dev;
	void *res;

	if(usbdLock() != 0) return NULL;

	res=(dev = fetchDeviceById(devId))?dev->privDataField:NULL;

	usbdUnlock();
	return res;
}

int UsbOpenEndpoint(int devId, UsbEndpointDescriptor *desc) {
	Device *dev;
	Endpoint *ep;
	int res;

	res=(-1);

	if (usbdLock() != 0) return res;

	if((dev = fetchDeviceById(devId))){
		if((ep = doOpenEndpoint(dev, desc, 0))) res=ep->id;
	}

	usbdUnlock();
	return res;
}

int UsbCloseEndpoint(int id) {
	Endpoint *ep;
	int res;

	if (usbdLock() != 0)
		return -1;

	ep = fetchEndpointById(id);

	res = ep?doCloseEndpoint(ep):USB_RC_BADPIPE;

	usbdUnlock();
	return res;
}

int UsbTransfer(int id, void *data, uint32 len, void *option, UsbCallbackProc callback, void *cbArg) {
	UsbDeviceRequest *ctrlPkt = (UsbDeviceRequest *)option;
	IoRequest *req;
	Endpoint *ep;
	int res = 0;

	if (usbdLock() != 0)
		return USB_RC_BADCONTEXT;

	if(!(ep = fetchEndpointById(id))){
		dbg_printf("UsbTransfer: Endpoint %d not found\n", id);
		res = USB_RC_BADPIPE;
		goto error_end;
	}

	/* Don't check the parameters. Drivers from SCE are *usually* bug free. ;) */
	/* if (data && len) {
		if ((((uint32)(data + len - 1) >> 12) - ((uint32)data >> 12)) > 1)
			res = USB_RC_BADLENGTH; 
		else if (ep->alignFlag && ((uint32)data & 3))
			res = USB_RC_BADALIGN;
		else if ((ep->endpointType == TYPE_ISOCHRON) && ((ep->hcEd.maxPacketSize & 0x7FF) < len))
			res = USB_RC_BADLENGTH;

		if(res!=0) goto error_end;
	} */
	if(!(req = allocIoRequest())){
		dbg_printf("Ran out of IoReqs\n");
		res = USB_RC_IOREQ;
		goto error_end;
	}

	req->userCallbackProc = callback;
	req->userCallbackArg = cbArg;
	req->gpSeg = NULL; // gp of the calling module
	if (ep->endpointType == TYPE_CONTROL) {
		if (!ctrlPkt) {
			res = USB_RC_BADOPTION;
			freeIoRequest(req);
		} else if (ctrlPkt->length != len) {
			res = USB_RC_BADLENGTH;
			freeIoRequest(req);
		} else {
			res = doControlTransfer(ep, req,
				ctrlPkt->requesttype, ctrlPkt->request, ctrlPkt->value, ctrlPkt->index, ctrlPkt->length,
				data, signalCallbackThreadFunc);
		}
	} else {
		if (ep->endpointType == TYPE_ISOCHRON)
			req->waitFrames = (uint32)option;
		res = attachIoReqToEndpoint(ep, req, data, len, signalCallbackThreadFunc);
	}

error_end:
	usbdUnlock();
	return res;
}

int UsbOpenEndpointAligned(int devId, UsbEndpointDescriptor *desc) {
	Device *dev;
	Endpoint *ep;
	int res = -1;

	if (usbdLock() != 0)
		return -1;

	dev = fetchDeviceById(devId);
	if (dev) {
		ep = doOpenEndpoint(dev, desc, 1);
		if(ep) res = ep->id;
	}

	usbdUnlock();
	return res;
}

int UsbUnimplementedFunction(void){
	dbg_printf("Unimplemented function.\n");
	return 0;
}

#if 0
int UsbRegisterAutoloader(UsbDriver *drv) {
	dbg_printf("UsbRegisterAutoloader stub\n");
	return 0;
}

int UsbUnregisterAutoloader(UsbDriver *drv) {
	dbg_printf("UsbUnregisterAutoloader stub\n");
	return 0;
}

int UsbChangeThreadPriority(void) {
	dbg_printf("UsbChangeThreadPriority stub\n");
	return 0;
}
#endif
