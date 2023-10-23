﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__input__MouseImpl
#define INC_kha__input__MouseImpl
typedef struct _kha__input__$MouseImpl *kha__input__$MouseImpl;
typedef struct _kha__input__MouseImpl *kha__input__MouseImpl;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/input/Mouse.h>
#include <kha/netsync/Controller.h>
#include <haxe/io/Bytes.h>
#include <hl/types/ArrayObj.h>


struct _kha__input__$MouseImpl {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__input__MouseImpl {
	hl_type *$type;
	int __id;
	haxe__io__Bytes _inputBuffer;
	hl__types__ArrayObj windowDownListeners;
	hl__types__ArrayObj windowUpListeners;
	hl__types__ArrayObj windowMoveListeners;
	hl__types__ArrayObj windowWheelListeners;
	hl__types__ArrayObj windowLeaveListeners;
};
#endif

