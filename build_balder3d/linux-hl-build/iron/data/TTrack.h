﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TTrack
#define INC_iron__data__TTrack
typedef struct _iron__data__$TTrack *iron__data__$TTrack;
typedef struct _iron__data__TTrack *iron__data__TTrack;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/ByteArrayPrivate.h>
#include <hl/types/ArrayObj.h>


struct _iron__data__$TTrack {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TTrack {
	hl_type *$type;
	String target;
	kha__arrays__ByteArrayPrivate frames;
	kha__arrays__ByteArrayPrivate values;
	hl__types__ArrayObj ref_values;
};
#endif

