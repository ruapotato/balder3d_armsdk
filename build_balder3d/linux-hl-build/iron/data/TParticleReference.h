﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TParticleReference
#define INC_iron__data__TParticleReference
typedef struct _iron__data__$TParticleReference *iron__data__$TParticleReference;
typedef struct _iron__data__TParticleReference *iron__data__TParticleReference;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _iron__data__$TParticleReference {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TParticleReference {
	hl_type *$type;
	String name;
	String particle;
	int seed;
};
#endif

