﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/object/Constraint.h>
#include <iron/object/Object.h>
#include <iron/Scene.h>
#include <kha/math/FastMatrix4.h>
#include <iron/math/Mat4.h>
#include <iron/math/Vec4.h>
extern iron__$Scene g$_iron_Scene;
iron__object__Object iron_Scene_getChild(iron__Scene,String);
extern String s$COPY_LOCATION;
int String___compare(String,vdynamic*);

void iron_object_Constraint_apply(iron__object__Constraint r0,iron__object__Transform r1) {
	String r4, r9;
	kha__math__FastMatrix4 r12;
	bool r11;
	iron__$Scene r8;
	iron__Scene r7;
	iron__data__TConstraint r5;
	iron__math__Vec4 r15;
	iron__object__Transform r3;
	float r14, r16;
	iron__math__Mat4 r13;
	vdynamic *r10;
	iron__object__Object r6;
	r3 = r0->target;
	if( r3 ) goto label$705e9da_1_16;
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->target;
	if( !r4 ) goto label$705e9da_1_16;
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->target;
	r6 = iron_Scene_getChild(r7,r4);
	if( r6 == NULL ) hl_null_access();
	r3 = r6->transform;
	r0->target = r3;
	label$705e9da_1_16:
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->type;
	r9 = (String)s$COPY_LOCATION;
	if( r4 != r9 && (!r4 || !r9 || String___compare(r4,(vdynamic*)r9) != 0) ) goto label$705e9da_1_114;
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_x;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_52;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r3 = r0->target;
	if( r3 == NULL ) hl_null_access();
	r15 = r3->loc;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->x;
	r12->_30 = r14;
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_offset;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_52;
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->_30;
	r15 = r1->loc;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->x;
	r14 = r14 + r16;
	r12->_30 = r14;
	label$705e9da_1_52:
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_y;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_83;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r3 = r0->target;
	if( r3 == NULL ) hl_null_access();
	r15 = r3->loc;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->y;
	r12->_31 = r14;
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_offset;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_83;
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->_31;
	r15 = r1->loc;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->y;
	r14 = r14 + r16;
	r12->_31 = r14;
	label$705e9da_1_83:
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_z;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_114;
	if( r1 == NULL ) hl_null_access();
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r3 = r0->target;
	if( r3 == NULL ) hl_null_access();
	r15 = r3->loc;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->z;
	r12->_32 = r14;
	r5 = r0->raw;
	if( r5 == NULL ) hl_null_access();
	r10 = r5->use_offset;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$705e9da_1_114;
	r13 = r1->world;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->self;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->_32;
	r15 = r1->loc;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->z;
	r14 = r14 + r16;
	r12->_32 = r14;
	label$705e9da_1_114:
	return;
}

void iron_object_Constraint_new(iron__object__Constraint r0,iron__data__TConstraint r1) {
	iron__object__Transform r2;
	r2 = NULL;
	r0->target = r2;
	r0->raw = r1;
	return;
}

