﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__ConstData
#define INC_iron__data__ConstData
typedef struct _iron__data__$ConstData *iron__data__$ConstData;
typedef struct _iron__data__ConstData *iron__data__ConstData;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/graphics4/IndexBuffer.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/types/ArrayBytes_Float.h>


struct _iron__data__$ConstData {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	kha__graphics4__VertexBuffer screenAlignedVB;
	kha__graphics4__IndexBuffer screenAlignedIB;
	kha__graphics4__VertexBuffer skydomeVB;
	kha__graphics4__IndexBuffer skydomeIB;
	vclosure* createScreenAlignedData;
	vclosure* createSkydomeData;
	hl__types__ArrayBytes_Int skydomeIndices;
	hl__types__ArrayBytes_Float skydomePos;
	hl__types__ArrayBytes_Float skydomeNor;
};
struct _iron__data__ConstData {
	hl_type *$type;
};
#endif

