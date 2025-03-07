﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__Buffer
#define INC_kha__audio2__Buffer
typedef struct _kha__audio2__$Buffer *kha__audio2__$Buffer;
typedef struct _kha__audio2__Buffer *kha__audio2__Buffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/arrays/ByteArrayPrivate.h>


struct _kha__audio2__$Buffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__audio2__Buffer {
	hl_type *$type;
	int channels;
	int samplesPerSecond;
	kha__arrays__ByteArrayPrivate data;
	int size;
	int readLocation;
	int writeLocation;
};
#endif

