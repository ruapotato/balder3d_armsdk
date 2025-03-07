﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/system/Pen.h>
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
#include <iron/system/Mouse.h>
iron__system__Mouse iron_system_Input_getMouse(void);
void iron_system_Mouse_downListener(iron__system__Mouse,int,int,int);
extern hl_type t$_bool;
extern hl_type t$_dyn;
void iron_system_Mouse_upListener(iron__system__Mouse,int,int,int);
#include <kha/input/Pen.h>
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void iron_system_VirtualInput_new(iron__system__VirtualInput);
kha__input__Pen kha_input_Pen_get(int*);
extern hl_type t$fun_792a745;
void kha_input_Pen_notify(kha__input__Pen,vclosure*,vclosure*,vclosure*);

void iron_system_Pen_endFrame(iron__system__Pen r0) {
	hl__types__ArrayObj r1;
	bool r3;
	double r8;
	vdynamic *r7;
	varray *r6;
	int r2, r4;
	r1 = r0->buttonsStarted;
	if( r1 == NULL ) hl_null_access();
	r2 = 0;
	r3 = false;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$719ef83_1_7;
	hl_types_ArrayObj___expand(r1,r2);
	label$719ef83_1_7:
	r6 = r1->array;
	r7 = hl_alloc_dynbool(r3);
	((vdynamic**)(r6 + 1))[r2] = r7;
	r1 = r0->buttonsReleased;
	if( r1 == NULL ) hl_null_access();
	r2 = 0;
	r3 = false;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$719ef83_1_17;
	hl_types_ArrayObj___expand(r1,r2);
	label$719ef83_1_17:
	r6 = r1->array;
	r7 = hl_alloc_dynbool(r3);
	((vdynamic**)(r6 + 1))[r2] = r7;
	r3 = false;
	r0->moved = r3;
	r8 = 0.;
	r0->movementX = r8;
	r8 = 0.;
	r0->movementY = r8;
	r3 = false;
	r0->inUse = r3;
	return;
}

void iron_system_Pen_reset(iron__system__Pen r0) {
	hl__types__ArrayObj r1;
	bool r3;
	vdynamic *r7;
	varray *r6;
	int r2, r4;
	r1 = r0->buttonsDown;
	if( r1 == NULL ) hl_null_access();
	r2 = 0;
	r3 = false;
	r4 = r1->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$719ef83_2_7;
	hl_types_ArrayObj___expand(r1,r2);
	label$719ef83_2_7:
	r6 = r1->array;
	r7 = hl_alloc_dynbool(r3);
	((vdynamic**)(r6 + 1))[r2] = r7;
	iron_system_Pen_endFrame(r0);
	return;
}

void iron_system_Pen_downListener(iron__system__Pen r0,int r1,int r2,double r3) {
	hl__types__ArrayObj r4;
	bool r6;
	iron__system__Mouse r12;
	double r11;
	vdynamic *r10;
	varray *r9;
	int r5, r7;
	r4 = r0->buttonsDown;
	if( r4 == NULL ) hl_null_access();
	r5 = 0;
	r6 = true;
	r7 = r4->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$719ef83_3_7;
	hl_types_ArrayObj___expand(r4,r5);
	label$719ef83_3_7:
	r9 = r4->array;
	r10 = hl_alloc_dynbool(r6);
	((vdynamic**)(r9 + 1))[r5] = r10;
	r4 = r0->buttonsStarted;
	if( r4 == NULL ) hl_null_access();
	r5 = 0;
	r6 = true;
	r7 = r4->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$719ef83_3_17;
	hl_types_ArrayObj___expand(r4,r5);
	label$719ef83_3_17:
	r9 = r4->array;
	r10 = hl_alloc_dynbool(r6);
	((vdynamic**)(r9 + 1))[r5] = r10;
	r11 = (double)r1;
	r0->x = r11;
	r11 = (double)r2;
	r0->y = r11;
	r0->pressure = r3;
	r12 = iron_system_Input_getMouse();
	if( r12 == NULL ) hl_null_access();
	r5 = 0;
	iron_system_Mouse_downListener(r12,r5,r1,r2);
	return;
}

void iron_system_Pen_upListener(iron__system__Pen r0,int r1,int r2,double r3) {
	hl__types__ArrayObj r5;
	bool r8;
	iron__system__Mouse r12;
	double r11;
	vdynamic *r9;
	varray *r10;
	int r6, r7;
	r5 = r0->buttonsStarted;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$719ef83_4_7;
	r8 = false;
	goto label$719ef83_4_10;
	label$719ef83_4_7:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r6];
	r8 = (bool)hl_dyn_casti(&r9,&t$_dyn,&t$_bool);
	label$719ef83_4_10:
	if( !r8 ) goto label$719ef83_4_24;
	r5 = r0->buttonsStarted;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r8 = false;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$719ef83_4_18;
	hl_types_ArrayObj___expand(r5,r6);
	label$719ef83_4_18:
	r10 = r5->array;
	r9 = hl_alloc_dynbool(r8);
	((vdynamic**)(r10 + 1))[r6] = r9;
	r8 = true;
	r0->inUse = r8;
	return;
	label$719ef83_4_24:
	r5 = r0->buttonsDown;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r8 = false;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$719ef83_4_31;
	hl_types_ArrayObj___expand(r5,r6);
	label$719ef83_4_31:
	r10 = r5->array;
	r9 = hl_alloc_dynbool(r8);
	((vdynamic**)(r10 + 1))[r6] = r9;
	r5 = r0->buttonsReleased;
	if( r5 == NULL ) hl_null_access();
	r6 = 0;
	r8 = true;
	r7 = r5->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$719ef83_4_41;
	hl_types_ArrayObj___expand(r5,r6);
	label$719ef83_4_41:
	r10 = r5->array;
	r9 = hl_alloc_dynbool(r8);
	((vdynamic**)(r10 + 1))[r6] = r9;
	r11 = (double)r1;
	r0->x = r11;
	r11 = (double)r2;
	r0->y = r11;
	r0->pressure = r3;
	r12 = iron_system_Input_getMouse();
	if( r12 == NULL ) hl_null_access();
	r6 = 0;
	iron_system_Mouse_upListener(r12,r6,r1,r2);
	r8 = true;
	r0->inUse = r8;
	return;
}

void iron_system_Pen_moveListener(iron__system__Pen r0,int r1,int r2,double r3) {
	bool r7;
	double r5, r6;
	r5 = r0->lastX;
	r6 = -1.;
	if( r5 != r6 ) goto label$719ef83_5_10;
	r5 = r0->lastY;
	r6 = -1.;
	if( r5 != r6 ) goto label$719ef83_5_10;
	r5 = (double)r1;
	r0->lastX = r5;
	r5 = (double)r2;
	r0->lastY = r5;
	label$719ef83_5_10:
	r5 = (double)r1;
	r6 = r0->lastX;
	r5 = r5 - r6;
	r0->movementX = r5;
	r5 = (double)r2;
	r6 = r0->lastY;
	r5 = r5 - r6;
	r0->movementY = r5;
	r5 = (double)r1;
	r0->lastX = r5;
	r5 = (double)r2;
	r0->lastY = r5;
	r5 = (double)r1;
	r0->x = r5;
	r5 = (double)r2;
	r0->y = r5;
	r7 = true;
	r0->moved = r7;
	r0->pressure = r3;
	r7 = true;
	r0->connected = r7;
	return;
}

void iron_system_Pen_new(iron__system__Pen r0) {
	hl__types__ArrayObj r3;
	hl_type *r5;
	bool r2;
	vclosure *r11, *r12, *r13;
	kha__input__Pen r9;
	double r1;
	int *r10;
	vdynamic *r7;
	int r6;
	varray *r4;
	r1 = -1.;
	r0->lastY = r1;
	r1 = -1.;
	r0->lastX = r1;
	r2 = false;
	r0->inUse = r2;
	r2 = false;
	r0->connected = r2;
	r1 = 0.;
	r0->pressure = r1;
	r1 = 0.;
	r0->movementY = r1;
	r1 = 0.;
	r0->movementX = r1;
	r2 = false;
	r0->moved = r2;
	r1 = 0.;
	r0->y = r1;
	r1 = 0.;
	r0->x = r1;
	r5 = &t$_dyn;
	r6 = 1;
	r4 = hl_alloc_array(r5,r6);
	r2 = false;
	r7 = hl_alloc_dynbool(r2);
	r6 = 0;
	((vdynamic**)(r4 + 1))[r6] = r7;
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->buttonsReleased = r3;
	r5 = &t$_dyn;
	r6 = 1;
	r4 = hl_alloc_array(r5,r6);
	r2 = false;
	r7 = hl_alloc_dynbool(r2);
	r6 = 0;
	((vdynamic**)(r4 + 1))[r6] = r7;
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->buttonsStarted = r3;
	r5 = &t$_dyn;
	r6 = 1;
	r4 = hl_alloc_array(r5,r6);
	r2 = false;
	r7 = hl_alloc_dynbool(r2);
	r6 = 0;
	((vdynamic**)(r4 + 1))[r6] = r7;
	r3 = hl_types_ArrayObj_alloc(r4);
	r0->buttonsDown = r3;
	iron_system_VirtualInput_new(((iron__system__VirtualInput)r0));
	r10 = NULL;
	r9 = kha_input_Pen_get(r10);
	if( !r9 ) goto label$719ef83_6_56;
	if( r9 == NULL ) hl_null_access();
	r11 = hl_alloc_closure_ptr(&t$fun_792a745,iron_system_Pen_downListener,r0);
	r12 = hl_alloc_closure_ptr(&t$fun_792a745,iron_system_Pen_upListener,r0);
	r13 = hl_alloc_closure_ptr(&t$fun_792a745,iron_system_Pen_moveListener,r0);
	kha_input_Pen_notify(r9,r11,r12,r13);
	label$719ef83_6_56:
	return;
}

