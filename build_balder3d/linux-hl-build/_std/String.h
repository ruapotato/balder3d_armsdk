﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC__std__String
#define INC__std__String
typedef struct _$String *$String;
typedef struct _String *String;
#include <hl/Class.h>
#include <hl/BaseType.h>


struct _$String {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* fromCharCode;
	vclosure* __alloc__;
	vclosure* call_toString;
	vclosure* fromUCS2;
	vclosure* fromUTF8;
	vclosure* __add__;
};
struct _String {
	hl_type *$type;
	vbyte* bytes;
	int length;
};
#endif

