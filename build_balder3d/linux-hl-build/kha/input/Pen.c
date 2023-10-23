﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/input/Pen.h>
kha__input__Pen kha_SystemImpl_getPen(int);
void kha_input_Pen_notifyWindowed(kha__input__Pen,int,vclosure*,vclosure*,vclosure*);
extern hl_type t$hl_types_ArrayObj;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$fun_589d191;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$_dyn;
extern kha__input__$Pen g$_kha_input_Pen;

kha__input__Pen kha_input_Pen_get(int* r0) {
	kha__input__Pen r2;
	int r1;
	if( r0 ) goto label$5e97cd2_1_3;
	r1 = 0;
	goto label$5e97cd2_1_4;
	label$5e97cd2_1_3:
	r1 = *r0;
	label$5e97cd2_1_4:
	r2 = kha_SystemImpl_getPen(r1);
	return r2;
}

void kha_input_Pen_notify(kha__input__Pen r0,vclosure* r1,vclosure* r2,vclosure* r3) {
	int r5;
	r5 = 0;
	kha_input_Pen_notifyWindowed(r0,r5,r1,r2,r3);
	return;
}

void kha_input_Pen_notifyWindowed(kha__input__Pen r0,int r1,vclosure* r2,vclosure* r3,vclosure* r4) {
	hl__types__ArrayObj r6, r11;
	hl_type *r8;
	vdynamic *r12;
	int r9, r10;
	varray *r7;
	if( !r2 ) goto label$5e97cd2_3_32;
	r6 = r0->windowDownListeners;
	if( r6 ) goto label$5e97cd2_3_8;
	r8 = &t$hl_types_ArrayObj;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r0->windowDownListeners = r6;
	label$5e97cd2_3_8:
	r6 = r0->windowDownListeners;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->length;
	if( r1 < r9 ) goto label$5e97cd2_3_21;
	r6 = r0->windowDownListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = &t$fun_589d191;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r11 = hl_types_ArrayObj_alloc(r7);
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r11));
	goto label$5e97cd2_3_8;
	label$5e97cd2_3_21:
	r6 = r0->windowDownListeners;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r10) ) goto label$5e97cd2_3_27;
	r6 = NULL;
	goto label$5e97cd2_3_30;
	label$5e97cd2_3_27:
	r7 = r6->array;
	r12 = ((vdynamic**)(r7 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r12,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_3_30:
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r2));
	label$5e97cd2_3_32:
	if( !r3 ) goto label$5e97cd2_3_64;
	r6 = r0->windowUpListeners;
	if( r6 ) goto label$5e97cd2_3_40;
	r8 = &t$hl_types_ArrayObj;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r0->windowUpListeners = r6;
	label$5e97cd2_3_40:
	r6 = r0->windowUpListeners;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->length;
	if( r1 < r9 ) goto label$5e97cd2_3_53;
	r6 = r0->windowUpListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = &t$fun_589d191;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r11 = hl_types_ArrayObj_alloc(r7);
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r11));
	goto label$5e97cd2_3_40;
	label$5e97cd2_3_53:
	r6 = r0->windowUpListeners;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r10) ) goto label$5e97cd2_3_59;
	r6 = NULL;
	goto label$5e97cd2_3_62;
	label$5e97cd2_3_59:
	r7 = r6->array;
	r12 = ((vdynamic**)(r7 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r12,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_3_62:
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	label$5e97cd2_3_64:
	if( !r4 ) goto label$5e97cd2_3_96;
	r6 = r0->windowMoveListeners;
	if( r6 ) goto label$5e97cd2_3_72;
	r8 = &t$hl_types_ArrayObj;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r6 = hl_types_ArrayObj_alloc(r7);
	r0->windowMoveListeners = r6;
	label$5e97cd2_3_72:
	r6 = r0->windowMoveListeners;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->length;
	if( r1 < r9 ) goto label$5e97cd2_3_85;
	r6 = r0->windowMoveListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = &t$fun_589d191;
	r9 = 0;
	r7 = hl_alloc_array(r8,r9);
	r11 = hl_types_ArrayObj_alloc(r7);
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r11));
	goto label$5e97cd2_3_72;
	label$5e97cd2_3_85:
	r6 = r0->windowMoveListeners;
	if( r6 == NULL ) hl_null_access();
	r10 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r10) ) goto label$5e97cd2_3_91;
	r6 = NULL;
	goto label$5e97cd2_3_94;
	label$5e97cd2_3_91:
	r7 = r6->array;
	r12 = ((vdynamic**)(r7 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r12,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_3_94:
	if( r6 == NULL ) hl_null_access();
	r9 = hl_types_ArrayObj_push(r6,((vdynamic*)r4));
	label$5e97cd2_3_96:
	return;
}

void kha_input_Pen_new(kha__input__Pen r0) {
	kha__input__$Pen r1;
	r1 = (kha__input__$Pen)g$_kha_input_Pen;
	r1->instance = r0;
	return;
}

void kha_input_Pen_sendDownEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowDownListeners;
	if( !r6 ) goto label$5e97cd2_5_27;
	r7 = 0;
	r6 = r0->windowDownListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_5_9;
	r6 = NULL;
	goto label$5e97cd2_5_12;
	label$5e97cd2_5_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_5_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_5_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_5_20;
	r11 = NULL;
	goto label$5e97cd2_5_23;
	label$5e97cd2_5_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_5_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_5_12;
	label$5e97cd2_5_27:
	return;
}

void kha_input_Pen_sendUpEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowUpListeners;
	if( !r6 ) goto label$5e97cd2_6_27;
	r7 = 0;
	r6 = r0->windowUpListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_6_9;
	r6 = NULL;
	goto label$5e97cd2_6_12;
	label$5e97cd2_6_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_6_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_6_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_6_20;
	r11 = NULL;
	goto label$5e97cd2_6_23;
	label$5e97cd2_6_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_6_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_6_12;
	label$5e97cd2_6_27:
	return;
}

void kha_input_Pen_sendMoveEvent(kha__input__Pen r0,int r1,int r2,int r3,double r4) {
	hl__types__ArrayObj r6;
	vclosure *r11;
	vdynamic *r9;
	varray *r10;
	int r7, r8;
	r6 = r0->windowMoveListeners;
	if( !r6 ) goto label$5e97cd2_7_27;
	r7 = 0;
	r6 = r0->windowMoveListeners;
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( ((unsigned)r1) < ((unsigned)r8) ) goto label$5e97cd2_7_9;
	r6 = NULL;
	goto label$5e97cd2_7_12;
	label$5e97cd2_7_9:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r1];
	r6 = (hl__types__ArrayObj)hl_dyn_castp(&r9,&t$_dyn,&t$hl_types_ArrayObj);
	label$5e97cd2_7_12:
	if( r6 == NULL ) hl_null_access();
	r8 = r6->length;
	if( r7 >= r8 ) goto label$5e97cd2_7_27;
	r8 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$5e97cd2_7_20;
	r11 = NULL;
	goto label$5e97cd2_7_23;
	label$5e97cd2_7_20:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r7];
	r11 = (vclosure*)r9;
	label$5e97cd2_7_23:
	++r7;
	if( r11 == NULL ) hl_null_access();
	r11->hasValue ? ((void (*)(vdynamic*,int,int,double))r11->fun)((vdynamic*)r11->value,r2,r3,r4) : ((void (*)(int,int,double))r11->fun)(r2,r3,r4);
	goto label$5e97cd2_7_12;
	label$5e97cd2_7_27:
	return;
}

