﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TTransform
#define INC_iron__data__TTransform
typedef struct _iron__data__$TTransform *iron__data__$TTransform;
typedef struct _iron__data__TTransform *iron__data__TTransform;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/ByteArrayPrivate.h>


struct _iron__data__$TTransform {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTransform {
	hl_type *$type;
	String target;
	kha__arrays__ByteArrayPrivate values;
};
#endif

