﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TBindConstant
#define INC_iron__data__TBindConstant
typedef struct _iron__data__$TBindConstant *iron__data__$TBindConstant;
typedef struct _iron__data__TBindConstant *iron__data__TBindConstant;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/ByteArrayPrivate.h>


struct _iron__data__$TBindConstant {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TBindConstant {
	hl_type *$type;
	String name;
	kha__arrays__ByteArrayPrivate vec4Value;
	kha__arrays__ByteArrayPrivate vec3Value;
	kha__arrays__ByteArrayPrivate vec2Value;
	vdynamic* floatValue;
	vdynamic* boolValue;
	vdynamic* intValue;
};
#endif

