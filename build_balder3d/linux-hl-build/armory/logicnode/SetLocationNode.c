﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/SetLocationNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
#include <iron/object/Object.h>
#include <iron/math/Vec4.h>
#include <iron/math/Mat4.h>
#include <iron/object/Transform.h>
#include <kha/math/FastMatrix4.h>
#include <iron/Trait.h>
#include <armory/trait/physics/bullet/RigidBody.h>
extern hl_type t$iron_object_Object;
extern hl_type t$_dyn;
extern hl_type t$iron_math_Vec4;
extern hl_type t$_bool;
void iron_object_Transform_buildMatrix(iron__object__Transform);
extern armory__trait__physics__bullet__$RigidBody g$0d95481;
iron__Trait iron_object_Object_getTrait(iron__object__Object,hl__Class);
void armory_trait_physics_bullet_RigidBody_syncTransform(armory__trait__physics__bullet__RigidBody);
void armory_logicnode_LogicNode_runOutput(armory__logicnode__LogicNode,int);

void armory_logicnode_SetLocationNode_new(armory__logicnode__SetLocationNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

void armory_logicnode_SetLocationNode_run(armory__logicnode__SetLocationNode r0,int r1) {
	armory__trait__physics__bullet__RigidBody r50;
	armory__logicnode__LogicNodeLink r5, r10, r12;
	hl__types__ArrayObj r2;
	kha__math__FastMatrix4 r24;
	bool r14;
	iron__Trait r48;
	iron__math__Vec4 r13, r16;
	armory__trait__physics__bullet__$RigidBody r49;
	armory__logicnode__LogicNode r9;
	iron__object__Transform r22;
	iron__math__Mat4 r21, r25, r31, r38;
	float r17, r18, r19, r20, r23, r26, r27, r28, r29, r30, r32, r34, r35, r36, r37, r39, r40, r41, r42, r43, r44, r45, r46, r47;
	double r33;
	iron__object__Object r11, r15;
	vdynamic *r6;
	varray *r7;
	int r3, r4;
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 1;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$4926acd_2_7;
	r5 = NULL;
	goto label$4926acd_2_10;
	label$4926acd_2_7:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$4926acd_2_10:
	if( r5 == NULL ) hl_null_access();
	r9 = r5->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r5->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r11 = (iron__object__Object)hl_dyn_castp(&r6,&t$_dyn,&t$iron_object_Object);
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 2;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$4926acd_2_23;
	r10 = NULL;
	goto label$4926acd_2_26;
	label$4926acd_2_23:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r10 = (armory__logicnode__LogicNodeLink)r6;
	label$4926acd_2_26:
	if( r10 == NULL ) hl_null_access();
	r9 = r10->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r10->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r13 = (iron__math__Vec4)hl_dyn_castp(&r6,&t$_dyn,&t$iron_math_Vec4);
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 3;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$4926acd_2_39;
	r12 = NULL;
	goto label$4926acd_2_42;
	label$4926acd_2_39:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r12 = (armory__logicnode__LogicNodeLink)r6;
	label$4926acd_2_42:
	if( r12 == NULL ) hl_null_access();
	r9 = r12->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r12->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r14 = (bool)hl_dyn_casti(&r6,&t$_dyn,&t$_bool);
	if( !r11 ) goto label$4926acd_2_50;
	if( r13 ) goto label$4926acd_2_51;
	label$4926acd_2_50:
	return;
	label$4926acd_2_51:
	if( r14 ) goto label$4926acd_2_156;
	if( r11 == NULL ) hl_null_access();
	r15 = r11->parent;
	if( !r15 ) goto label$4926acd_2_156;
	if( r13 == NULL ) hl_null_access();
	r17 = r13->x;
	r18 = r13->y;
	r19 = r13->z;
	r20 = r13->w;
	r15 = r11->parent;
	if( r15 == NULL ) hl_null_access();
	r22 = r15->transform;
	if( r22 == NULL ) hl_null_access();
	r21 = r22->world;
	if( r21 == NULL ) hl_null_access();
	r24 = r21->self;
	if( r24 == NULL ) hl_null_access();
	r23 = r24->_30;
	r24 = r21->self;
	if( r24 == NULL ) hl_null_access();
	r26 = r24->_31;
	r24 = r21->self;
	if( r24 == NULL ) hl_null_access();
	r27 = r24->_32;
	r24 = r21->self;
	if( r24 == NULL ) hl_null_access();
	r28 = r24->_33;
	r29 = r17 - r23;
	r17 = r29;
	r29 = r18 - r26;
	r18 = r29;
	r29 = r19 - r27;
	r19 = r29;
	r15 = r11->parent;
	if( r15 == NULL ) hl_null_access();
	r22 = r15->transform;
	if( r22 == NULL ) hl_null_access();
	r25 = r22->world;
	if( r25 == NULL ) hl_null_access();
	r24 = r25->self;
	if( r24 == NULL ) hl_null_access();
	r29 = r24->_00;
	r24 = r25->self;
	if( r24 == NULL ) hl_null_access();
	r30 = r24->_01;
	r24 = r25->self;
	if( r24 == NULL ) hl_null_access();
	r32 = r24->_02;
	r33 = 1.;
	r34 = (float)r33;
	r35 = r17 * r29;
	r36 = r18 * r30;
	r35 = r35 + r36;
	r36 = r19 * r32;
	r35 = r35 + r36;
	r15 = r11->parent;
	if( r15 == NULL ) hl_null_access();
	r22 = r15->transform;
	if( r22 == NULL ) hl_null_access();
	r31 = r22->world;
	if( r31 == NULL ) hl_null_access();
	r24 = r31->self;
	if( r24 == NULL ) hl_null_access();
	r36 = r24->_10;
	r24 = r31->self;
	if( r24 == NULL ) hl_null_access();
	r37 = r24->_11;
	r24 = r31->self;
	if( r24 == NULL ) hl_null_access();
	r39 = r24->_12;
	r33 = 1.;
	r40 = (float)r33;
	r41 = r17 * r36;
	r42 = r18 * r37;
	r41 = r41 + r42;
	r42 = r19 * r39;
	r41 = r41 + r42;
	r15 = r11->parent;
	if( r15 == NULL ) hl_null_access();
	r22 = r15->transform;
	if( r22 == NULL ) hl_null_access();
	r38 = r22->world;
	if( r38 == NULL ) hl_null_access();
	r24 = r38->self;
	if( r24 == NULL ) hl_null_access();
	r42 = r24->_20;
	r24 = r38->self;
	if( r24 == NULL ) hl_null_access();
	r43 = r24->_21;
	r24 = r38->self;
	if( r24 == NULL ) hl_null_access();
	r44 = r24->_22;
	r33 = 1.;
	r45 = (float)r33;
	r46 = r17 * r42;
	r47 = r18 * r43;
	r46 = r46 + r47;
	r47 = r19 * r44;
	r46 = r46 + r47;
	r13->x = r35;
	r13->y = r41;
	r13->z = r46;
	r33 = 1.;
	r47 = (float)r33;
	r13->w = r47;
	label$4926acd_2_156:
	if( r11 == NULL ) hl_null_access();
	r22 = r11->transform;
	if( r22 == NULL ) hl_null_access();
	r16 = r22->loc;
	if( r16 == NULL ) hl_null_access();
	if( r13 == NULL ) hl_null_access();
	r17 = r13->x;
	r16->x = r17;
	r17 = r13->y;
	r16->y = r17;
	r17 = r13->z;
	r16->z = r17;
	r17 = r13->w;
	r16->w = r17;
	r22 = r11->transform;
	if( r22 == NULL ) hl_null_access();
	iron_object_Transform_buildMatrix(r22);
	r49 = (armory__trait__physics__bullet__$RigidBody)g$0d95481;
	r48 = iron_object_Object_getTrait(r11,((hl__Class)r49));
	r50 = (armory__trait__physics__bullet__RigidBody)r48;
	if( !r50 ) goto label$4926acd_2_179;
	if( r50 == NULL ) hl_null_access();
	armory_trait_physics_bullet_RigidBody_syncTransform(r50);
	label$4926acd_2_179:
	r3 = 0;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r3);
	return;
}

