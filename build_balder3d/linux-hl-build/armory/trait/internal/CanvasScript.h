﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__trait__internal__CanvasScript
#define INC_armory__trait__internal__CanvasScript
typedef struct _armory__trait__internal__$CanvasScript *armory__trait__internal__$CanvasScript;
typedef struct _armory__trait__internal__CanvasScript *armory__trait__internal__CanvasScript;
#include <_std/String.h>
#include <armory/trait/internal/CanvasScript.h>
#include <kha/internal/BytesBlob.h>
#include <hl/types/ArrayObj.h>
#include <hl/types/ArrayBytes_Int.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <iron/Trait.h>
#include <iron/object/Object.h>
#include <zui/Zui.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	armory__trait__internal__CanvasScript p1;
} Enumt$ctx_cc7f9ad;
typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	kha__internal__BytesBlob p1;
	armory__trait__internal__CanvasScript p2;
} Enumt$ctx_a908ca5;
typedef struct {
	HL__ENUM_CONSTRUCT__
	vvirtual* p0;
	armory__trait__internal__CanvasScript p1;
	hl__types__ArrayBytes_Int p2;
	vvirtual* p3;
} Enumt$ctx_b630e3a;
struct _armory__trait__internal__$CanvasScript {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getActiveCanvas;
};
struct _armory__trait__internal__CanvasScript {
	hl_type *$type;
	iron__object__Object object;
	hl__types__ArrayObj _add;
	hl__types__ArrayObj _init;
	hl__types__ArrayObj _remove;
	hl__types__ArrayObj _update;
	hl__types__ArrayObj _lateUpdate;
	hl__types__ArrayObj _render;
	hl__types__ArrayObj _render2D;
	String cnvName;
	zui__Zui cui;
	vvirtual* canvas;
	bool ready;
	hl__types__ArrayObj onReadyFuncs;
};
#endif

