﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_haxe__io__BytesBuffer
#define INC_haxe__io__BytesBuffer
typedef struct _haxe__io__$BytesBuffer *haxe__io__$BytesBuffer;
typedef struct _haxe__io__BytesBuffer *haxe__io__BytesBuffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__io__$BytesBuffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _haxe__io__BytesBuffer {
	hl_type *$type;
	vbyte* b;
	int pos;
	int size;
};
#endif

