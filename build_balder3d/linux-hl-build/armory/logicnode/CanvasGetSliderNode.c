﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/CanvasGetSliderNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <iron/Scene.h>
#include <armory/trait/internal/CanvasScript.h>
#include <iron/Trait.h>
#include <iron/object/CameraObject.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <zui/Handle.h>
extern iron__$Scene g$_iron_Scene;
extern armory__trait__internal__$CanvasScript g$1e15706;
vdynamic* iron_Scene_getTrait(iron__Scene,hl__Class);
extern hl_type t$armory_trait_internal_CanvasScript;
extern hl_type t$_dyn;
#include <iron/object/Object.h>
iron__Trait iron_object_Object_getTrait(iron__object__Object,hl__Class);
bool armory_trait_internal_CanvasScript_get_ready(armory__trait__internal__CanvasScript);
extern hl_type t$String;
zui__Handle armory_trait_internal_CanvasScript_getHandle(armory__trait__internal__CanvasScript,String);
extern hl_type t$_f64;

void armory_logicnode_CanvasGetSliderNode_new(armory__logicnode__CanvasGetSliderNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

vdynamic* armory_logicnode_CanvasGetSliderNode_get(armory__logicnode__CanvasGetSliderNode r0,int r1) {
	String r18;
	armory__trait__internal__$CanvasScript r6;
	armory__logicnode__LogicNodeLink r13;
	hl__types__ArrayObj r10;
	bool r9;
	iron__$Scene r5;
	iron__Scene r4;
	iron__Trait r7;
	armory__logicnode__LogicNode r17;
	double r15;
	iron__object__CameraObject r8;
	zui__Handle r16;
	vdynamic *r3, *r19;
	varray *r14;
	int r11, r12;
	armory__trait__internal__CanvasScript r2;
	hl_trap_ctx trap$0;
	r2 = r0->canvas;
	if( r2 ) goto label$8100f9f_2_9;
	r5 = (iron__$Scene)g$_iron_Scene;
	r4 = r5->active;
	if( r4 == NULL ) hl_null_access();
	r6 = (armory__trait__internal__$CanvasScript)g$1e15706;
	r3 = iron_Scene_getTrait(r4,((hl__Class)r6));
	r2 = (armory__trait__internal__CanvasScript)hl_dyn_castp(&r3,&t$_dyn,&t$armory_trait_internal_CanvasScript);
	r0->canvas = r2;
	label$8100f9f_2_9:
	r2 = r0->canvas;
	if( r2 ) goto label$8100f9f_2_20;
	r5 = (iron__$Scene)g$_iron_Scene;
	r4 = r5->active;
	if( r4 == NULL ) hl_null_access();
	r8 = r4->camera;
	if( r8 == NULL ) hl_null_access();
	r6 = (armory__trait__internal__$CanvasScript)g$1e15706;
	r7 = iron_object_Object_getTrait(((iron__object__Object)r8),((hl__Class)r6));
	r2 = (armory__trait__internal__CanvasScript)r7;
	r0->canvas = r2;
	label$8100f9f_2_20:
	r2 = r0->canvas;
	if( !r2 ) goto label$8100f9f_2_26;
	r2 = r0->canvas;
	if( r2 == NULL ) hl_null_access();
	r9 = armory_trait_internal_CanvasScript_get_ready(r2);
	if( r9 ) goto label$8100f9f_2_28;
	label$8100f9f_2_26:
	r3 = NULL;
	return r3;
	label$8100f9f_2_28:
	hl_trap(trap$0,r3,label$8100f9f_2_54);
	r10 = r0->inputs;
	if( r10 == NULL ) hl_null_access();
	r11 = 0;
	r12 = r10->length;
	if( ((unsigned)r11) < ((unsigned)r12) ) goto label$8100f9f_2_36;
	r13 = NULL;
	goto label$8100f9f_2_39;
	label$8100f9f_2_36:
	r14 = r10->array;
	r3 = ((vdynamic**)(r14 + 1))[r11];
	r13 = (armory__logicnode__LogicNodeLink)r3;
	label$8100f9f_2_39:
	r2 = r0->canvas;
	if( r2 == NULL ) hl_null_access();
	if( r13 == NULL ) hl_null_access();
	r17 = r13->fromNode;
	if( r17 == NULL ) hl_null_access();
	r11 = r13->fromIndex;
	r3 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r17->$type->vobj_proto[1])(r17,r11);
	r18 = (String)hl_dyn_castp(&r3,&t$_dyn,&t$String);
	r16 = armory_trait_internal_CanvasScript_getHandle(r2,r18);
	if( r16 == NULL ) hl_null_access();
	r15 = r16->value;
	r3 = hl_alloc_dynamic(&t$_f64);
	r3->v.d = r15;
	hl_endtrap(trap$0);
	return r3;
	hl_endtrap(trap$0);
	label$8100f9f_2_54:
	r19 = NULL;
	r19 = NULL;
	return r19;
}

