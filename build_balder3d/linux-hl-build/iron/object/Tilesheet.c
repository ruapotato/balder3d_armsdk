﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/object/Tilesheet.h>
#include <iron/data/TSceneFormat.h>
#include <hl/types/ArrayObj.h>
#include <iron/Scene.h>
int String___compare(String,vdynamic*);
extern iron__$Scene g$_iron_Scene;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void iron_object_Tilesheet_play(iron__object__Tilesheet,String,vclosure*);
void iron_object_Tilesheet_setFrame(iron__object__Tilesheet,int);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
#include <iron/system/Time.h>
extern iron__system__$Time g$_iron_system_Time;
extern hl_type t$ctx_18cedd0;
extern hl_type t$fun_493cad1;
void iron_data_Data_getSceneRaw(String,vclosure*);

void iron_object_Tilesheet_new__$1(venum* r0,iron__data__TSceneFormat r1) {
	String r11, r12;
	iron__data__TTilesheetData r8;
	hl__types__ArrayObj r4, r7;
	bool r17;
	iron__$Scene r15;
	iron__Scene r14;
	iron__object__Tilesheet r13;
	vclosure *r16;
	vdynamic *r9;
	varray *r10;
	int r2, r5, r6;
	r2 = 0;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->tilesheet_datas;
	label$cb9e570_1_3:
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( r2 >= r6 ) goto label$cb9e570_1_40;
	r6 = r4->length;
	if( ((unsigned)r2) < ((unsigned)r6) ) goto label$cb9e570_1_11;
	r8 = NULL;
	goto label$cb9e570_1_14;
	label$cb9e570_1_11:
	r10 = r4->array;
	r9 = ((vdynamic**)(r10 + 1))[r2];
	r8 = (iron__data__TTilesheetData)r9;
	label$cb9e570_1_14:
	++r2;
	if( r8 == NULL ) hl_null_access();
	r11 = r8->name;
	r12 = ((Enumt$ctx_18cedd0*)r0)->p0;
	if( r11 != r12 && (!r11 || !r12 || String___compare(r11,(vdynamic*)r12) != 0) ) goto label$cb9e570_1_39;
	r13 = ((Enumt$ctx_18cedd0*)r0)->p2;
	if( r13 == NULL ) hl_null_access();
	r13->raw = r8;
	r15 = (iron__$Scene)g$_iron_Scene;
	r14 = r15->active;
	if( r14 == NULL ) hl_null_access();
	r7 = r14->tilesheets;
	if( r7 == NULL ) hl_null_access();
	r13 = ((Enumt$ctx_18cedd0*)r0)->p2;
	r5 = hl_types_ArrayObj_push(r7,((vdynamic*)r13));
	r13 = ((Enumt$ctx_18cedd0*)r0)->p2;
	if( r13 == NULL ) hl_null_access();
	r11 = ((Enumt$ctx_18cedd0*)r0)->p1;
	r16 = NULL;
	iron_object_Tilesheet_play(r13,r11,r16);
	r13 = ((Enumt$ctx_18cedd0*)r0)->p2;
	if( r13 == NULL ) hl_null_access();
	r17 = true;
	r13->ready = r17;
	goto label$cb9e570_1_40;
	label$cb9e570_1_39:
	goto label$cb9e570_1_3;
	label$cb9e570_1_40:
	return;
}

void iron_object_Tilesheet_play(iron__object__Tilesheet r0,String r1,vclosure* r2) {
	String r11;
	iron__data__TTilesheetData r6;
	hl__types__ArrayObj r5;
	bool r12;
	iron__data__TTilesheetAction r8;
	vdynamic *r9;
	varray *r10;
	int r3, r7;
	r0->onActionComplete = r2;
	r3 = 0;
	r6 = r0->raw;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->actions;
	label$cb9e570_2_5:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r3 >= r7 ) goto label$cb9e570_2_23;
	r7 = r5->length;
	if( ((unsigned)r3) < ((unsigned)r7) ) goto label$cb9e570_2_13;
	r8 = NULL;
	goto label$cb9e570_2_16;
	label$cb9e570_2_13:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r3];
	r8 = (iron__data__TTilesheetAction)r9;
	label$cb9e570_2_16:
	++r3;
	if( r8 == NULL ) hl_null_access();
	r11 = r8->name;
	if( r11 != r1 && (!r11 || !r1 || String___compare(r11,(vdynamic*)r1) != 0) ) goto label$cb9e570_2_22;
	r0->action = r8;
	goto label$cb9e570_2_23;
	label$cb9e570_2_22:
	goto label$cb9e570_2_5;
	label$cb9e570_2_23:
	r8 = r0->action;
	if( r8 == NULL ) hl_null_access();
	r3 = r8->start;
	iron_object_Tilesheet_setFrame(r0,r3);
	r12 = false;
	r0->paused = r12;
	return;
}

void iron_object_Tilesheet_remove(iron__object__Tilesheet r0) {
	hl__types__ArrayObj r2;
	iron__$Scene r4;
	iron__Scene r3;
	bool r1;
	r4 = (iron__$Scene)g$_iron_Scene;
	r3 = r4->active;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->tilesheets;
	if( r2 == NULL ) hl_null_access();
	r1 = hl_types_ArrayObj_remove(r2,((vdynamic*)r0));
	return;
}

void iron_object_Tilesheet_update(iron__object__Tilesheet r0) {
	iron__data__TTilesheetData r9;
	bool r2;
	iron__data__TTilesheetAction r4;
	double r6, r7;
	iron__system__$Time r8;
	int r3, r5, r10;
	r2 = r0->ready;
	if( !r2 ) goto label$cb9e570_4_11;
	r2 = r0->paused;
	if( r2 ) goto label$cb9e570_4_11;
	r4 = r0->action;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->start;
	r4 = r0->action;
	if( r4 == NULL ) hl_null_access();
	r5 = r4->end;
	if( r3 < r5 ) goto label$cb9e570_4_12;
	label$cb9e570_4_11:
	return;
	label$cb9e570_4_12:
	r6 = r0->time;
	r8 = (iron__system__$Time)g$_iron_system_Time;
	r7 = r8->realDelta;
	r6 = r6 + r7;
	r0->time = r6;
	r6 = 1.;
	r9 = r0->raw;
	if( r9 == NULL ) hl_null_access();
	r3 = r9->framerate;
	r7 = (double)r3;
	r6 = r6 / r7;
	r3 = 0;
	label$cb9e570_4_24:
	r7 = r0->time;
	if( !(r7 >= r6) ) goto label$cb9e570_4_32;
	r7 = r0->time;
	r7 = r7 - r6;
	r0->time = r7;
	++r3;
	goto label$cb9e570_4_24;
	label$cb9e570_4_32:
	r10 = 0;
	if( r3 == r10 ) goto label$cb9e570_4_37;
	r5 = r0->frame;
	r5 = r5 + r3;
	iron_object_Tilesheet_setFrame(r0,r5);
	label$cb9e570_4_37:
	return;
}

void iron_object_Tilesheet_setFrame(iron__object__Tilesheet r0,int r1) {
	iron__data__TTilesheetData r4;
	bool r14;
	iron__data__TTilesheetAction r12;
	vclosure *r13;
	double r6, r7, r9, r10;
	int r2, r3, r8, r11;
	r0->frame = r1;
	r2 = r0->frame;
	r4 = r0->raw;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->tilesx;
	r2 = r3 == 0 ? 0 : r2 % r3;
	r3 = r0->frame;
	r6 = (double)r3;
	r4 = r0->raw;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->tilesx;
	r7 = (double)r3;
	r6 = r6 / r7;
	r3 = (int)r6;
	r7 = (double)r2;
	r9 = 1.;
	r4 = r0->raw;
	if( r4 == NULL ) hl_null_access();
	r8 = r4->tilesx;
	r10 = (double)r8;
	r9 = r9 / r10;
	r7 = r7 * r9;
	r0->tileX = r7;
	r7 = (double)r3;
	r9 = 1.;
	r4 = r0->raw;
	if( r4 == NULL ) hl_null_access();
	r8 = r4->tilesy;
	r10 = (double)r8;
	r9 = r9 / r10;
	r7 = r7 * r9;
	r0->tileY = r7;
	r8 = r0->frame;
	r12 = r0->action;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->end;
	if( r8 < r11 ) goto label$cb9e570_5_60;
	r12 = r0->action;
	if( r12 == NULL ) hl_null_access();
	r8 = r12->start;
	r12 = r0->action;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->end;
	if( r8 >= r11 ) goto label$cb9e570_5_60;
	r13 = r0->onActionComplete;
	if( !r13 ) goto label$cb9e570_5_49;
	r13 = r0->onActionComplete;
	if( r13 == NULL ) hl_null_access();
	r13->hasValue ? ((void (*)(vdynamic*))r13->fun)((vdynamic*)r13->value) : ((void (*)(void))r13->fun)();
	label$cb9e570_5_49:
	r12 = r0->action;
	if( r12 == NULL ) hl_null_access();
	r14 = r12->loop;
	if( !r14 ) goto label$cb9e570_5_58;
	r12 = r0->action;
	if( r12 == NULL ) hl_null_access();
	r8 = r12->start;
	iron_object_Tilesheet_setFrame(r0,r8);
	goto label$cb9e570_5_60;
	label$cb9e570_5_58:
	r14 = true;
	r0->paused = r14;
	label$cb9e570_5_60:
	return;
}

void iron_object_Tilesheet_new(iron__object__Tilesheet r0,String r1,String r2,String r3) {
	venum *r11;
	bool r7;
	iron__data__TTilesheetAction r8;
	double r5;
	vclosure *r4, *r10;
	int r6;
	r4 = NULL;
	r0->onActionComplete = r4;
	r5 = 0.;
	r0->time = r5;
	r6 = 0;
	r0->frame = r6;
	r7 = false;
	r0->paused = r7;
	r8 = NULL;
	r0->action = r8;
	r5 = 0.;
	r0->tileY = r5;
	r5 = 0.;
	r0->tileX = r5;
	r7 = false;
	r0->ready = r7;
	r11 = hl_alloc_enum(&t$ctx_18cedd0,0);
	((Enumt$ctx_18cedd0*)r11)->p0 = (String)r2;
	((Enumt$ctx_18cedd0*)r11)->p1 = (String)r3;
	((Enumt$ctx_18cedd0*)r11)->p2 = (iron__object__Tilesheet)r0;
	r10 = hl_alloc_closure_ptr(&t$fun_493cad1,iron_object_Tilesheet_new__$1,r11);
	iron_data_Data_getSceneRaw(r1,r10);
	return;
}

