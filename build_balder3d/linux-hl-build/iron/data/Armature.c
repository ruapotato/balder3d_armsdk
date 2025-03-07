﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/Armature.h>
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
#include <kha/arrays/ByteArrayPrivate.h>
#include <iron/data/TTransform.h>
#include <iron/math/Mat4.h>
extern hl_type t$vrt_7235b40;
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$iron_math_Mat4;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void iron_math_Mat4_new(iron__math__Mat4,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float);
extern hl_type t$String;
int String___compare(String,vdynamic*);
void iron_data_Armature_traverseBonesStep(iron__data__TObj,vclosure*);
extern String s$bone_object;
#include <iron/data/TSceneFormat.h>
extern hl_type t$iron_data_TObj;
extern hl_type t$fun_633bba1;

void iron_data_Armature_new__$1(hl__types__ArrayObj r0,iron__data__TObj r1) {
	int r2;
	if( r0 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r0,((vdynamic*)r1));
	return;
}

void iron_data_Armature_initMats(iron__data__Armature r0) {
	vvirtual *r9;
	hl__types__ArrayObj r5, r8, r13;
	hl_type *r11;
	bool r2;
	iron__data__TObj r14;
	iron__data__TTransform r16;
	kha__arrays__ByteArrayPrivate r15;
	float r18, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r32, r33, r34, r35, r36;
	iron__math__Mat4 r17;
	vdynamic *r3;
	vbyte *r19;
	varray *r10;
	int r4, r6, r7, r12, r20, r21;
	r2 = r0->matsReady;
	if( !r2 ) goto label$d4081f7_2_3;
	return;
	label$d4081f7_2_3:
	r2 = true;
	r0->matsReady = r2;
	r4 = 0;
	r5 = r0->actions;
	label$d4081f7_2_7:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$d4081f7_2_182;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$d4081f7_2_15;
	r9 = NULL;
	goto label$d4081f7_2_18;
	label$d4081f7_2_15:
	r10 = r5->array;
	r3 = ((vdynamic**)(r10 + 1))[r4];
	r9 = hl_to_virtual(&t$vrt_7235b40,(vdynamic*)r3);
	label$d4081f7_2_18:
	++r4;
	if( r9 == NULL ) hl_null_access();
	r8 = hl_vfields(r9)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r9)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r9->value,139870941/*mats*/,&t$hl_types_ArrayObj);
	if( !r8 ) goto label$d4081f7_2_23;
	goto label$d4081f7_2_7;
	label$d4081f7_2_23:
	r11 = &t$iron_math_Mat4;
	r6 = 0;
	r10 = hl_alloc_array(r11,r6);
	r8 = hl_types_ArrayObj_alloc(r10);
	if( hl_vfields(r9)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r9)[1]) = (hl__types__ArrayObj)r8; else hl_dyn_setp(r9->value,139870941/*mats*/,&t$hl_types_ArrayObj,r8);
	r6 = 0;
	r8 = hl_vfields(r9)[0] ? (*(hl__types__ArrayObj*)(hl_vfields(r9)[0])) : (hl__types__ArrayObj)hl_dyn_getp(r9->value,-151562331/*bones*/,&t$hl_types_ArrayObj);
	label$d4081f7_2_30:
	if( r8 == NULL ) hl_null_access();
	r12 = r8->length;
	if( r6 >= r12 ) goto label$d4081f7_2_181;
	r12 = r8->length;
	if( ((unsigned)r6) < ((unsigned)r12) ) goto label$d4081f7_2_38;
	r14 = NULL;
	goto label$d4081f7_2_41;
	label$d4081f7_2_38:
	r10 = r8->array;
	r3 = ((vdynamic**)(r10 + 1))[r6];
	r14 = (iron__data__TObj)r3;
	label$d4081f7_2_41:
	++r6;
	if( r14 == NULL ) hl_null_access();
	r16 = r14->transform;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->values;
	r7 = 0;
	if( r9 == NULL ) hl_null_access();
	r13 = hl_vfields(r9)[1] ? (*(hl__types__ArrayObj*)(hl_vfields(r9)[1])) : (hl__types__ArrayObj)hl_dyn_getp(r9->value,139870941/*mats*/,&t$hl_types_ArrayObj);
	if( r13 == NULL ) hl_null_access();
	r17 = (iron__math__Mat4)hl_alloc_obj(&t$iron_math_Mat4);
	if( r15 == NULL ) hl_null_access();
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r21 = 4;
	r20 = r7 * r21;
	r12 = r12 + r20;
	r18 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 1;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r22 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 2;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r23 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 3;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r24 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 4;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r25 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 5;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r26 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 6;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r27 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 7;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r28 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 8;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r29 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 9;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r30 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 10;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r31 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 11;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r32 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 12;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r33 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 13;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r34 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 14;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r35 = hl_kinc_bytearray_getfloat32(r19,r12);
	r19 = r15->self;
	r12 = r15->byteArrayOffset;
	r20 = 15;
	r20 = r20 + r7;
	r21 = 4;
	r20 = r20 * r21;
	r12 = r12 + r20;
	r36 = hl_kinc_bytearray_getfloat32(r19,r12);
	iron_math_Mat4_new(r17,r18,r22,r23,r24,r25,r26,r27,r28,r29,r30,r31,r32,r33,r34,r35,r36);
	r12 = hl_types_ArrayObj_push(r13,((vdynamic*)r17));
	goto label$d4081f7_2_30;
	label$d4081f7_2_181:
	goto label$d4081f7_2_7;
	label$d4081f7_2_182:
	return;
}

vvirtual* iron_data_Armature_getAction(iron__data__Armature r0,String r1) {
	String r8;
	vvirtual *r5;
	hl__types__ArrayObj r3;
	vdynamic *r6;
	varray *r7;
	int r2, r4;
	r2 = 0;
	r3 = r0->actions;
	label$d4081f7_3_2:
	if( r3 == NULL ) hl_null_access();
	r4 = r3->length;
	if( r2 >= r4 ) goto label$d4081f7_3_19;
	r4 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r4) ) goto label$d4081f7_3_10;
	r5 = NULL;
	goto label$d4081f7_3_13;
	label$d4081f7_3_10:
	r7 = r3->array;
	r6 = ((vdynamic**)(r7 + 1))[r2];
	r5 = hl_to_virtual(&t$vrt_7235b40,(vdynamic*)r6);
	label$d4081f7_3_13:
	++r2;
	if( r5 == NULL ) hl_null_access();
	r8 = hl_vfields(r5)[2] ? (*(String*)(hl_vfields(r5)[2])) : (String)hl_dyn_getp(r5->value,150958933/*name*/,&t$String);
	if( r8 != r1 && (!r8 || !r1 || String___compare(r8,(vdynamic*)r1) != 0) ) goto label$d4081f7_3_18;
	return r5;
	label$d4081f7_3_18:
	goto label$d4081f7_3_2;
	label$d4081f7_3_19:
	r5 = NULL;
	return r5;
}

void iron_data_Armature_setParents(iron__data__TObj r0) {
	hl__types__ArrayObj r2;
	iron__data__TObj r3;
	vdynamic *r4;
	varray *r7;
	int r5, r6;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->children;
	if( r2 ) goto label$d4081f7_4_4;
	return;
	label$d4081f7_4_4:
	r5 = 0;
	r2 = r0->children;
	label$d4081f7_4_6:
	if( r2 == NULL ) hl_null_access();
	r6 = r2->length;
	if( r5 >= r6 ) goto label$d4081f7_4_22;
	r6 = r2->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$d4081f7_4_14;
	r3 = NULL;
	goto label$d4081f7_4_17;
	label$d4081f7_4_14:
	r7 = r2->array;
	r4 = ((vdynamic**)(r7 + 1))[r5];
	r3 = (iron__data__TObj)r4;
	label$d4081f7_4_17:
	++r5;
	if( r3 == NULL ) hl_null_access();
	r3->parent = r0;
	iron_data_Armature_setParents(r3);
	goto label$d4081f7_4_6;
	label$d4081f7_4_22:
	return;
}

void iron_data_Armature_traverseBones(hl__types__ArrayObj r0,vclosure* r1) {
	iron__data__TObj r7;
	vdynamic *r8;
	varray *r9;
	int r2, r4, r5, r6;
	r2 = 0;
	if( r0 == NULL ) hl_null_access();
	r4 = r0->length;
	label$d4081f7_5_3:
	if( r2 >= r4 ) goto label$d4081f7_5_17;
	r5 = r2;
	++r2;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$d4081f7_5_12;
	r7 = NULL;
	goto label$d4081f7_5_15;
	label$d4081f7_5_12:
	r9 = r0->array;
	r8 = ((vdynamic**)(r9 + 1))[r5];
	r7 = (iron__data__TObj)r8;
	label$d4081f7_5_15:
	iron_data_Armature_traverseBonesStep(r7,r1);
	goto label$d4081f7_5_3;
	label$d4081f7_5_17:
	return;
}

void iron_data_Armature_traverseBonesStep(iron__data__TObj r0,vclosure* r1) {
	String r3, r5;
	hl__types__ArrayObj r6;
	iron__data__TObj r4;
	vdynamic *r7;
	varray *r12;
	int r8, r9, r10, r11;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->type;
	r5 = (String)s$bone_object;
	if( r3 != r5 && (!r3 || !r5 || String___compare(r3,(vdynamic*)r5) != 0) ) goto label$d4081f7_6_6;
	if( r1 == NULL ) hl_null_access();
	r1->hasValue ? ((void (*)(vdynamic*,iron__data__TObj))r1->fun)((vdynamic*)r1->value,r0) : ((void (*)(iron__data__TObj))r1->fun)(r0);
	label$d4081f7_6_6:
	r6 = r0->children;
	if( r6 ) goto label$d4081f7_6_9;
	return;
	label$d4081f7_6_9:
	r8 = 0;
	r6 = r0->children;
	if( r6 == NULL ) hl_null_access();
	r9 = r6->length;
	label$d4081f7_6_13:
	if( r8 >= r9 ) goto label$d4081f7_6_29;
	r10 = r8;
	++r8;
	if( r0 == NULL ) hl_null_access();
	r6 = r0->children;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->length;
	if( ((unsigned)r10) < ((unsigned)r11) ) goto label$d4081f7_6_24;
	r4 = NULL;
	goto label$d4081f7_6_27;
	label$d4081f7_6_24:
	r12 = r6->array;
	r7 = ((vdynamic**)(r12 + 1))[r10];
	r4 = (iron__data__TObj)r7;
	label$d4081f7_6_27:
	iron_data_Armature_traverseBonesStep(r4,r1);
	goto label$d4081f7_6_13;
	label$d4081f7_6_29:
	return;
}

void iron_data_Armature_new(iron__data__Armature r0,int r1,String r2,hl__types__ArrayObj r3) {
	String r9;
	vvirtual *r19;
	hl__types__ArrayObj r5, r16, r20;
	hl_type *r7;
	bool r4;
	iron__data__TObj r17;
	iron__data__TSceneFormat r13;
	vclosure *r18;
	vdynamic *r14;
	int r8, r11, r12, r15;
	varray *r6;
	r4 = false;
	r0->matsReady = r4;
	r7 = &t$vrt_7235b40;
	r8 = 0;
	r6 = hl_alloc_array(r7,r8);
	r5 = hl_types_ArrayObj_alloc(r6);
	r0->actions = r5;
	r0->uid = r1;
	r0->name = r2;
	r8 = 0;
	label$d4081f7_7_10:
	if( r3 == NULL ) hl_null_access();
	r12 = r3->length;
	if( r8 >= r12 ) goto label$d4081f7_7_57;
	r12 = r3->length;
	if( ((unsigned)r8) < ((unsigned)r12) ) goto label$d4081f7_7_18;
	r13 = NULL;
	goto label$d4081f7_7_21;
	label$d4081f7_7_18:
	r6 = r3->array;
	r14 = ((vdynamic**)(r6 + 1))[r8];
	r13 = (iron__data__TSceneFormat)r14;
	label$d4081f7_7_21:
	++r8;
	r11 = 0;
	if( r13 == NULL ) hl_null_access();
	r5 = r13->objects;
	label$d4081f7_7_25:
	if( r5 == NULL ) hl_null_access();
	r15 = r5->length;
	if( r11 >= r15 ) goto label$d4081f7_7_39;
	r15 = r5->length;
	if( ((unsigned)r11) < ((unsigned)r15) ) goto label$d4081f7_7_33;
	r17 = NULL;
	goto label$d4081f7_7_36;
	label$d4081f7_7_33:
	r6 = r5->array;
	r14 = ((vdynamic**)(r6 + 1))[r11];
	r17 = (iron__data__TObj)r14;
	label$d4081f7_7_36:
	++r11;
	iron_data_Armature_setParents(r17);
	goto label$d4081f7_7_25;
	label$d4081f7_7_39:
	r7 = &t$iron_data_TObj;
	r11 = 0;
	r6 = hl_alloc_array(r7,r11);
	r5 = hl_types_ArrayObj_alloc(r6);
	if( r13 == NULL ) hl_null_access();
	r16 = r13->objects;
	r18 = hl_alloc_closure_ptr(&t$fun_633bba1,iron_data_Armature_new__$1,r5);
	iron_data_Armature_traverseBones(r16,r18);
	r16 = r0->actions;
	if( r16 == NULL ) hl_null_access();
	r19 = hl_alloc_virtual(&t$vrt_7235b40);
	r9 = r13->name;
	if( hl_vfields(r19)[2] ) *(String*)(hl_vfields(r19)[2]) = (String)r9; else hl_dyn_setp(r19->value,150958933/*name*/,&t$String,r9);
	if( hl_vfields(r19)[0] ) *(hl__types__ArrayObj*)(hl_vfields(r19)[0]) = (hl__types__ArrayObj)r5; else hl_dyn_setp(r19->value,-151562331/*bones*/,&t$hl_types_ArrayObj,r5);
	r20 = NULL;
	if( hl_vfields(r19)[1] ) *(hl__types__ArrayObj*)(hl_vfields(r19)[1]) = (hl__types__ArrayObj)r20; else hl_dyn_setp(r19->value,139870941/*mats*/,&t$hl_types_ArrayObj,r20);
	r11 = hl_types_ArrayObj_push(r16,((vdynamic*)r19));
	goto label$d4081f7_7_10;
	label$d4081f7_7_57:
	return;
}

