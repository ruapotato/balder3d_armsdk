﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__system__Input
#define INC_iron__system__Input
typedef struct _iron__system__$Input *iron__system__$Input;
typedef struct _iron__system__Input *iron__system__Input;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/system/Mouse.h>
#include <iron/system/Pen.h>
#include <iron/system/Keyboard.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>
#include <iron/system/Gamepad.h>


struct _iron__system__$Input {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	bool occupied;
	iron__system__Mouse mouse;
	iron__system__Pen pen;
	iron__system__Keyboard keyboard;
	hl__types__ArrayObj gamepads;
	bool registered;
	haxe__ds__StringMap virtualButtons;
	vclosure* reset;
	vclosure* endFrame;
	vclosure* getMouse;
	vclosure* getPen;
	vclosure* getKeyboard;
	vclosure* getGamepad;
};
struct _iron__system__Input {
	hl_type *$type;
};
#endif

