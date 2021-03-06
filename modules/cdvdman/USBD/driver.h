/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2001-2004, ps2dev - http://www.ps2dev.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
#
# $Id: driver.h 1682 2010-05-18 17:44:20Z jim $
# USB Driver function prototypes and constants.
*/
#ifndef __DRIVER_H__
#define __DRIVER_H__

#include "usbdpriv.h"

int callUsbDriverFunc(int (*func)(int devId), int devId, void *gp);
int doRegisterDriver(UsbDriver *drv, void *drvGpSeg);
inline int doUnregisterDriver(UsbDriver *drv);
void signalCallbackThreadFunc(IoRequest *req);
inline void connectNewDevice(Device *dev);
inline void initCallbackThread(void);

#endif //__DRIVER_H__
