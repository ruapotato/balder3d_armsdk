﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/input/Surface.h>
extern kha__input__$Surface g$_kha_input_Surface;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);

kha__input__Surface kha_input_Surface_get(int* r0) {
	kha__input__Surface r3;
	kha__input__$Surface r4;
	int r1, r2;
	if( r0 ) goto label$8b69b0c_1_3;
	r1 = 0;
	goto label$8b69b0c_1_4;
	label$8b69b0c_1_3:
	r1 = *r0;
	label$8b69b0c_1_4:
	r2 = 0;
	if( r1 == r2 ) goto label$8b69b0c_1_8;
	r3 = NULL;
	return r3;
	label$8b69b0c_1_8:
	r4 = (kha__input__$Surface)g$_kha_input_Surface;
	r3 = r4->instance;
	return r3;
}

void kha_input_Surface_setTouchDownEventBlockBehavior(venum* r0) {
	kha__input__$Surface r1;
	r1 = (kha__input__$Surface)g$_kha_input_Surface;
	r1->touchDownEventBlockBehavior = r0;
	return;
}

void kha_input_Surface_notify(kha__input__Surface r0,vclosure* r1,vclosure* r2,vclosure* r3) {
	hl__types__ArrayObj r6;
	int r5;
	if( !r1 ) goto label$8b69b0c_3_4;
	r6 = r0->touchStartListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r1));
	label$8b69b0c_3_4:
	if( !r2 ) goto label$8b69b0c_3_8;
	r6 = r0->touchEndListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r2));
	label$8b69b0c_3_8:
	if( !r3 ) goto label$8b69b0c_3_12;
	r6 = r0->moveListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r6,((vdynamic*)r3));
	label$8b69b0c_3_12:
	return;
}

void kha_input_Surface_remove(kha__input__Surface r0,vclosure* r1,vclosure* r2,vclosure* r3) {
	hl__types__ArrayObj r6;
	bool r5;
	if( !r1 ) goto label$8b69b0c_4_4;
	r6 = r0->touchStartListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_remove(r6,((vdynamic*)r1));
	label$8b69b0c_4_4:
	if( !r2 ) goto label$8b69b0c_4_8;
	r6 = r0->touchEndListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_remove(r6,((vdynamic*)r2));
	label$8b69b0c_4_8:
	if( !r3 ) goto label$8b69b0c_4_12;
	r6 = r0->moveListeners;
	if( r6 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_remove(r6,((vdynamic*)r3));
	label$8b69b0c_4_12:
	return;
}

void kha_input_Surface_new(kha__input__Surface r0) {
	hl__types__ArrayObj r1;
	kha__input__$Surface r3;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->touchStartListeners = r1;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->touchEndListeners = r1;
	r1 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r1);
	r0->moveListeners = r1;
	r3 = (kha__input__$Surface)g$_kha_input_Surface;
	r3->instance = r0;
	return;
}

void kha_input_Surface_sendTouchStartEvent(kha__input__Surface r0,int r1,int r2,int r3) {
	hl__types__ArrayObj r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r4, r7;
	r4 = 0;
	r6 = r0->touchStartListeners;
	label$8b69b0c_6_2:
	if( r6 == NULL ) hl_null_access();
	r7 = r6->length;
	if( r4 >= r7 ) goto label$8b69b0c_6_17;
	r7 = r6->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$8b69b0c_6_10;
	r8 = NULL;
	goto label$8b69b0c_6_13;
	label$8b69b0c_6_10:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$8b69b0c_6_13:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*,int,int,int))r8->fun)((vdynamic*)r8->value,r1,r2,r3) : ((void (*)(int,int,int))r8->fun)(r1,r2,r3);
	goto label$8b69b0c_6_2;
	label$8b69b0c_6_17:
	return;
}

void kha_input_Surface_sendTouchEndEvent(kha__input__Surface r0,int r1,int r2,int r3) {
	hl__types__ArrayObj r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r4, r7;
	r4 = 0;
	r6 = r0->touchEndListeners;
	label$8b69b0c_7_2:
	if( r6 == NULL ) hl_null_access();
	r7 = r6->length;
	if( r4 >= r7 ) goto label$8b69b0c_7_17;
	r7 = r6->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$8b69b0c_7_10;
	r8 = NULL;
	goto label$8b69b0c_7_13;
	label$8b69b0c_7_10:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$8b69b0c_7_13:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*,int,int,int))r8->fun)((vdynamic*)r8->value,r1,r2,r3) : ((void (*)(int,int,int))r8->fun)(r1,r2,r3);
	goto label$8b69b0c_7_2;
	label$8b69b0c_7_17:
	return;
}

void kha_input_Surface_sendMoveEvent(kha__input__Surface r0,int r1,int r2,int r3) {
	hl__types__ArrayObj r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r4, r7;
	r4 = 0;
	r6 = r0->moveListeners;
	label$8b69b0c_8_2:
	if( r6 == NULL ) hl_null_access();
	r7 = r6->length;
	if( r4 >= r7 ) goto label$8b69b0c_8_17;
	r7 = r6->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$8b69b0c_8_10;
	r8 = NULL;
	goto label$8b69b0c_8_13;
	label$8b69b0c_8_10:
	r10 = r6->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$8b69b0c_8_13:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*,int,int,int))r8->fun)((vdynamic*)r8->value,r1,r2,r3) : ((void (*)(int,int,int))r8->fun)(r1,r2,r3);
	goto label$8b69b0c_8_2;
	label$8b69b0c_8_17:
	return;
}

