﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC__std__StringTools
#define INC__std__StringTools
typedef struct _$StringTools *$StringTools;
typedef struct _StringTools *StringTools;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _$StringTools {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* startsWith;
	vclosure* endsWith;
	vclosure* isSpace;
	vclosure* ltrim;
	vclosure* rtrim;
	vclosure* trim;
	vclosure* replace;
};
struct _StringTools {
	hl_type *$type;
};
#endif

