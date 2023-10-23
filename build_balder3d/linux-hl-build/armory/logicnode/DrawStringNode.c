﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/DrawStringNode.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <kha/graphics2/Graphics.h>
#include <armory/renderpath/RenderToTexture.h>
String Std_string(vdynamic*);
extern hl_type t$String;
extern hl_type t$_dyn;
extern String s$;
int String___compare(String,vdynamic*);
extern String s$font_default_ttf;
extern hl_type t$fun_ea180e6;
void iron_data_Data_getFont(String,vclosure*);
void armory_logicnode_LogicNode_runOutput(armory__logicnode__LogicNode,int);
extern hl_type t$vrt_1e78dd5;
extern armory__renderpath__$RenderToTexture g$2a5f5aa;
int kha__Color_Color_Impl__fromFloats(float,float,float,float*);
extern hl_type t$_i32;
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);

void armory_logicnode_DrawStringNode_run__$1(armory__logicnode__DrawStringNode r0,kha__Kravur r1) {
	if( r0 == NULL ) hl_null_access();
	r0->font = r1;
	return;
}

void armory_logicnode_DrawStringNode_run(armory__logicnode__DrawStringNode r0,int r1) {
	String r9, r13, r14, r15;
	vvirtual *r19;
	armory__logicnode__LogicNodeLink r6, r11, r12, r18, r27, r28;
	hl__types__ArrayObj r3;
	kha__graphics2__Graphics r20;
	kha__Kravur r17;
	armory__logicnode__LogicNode r10;
	float r22, r23, r24, r25;
	double r30, r31;
	vclosure *r16;
	vdynamic *r7, *r29;
	float *r26;
	armory__renderpath__$RenderToTexture r21;
	varray *r8;
	int r4, r5;
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 1;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_7;
	r6 = NULL;
	goto label$f98c223_2_10;
	label$f98c223_2_7:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r6 = (armory__logicnode__LogicNodeLink)r7;
	label$f98c223_2_10:
	if( r6 == NULL ) hl_null_access();
	r10 = r6->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r6->fromIndex;
	r7 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r9 = Std_string(r7);
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 2;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_23;
	r11 = NULL;
	goto label$f98c223_2_26;
	label$f98c223_2_23:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r11 = (armory__logicnode__LogicNodeLink)r7;
	label$f98c223_2_26:
	if( r11 == NULL ) hl_null_access();
	r10 = r11->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r11->fromIndex;
	r7 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r13 = (String)hl_dyn_castp(&r7,&t$_dyn,&t$String);
	r15 = (String)s$;
	if( r13 != r15 && (!r13 || !r15 || String___compare(r13,(vdynamic*)r15) != 0) ) goto label$f98c223_2_36;
	r14 = (String)s$font_default_ttf;
	r13 = r14;
	label$f98c223_2_36:
	r15 = r0->lastFontName;
	if( r13 == r15 || (r13 && r15 && String___compare(r13,(vdynamic*)r15) == 0) ) goto label$f98c223_2_41;
	r0->lastFontName = r13;
	r16 = hl_alloc_closure_ptr(&t$fun_ea180e6,armory_logicnode_DrawStringNode_run__$1,r0);
	iron_data_Data_getFont(r13,r16);
	label$f98c223_2_41:
	r17 = r0->font;
	if( r17 ) goto label$f98c223_2_46;
	r4 = 0;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r4);
	return;
	label$f98c223_2_46:
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 4;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_53;
	r12 = NULL;
	goto label$f98c223_2_56;
	label$f98c223_2_53:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r12 = (armory__logicnode__LogicNodeLink)r7;
	label$f98c223_2_56:
	if( r12 == NULL ) hl_null_access();
	r10 = r12->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r12->fromIndex;
	r7 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r19 = hl_to_virtual(&t$vrt_1e78dd5,(vdynamic*)r7);
	r21 = (armory__renderpath__$RenderToTexture)g$2a5f5aa;
	r20 = r21->g;
	if( r20 == NULL ) hl_null_access();
	if( r19 == NULL ) hl_null_access();
	r22 = hl_vfields(r19)[1] ? (*(float*)(hl_vfields(r19)[1])) : (float)hl_dyn_getf(r19->value,120/*x*/);
	r23 = hl_vfields(r19)[2] ? (*(float*)(hl_vfields(r19)[2])) : (float)hl_dyn_getf(r19->value,121/*y*/);
	r24 = hl_vfields(r19)[3] ? (*(float*)(hl_vfields(r19)[3])) : (float)hl_dyn_getf(r19->value,122/*z*/);
	r25 = hl_vfields(r19)[0] ? (*(float*)(hl_vfields(r19)[0])) : (float)hl_dyn_getf(r19->value,119/*w*/);
	r26 = &r25;
	r4 = kha__Color_Color_Impl__fromFloats(r22,r23,r24,r26);
	r4 = ((int (*)(kha__graphics2__Graphics,int))r20->$type->vobj_proto[11])(r20,r4);
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 3;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_80;
	r18 = NULL;
	goto label$f98c223_2_83;
	label$f98c223_2_80:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r18 = (armory__logicnode__LogicNodeLink)r7;
	label$f98c223_2_83:
	r21 = (armory__renderpath__$RenderToTexture)g$2a5f5aa;
	r20 = r21->g;
	if( r20 == NULL ) hl_null_access();
	if( r18 == NULL ) hl_null_access();
	r10 = r18->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r18->fromIndex;
	r7 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r4 = (int)hl_dyn_casti(&r7,&t$_dyn,&t$_i32);
	r4 = ((int (*)(kha__graphics2__Graphics,int))r20->$type->vobj_proto[13])(r20,r4);
	r21 = (armory__renderpath__$RenderToTexture)g$2a5f5aa;
	r20 = r21->g;
	if( r20 == NULL ) hl_null_access();
	r17 = r0->font;
	r17 = ((kha__Kravur (*)(kha__graphics2__Graphics,kha__Kravur))r20->$type->vobj_proto[12])(r20,r17);
	r21 = (armory__renderpath__$RenderToTexture)g$2a5f5aa;
	r20 = r21->g;
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 5;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_107;
	r27 = NULL;
	goto label$f98c223_2_110;
	label$f98c223_2_107:
	r8 = r3->array;
	r7 = ((vdynamic**)(r8 + 1))[r4];
	r27 = (armory__logicnode__LogicNodeLink)r7;
	label$f98c223_2_110:
	if( r27 == NULL ) hl_null_access();
	r10 = r27->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r27->fromIndex;
	r7 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r3 = r0->inputs;
	if( r3 == NULL ) hl_null_access();
	r4 = 6;
	r5 = r3->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$f98c223_2_122;
	r28 = NULL;
	goto label$f98c223_2_125;
	label$f98c223_2_122:
	r8 = r3->array;
	r29 = ((vdynamic**)(r8 + 1))[r4];
	r28 = (armory__logicnode__LogicNodeLink)r29;
	label$f98c223_2_125:
	if( r20 == NULL ) hl_null_access();
	r30 = (double)hl_dyn_castd(&r7,&t$_dyn);
	if( r28 == NULL ) hl_null_access();
	r10 = r28->fromNode;
	if( r10 == NULL ) hl_null_access();
	r4 = r28->fromIndex;
	r29 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r10->$type->vobj_proto[1])(r10,r4);
	r31 = (double)hl_dyn_castd(&r29,&t$_dyn);
	((void (*)(kha__graphics2__Graphics,String,double,double))r20->$type->vobj_proto[6])(r20,r9,r30,r31);
	r4 = 0;
	armory_logicnode_LogicNode_runOutput(((armory__logicnode__LogicNode)r0),r4);
	return;
}

void armory_logicnode_DrawStringNode_new(armory__logicnode__DrawStringNode r0,armory__logicnode__LogicTree r1) {
	String r2;
	r2 = (String)s$;
	r0->lastFontName = r2;
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

