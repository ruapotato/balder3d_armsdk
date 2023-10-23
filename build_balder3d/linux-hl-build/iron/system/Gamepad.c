﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/system/Gamepad.h>
#include <kha/input/Gamepad.h>
kha__input__Gamepad kha_input_Gamepad_get(int*);
void iron_system_Gamepad_axisListener(iron__system__Gamepad,int,double);
extern hl_type t$fun_3da2633;
void iron_system_Gamepad_buttonListener(iron__system__Gamepad,int,double);
void kha_input_Gamepad_notify(kha__input__Gamepad,vclosure*,vclosure*);
#include <hl/types/ArrayBase.h>
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
hl__types__ArrayBase hl_types_ArrayBytes_Int_splice(hl__types__ArrayBytes_Int,int,int);
extern hl_type t$hl_types_ArrayBytes_Int;
extern hl_type t$hl_types_ArrayBase;
void hl_types_ArrayBytes_Float___expand(hl__types__ArrayBytes_Float,int);
extern iron__system__$Gamepad g$_iron_system_Gamepad;
int String___compare(String,vdynamic*);
int hl_types_ArrayBytes_Int_push(hl__types__ArrayBytes_Int,int);
void iron_system_VirtualInput_upVirtual(iron__system__VirtualInput,String);
void iron_system_VirtualInput_downVirtual(iron__system__VirtualInput,String);
extern hl_type t$iron_system_GamepadStick;
void iron_system_GamepadStick_new(iron__system__GamepadStick);
#include <hl/natives.h>
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
extern hl_type t$_dyn;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
hl__types__ArrayBytes_Float hl_types_ArrayBase_allocF64(vbyte*,int);
void iron_system_VirtualInput_new(iron__system__VirtualInput);
int hl_types_ArrayBytes_Float_push(hl__types__ArrayBytes_Float,double);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);

void iron_system_Gamepad_connect(iron__system__Gamepad r0) {
	bool r5;
	kha__input__Gamepad r1;
	vclosure *r6, *r7;
	int *r3;
	int r2;
	r2 = r0->num;
	r3 = &r2;
	r1 = kha_input_Gamepad_get(r3);
	if( r1 ) goto label$cdaaaee_1_5;
	return;
	label$cdaaaee_1_5:
	r5 = true;
	r0->connected = r5;
	if( r1 == NULL ) hl_null_access();
	r6 = hl_alloc_closure_ptr(&t$fun_3da2633,iron_system_Gamepad_axisListener,r0);
	r7 = hl_alloc_closure_ptr(&t$fun_3da2633,iron_system_Gamepad_buttonListener,r0);
	kha_input_Gamepad_notify(r1,r6,r7);
	return;
}

void iron_system_Gamepad_endFrame(iron__system__Gamepad r0) {
	hl__types__ArrayObj r8;
	bool r9;
	hl__types__ArrayBase r13;
	hl__types__ArrayBytes_Int r3, r6;
	iron__system__GamepadStick r14;
	double r15;
	vdynamic *r12;
	varray *r11;
	vbyte *r7;
	int r2, r4, r5, r10;
	r3 = r0->buttonsFrame;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->length;
	r4 = 0;
	if( r4 >= r2 ) goto label$cdaaaee_2_47;
	r2 = 0;
	r3 = r0->buttonsFrame;
	label$cdaaaee_2_7:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r2 >= r5 ) goto label$cdaaaee_2_39;
	r5 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r5) ) goto label$cdaaaee_2_15;
	r4 = 0;
	goto label$cdaaaee_2_19;
	label$cdaaaee_2_15:
	r7 = r3->bytes;
	r5 = 2;
	r5 = r2 << r5;
	r4 = *(int*)(r7 + r5);
	label$cdaaaee_2_19:
	++r2;
	r8 = r0->buttonsStarted;
	if( r8 == NULL ) hl_null_access();
	r9 = false;
	r10 = r8->length;
	if( ((unsigned)r4) < ((unsigned)r10) ) goto label$cdaaaee_2_26;
	hl_types_ArrayObj___expand(r8,r4);
	label$cdaaaee_2_26:
	r11 = r8->array;
	r12 = hl_alloc_dynbool(r9);
	((vdynamic**)(r11 + 1))[r4] = r12;
	r8 = r0->buttonsReleased;
	if( r8 == NULL ) hl_null_access();
	r9 = false;
	r10 = r8->length;
	if( ((unsigned)r4) < ((unsigned)r10) ) goto label$cdaaaee_2_35;
	hl_types_ArrayObj___expand(r8,r4);
	label$cdaaaee_2_35:
	r11 = r8->array;
	r12 = hl_alloc_dynbool(r9);
	((vdynamic**)(r11 + 1))[r4] = r12;
	goto label$cdaaaee_2_7;
	label$cdaaaee_2_39:
	r3 = r0->buttonsFrame;
	if( r3 == NULL ) hl_null_access();
	r2 = 0;
	r6 = r0->buttonsFrame;
	if( r6 == NULL ) hl_null_access();
	r4 = r6->length;
	r13 = hl_types_ArrayBytes_Int_splice(r3,r2,r4);
	r3 = (hl__types__ArrayBytes_Int)hl_dyn_castp(&r13,&t$hl_types_ArrayBase,&t$hl_types_ArrayBytes_Int);
	label$cdaaaee_2_47:
	r14 = r0->leftStick;
	if( r14 == NULL ) hl_null_access();
	r9 = false;
	r14->moved = r9;
	r14 = r0->leftStick;
	if( r14 == NULL ) hl_null_access();
	r15 = 0.;
	r14->movementX = r15;
	r14 = r0->leftStick;
	if( r14 == NULL ) hl_null_access();
	r15 = 0.;
	r14->movementY = r15;
	r14 = r0->rightStick;
	if( r14 == NULL ) hl_null_access();
	r9 = false;
	r14->moved = r9;
	r14 = r0->rightStick;
	if( r14 == NULL ) hl_null_access();
	r15 = 0.;
	r14->movementX = r15;
	r14 = r0->rightStick;
	if( r14 == NULL ) hl_null_access();
	r15 = 0.;
	r14->movementY = r15;
	return;
}

void iron_system_Gamepad_reset(iron__system__Gamepad r0) {
	hl__types__ArrayObj r9;
	bool r10;
	hl__types__ArrayBytes_Float r4;
	double r6;
	vdynamic *r12;
	varray *r11;
	vbyte *r8;
	int r1, r3, r5, r7;
	r1 = 0;
	r4 = r0->buttonsDown;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	label$cdaaaee_3_4:
	if( r1 >= r3 ) goto label$cdaaaee_3_37;
	r5 = r1;
	++r1;
	r4 = r0->buttonsDown;
	if( r4 == NULL ) hl_null_access();
	r6 = 0.;
	r7 = r4->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$cdaaaee_3_14;
	hl_types_ArrayBytes_Float___expand(r4,r5);
	label$cdaaaee_3_14:
	r8 = r4->bytes;
	r7 = 3;
	r7 = r5 << r7;
	*(double*)(r8 + r7) = r6;
	r9 = r0->buttonsStarted;
	if( r9 == NULL ) hl_null_access();
	r10 = false;
	r7 = r9->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$cdaaaee_3_24;
	hl_types_ArrayObj___expand(r9,r5);
	label$cdaaaee_3_24:
	r11 = r9->array;
	r12 = hl_alloc_dynbool(r10);
	((vdynamic**)(r11 + 1))[r5] = r12;
	r9 = r0->buttonsReleased;
	if( r9 == NULL ) hl_null_access();
	r10 = false;
	r7 = r9->length;
	if( ((unsigned)r5) < ((unsigned)r7) ) goto label$cdaaaee_3_33;
	hl_types_ArrayObj___expand(r9,r5);
	label$cdaaaee_3_33:
	r11 = r9->array;
	r12 = hl_alloc_dynbool(r10);
	((vdynamic**)(r11 + 1))[r5] = r12;
	goto label$cdaaaee_3_4;
	label$cdaaaee_3_37:
	iron_system_Gamepad_endFrame(r0);
	return;
}

int iron_system_Gamepad_buttonIndex(iron__system__Gamepad r0,String r1) {
	String r8;
	hl__types__ArrayObj r4;
	iron__system__$Gamepad r5;
	vdynamic *r9;
	varray *r10;
	int r2, r3, r6, r7;
	r2 = 0;
	r5 = (iron__system__$Gamepad)g$_iron_system_Gamepad;
	r4 = r5->buttons;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	label$cdaaaee_4_5:
	if( r2 >= r3 ) goto label$cdaaaee_4_22;
	r6 = r2;
	++r2;
	r5 = (iron__system__$Gamepad)g$_iron_system_Gamepad;
	r4 = r5->buttons;
	if( r4 == NULL ) hl_null_access();
	r7 = r4->length;
	if( ((unsigned)r6) < ((unsigned)r7) ) goto label$cdaaaee_4_16;
	r8 = NULL;
	goto label$cdaaaee_4_19;
	label$cdaaaee_4_16:
	r10 = r4->array;
	r9 = ((vdynamic**)(r10 + 1))[r6];
	r8 = (String)r9;
	label$cdaaaee_4_19:
	if( r8 != r1 && (!r8 || !r1 || String___compare(r8,(vdynamic*)r1) != 0) ) goto label$cdaaaee_4_21;
	return r6;
	label$cdaaaee_4_21:
	goto label$cdaaaee_4_5;
	label$cdaaaee_4_22:
	r2 = 0;
	return r2;
}

double iron_system_Gamepad_down(iron__system__Gamepad r0,String r1) {
	hl__types__ArrayBytes_Float r2;
	double r5;
	vbyte *r6;
	int r3, r4;
	r2 = r0->buttonsDown;
	if( r2 == NULL ) hl_null_access();
	r3 = iron_system_Gamepad_buttonIndex(r0,r1);
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$cdaaaee_5_7;
	r5 = 0.;
	goto label$cdaaaee_5_11;
	label$cdaaaee_5_7:
	r6 = r2->bytes;
	r4 = 3;
	r4 = r3 << r4;
	r5 = *(double*)(r6 + r4);
	label$cdaaaee_5_11:
	return r5;
}

void iron_system_Gamepad_axisListener(iron__system__Gamepad r0,int r1,double r2) {
	bool r8;
	iron__system__GamepadStick r3;
	double r6, r7;
	int r4;
	r4 = 1;
	if( r4 < r1 ) goto label$cdaaaee_6_4;
	r3 = r0->leftStick;
	goto label$cdaaaee_6_5;
	label$cdaaaee_6_4:
	r3 = r0->rightStick;
	label$cdaaaee_6_5:
	r4 = 0;
	if( r1 == r4 ) goto label$cdaaaee_6_9;
	r4 = 2;
	if( r1 != r4 ) goto label$cdaaaee_6_18;
	label$cdaaaee_6_9:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->x;
	r3->lastX = r6;
	r3->x = r2;
	r6 = r3->x;
	r7 = r3->lastX;
	r6 = r6 - r7;
	r3->movementX = r6;
	goto label$cdaaaee_6_30;
	label$cdaaaee_6_18:
	r4 = 1;
	if( r1 == r4 ) goto label$cdaaaee_6_22;
	r4 = 3;
	if( r1 != r4 ) goto label$cdaaaee_6_30;
	label$cdaaaee_6_22:
	if( r3 == NULL ) hl_null_access();
	r6 = r3->y;
	r3->lastY = r6;
	r3->y = r2;
	r6 = r3->y;
	r7 = r3->lastY;
	r6 = r6 - r7;
	r3->movementY = r6;
	label$cdaaaee_6_30:
	if( r3 == NULL ) hl_null_access();
	r8 = true;
	r3->moved = r8;
	return;
}

void iron_system_Gamepad_buttonListener(iron__system__Gamepad r0,int r1,double r2) {
	String r15;
	hl__types__ArrayObj r10;
	bool r11;
	hl__types__ArrayBytes_Int r4;
	iron__system__$Gamepad r14;
	hl__types__ArrayBytes_Float r5;
	double r9;
	vdynamic *r13;
	varray *r12;
	vbyte *r8;
	int r3, r6;
	r4 = r0->buttonsFrame;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayBytes_Int_push(r4,r1);
	r5 = r0->buttonsDown;
	if( r5 == NULL ) hl_null_access();
	r6 = r5->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$cdaaaee_7_8;
	hl_types_ArrayBytes_Float___expand(r5,r1);
	label$cdaaaee_7_8:
	r8 = r5->bytes;
	r6 = 3;
	r6 = r1 << r6;
	*(double*)(r8 + r6) = r2;
	r9 = 0.;
	if( !(r9 < r2) ) goto label$cdaaaee_7_24;
	r10 = r0->buttonsStarted;
	if( r10 == NULL ) hl_null_access();
	r11 = true;
	r6 = r10->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$cdaaaee_7_20;
	hl_types_ArrayObj___expand(r10,r1);
	label$cdaaaee_7_20:
	r12 = r10->array;
	r13 = hl_alloc_dynbool(r11);
	((vdynamic**)(r12 + 1))[r1] = r13;
	goto label$cdaaaee_7_33;
	label$cdaaaee_7_24:
	r10 = r0->buttonsReleased;
	if( r10 == NULL ) hl_null_access();
	r11 = true;
	r6 = r10->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$cdaaaee_7_30;
	hl_types_ArrayObj___expand(r10,r1);
	label$cdaaaee_7_30:
	r12 = r10->array;
	r13 = hl_alloc_dynbool(r11);
	((vdynamic**)(r12 + 1))[r1] = r13;
	label$cdaaaee_7_33:
	r9 = 0.;
	if( r2 != r9 ) goto label$cdaaaee_7_47;
	r14 = (iron__system__$Gamepad)g$_iron_system_Gamepad;
	r10 = r14->buttons;
	if( r10 == NULL ) hl_null_access();
	r6 = r10->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$cdaaaee_7_42;
	r15 = NULL;
	goto label$cdaaaee_7_45;
	label$cdaaaee_7_42:
	r12 = r10->array;
	r13 = ((vdynamic**)(r12 + 1))[r1];
	r15 = (String)r13;
	label$cdaaaee_7_45:
	iron_system_VirtualInput_upVirtual(((iron__system__VirtualInput)r0),r15);
	goto label$cdaaaee_7_60;
	label$cdaaaee_7_47:
	r9 = 1.;
	if( r2 != r9 ) goto label$cdaaaee_7_60;
	r14 = (iron__system__$Gamepad)g$_iron_system_Gamepad;
	r10 = r14->buttons;
	if( r10 == NULL ) hl_null_access();
	r6 = r10->length;
	if( ((unsigned)r1) < ((unsigned)r6) ) goto label$cdaaaee_7_56;
	r15 = NULL;
	goto label$cdaaaee_7_59;
	label$cdaaaee_7_56:
	r12 = r10->array;
	r13 = ((vdynamic**)(r12 + 1))[r1];
	r15 = (String)r13;
	label$cdaaaee_7_59:
	iron_system_VirtualInput_downVirtual(((iron__system__VirtualInput)r0),r15);
	label$cdaaaee_7_60:
	return;
}

void iron_system_Gamepad_new(iron__system__Gamepad r0,int r1,bool* r2) {
	String r18;
	hl__types__ArrayObj r10, r17;
	hl_type *r12;
	bool r3, r5;
	hl__types__ArrayBytes_Int r8;
	iron__system__GamepadStick r6;
	iron__system__$Gamepad r14;
	hl__types__ArrayBytes_Float r13;
	double r20;
	vdynamic *r19;
	varray *r11;
	vbyte *r9;
	int r4, r15, r16;
	if( r2 ) goto label$cdaaaee_8_3;
	r3 = false;
	goto label$cdaaaee_8_4;
	label$cdaaaee_8_3:
	r3 = *r2;
	label$cdaaaee_8_4:
	r4 = 0;
	r0->num = r4;
	r5 = false;
	r0->connected = r5;
	r6 = (iron__system__GamepadStick)hl_alloc_obj(&t$iron_system_GamepadStick);
	iron_system_GamepadStick_new(r6);
	r0->rightStick = r6;
	r6 = (iron__system__GamepadStick)hl_alloc_obj(&t$iron_system_GamepadStick);
	iron_system_GamepadStick_new(r6);
	r0->leftStick = r6;
	r4 = 0;
	r9 = hl_alloc_bytes(r4);
	r4 = 0;
	r4 = 0;
	r8 = hl_types_ArrayBase_allocI32(r9,r4);
	r0->buttonsFrame = r8;
	r12 = &t$_dyn;
	r4 = 0;
	r11 = hl_alloc_array(r12,r4);
	r10 = hl_types_ArrayObj_alloc(r11);
	r0->buttonsReleased = r10;
	r12 = &t$_dyn;
	r4 = 0;
	r11 = hl_alloc_array(r12,r4);
	r10 = hl_types_ArrayObj_alloc(r11);
	r0->buttonsStarted = r10;
	r4 = 0;
	r9 = hl_alloc_bytes(r4);
	r4 = 0;
	r4 = 0;
	r13 = hl_types_ArrayBase_allocF64(r9,r4);
	r0->buttonsDown = r13;
	iron_system_VirtualInput_new(((iron__system__VirtualInput)r0));
	r4 = 0;
	r14 = (iron__system__$Gamepad)g$_iron_system_Gamepad;
	r10 = r14->buttons;
	label$cdaaaee_8_40:
	if( r10 == NULL ) hl_null_access();
	r16 = r10->length;
	if( r4 >= r16 ) goto label$cdaaaee_8_67;
	r16 = r10->length;
	if( ((unsigned)r4) < ((unsigned)r16) ) goto label$cdaaaee_8_48;
	r18 = NULL;
	goto label$cdaaaee_8_51;
	label$cdaaaee_8_48:
	r11 = r10->array;
	r19 = ((vdynamic**)(r11 + 1))[r4];
	r18 = (String)r19;
	label$cdaaaee_8_51:
	++r4;
	r13 = r0->buttonsDown;
	if( r13 == NULL ) hl_null_access();
	r20 = 0.;
	r15 = hl_types_ArrayBytes_Float_push(r13,r20);
	r17 = r0->buttonsStarted;
	if( r17 == NULL ) hl_null_access();
	r5 = false;
	r19 = hl_alloc_dynbool(r5);
	r15 = hl_types_ArrayObj_push(r17,r19);
	r17 = r0->buttonsReleased;
	if( r17 == NULL ) hl_null_access();
	r5 = false;
	r19 = hl_alloc_dynbool(r5);
	r15 = hl_types_ArrayObj_push(r17,r19);
	goto label$cdaaaee_8_40;
	label$cdaaaee_8_67:
	r0->num = r1;
	iron_system_Gamepad_reset(r0);
	if( !r3 ) goto label$cdaaaee_8_73;
	r5 = true;
	r0->connected = r5;
	goto label$cdaaaee_8_74;
	label$cdaaaee_8_73:
	iron_system_Gamepad_connect(r0);
	label$cdaaaee_8_74:
	return;
}

