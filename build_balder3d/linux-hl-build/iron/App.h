﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__App
#define INC_iron__App
typedef struct _iron__$App *iron__$App;
typedef struct _iron__App *iron__App;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <kha/Framebuffer.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/Image.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/math/FastMatrix4.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/ByteArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>
#include <kha/graphics2/Graphics.h>


struct _iron__$App {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* w;
	vclosure* h;
	vclosure* x;
	vclosure* y;
	hl__types__ArrayObj onResets;
	hl__types__ArrayObj onEndFrames;
	hl__types__ArrayObj traitInits;
	hl__types__ArrayObj traitUpdates;
	hl__types__ArrayObj traitLateUpdates;
	hl__types__ArrayObj traitRenders;
	hl__types__ArrayObj traitRenders2D;
	kha__Framebuffer framebuffer;
	bool pauseUpdates;
	int lastw;
	int lasth;
	vclosure* onResize;
	vclosure* init;
	vclosure* update;
	vclosure* render;
	vclosure* render2D;
	vclosure* notifyOnInit;
	vclosure* removeInit;
	vclosure* notifyOnUpdate;
	vclosure* removeUpdate;
	vclosure* notifyOnLateUpdate;
	vclosure* removeLateUpdate;
	vclosure* removeRender;
	vclosure* notifyOnRender2D;
	vclosure* removeRender2D;
	vclosure* notifyOnReset;
	vclosure* notifyOnEndFrame;
};
struct _iron__App {
	hl_type *$type;
};
#endif

