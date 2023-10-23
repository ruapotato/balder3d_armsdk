﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/RotateObjectNode.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <iron/object/Object.h>
#include <iron/math/Quat.h>
#include <iron/object/Transform.h>
#include <iron/Trait.h>
#include <armory/trait/physics/bullet/RigidBody.h>
extern hl_type t$iron_object_Object;
extern hl_type t$_dyn;
extern hl_type t$iron_math_Quat;
#include <hl/natives.h>
void iron_object_Transform_buildMatrix(iron__object__Transform);
extern armory__trait__physics__bullet__$RigidBody g$0d95481;
iron__Trait iron_object_Object_getTrait(iron__object__Object,hl__Class);
void armory_trait_physics_bullet_RigidBody_syncTransform(armory__trait__physics__bullet__RigidBody);
void armory_logicnode_LogicNode_runOutput(armory__logicnode__LogicNode,int);
extern String s$Local;
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);

void armory_logicnode_RotateObjectNode_run(armory__logicnode__RotateObjectNode r0,int r1) {
	String r20;
	armory__trait__physics__bullet__RigidBody r34;
	iron__math__Quat r12, r13, r24;
	armory__logicnode__LogicNodeLink r5, r10;
	hl__types__ArrayObj r2;
	iron__Trait r32;
	armory__trait__physics__bullet__$RigidBody r33;
	armory__logicnode__LogicNode r9;
	iron__object__Transform r23;
	float r15, r16, r17, r25, r26, r27, r28, r29, r30, r31;
	double r14, r18, r19;
	iron__object__Object r11;
	vdynamic *r6;
	vbyte *r21, *r22;
	varray *r7;
	int r3, r4;
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 1;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$9d5738e_1_7;
	r5 = NULL;
	goto label$9d5738e_1_10;
	label$9d5738e_1_7:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$9d5738e_1_10:
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
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$9d5738e_1_23;
	r10 = NULL;
	goto label$9d5738e_1_26;
	label$9d5738e_1_23:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r10 = (armory__logicnode__LogicNodeLink)r6;
	label$9d5738e_1_26:
	if( r10 == NULL ) hl_null_access();
	r9 = r10->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r10->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r12 = (iron__math__Quat)hl_dyn_castp(&r6,&t$_dyn,&t$iron_math_Quat);
	if( !r11 ) goto label$9d5738e_1_34;
	if( r12 ) goto label$9d5738e_1_35;
	label$9d5738e_1_34:
	return;
	label$9d5738e_1_35:
	if( r12 == NULL ) hl_null_access();
	r15 = r12->x;
	r16 = r12->x;
	r15 = r15 * r16;
	r16 = r12->y;
	r17 = r12->y;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r12->z;
	r17 = r12->z;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r16 = r12->w;
	r17 = r12->w;
	r16 = r16 * r17;
	r15 = r15 + r16;
	r14 = (double)r15;
	r14 = hl_math_sqrt(r14);
	r19 = 0.;
	if( r14 != r19 ) goto label$9d5738e_1_68;
	r3 = 0;
	r15 = (float)r3;
	r12->x = r15;
	r3 = 0;
	r15 = (float)r3;
	r12->y = r15;
	r3 = 0;
	r15 = (float)r3;
	r12->z = r15;
	r3 = 0;
	r15 = (float)r3;
	r12->w = r15;
	goto label$9d5738e_1_86;
	label$9d5738e_1_68:
	r18 = 1.;
	r18 = r18 / r14;
	r15 = r12->x;
	r16 = (float)r18;
	r15 = r15 * r16;
	r12->x = r15;
	r15 = r12->y;
	r16 = (float)r18;
	r15 = r15 * r16;
	r12->y = r15;
	r15 = r12->z;
	r16 = (float)r18;
	r15 = r15 * r16;
	r12->z = r15;
	r15 = r12->w;
	r16 = (float)r18;
	r15 = r15 * r16;
	r12->w = r15;
	label$9d5738e_1_86:
	r20 = r0->property0;
	if( !r20 ) goto label$9d5738e_1_96;
	r3 = r20->length;
	r4 = 6;
	if( r3 != r4 ) goto label$9d5738e_1_96;
	r21 = r20->bytes;
	r22 = (vbyte*)USTR("Global");
	r3 = hl_string_compare(r21,r22,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$9d5738e_1_106;
	label$9d5738e_1_96:
	if( !r20 ) goto label$9d5738e_1_105;
	r3 = r20->length;
	r4 = 5;
	if( r3 != r4 ) goto label$9d5738e_1_105;
	r21 = r20->bytes;
	r22 = (vbyte*)USTR("Local");
	r3 = hl_string_compare(r21,r22,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$9d5738e_1_156;
	label$9d5738e_1_105:
	goto label$9d5738e_1_201;
	label$9d5738e_1_106:
	if( r11 == NULL ) hl_null_access();
	r23 = r11->transform;
	if( r23 == NULL ) hl_null_access();
	r13 = r23->rot;
	r23 = r11->transform;
	if( r23 == NULL ) hl_null_access();
	r24 = r23->rot;
	r15 = r12->x;
	r16 = r12->y;
	r17 = r12->z;
	r25 = r12->w;
	if( r24 == NULL ) hl_null_access();
	r26 = r24->x;
	r27 = r24->y;
	r28 = r24->z;
	r29 = r24->w;
	if( r13 == NULL ) hl_null_access();
	r30 = r15 * r29;
	r31 = r25 * r26;
	r30 = r30 + r31;
	r31 = r16 * r28;
	r30 = r30 + r31;
	r31 = r17 * r27;
	r30 = r30 - r31;
	r13->x = r30;
	r30 = r25 * r27;
	r31 = r15 * r28;
	r30 = r30 - r31;
	r31 = r16 * r29;
	r30 = r30 + r31;
	r31 = r17 * r26;
	r30 = r30 + r31;
	r13->y = r30;
	r30 = r25 * r28;
	r31 = r15 * r27;
	r30 = r30 + r31;
	r31 = r16 * r26;
	r30 = r30 - r31;
	r31 = r17 * r29;
	r30 = r30 + r31;
	r13->z = r30;
	r30 = r25 * r29;
	r31 = r15 * r26;
	r30 = r30 - r31;
	r31 = r16 * r27;
	r30 = r30 - r31;
	r31 = r17 * r28;
	r30 = r30 - r31;
	r13->w = r30;
	goto label$9d5738e_1_201;
	label$9d5738e_1_156:
	if( r11 == NULL ) hl_null_access();
	r23 = r11->transform;
	if( r23 == NULL ) hl_null_access();
	r13 = r23->rot;
	if( r13 == NULL ) hl_null_access();
	r15 = r13->x;
	r16 = r13->y;
	r17 = r13->z;
	r25 = r13->w;
	r26 = r12->x;
	r27 = r12->y;
	r28 = r12->z;
	r29 = r12->w;
	r30 = r15 * r29;
	r31 = r25 * r26;
	r30 = r30 + r31;
	r31 = r16 * r28;
	r30 = r30 + r31;
	r31 = r17 * r27;
	r30 = r30 - r31;
	r13->x = r30;
	r30 = r25 * r27;
	r31 = r15 * r28;
	r30 = r30 - r31;
	r31 = r16 * r29;
	r30 = r30 + r31;
	r31 = r17 * r26;
	r30 = r30 + r31;
	r13->y = r30;
	r30 = r25 * r28;
	r31 = r15 * r27;
	r30 = r30 + r31;
	r31 = r16 * r26;
	r30 = r30 - r31;
	r31 = r17 * r29;
	r30 = r30 + r31;
	r13->z = r30;
	r30 = r25 * r29;
	r31 = r15 * r26;
	r30 = r30 - r31;
	r31 = r16 * r27;
	r30 = r30 - r31;
	r31 = r17 * r28;
	r30 = r30 - r31;
	r13->w = r30;
	label$9d5738e_1_201:
	if( r11 == NULL ) hl_null_access();
	r23 = r11->transform;
	if( r23 == NULL ) hl_null_access();
	iron_object_Transform_buildMatrix(r23);
	r33 = (armory__trait__physics__bullet__$RigidBody)g$0d95481;
	r32 = iron_object_Object_getTrait(r11,((hl__Class)r33));
	r34 = (armory__trait__physics__bullet__RigidBody)r32;
	if( !r34 ) goto label$9d5738e_1_211;
	if( r34 == NULL ) hl_null_access();
	armory_trait_physics_bullet_RigidBody_syncTransform(r34);
	label$9d5738e_1_211:
	r3 = 0;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r3);
	return;
}

void armory_logicnode_RotateObjectNode_new(armory__logicnode__RotateObjectNode r0,armory__logicnode__LogicTree r1) {
	String r2;
	r2 = (String)s$Local;
	r0->property0 = r2;
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

