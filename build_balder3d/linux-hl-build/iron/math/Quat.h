﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__math__Quat
#define INC_iron__math__Quat
typedef struct _iron__math__$Quat *iron__math__$Quat;
typedef struct _iron__math__Quat *iron__math__Quat;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/math/Vec4.h>
#include <iron/math/Mat4.h>


struct _iron__math__$Quat {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	iron__math__Vec4 helpVec0;
	iron__math__Mat4 helpMat;
	iron__math__Vec4 xAxis;
	iron__math__Vec4 yAxis;
};
struct _iron__math__Quat {
	hl_type *$type;
	float x;
	float y;
	float z;
	float w;
};
#endif

