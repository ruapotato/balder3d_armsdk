﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__graphics4__InternalPipeline
#define INC_kha__graphics4__InternalPipeline
typedef struct _kha__graphics4__$InternalPipeline *kha__graphics4__$InternalPipeline;
typedef struct _kha__graphics4__InternalPipeline *kha__graphics4__InternalPipeline;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/graphics4/PipelineState.h>


struct _kha__graphics4__$InternalPipeline {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__graphics4__InternalPipeline {
	hl_type *$type;
	kha__graphics4__PipelineState pipeline;
	vvirtual* projectionLocation;
	vvirtual* textureLocation;
};
#endif

