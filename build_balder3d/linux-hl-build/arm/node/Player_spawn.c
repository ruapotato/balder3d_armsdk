﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <arm/node/Player_spawn.h>
void armory_logicnode_LogicTree_new(armory__logicnode__LogicTree);
extern hl_type t$haxe_ds_StringMap;
void haxe_ds_StringMap_new(haxe__ds__StringMap);
void arm_node_Player_spawn_add(arm__node__Player_spawn);
extern hl_type t$fun_53240a6;
void iron_Trait_notifyOnAdd(iron__Trait,vclosure*);
#include <armory/logicnode/SetSceneNode.h>
#include <armory/logicnode/RemoveActiveSceneNode.h>
#include <armory/logicnode/RemoveGroupNode.h>
#include <armory/logicnode/SetCursorStateNode.h>
#include <armory/logicnode/OnEventNode.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <armory/logicnode/StringNode.h>
#include <armory/logicnode/BooleanNode.h>
#include <armory/logicnode/SceneNode.h>
#include <armory/logicnode/NullNode.h>
#include <armory/logicnode/ObjectNode.h>
#include <armory/logicnode/SendGlobalEventNode.h>
#include <armory/logicnode/MergedKeyboardNode.h>
extern hl_type t$armory_logicnode_SetSceneNode;
void armory_logicnode_SetSceneNode_new(armory__logicnode__SetSceneNode,armory__logicnode__LogicTree);
void hl_types_ArrayObj_resize(hl__types__ArrayObj,int);
extern hl_type t$armory_logicnode_LogicNodeLink;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
extern hl_type t$armory_logicnode_RemoveActiveSceneNode;
void armory_logicnode_RemoveActiveSceneNode_new(armory__logicnode__RemoveActiveSceneNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_RemoveGroupNode;
void armory_logicnode_RemoveGroupNode_new(armory__logicnode__RemoveGroupNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_SetCursorStateNode;
void armory_logicnode_SetCursorStateNode_new(armory__logicnode__SetCursorStateNode,armory__logicnode__LogicTree);
extern String s$hide_locked;
extern hl_type t$armory_logicnode_OnEventNode;
void armory_logicnode_OnEventNode_new(armory__logicnode__OnEventNode,armory__logicnode__LogicTree);
extern String s$init;
extern hl_type t$armory_logicnode_StringNode;
extern String s$load_menu;
void armory_logicnode_StringNode_new(armory__logicnode__StringNode,armory__logicnode__LogicTree,String);
#include <armory/logicnode/LogicNode.h>
armory__logicnode__LogicNodeLink armory_logicnode_LogicNode_addLink(armory__logicnode__LogicNode,armory__logicnode__LogicNode,int,int);
extern hl_type t$armory_logicnode_BooleanNode;
void armory_logicnode_BooleanNode_new(armory__logicnode__BooleanNode,armory__logicnode__LogicTree,bool*);
extern String s$active;
extern hl_type t$armory_logicnode_SceneNode;
void armory_logicnode_SceneNode_new(armory__logicnode__SceneNode,armory__logicnode__LogicTree);
extern String s$menu;
extern hl_type t$armory_logicnode_NullNode;
void armory_logicnode_NullNode_new(armory__logicnode__NullNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_ObjectNode;
extern String s$;
void armory_logicnode_ObjectNode_new(armory__logicnode__ObjectNode,armory__logicnode__LogicTree,String);
extern hl_type t$armory_logicnode_SendGlobalEventNode;
void armory_logicnode_SendGlobalEventNode_new(armory__logicnode__SendGlobalEventNode,armory__logicnode__LogicTree);
extern hl_type t$armory_logicnode_MergedKeyboardNode;
void armory_logicnode_MergedKeyboardNode_new(armory__logicnode__MergedKeyboardNode,armory__logicnode__LogicTree);
extern String s$started;
extern String s$r;

void arm_node_Player_spawn_new(arm__node__Player_spawn r0) {
	haxe__ds__StringMap r2;
	vclosure *r3;
	armory_logicnode_LogicTree_new(((armory__logicnode__LogicTree)r0));
	r2 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r2);
	r0->functionNodes = r2;
	r2 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r2);
	r0->functionOutputNodes = r2;
	r3 = hl_alloc_closure_ptr(&t$fun_53240a6,arm_node_Player_spawn_add,r0);
	iron_Trait_notifyOnAdd(((iron__Trait)r0),r3);
	return;
}

void arm_node_Player_spawn_add(arm__node__Player_spawn r0) {
	armory__logicnode__MergedKeyboardNode r25;
	armory__logicnode__ObjectNode r23;
	bool *r20;
	armory__logicnode__BooleanNode r18;
	String r14;
	armory__logicnode__SetSceneNode r1;
	armory__logicnode__SendGlobalEventNode r24;
	armory__logicnode__NullNode r22;
	armory__logicnode__SceneNode r21;
	armory__logicnode__LogicNodeLink r16;
	hl__types__ArrayObj r3, r7;
	hl_type *r9;
	bool r19, r26;
	armory__logicnode__OnEventNode r15;
	armory__logicnode__RemoveActiveSceneNode r11;
	armory__logicnode__SetCursorStateNode r13;
	armory__logicnode__StringNode r17;
	armory__logicnode__RemoveGroupNode r12;
	varray *r8;
	int r4, r5, r6, r10;
	r1 = (armory__logicnode__SetSceneNode)hl_alloc_obj(&t$armory_logicnode_SetSceneNode);
	armory_logicnode_SetSceneNode_new(r1,((armory__logicnode__LogicTree)r0));
	r3 = r1->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_14:
	if( r4 >= r5 ) goto label$6a06780_2_31;
	r6 = r4;
	++r4;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_28;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_28:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_14;
	label$6a06780_2_31:
	r11 = (armory__logicnode__RemoveActiveSceneNode)hl_alloc_obj(&t$armory_logicnode_RemoveActiveSceneNode);
	armory_logicnode_RemoveActiveSceneNode_new(r11,((armory__logicnode__LogicTree)r0));
	r3 = r11->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r11->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r11->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_45:
	if( r4 >= r5 ) goto label$6a06780_2_62;
	r6 = r4;
	++r4;
	if( r11 == NULL ) hl_null_access();
	r3 = r11->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_59;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_59:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_45;
	label$6a06780_2_62:
	r12 = (armory__logicnode__RemoveGroupNode)hl_alloc_obj(&t$armory_logicnode_RemoveGroupNode);
	armory_logicnode_RemoveGroupNode_new(r12,((armory__logicnode__LogicTree)r0));
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
	label$6a06780_2_76:
	if( r4 >= r5 ) goto label$6a06780_2_93;
	r6 = r4;
	++r4;
	if( r12 == NULL ) hl_null_access();
	r3 = r12->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_90;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_90:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_76;
	label$6a06780_2_93:
	r13 = (armory__logicnode__SetCursorStateNode)hl_alloc_obj(&t$armory_logicnode_SetCursorStateNode);
	armory_logicnode_SetCursorStateNode_new(r13,((armory__logicnode__LogicTree)r0));
	r14 = (String)s$hide_locked;
	r13->property0 = r14;
	r3 = r13->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_109:
	if( r4 >= r5 ) goto label$6a06780_2_126;
	r6 = r4;
	++r4;
	if( r13 == NULL ) hl_null_access();
	r3 = r13->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_123;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_123:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_109;
	label$6a06780_2_126:
	r15 = (armory__logicnode__OnEventNode)hl_alloc_obj(&t$armory_logicnode_OnEventNode);
	armory_logicnode_OnEventNode_new(r15,((armory__logicnode__LogicTree)r0));
	r14 = (String)s$init;
	r15->property1 = r14;
	r3 = r15->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_142:
	if( r4 >= r5 ) goto label$6a06780_2_159;
	r6 = r4;
	++r4;
	if( r15 == NULL ) hl_null_access();
	r3 = r15->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_156;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_156:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_142;
	label$6a06780_2_159:
	r17 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r14 = (String)s$load_menu;
	armory_logicnode_StringNode_new(r17,((armory__logicnode__LogicTree)r0),r14);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r17),((armory__logicnode__LogicNode)r15),r4,r5);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r15),((armory__logicnode__LogicNode)r13),r4,r5);
	r18 = (armory__logicnode__BooleanNode)hl_alloc_obj(&t$armory_logicnode_BooleanNode);
	r19 = false;
	r20 = &r19;
	armory_logicnode_BooleanNode_new(r18,((armory__logicnode__LogicTree)r0),r20);
	r4 = 0;
	r5 = 1;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r18),((armory__logicnode__LogicNode)r13),r4,r5);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r13),((armory__logicnode__LogicNode)r12),r4,r5);
	r17 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r14 = (String)s$active;
	armory_logicnode_StringNode_new(r17,((armory__logicnode__LogicTree)r0),r14);
	r4 = 0;
	r5 = 1;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r17),((armory__logicnode__LogicNode)r12),r4,r5);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r12),((armory__logicnode__LogicNode)r11),r4,r5);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r11),((armory__logicnode__LogicNode)r1),r4,r5);
	r21 = (armory__logicnode__SceneNode)hl_alloc_obj(&t$armory_logicnode_SceneNode);
	armory_logicnode_SceneNode_new(r21,((armory__logicnode__LogicTree)r0));
	r14 = (String)s$menu;
	r21->property0 = r14;
	r3 = r21->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_206:
	if( r4 >= r5 ) goto label$6a06780_2_223;
	r6 = r4;
	++r4;
	if( r21 == NULL ) hl_null_access();
	r3 = r21->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_220;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_220:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_206;
	label$6a06780_2_223:
	r4 = 0;
	r5 = 1;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r21),((armory__logicnode__LogicNode)r1),r4,r5);
	r22 = (armory__logicnode__NullNode)hl_alloc_obj(&t$armory_logicnode_NullNode);
	armory_logicnode_NullNode_new(r22,((armory__logicnode__LogicTree)r0));
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r1),((armory__logicnode__LogicNode)r22),r4,r5);
	r23 = (armory__logicnode__ObjectNode)hl_alloc_obj(&t$armory_logicnode_ObjectNode);
	r14 = (String)s$;
	armory_logicnode_ObjectNode_new(r23,((armory__logicnode__LogicTree)r0),r14);
	r4 = 1;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r1),((armory__logicnode__LogicNode)r23),r4,r5);
	r24 = (armory__logicnode__SendGlobalEventNode)hl_alloc_obj(&t$armory_logicnode_SendGlobalEventNode);
	armory_logicnode_SendGlobalEventNode_new(r24,((armory__logicnode__LogicTree)r0));
	r3 = r24->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r24->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r24->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_251:
	if( r4 >= r5 ) goto label$6a06780_2_268;
	r6 = r4;
	++r4;
	if( r24 == NULL ) hl_null_access();
	r3 = r24->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_265;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_265:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_251;
	label$6a06780_2_268:
	r25 = (armory__logicnode__MergedKeyboardNode)hl_alloc_obj(&t$armory_logicnode_MergedKeyboardNode);
	armory_logicnode_MergedKeyboardNode_new(r25,((armory__logicnode__LogicTree)r0));
	r14 = (String)s$started;
	r25->property0 = r14;
	r14 = (String)s$r;
	r25->property1 = r14;
	r3 = r25->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 0;
	hl_types_ArrayObj_resize(r3,r4);
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	hl_types_ArrayObj_resize(r3,r4);
	r4 = 0;
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	label$6a06780_2_286:
	if( r4 >= r5 ) goto label$6a06780_2_303;
	r6 = r4;
	++r4;
	if( r25 == NULL ) hl_null_access();
	r3 = r25->outputs;
	if( r3 == NULL ) hl_null_access();
	r9 = &t$armory_logicnode_LogicNodeLink;
	r10 = 0;
	r8 = hl_alloc_array(r9,r10);
	r7 = hl_types_ArrayObj_alloc(r8);
	r10 = r3->length;
	if( ((unsigned)r6) < ((unsigned)r10) ) goto label$6a06780_2_300;
	hl_types_ArrayObj___expand(r3,r6);
	label$6a06780_2_300:
	r8 = r3->array;
	((hl__types__ArrayObj*)(r8 + 1))[r6] = r7;
	goto label$6a06780_2_286;
	label$6a06780_2_303:
	r18 = (armory__logicnode__BooleanNode)hl_alloc_obj(&t$armory_logicnode_BooleanNode);
	r26 = false;
	r20 = &r26;
	armory_logicnode_BooleanNode_new(r18,((armory__logicnode__LogicTree)r0),r20);
	r4 = 1;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r25),((armory__logicnode__LogicNode)r18),r4,r5);
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r25),((armory__logicnode__LogicNode)r24),r4,r5);
	r17 = (armory__logicnode__StringNode)hl_alloc_obj(&t$armory_logicnode_StringNode);
	r14 = (String)s$load_menu;
	armory_logicnode_StringNode_new(r17,((armory__logicnode__LogicTree)r0),r14);
	r4 = 0;
	r5 = 1;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r17),((armory__logicnode__LogicNode)r24),r4,r5);
	r22 = (armory__logicnode__NullNode)hl_alloc_obj(&t$armory_logicnode_NullNode);
	armory_logicnode_NullNode_new(r22,((armory__logicnode__LogicTree)r0));
	r4 = 0;
	r5 = 0;
	r16 = armory_logicnode_LogicNode_addLink(((armory__logicnode__LogicNode)r24),((armory__logicnode__LogicNode)r22),r4,r5);
	return;
}

