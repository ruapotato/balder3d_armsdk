﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_hl__NativeArrayIterator_Dynamic
#define INC_hl__NativeArrayIterator_Dynamic
typedef struct _hl__$NativeArrayIterator_Dynamic *hl__$NativeArrayIterator_Dynamic;
typedef struct _hl__NativeArrayIterator_Dynamic *hl__NativeArrayIterator_Dynamic;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _hl__$NativeArrayIterator_Dynamic {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__NativeArrayIterator_Dynamic {
	hl_type *$type;
	varray* arr;
	int pos;
	int length;
};
#endif

