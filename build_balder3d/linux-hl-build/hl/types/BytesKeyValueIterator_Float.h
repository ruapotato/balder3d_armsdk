﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_hl__types__BytesKeyValueIterator_Float
#define INC_hl__types__BytesKeyValueIterator_Float
typedef struct _hl__types__$BytesKeyValueIterator_Float *hl__types__$BytesKeyValueIterator_Float;
typedef struct _hl__types__BytesKeyValueIterator_Float *hl__types__BytesKeyValueIterator_Float;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/iterators/ArrayKeyValueIterator.h>
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayBytes_Float.h>


struct _hl__types__$BytesKeyValueIterator_Float {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _hl__types__BytesKeyValueIterator_Float {
	hl_type *$type;
	int current;
	hl__types__ArrayDyn array;
	hl__types__ArrayBytes_Float a;
};
#endif

