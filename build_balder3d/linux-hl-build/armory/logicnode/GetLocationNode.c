﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/GetLocationNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
#include <iron/object/Object.h>
#include <iron/math/Mat4.h>
#include <iron/object/Transform.h>
#include <iron/math/Vec4.h>
#include <kha/math/FastMatrix4.h>
extern hl_type t$iron_object_Object;
extern hl_type t$_dyn;
extern hl_type t$_bool;
extern hl_type t$iron_math_Vec4;
void iron_math_Vec4_new(iron__math__Vec4,float*,float*,float*,float*);

void armory_logicnode_GetLocationNode_new(armory__logicnode__GetLocationNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

vdynamic* armory_logicnode_GetLocationNode_get(armory__logicnode__GetLocationNode r0,int r1) {
	armory__logicnode__LogicNodeLink r5, r10;
	hl__types__ArrayObj r2;
	kha__math__FastMatrix4 r18;
	bool r12;
	iron__math__Vec4 r16;
	armory__logicnode__LogicNode r9;
	iron__object__Transform r15;
	float r17, r21, r23, r25, r27, r29, r30, r31, r32, r33, r35, r37, r38, r39, r40, r41, r42, r43, r44, r45;
	iron__math__Mat4 r14, r19, r28, r36;
	double r34;
	iron__object__Object r11, r13;
	vdynamic *r6;
	float *r20, *r22, *r24, *r26;
	varray *r7;
	int r3, r4;
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$e05b667_2_7;
	r5 = NULL;
	goto label$e05b667_2_10;
	label$e05b667_2_7:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$e05b667_2_10:
	if( r5 == NULL ) hl_null_access();
	r9 = r5->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r5->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r11 = (iron__object__Object)hl_dyn_castp(&r6,&t$_dyn,&t$iron_object_Object);
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 1;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$e05b667_2_23;
	r10 = NULL;
	goto label$e05b667_2_26;
	label$e05b667_2_23:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r10 = (armory__logicnode__LogicNodeLink)r6;
	label$e05b667_2_26:
	if( r10 == NULL ) hl_null_access();
	r9 = r10->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r10->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r12 = (bool)hl_dyn_casti(&r6,&t$_dyn,&t$_bool);
	if( r11 ) goto label$e05b667_2_35;
	r6 = NULL;
	return r6;
	label$e05b667_2_35:
	if( r11 == NULL ) hl_null_access();
	r15 = r11->transform;
	if( r15 == NULL ) hl_null_access();
	r14 = r15->world;
	r16 = (iron__math__Vec4)hl_alloc_obj(&t$iron_math_Vec4);
	if( r14 == NULL ) hl_null_access();
	r18 = r14->self;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->_30;
	r20 = &r17;
	r18 = r14->self;
	if( r18 == NULL ) hl_null_access();
	r21 = r18->_31;
	r22 = &r21;
	r18 = r14->self;
	if( r18 == NULL ) hl_null_access();
	r23 = r18->_32;
	r24 = &r23;
	r18 = r14->self;
	if( r18 == NULL ) hl_null_access();
	r25 = r18->_33;
	r26 = &r25;
	iron_math_Vec4_new(r16,r20,r22,r24,r26);
	if( !r12 ) goto label$e05b667_2_169;
	r13 = r11->parent;
	if( !r13 ) goto label$e05b667_2_169;
	r13 = r11->parent;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->transform;
	if( r15 == NULL ) hl_null_access();
	r19 = r15->world;
	if( r19 == NULL ) hl_null_access();
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r27 = r18->_30;
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r29 = r18->_31;
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r30 = r18->_32;
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r31 = r18->_33;
	r32 = r16->x;
	r32 = r32 - r27;
	r16->x = r32;
	r32 = r16->y;
	r32 = r32 - r29;
	r16->y = r32;
	r32 = r16->z;
	r32 = r32 - r30;
	r16->z = r32;
	r13 = r11->parent;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->transform;
	if( r15 == NULL ) hl_null_access();
	r19 = r15->world;
	if( r19 == NULL ) hl_null_access();
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r27 = r18->_00;
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r29 = r18->_01;
	r18 = r19->self;
	if( r18 == NULL ) hl_null_access();
	r30 = r18->_02;
	r34 = 1.;
	r31 = (float)r34;
	r32 = r16->x;
	r32 = r32 * r27;
	r33 = r16->y;
	r33 = r33 * r29;
	r32 = r32 + r33;
	r33 = r16->z;
	r33 = r33 * r30;
	r32 = r32 + r33;
	r13 = r11->parent;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->transform;
	if( r15 == NULL ) hl_null_access();
	r28 = r15->world;
	if( r28 == NULL ) hl_null_access();
	r18 = r28->self;
	if( r18 == NULL ) hl_null_access();
	r33 = r18->_10;
	r18 = r28->self;
	if( r18 == NULL ) hl_null_access();
	r35 = r18->_11;
	r18 = r28->self;
	if( r18 == NULL ) hl_null_access();
	r37 = r18->_12;
	r34 = 1.;
	r38 = (float)r34;
	r39 = r16->x;
	r39 = r39 * r33;
	r40 = r16->y;
	r40 = r40 * r35;
	r39 = r39 + r40;
	r40 = r16->z;
	r40 = r40 * r37;
	r39 = r39 + r40;
	r13 = r11->parent;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->transform;
	if( r15 == NULL ) hl_null_access();
	r36 = r15->world;
	if( r36 == NULL ) hl_null_access();
	r18 = r36->self;
	if( r18 == NULL ) hl_null_access();
	r40 = r18->_20;
	r18 = r36->self;
	if( r18 == NULL ) hl_null_access();
	r41 = r18->_21;
	r18 = r36->self;
	if( r18 == NULL ) hl_null_access();
	r42 = r18->_22;
	r34 = 1.;
	r43 = (float)r34;
	r44 = r16->x;
	r44 = r44 * r40;
	r45 = r16->y;
	r45 = r45 * r41;
	r44 = r44 + r45;
	r45 = r16->z;
	r45 = r45 * r42;
	r44 = r44 + r45;
	r16->x = r32;
	r16->y = r39;
	r16->z = r44;
	r34 = 1.;
	r45 = (float)r34;
	r16->w = r45;
	label$e05b667_2_169:
	return ((vdynamic*)r16);
}

