﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__Probe
#define INC_iron__data__Probe
typedef struct _iron__data__$Probe *iron__data__$Probe;
typedef struct _iron__data__Probe *iron__data__Probe;
#include <kha/arrays/ByteArrayPrivate.h>
#include <_std/String.h>
#include <iron/data/Probe.h>
#include <iron/data/TProbeData.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <kha/Image.h>
#include <hl/types/ArrayObj.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	vclosure* p0;
	String p1;
} Enumt$ctx_1767164;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TProbeData p0;
	vclosure* p1;
	iron__data__Probe p2;
} Enumt$ctx_cce9130;
typedef struct {
	HL__ENUM_CONSTRUCT__
	iron__data__TProbeData p0;
	vclosure* p1;
	iron__data__Probe p2;
	hl__types__ArrayBytes_Int p3;
	int p4;
} Enumt$ctx_69e76d9;
struct _iron__data__$Probe {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__Probe {
	hl_type *$type;
	iron__data__TProbeData raw;
	kha__Image radiance;
	hl__types__ArrayObj radianceMipmaps;
	kha__arrays__ByteArrayPrivate irradiance;
};
#endif

