﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__CachedShaderContext
#define INC_iron__CachedShaderContext
typedef struct _iron__$CachedShaderContext *iron__$CachedShaderContext;
typedef struct _iron__CachedShaderContext *iron__CachedShaderContext;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/data/ShaderContext.h>


struct _iron__$CachedShaderContext {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__CachedShaderContext {
	hl_type *$type;
	iron__data__ShaderContext context;
};
#endif

