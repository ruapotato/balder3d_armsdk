﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/GetNameNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
#include <iron/object/Object.h>
extern hl_type t$iron_object_Object;
extern hl_type t$_dyn;
extern String s$;

void armory_logicnode_GetNameNode_new(armory__logicnode__GetNameNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

vdynamic* armory_logicnode_GetNameNode_get(armory__logicnode__GetNameNode r0,int r1) {
	String r10;
	armory__logicnode__LogicNodeLink r5;
	hl__types__ArrayObj r2;
	armory__logicnode__LogicNode r8;
	iron__object__Object r9;
	vdynamic *r6;
	varray *r7;
	int r3, r4;
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$9e9ae93_2_7;
	r5 = NULL;
	goto label$9e9ae93_2_10;
	label$9e9ae93_2_7:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$9e9ae93_2_10:
	if( r5 == NULL ) hl_null_access();
	r8 = r5->fromNode;
	if( r8 == NULL ) hl_null_access();
	r3 = r5->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r8->$type->vobj_proto[1])(r8,r3);
	r9 = (iron__object__Object)hl_dyn_castp(&r6,&t$_dyn,&t$iron_object_Object);
	if( r9 ) goto label$9e9ae93_2_19;
	r10 = (String)s$;
	return ((vdynamic*)r10);
	label$9e9ae93_2_19:
	if( r9 == NULL ) hl_null_access();
	r10 = r9->name;
	return ((vdynamic*)r10);
}

