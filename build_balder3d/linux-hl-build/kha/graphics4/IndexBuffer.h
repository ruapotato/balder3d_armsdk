﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__graphics4__IndexBuffer
#define INC_kha__graphics4__IndexBuffer
typedef struct _kha__graphics4__$IndexBuffer *kha__graphics4__$IndexBuffer;
typedef struct _kha__graphics4__IndexBuffer *kha__graphics4__IndexBuffer;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__graphics4__$IndexBuffer {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics4__IndexBuffer {
	hl_type *$type;
	vbyte* _buffer;
	int myCount;
};
#endif

