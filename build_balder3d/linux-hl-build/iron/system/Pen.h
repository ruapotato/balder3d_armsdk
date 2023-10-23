﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__system__Pen
#define INC_iron__system__Pen
typedef struct _iron__system__$Pen *iron__system__$Pen;
typedef struct _iron__system__Pen *iron__system__Pen;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/system/VirtualInput.h>
#include <haxe/ds/StringMap.h>
#include <hl/types/ArrayObj.h>


struct _iron__system__$Pen {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__system__Pen {
	hl_type *$type;
	haxe__ds__StringMap virtualButtons;
	hl__types__ArrayObj buttonsDown;
	hl__types__ArrayObj buttonsStarted;
	hl__types__ArrayObj buttonsReleased;
	double x;
	double y;
	bool moved;
	double movementX;
	double movementY;
	double pressure;
	bool connected;
	bool inUse;
	double lastX;
	double lastY;
};
#endif

