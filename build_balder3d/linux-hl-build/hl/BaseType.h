﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_hl__BaseType
#define INC_hl__BaseType
typedef struct _hl__$BaseType *hl__$BaseType;
typedef struct _hl__BaseType *hl__BaseType;
#include <hl/Class.h>
#include <_std/String.h>


struct _hl__$BaseType {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__BaseType {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
};
#endif

