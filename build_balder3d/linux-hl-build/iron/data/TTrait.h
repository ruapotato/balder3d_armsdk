﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TTrait
#define INC_iron__data__TTrait
typedef struct _iron__data__$TTrait *iron__data__$TTrait;
typedef struct _iron__data__TTrait *iron__data__TTrait;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayDyn.h>


struct _iron__data__$TTrait {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTrait {
	hl_type *$type;
	String type;
	String class_name;
	hl__types__ArrayObj parameters;
	hl__types__ArrayDyn props;
};
#endif

