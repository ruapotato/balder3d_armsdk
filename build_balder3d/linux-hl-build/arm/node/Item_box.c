﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <arm/node/Item_box.h>
void armory_logicnode_LogicTree_new(armory__logicnode__LogicTree);
extern hl_type t$haxe_ds_StringMap;
void haxe_ds_StringMap_new(haxe__ds__StringMap);
void arm_node_Item_box_add(arm__node__Item_box);
extern hl_type t$fun_52431c8;
void iron_Trait_notifyOnAdd(iron__Trait,vclosure*);
#include <armory/logicnode/RemoveObjectNode.h>
#include <armory/logicnode/SleepNode.h>
#include <armory/logicnode/SetPropertyNode.h>
#include <armory/logicnode/IsTrueNode.h>
#include <armory/logicnode/ArrayLoopNode.h>
#include <armory/logicnode/OnContactArrayNode.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <armory/logicnode/ObjectNode.h>
#include <armory/logicnode/GetGroupNode.h>
#include <armory/logicnode/StringNode.h>
#include <armory/logicnode/IntegerNode.h>
#include <armory/logicnode/NullNode.h>
#include <armory/logicnode/HasContactNode.h>
#include <armory/logicnode/FloatNode.h>
#include <armory/logicnode/BooleanNode.h>
extern hl_type t$armory_logicnode_RemoveObjectNode;
void armory_logicnode_RemoveObjectNode_new(armory__logicnode__RemoveObjectNode,armory__logicnode__LogicTree);
void hl_types_ArrayObj_resize(hl__types__ArrayObj,int);
extern hl_type t$armory_logicnode_LogicNodeLink;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
extern hl_type t$armory_logicnode_SleepNode;
void armory_logicnode_SleepNode_new(armory__logicnode__SleepNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_SetPropertyNode;
void armory_logicnode_SetPropertyNode_new(armory__logicnode__SetPropertyNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_IsTrueNode;
void armory_logicnode_IsTrueNode_new(armory__logicnode__IsTrueNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_ArrayLoopNode;
void armory_logicnode_ArrayLoopNode_new(armory__logicnode__ArrayLoopNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_OnContactArrayNode;
void armory_logicnode_OnContactArrayNode_new(armory__logicnode__OnContactArrayNode,armory__logicnode__LogicTree);
extern String s$begin;
extern hl_type t$armory_logicnode_ObjectNode;
extern String s$;
void armory_logicnode_ObjectNode_new(armory__logicnode__ObjectNode,armory__logicnode__LogicTree,String);
#include <armory/logicnode/LogicNode.h>
armory__logicnode__LogicNodeLink armory_logicnode_LogicNode_addLink(armory__logicnode__LogicNode,armory__logicnode__LogicNode,int,int);
extern hl_type t$armory_logicnode_GetGroupNode;
void armory_logicnode_GetGroupNode_new(armory__logicnode__GetGroupNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_StringNode;
extern String s$active;
void armory_logicnode_StringNode_new(armory__logicnode__StringNode,armory__logicnode__LogicTree,String);
extern hl_type t$armory_logicnode_IntegerNode;
void armory_logicnode_IntegerNode_new(armory__logicnode__IntegerNode,armory__logicnode__LogicTree,int*);
extern hl_type t$armory_logicnode_NullNode;
void armory_logicnode_NullNode_new(armory__logicnode__NullNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_HasContactNode;
void armory_logicnode_HasContactNode_new(armory__logicnode__HasContactNode,armory__logicnode__LogicTree);
extern String s$gun_type;
extern String s$b;
extern hl_type t$armory_logicnode_FloatNode;
void armory_logicnode_FloatNode_new(armory__logicnode__FloatNode,armory__logicnode__LogicTree,double*);
extern hl_type t$armory_logicnode_BooleanNode;
void armory_logicnode_BooleanNode_new(armory__logicnode__BooleanNode,armory__logicnode__LogicTree,bool*);

void arm_node_Item_box_new(arm__node__Item_box r0) {
	haxe__ds__StringMap r2;
	vclosure *r3;
	armory_logicnode_LogicTree_new(((armory__logicnode__LogicTree)r0));
	r2 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r2);
	r0->functionNodes = r2;
	r2 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r2);
	r0->functionOutputNodes = r2;
	r3 = hl_alloc_closure_ptr(&t$fun_52431c8,arm_node_Item_box_add,r0);
	iron_Trait_notifyOnAdd(((iron__Trait)r0),r3);
	return;
}

void arm_node_Item_box_add(arm__node__Item_box r0) {
	bool *r33;
	armory__logicnode__BooleanNode r31;
	armory__logicnode__ObjectNode r19;
	String r17;
	armory__logicnode__RemoveObjectNode r1;
	armory__logicnode__NullNode r24;
	armory__logicnode__LogicNodeLink r18;
	hl__types__ArrayObj r3, r8;
	armory__logicnode__HasContactNode r25;
	hl_type *r10;
	bool r32, r34;
	armory__logicnode__ArrayLoopNode r15;
	armory__logicnode__GetGroupNode r20;
	armory__logicnode__IntegerNode r22;
	armory__logicnode__StringNode r21, r27;
	armory__logicnode__SetPropertyNode r13;
	armory__logicnode__SleepNode r12;
	armory__logicnode__OnContactArrayNode r16;
	double r29;
	armory__logicnode__FloatNode r28;
	double *r30;
	int *r23;
	armory__logicnode__IsTrueNode r14;
	varray *r9;
	int r4, r5, r6, r7, r11, r26;
	r1 = (armory__logicnode__RemoveObjectNode)hl_alloc_obj(&t$armory_logicnode_RemoveObjectNode);
	armory_logicnode_RemoveObjectNode_new(r1,((armory__logicnode__LogicTree)r0));
	r3 = r1->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 4;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_14:
	if( r4 >= r5 ) goto label$b2788ef_2_31;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_28;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_28:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_14;
	label$b2788ef_2_31:
	r12 = (armory__logicnode__SleepNode)hl_alloc_obj(&t$armory_logicnode_SleepNode);
	armory_logicnode_SleepNode_new(r12,((armory__logicnode__LogicTree)r0));
	r3 = r12->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r12->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r12->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_45:
	if( r4 >= r5 ) goto label$b2788ef_2_62;
	r6 = r4;
	++r4;
	if( r12 == NULL ) hl_null_access();
	r3 = r12->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_59;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_59:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_45;
	label$b2788ef_2_62:
	r13 = (armory__logicnode__SetPropertyNode)hl_alloc_obj(&t$armory_logicnode_SetPropertyNode);
	armory_logicnode_SetPropertyNode_new(r13,((armory__logicnode__LogicTree)r0));
	r3 = r13->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 4;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_76:
	if( r4 >= r5 ) goto label$b2788ef_2_93;
	r6 = r4;
	++r4;
	if( r13 == NULL ) hl_null_access();
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_90;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_90:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_76;
	label$b2788ef_2_93:
	r14 = (armory__logicnode__IsTrueNode)hl_alloc_obj(&t$armory_logicnode_IsTrueNode);
	armory_logicnode_IsTrueNode_new(r14,((armory__logicnode__LogicTree)r0));
	r3 = r14->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r14->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r14->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_107:
	if( r4 >= r5 ) goto label$b2788ef_2_124;
	r6 = r4;
	++r4;
	if( r14 == NULL ) hl_null_access();
	r3 = r14->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_121;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_121:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_107;
	label$b2788ef_2_124:
	r15 = (armory__logicnode__ArrayLoopNode)hl_alloc_obj(&t$armory_logicnode_ArrayLoopNode);
	armory_logicnode_ArrayLoopNode_new(r15,((armory__logicnode__LogicTree)r0));
	r3 = r15->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 4;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_138:
	if( r4 >= r5 ) goto label$b2788ef_2_155;
	r6 = r4;
	++r4;
	if( r15 == NULL ) hl_null_access();
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_152;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_152:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_138;
	label$b2788ef_2_155:
	r16 = (armory__logicnode__OnContactArrayNode)hl_alloc_obj(&t$armory_logicnode_OnContactArrayNode);
	armory_logicnode_OnContactArrayNode_new(r16,((armory__logicnode__LogicTree)r0));
	r17 = (String)s$begin;
	r16->property0 = r17;
	r3 = r16->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r16->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r16->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_171:
	if( r4 >= r5 ) goto label$b2788ef_2_188;
	r6 = r4;
	++r4;
	if( r16 == NULL ) hl_null_access();
	r3 = r16->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_185;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_185:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_171;
	label$b2788ef_2_188:
	r19 = (armory__logicnode__ObjectNode)hl_alloc_obj(&t$armory_logicnode_ObjectNode);
	r17 = (String)s$;
	armory_logicnode_ObjectNode_new(r19,((armory__logicnode__LogicTree)r0),r17);
	r4 = 0;
	r5 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r19),((armory__logicnode__LogicNode)r16),r4,r5);
	r20 = (armory__logicnode__GetGroupNode)hl_alloc_obj(&t$armory_logicnode_GetGroupNode);
	armory_logicnode_GetGroupNode_new(r20,((armory__logicnode__LogicTree)r0));
	r3 = r20->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r20->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r20->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$b2788ef_2_208:
	if( r4 >= r5 ) goto label$b2788ef_2_225;
	r6 = r4;
	++r4;
	if( r20 == NULL ) hl_null_access();
	r3 = r20->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r11 = 0;
	r9 = hl_alloc_array(r10,r11);
	r8 = hl_types_ArrayObj_alloc(r9);
	r11 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r11) ) goto label$b2788ef_2_222;
	hl_types_ArrayObj___expand(r3,r6);
	label$b2788ef_2_222:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r6] = r8;
	goto label$b2788ef_2_208;
	label$b2788ef_2_225:
	r21 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r17 = (String)s$active;
	armory_logicnode_StringNode_new(r21,((armory__logicnode__LogicTree)r0),r17);
	r4 = 0;
	r5 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r21),((armory__logicnode__LogicNode)r20),r4,r5);
	r4 = 0;
	r5 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r20),((armory__logicnode__LogicNode)r16),r4,r5);
	r4 = 0;
	r5 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r16),((armory__logicnode__LogicNode)r15),r4,r5);
	r4 = 0;
	r5 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r20),((armory__logicnode__LogicNode)r15),r4,r5);
	r22 = (armory__logicnode__IntegerNode)hl_alloc_obj(&t$armory_logicnode_IntegerNode);
	r4 = 0;
	r23 = &r4;
	armory_logicnode_IntegerNode_new(r22,((armory__logicnode__LogicTree)r0),r23);
	r5 = 2;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r22),r5,r6);
	r24 = (armory__logicnode__NullNode)hl_alloc_obj(&t$armory_logicnode_NullNode);
	armory_logicnode_NullNode_new(r24,((armory__logicnode__LogicTree)r0));
	r5 = 3;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r24),r5,r6);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r14),r5,r6);
	r25 = (armory__logicnode__HasContactNode)hl_alloc_obj(&t$armory_logicnode_HasContactNode);
	armory_logicnode_HasContactNode_new(r25,((armory__logicnode__LogicTree)r0));
	r3 = r25->inputs;
	if( r3 == NULL ) hl_null_access();
	r5 = 2;
	hl_types_ArrayObj_resize(r3,r5);
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = 1;
	hl_types_ArrayObj_resize(r3,r5);
	r5 = 0;
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	label$b2788ef_2_269:
	if( r5 >= r6 ) goto label$b2788ef_2_286;
	r7 = r5;
	++r5;
	if( r25 == NULL ) hl_null_access();
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r26 = 0;
	r9 = hl_alloc_array(r10,r26);
	r8 = hl_types_ArrayObj_alloc(r9);
	r26 = r3->length;
	if( ((unsigned)r7) < ((unsigned)r26) ) goto label$b2788ef_2_283;
	hl_types_ArrayObj___expand(r3,r7);
	label$b2788ef_2_283:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r7] = r8;
	goto label$b2788ef_2_269;
	label$b2788ef_2_286:
	r19 = (armory__logicnode__ObjectNode)hl_alloc_obj(&t$armory_logicnode_ObjectNode);
	r17 = (String)s$;
	armory_logicnode_ObjectNode_new(r19,((armory__logicnode__LogicTree)r0),r17);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r19),((armory__logicnode__LogicNode)r25),r5,r6);
	r5 = 1;
	r6 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r25),r5,r6);
	r5 = 0;
	r6 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r25),((armory__logicnode__LogicNode)r14),r5,r6);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r14),((armory__logicnode__LogicNode)r13),r5,r6);
	r5 = 1;
	r6 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r13),r5,r6);
	r21 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r17 = (String)s$gun_type;
	armory_logicnode_StringNode_new(r21,((armory__logicnode__LogicTree)r0),r17);
	r5 = 0;
	r6 = 2;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r21),((armory__logicnode__LogicNode)r13),r5,r6);
	r21 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r17 = NULL;
	armory_logicnode_StringNode_new(r21,((armory__logicnode__LogicTree)r0),r17);
	r3 = r21->inputs;
	if( r3 == NULL ) hl_null_access();
	r5 = 1;
	hl_types_ArrayObj_resize(r3,r5);
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = 1;
	hl_types_ArrayObj_resize(r3,r5);
	r5 = 0;
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r6 = r3->length;
	label$b2788ef_2_325:
	if( r5 >= r6 ) goto label$b2788ef_2_342;
	r7 = r5;
	++r5;
	if( r21 == NULL ) hl_null_access();
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r10 = &t$armory_logicnode_LogicNodeLink;
	r26 = 0;
	r9 = hl_alloc_array(r10,r26);
	r8 = hl_types_ArrayObj_alloc(r9);
	r26 = r3->length;
	if( ((unsigned)r7) < ((unsigned)r26) ) goto label$b2788ef_2_339;
	hl_types_ArrayObj___expand(r3,r7);
	label$b2788ef_2_339:
	r9 = r3->array;
	((hl__types__ArrayObj*)(r9 + 1))[r7] = r8;
	goto label$b2788ef_2_325;
	label$b2788ef_2_342:
	r27 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r17 = (String)s$b;
	armory_logicnode_StringNode_new(r27,((armory__logicnode__LogicTree)r0),r17);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r27),((armory__logicnode__LogicNode)r21),r5,r6);
	r5 = 0;
	r6 = 3;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r21),((armory__logicnode__LogicNode)r13),r5,r6);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r13),((armory__logicnode__LogicNode)r12),r5,r6);
	r28 = (armory__logicnode__FloatNode)hl_alloc_obj(&t$armory_logicnode_FloatNode);
	r29 = 1.;
	r30 = &r29;
	armory_logicnode_FloatNode_new(r28,((armory__logicnode__LogicTree)r0),r30);
	r5 = 0;
	r6 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r28),((armory__logicnode__LogicNode)r12),r5,r6);
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r12),((armory__logicnode__LogicNode)r1),r5,r6);
	r19 = (armory__logicnode__ObjectNode)hl_alloc_obj(&t$armory_logicnode_ObjectNode);
	r17 = (String)s$;
	armory_logicnode_ObjectNode_new(r19,((armory__logicnode__LogicTree)r0),r17);
	r5 = 0;
	r6 = 1;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r19),((armory__logicnode__LogicNode)r1),r5,r6);
	r31 = (armory__logicnode__BooleanNode)hl_alloc_obj(&t$armory_logicnode_BooleanNode);
	r32 = true;
	r33 = &r32;
	armory_logicnode_BooleanNode_new(r31,((armory__logicnode__LogicTree)r0),r33);
	r5 = 0;
	r6 = 2;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r31),((armory__logicnode__LogicNode)r1),r5,r6);
	r31 = (armory__logicnode__BooleanNode)hl_alloc_obj(&t$armory_logicnode_BooleanNode);
	r34 = true;
	r33 = &r34;
	armory_logicnode_BooleanNode_new(r31,((armory__logicnode__LogicTree)r0),r33);
	r5 = 0;
	r6 = 3;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r31),((armory__logicnode__LogicNode)r1),r5,r6);
	r24 = (armory__logicnode__NullNode)hl_alloc_obj(&t$armory_logicnode_NullNode);
	armory_logicnode_NullNode_new(r24,((armory__logicnode__LogicTree)r0));
	r5 = 0;
	r6 = 0;
	r18 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r1),((armory__logicnode__LogicNode)r24),r5,r6);
	return;
}

