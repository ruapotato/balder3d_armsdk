﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/ConcatenateStringNode.h>
extern String s$;
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
String Std_string(vdynamic*);
String String___add__(String,String);

void armory_logicnode_ConcatenateStringNode_new(armory__logicnode__ConcatenateStringNode r0,armory__logicnode__LogicTree r1,String r2) {
	String r3;
	if( r2 ) goto label$4c757a0_1_3;
	r3 = (String)s$;
	r2 = r3;
	label$4c757a0_1_3:
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	r0->value = r2;
	return;
}

vdynamic* armory_logicnode_ConcatenateStringNode_get(armory__logicnode__ConcatenateStringNode r0,int r1) {
	String r2, r10;
	armory__logicnode__LogicNodeLink r7;
	hl__types__ArrayObj r4;
	armory__logicnode__LogicNode r11;
	vdynamic *r8;
	varray *r9;
	int r3, r5, r6;
	r2 = (String)s$;
	r0->value = r2;
	r3 = 0;
	r4 = r0->inputs;
	label$4c757a0_2_4:
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( r3 >= r6 ) goto label$4c757a0_2_26;
	r6 = r4->length;
	if( ((unsigned)r3) < ((unsigned)r6) ) goto label$4c757a0_2_12;
	r7 = NULL;
	goto label$4c757a0_2_15;
	label$4c757a0_2_12:
	r9 = r4->array;
	r8 = ((vdynamic**)(r9 + 1))[r3];
	r7 = (armory__logicnode__LogicNodeLink)r8;
	label$4c757a0_2_15:
	++r3;
	r2 = r0->value;
	if( r7 == NULL ) hl_null_access();
	r11 = r7->fromNode;
	if( r11 == NULL ) hl_null_access();
	r5 = r7->fromIndex;
	r8 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r11->$type->vobj_proto[1])(r11,r5);
	r10 = Std_string(r8);
	r2 = String___add__(r2,r10);
	r0->value = r2;
	goto label$4c757a0_2_4;
	label$4c757a0_2_26:
	r2 = r0->value;
	return ((vdynamic*)r2);
}

