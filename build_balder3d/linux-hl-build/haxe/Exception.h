﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_haxe__Exception
#define INC_haxe__Exception
typedef struct _haxe__$Exception *haxe__$Exception;
typedef struct _haxe__Exception *haxe__Exception;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _haxe__$Exception {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* caught;
	vclosure* thrown;
};
struct _haxe__Exception {
	hl_type *$type;
	String __exceptionMessage;
	varray* __nativeStack;
	int __skipStack;
	vdynamic* __nativeException;
	haxe__Exception __previousException;
};
#endif

