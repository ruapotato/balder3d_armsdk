﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/LoopNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
extern hl_type t$_i32;
extern hl_type t$_dyn;
void armory_logicnode_LogicNode_runOutput(armory__logicnode__LogicNode,int);

void armory_logicnode_LoopNode_new(armory__logicnode__LoopNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

void armory_logicnode_LoopNode_run(armory__logicnode__LoopNode r0,int r1) {
	armory__logicnode__LogicTree r16;
	armory__logicnode__LogicNodeLink r5, r10;
	hl__types__ArrayObj r3;
	bool r15;
	armory__logicnode__LogicNode r9;
	vdynamic *r6;
	varray *r7;
	int r2, r4, r11, r12, r13, r14;
	r2 = 0;
	r0->index = r2;
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r2 = 1;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$179427c_2_9;
	r5 = NULL;
	goto label$179427c_2_12;
	label$179427c_2_9:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$179427c_2_12:
	if( r5 == NULL ) hl_null_access();
	r9 = r5->fromNode;
	if( r9 == NULL ) hl_null_access();
	r2 = r5->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r2);
	r2 = (int)hl_dyn_casti(&r6,&t$_dyn,&t$_i32);
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	r11 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r11) ) goto label$179427c_2_25;
	r10 = NULL;
	goto label$179427c_2_28;
	label$179427c_2_25:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r4];
	r10 = (armory__logicnode__LogicNodeLink)r6;
	label$179427c_2_28:
	if( r10 == NULL ) hl_null_access();
	r9 = r10->fromNode;
	if( r9 == NULL ) hl_null_access();
	r4 = r10->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r4);
	r4 = (int)hl_dyn_casti(&r6,&t$_dyn,&t$_i32);
	r11 = r2;
	r12 = r4;
	label$179427c_2_36:
	if( r11 >= r12 ) goto label$179427c_2_62;
	r13 = r11;
	++r11;
	r0->index = r13;
	r14 = 0;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r14);
	r16 = r0->tree;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->loopBreak;
	if( !r15 ) goto label$179427c_2_52;
	r16 = r0->tree;
	if( r16 == NULL ) hl_null_access();
	r15 = false;
	r16->loopBreak = r15;
	goto label$179427c_2_62;
	label$179427c_2_52:
	r16 = r0->tree;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->loopContinue;
	if( !r15 ) goto label$179427c_2_61;
	r16 = r0->tree;
	if( r16 == NULL ) hl_null_access();
	r15 = false;
	r16->loopContinue = r15;
	goto label$179427c_2_36;
	label$179427c_2_61:
	goto label$179427c_2_36;
	label$179427c_2_62:
	r11 = 2;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r11);
	return;
}

vdynamic* armory_logicnode_LoopNode_get(armory__logicnode__LoopNode r0,int r1) {
	vdynamic *r3;
	int r2;
	r2 = r0->index;
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r2;
	return r3;
}

