﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_haxe__io__BytesDataImpl
#define INC_haxe__io__BytesDataImpl
typedef struct _haxe__io__$BytesDataImpl *haxe__io__$BytesDataImpl;
typedef struct _haxe__io__BytesDataImpl *haxe__io__BytesDataImpl;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__io__$BytesDataImpl {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__io__BytesDataImpl {
	hl_type *$type;
	vbyte* bytes;
	int length;
};
#endif

