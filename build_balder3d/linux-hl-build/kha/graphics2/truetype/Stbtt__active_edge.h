﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__graphics2__truetype__Stbtt__active_edge
#define INC_kha__graphics2__truetype__Stbtt__active_edge
typedef struct _kha__graphics2__truetype__$Stbtt__active_edge *kha__graphics2__truetype__$Stbtt__active_edge;
typedef struct _kha__graphics2__truetype__Stbtt__active_edge *kha__graphics2__truetype__Stbtt__active_edge;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__graphics2__truetype__$Stbtt__active_edge {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics2__truetype__Stbtt__active_edge {
	hl_type *$type;
	kha__graphics2__truetype__Stbtt__active_edge next;
	double fx;
	double fdx;
	double fdy;
	double direction;
	double sy;
	double ey;
};
#endif

