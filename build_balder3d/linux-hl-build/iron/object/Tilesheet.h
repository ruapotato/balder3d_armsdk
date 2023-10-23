﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__object__Tilesheet
#define INC_iron__object__Tilesheet
typedef struct _iron__object__$Tilesheet *iron__object__$Tilesheet;
typedef struct _iron__object__Tilesheet *iron__object__Tilesheet;
#include <_std/String.h>
#include <iron/object/Tilesheet.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <iron/data/TTilesheetData.h>
#include <iron/data/TTilesheetAction.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	String p1;
	iron__object__Tilesheet p2;
} Enumt$ctx_18cedd0;
struct _iron__object__$Tilesheet {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__object__Tilesheet {
	hl_type *$type;
	double tileX;
	double tileY;
	iron__data__TTilesheetData raw;
	iron__data__TTilesheetAction action;
	bool ready;
	bool paused;
	int frame;
	double time;
	vclosure* onActionComplete;
};
#endif

