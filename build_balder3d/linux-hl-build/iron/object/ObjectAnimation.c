﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/object/ObjectAnimation.h>
void iron_object_Animation_new(iron__object__Animation);
#include <iron/data/TSceneFormat.h>
int String___compare(String,vdynamic*);
extern String s$;
void iron_object_Animation_play(iron__object__Animation,String,vclosure*,double*,double*,bool*);
void iron_object_Animation_update(iron__object__Animation,float);
void iron_object_ObjectAnimation_updateObjectAnim(iron__object__ObjectAnimation);
#include <iron/data/TAnimation.h>
#include <iron/object/Transform.h>
void iron_object_ObjectAnimation_updateTransformAnim(iron__object__ObjectAnimation,iron__data__TAnimation,iron__object__Transform);
void iron_object_Transform_buildMatrix(iron__object__Transform);
#include <iron/data/TTrack.h>
#include <kha/arrays/ByteArrayPrivate.h>
#include <iron/math/Vec4.h>
#include <iron/math/Quat.h>
extern hl_type t$iron_math_Vec4;
void iron_math_Vec4_new(iron__math__Vec4,float*,float*,float*,float*);
extern hl_type t$iron_math_Quat;
void iron_math_Quat_new(iron__math__Quat,float*,float*,float*,float*);
void iron_object_Animation_rewind(iron__object__Animation,iron__data__TTrack);
#include <hl/natives.h>
void iron_object_Transform_setRotation(iron__object__Transform,float,float,float);

void iron_object_ObjectAnimation_new(iron__object__ObjectAnimation r0,iron__object__Object r1,hl__types__ArrayObj r2) {
	bool r3;
	r0->object = r1;
	r0->oactions = r2;
	r3 = false;
	r0->isSkinned = r3;
	iron_object_Animation_new(((iron__object__Animation)r0));
	return;
}

iron__data__TObj iron_object_ObjectAnimation_getAction(iron__object__ObjectAnimation r0,String r1) {
	String r10;
	hl__types__ArrayObj r3, r6;
	iron__data__TObj r11;
	iron__data__TSceneFormat r7;
	vdynamic *r8;
	varray *r9;
	int r2, r4, r5;
	r2 = 0;
	r3 = r0->oactions;
	label$cd1e1cd_2_2:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r2 >= r5 ) goto label$cd1e1cd_2_41;
	r5 = r3->length;
	if( ((unsigned)r2) < ((unsigned)r5) ) goto label$cd1e1cd_2_10;
	r7 = NULL;
	goto label$cd1e1cd_2_13;
	label$cd1e1cd_2_10:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r2];
	r7 = (iron__data__TSceneFormat)r8;
	label$cd1e1cd_2_13:
	++r2;
	if( !r7 ) goto label$cd1e1cd_2_40;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->objects;
	if( r6 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r6->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cd1e1cd_2_23;
	r11 = NULL;
	goto label$cd1e1cd_2_26;
	label$cd1e1cd_2_23:
	r9 = r6->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r11 = (iron__data__TObj)r8;
	label$cd1e1cd_2_26:
	if( r11 == NULL ) hl_null_access();
	r10 = r11->name;
	if( r10 != r1 && (!r10 || !r1 || String___compare(r10,(vdynamic*)r1) != 0) ) goto label$cd1e1cd_2_40;
	r6 = r7->objects;
	if( r6 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r6->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$cd1e1cd_2_36;
	r11 = NULL;
	goto label$cd1e1cd_2_39;
	label$cd1e1cd_2_36:
	r9 = r6->array;
	r8 = ((vdynamic**)(r9 + 1))[r4];
	r11 = (iron__data__TObj)r8;
	label$cd1e1cd_2_39:
	return r11;
	label$cd1e1cd_2_40:
	goto label$cd1e1cd_2_2;
	label$cd1e1cd_2_41:
	r11 = NULL;
	return r11;
}

void iron_object_ObjectAnimation_play(iron__object__ObjectAnimation r0,String r1,vclosure* r2,double* r3,double* r4,bool* r5) {
	String r6, r14;
	hl__types__ArrayObj r15;
	bool r9, r13, r22;
	iron__data__TObj r21;
	iron__data__TSceneFormat r18;
	double r7, r8, r11, r12;
	vdynamic *r19, *r23;
	varray *r20;
	int r16, r17;
	if( r1 ) goto label$cd1e1cd_3_3;
	r6 = (String)s$;
	r1 = r6;
	label$cd1e1cd_3_3:
	if( r3 ) goto label$cd1e1cd_3_6;
	r7 = 0.;
	goto label$cd1e1cd_3_7;
	label$cd1e1cd_3_6:
	r7 = *r3;
	label$cd1e1cd_3_7:
	if( r4 ) goto label$cd1e1cd_3_10;
	r8 = 1.;
	goto label$cd1e1cd_3_11;
	label$cd1e1cd_3_10:
	r8 = *r4;
	label$cd1e1cd_3_11:
	if( r5 ) goto label$cd1e1cd_3_14;
	r9 = true;
	goto label$cd1e1cd_3_15;
	label$cd1e1cd_3_14:
	r9 = *r5;
	label$cd1e1cd_3_15:
	r11 = r7;
	r3 = &r11;
	r12 = r8;
	r4 = &r12;
	r13 = r9;
	r5 = &r13;
	iron_object_Animation_play(((iron__object__Animation)r0),r1,r2,r3,r4,r5);
	r6 = r0->action;
	r14 = (String)s$;
	if( r6 != r14 && (!r6 || !r14 || String___compare(r6,(vdynamic*)r14) != 0) ) goto label$cd1e1cd_3_60;
	r15 = r0->oactions;
	if( r15 == NULL ) hl_null_access();
	r16 = 0;
	r17 = r15->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cd1e1cd_3_32;
	r18 = NULL;
	goto label$cd1e1cd_3_35;
	label$cd1e1cd_3_32:
	r20 = r15->array;
	r19 = ((vdynamic**)(r20 + 1))[r16];
	r18 = (iron__data__TSceneFormat)r19;
	label$cd1e1cd_3_35:
	if( !r18 ) goto label$cd1e1cd_3_60;
	r15 = r0->oactions;
	if( r15 == NULL ) hl_null_access();
	r16 = 0;
	r17 = r15->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cd1e1cd_3_43;
	r18 = NULL;
	goto label$cd1e1cd_3_46;
	label$cd1e1cd_3_43:
	r20 = r15->array;
	r19 = ((vdynamic**)(r20 + 1))[r16];
	r18 = (iron__data__TSceneFormat)r19;
	label$cd1e1cd_3_46:
	if( r18 == NULL ) hl_null_access();
	r15 = r18->objects;
	if( r15 == NULL ) hl_null_access();
	r16 = 0;
	r17 = r15->length;
	if( ((unsigned)r16) < ((unsigned)r17) ) goto label$cd1e1cd_3_54;
	r21 = NULL;
	goto label$cd1e1cd_3_57;
	label$cd1e1cd_3_54:
	r20 = r15->array;
	r19 = ((vdynamic**)(r20 + 1))[r16];
	r21 = (iron__data__TObj)r19;
	label$cd1e1cd_3_57:
	if( r21 == NULL ) hl_null_access();
	r6 = r21->name;
	r0->action = r6;
	label$cd1e1cd_3_60:
	r6 = r0->action;
	r21 = iron_object_ObjectAnimation_getAction(r0,r6);
	r0->oaction = r21;
	r21 = r0->oaction;
	if( !r21 ) goto label$cd1e1cd_3_78;
	r21 = r0->oaction;
	if( r21 == NULL ) hl_null_access();
	r23 = r21->sampled;
	if( !r23 ) goto label$cd1e1cd_3_76;
	r21 = r0->oaction;
	if( r21 == NULL ) hl_null_access();
	r23 = r21->sampled;
	r22 = r23 ? r23->v.b : 0;
	if( !r22 ) goto label$cd1e1cd_3_76;
	r22 = true;
	goto label$cd1e1cd_3_77;
	label$cd1e1cd_3_76:
	r22 = false;
	label$cd1e1cd_3_77:
	r0->isSampled = r22;
	label$cd1e1cd_3_78:
	return;
}

void iron_object_ObjectAnimation_update(iron__object__ObjectAnimation r0,float r1) {
	bool r3;
	iron__data__TObj r5;
	iron__object__Object r4;
	r4 = r0->object;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->visible;
	if( !r3 ) goto label$cd1e1cd_4_10;
	r4 = r0->object;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->culled;
	if( r3 ) goto label$cd1e1cd_4_10;
	r5 = r0->oaction;
	if( r5 ) goto label$cd1e1cd_4_11;
	label$cd1e1cd_4_10:
	return;
	label$cd1e1cd_4_11:
	iron_object_Animation_update(((iron__object__Animation)r0),r1);
	r3 = r0->paused;
	if( !r3 ) goto label$cd1e1cd_4_15;
	return;
	label$cd1e1cd_4_15:
	r3 = r0->isSkinned;
	if( r3 ) goto label$cd1e1cd_4_18;
	iron_object_ObjectAnimation_updateObjectAnim(r0);
	label$cd1e1cd_4_18:
	return;
}

void iron_object_ObjectAnimation_updateObjectAnim(iron__object__ObjectAnimation r0) {
	iron__data__TAnimation r2;
	iron__data__TObj r3;
	iron__object__Transform r4;
	iron__object__Object r5;
	r3 = r0->oaction;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->anim;
	r5 = r0->object;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->transform;
	iron_object_ObjectAnimation_updateTransformAnim(r0,r2,r4);
	r5 = r0->object;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->transform;
	if( r4 == NULL ) hl_null_access();
	iron_object_Transform_buildMatrix(r4);
	return;
}

bool iron_object_ObjectAnimation_isTrackEnd(iron__object__ObjectAnimation r0,iron__data__TTrack r1) {
	bool r5;
	kha__arrays__ByteArrayPrivate r7;
	float r2, r4;
	int r3, r6, r8;
	r2 = r0->speed;
	r3 = 0;
	r4 = (float)r3;
	if( !(r4 < r2) ) goto label$cd1e1cd_6_18;
	r3 = r0->frameIndex;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->frames;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->byteArrayLength;
	r8 = 2;
	r6 = r6 >> r8;
	r8 = 2;
	r6 = r6 - r8;
	if( r3 >= r6 ) goto label$cd1e1cd_6_16;
	r5 = false;
	goto label$cd1e1cd_6_17;
	label$cd1e1cd_6_16:
	r5 = true;
	label$cd1e1cd_6_17:
	return r5;
	label$cd1e1cd_6_18:
	r3 = r0->frameIndex;
	r6 = 0;
	if( r3 <= r6 ) goto label$cd1e1cd_6_23;
	r5 = false;
	goto label$cd1e1cd_6_24;
	label$cd1e1cd_6_23:
	r5 = true;
	label$cd1e1cd_6_24:
	return r5;
}

void iron_object_ObjectAnimation_updateTransformAnim(iron__object__ObjectAnimation r0,iron__data__TAnimation r1,iron__object__Transform r2) {
	String r42;
	hl__types__ArrayObj r19;
	iron__math__Quat r17;
	iron__data__TTrack r22;
	int64 r29;
	bool r11;
	iron__math__Vec4 r12;
	kha__arrays__ByteArrayPrivate r25, r27, r34, r35;
	float r5, r8, r9, r24, r31, r36, r37, r38, r44, r45;
	vclosure *r32;
	double r18, r39, r40, r41;
	vdynamic *r4, *r6, *r10;
	vbyte *r30, *r43;
	varray *r23;
	float *r13, *r14, *r15, *r16;
	int r7, r20, r21, r26, r28, r33;
	if( r1 ) goto label$cd1e1cd_7_2;
	return;
	label$cd1e1cd_7_2:
	if( r1 == NULL ) hl_null_access();
	r6 = r1->end;
	r7 = r6 ? r6->v.i : 0;
	r5 = (float)r7;
	r8 = r0->frameTime;
	r5 = r5 * r8;
	r6 = r1->begin;
	r7 = r6 ? r6->v.i : 0;
	r8 = (float)r7;
	r9 = r0->frameTime;
	r8 = r8 * r9;
	r5 = r5 - r8;
	r10 = r1->has_delta;
	r11 = r10 ? r10->v.b : 0;
	if( !r11 ) goto label$cd1e1cd_7_74;
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dloc;
	if( r12 ) goto label$cd1e1cd_7_41;
	r12 = (iron__math__Vec4)hl_alloc_obj(&t$iron_math_Vec4);
	r13 = NULL;
	r14 = NULL;
	r15 = NULL;
	r16 = NULL;
	iron_math_Vec4_new(r12,r13,r14,r15,r16);
	r2->dloc = r12;
	r17 = (iron__math__Quat)hl_alloc_obj(&t$iron_math_Quat);
	r13 = NULL;
	r14 = NULL;
	r15 = NULL;
	r16 = NULL;
	iron_math_Quat_new(r17,r13,r14,r15,r16);
	r2->drot = r17;
	r12 = (iron__math__Vec4)hl_alloc_obj(&t$iron_math_Vec4);
	r13 = NULL;
	r14 = NULL;
	r15 = NULL;
	r16 = NULL;
	iron_math_Vec4_new(r12,r13,r14,r15,r16);
	r2->dscale = r12;
	label$cd1e1cd_7_41:
	r12 = r2->dloc;
	if( r12 == NULL ) hl_null_access();
	r7 = 0;
	r8 = (float)r7;
	r12->x = r8;
	r7 = 0;
	r8 = (float)r7;
	r12->y = r8;
	r7 = 0;
	r8 = (float)r7;
	r12->z = r8;
	r18 = 1.;
	r8 = (float)r18;
	r12->w = r8;
	r12 = r2->dscale;
	if( r12 == NULL ) hl_null_access();
	r7 = 0;
	r8 = (float)r7;
	r12->x = r8;
	r7 = 0;
	r8 = (float)r7;
	r12->y = r8;
	r7 = 0;
	r8 = (float)r7;
	r12->z = r8;
	r18 = 1.;
	r8 = (float)r18;
	r12->w = r8;
	r18 = 0.;
	r8 = (float)r18;
	r2->_deulerZ = r8;
	r2->_deulerY = r8;
	r2->_deulerX = r8;
	label$cd1e1cd_7_74:
	r7 = 0;
	r19 = r1->tracks;
	label$cd1e1cd_7_76:
	if( r19 == NULL ) hl_null_access();
	r21 = r19->length;
	if( r7 >= r21 ) goto label$cd1e1cd_7_611;
	r21 = r19->length;
	if( ((unsigned)r7) < ((unsigned)r21) ) goto label$cd1e1cd_7_84;
	r22 = NULL;
	goto label$cd1e1cd_7_87;
	label$cd1e1cd_7_84:
	r23 = r19->array;
	r4 = ((vdynamic**)(r23 + 1))[r7];
	r22 = (iron__data__TTrack)r4;
	label$cd1e1cd_7_87:
	++r7;
	r20 = r0->frameIndex;
	r21 = -1;
	if( r20 != r21 ) goto label$cd1e1cd_7_92;
	iron_object_Animation_rewind(((iron__object__Animation)r0),r22);
	label$cd1e1cd_7_92:
	r8 = r0->speed;
	r20 = 0;
	r9 = (float)r20;
	if( !(r9 < r8) ) goto label$cd1e1cd_7_98;
	r20 = 1;
	goto label$cd1e1cd_7_99;
	label$cd1e1cd_7_98:
	r20 = -1;
	label$cd1e1cd_7_99:
	r8 = r0->time;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->begin;
	r21 = r6 ? r6->v.i : 0;
	r9 = (float)r21;
	r24 = r0->frameTime;
	r9 = r9 * r24;
	r8 = r8 + r9;
	label$cd1e1cd_7_107:
	r11 = true;
	if( !r11 ) goto label$cd1e1cd_7_169;
	if( r22 == NULL ) hl_null_access();
	r25 = r22->frames;
	r9 = r0->speed;
	r21 = 0;
	r24 = (float)r21;
	if( !(r24 < r9) ) goto label$cd1e1cd_7_142;
	r21 = r0->frameIndex;
	if( r25 == NULL ) hl_null_access();
	r26 = r25->byteArrayLength;
	r28 = 2;
	r26 = r26 >> r28;
	r28 = 2;
	r26 = r26 - r28;
	if( r21 >= r26 ) goto label$cd1e1cd_7_140;
	r30 = r25->self;
	r21 = r25->byteArrayOffset;
	r26 = r0->frameIndex;
	r28 = 1;
	r26 = r26 + r28;
	r28 = 4;
	r26 = r26 * r28;
	r21 = r21 + r26;
	r29 = hl_kinc_bytearray_getuint32(r30,r21);
	r21 = (int)r29;
	r24 = (float)r21;
	r31 = r0->frameTime;
	r24 = r24 * r31;
	if( !(r24 < r8) ) goto label$cd1e1cd_7_140;
	r11 = true;
	goto label$cd1e1cd_7_141;
	label$cd1e1cd_7_140:
	r11 = false;
	label$cd1e1cd_7_141:
	goto label$cd1e1cd_7_163;
	label$cd1e1cd_7_142:
	r21 = r0->frameIndex;
	r26 = 1;
	if( r26 >= r21 ) goto label$cd1e1cd_7_162;
	if( r25 == NULL ) hl_null_access();
	r30 = r25->self;
	r21 = r25->byteArrayOffset;
	r26 = r0->frameIndex;
	r28 = 1;
	r26 = r26 - r28;
	r28 = 4;
	r26 = r26 * r28;
	r21 = r21 + r26;
	r29 = hl_kinc_bytearray_getuint32(r30,r21);
	r21 = (int)r29;
	r24 = (float)r21;
	r31 = r0->frameTime;
	r24 = r24 * r31;
	if( !(r24 < r8) ) goto label$cd1e1cd_7_162;
	r11 = true;
	goto label$cd1e1cd_7_163;
	label$cd1e1cd_7_162:
	r11 = false;
	label$cd1e1cd_7_163:
	if( r11 ) goto label$cd1e1cd_7_165;
	goto label$cd1e1cd_7_169;
	label$cd1e1cd_7_165:
	r21 = r0->frameIndex;
	r21 = r21 + r20;
	r0->frameIndex = r21;
	goto label$cd1e1cd_7_107;
	label$cd1e1cd_7_169:
	r21 = r0->frameIndex;
	if( r22 == NULL ) hl_null_access();
	r25 = r22->frames;
	if( r25 == NULL ) hl_null_access();
	r26 = r25->byteArrayLength;
	r28 = 2;
	r26 = r26 >> r28;
	if( r21 < r26 ) goto label$cd1e1cd_7_178;
	goto label$cd1e1cd_7_76;
	label$cd1e1cd_7_178:
	r9 = r0->time;
	if( !(r5 < r9) ) goto label$cd1e1cd_7_195;
	r32 = r0->onComplete;
	if( !r32 ) goto label$cd1e1cd_7_185;
	r32 = r0->onComplete;
	if( r32 == NULL ) hl_null_access();
	r32->hasValue ? ((void (*)(vdynamic*))r32->fun)((vdynamic*)r32->value) : ((void (*)(void))r32->fun)();
	label$cd1e1cd_7_185:
	r11 = r0->loop;
	if( !r11 ) goto label$cd1e1cd_7_189;
	iron_object_Animation_rewind(((iron__object__Animation)r0),r22);
	goto label$cd1e1cd_7_194;
	label$cd1e1cd_7_189:
	r21 = r0->frameIndex;
	r21 = r21 - r20;
	r0->frameIndex = r21;
	r11 = true;
	r0->paused = r11;
	label$cd1e1cd_7_194:
	return;
	label$cd1e1cd_7_195:
	r21 = r0->frameIndex;
	r25 = r22->frames;
	if( r25 == NULL ) hl_null_access();
	r30 = r25->self;
	r26 = r25->byteArrayOffset;
	r33 = 4;
	r28 = r21 * r33;
	r26 = r26 + r28;
	r29 = hl_kinc_bytearray_getuint32(r30,r26);
	r26 = (int)r29;
	r9 = (float)r26;
	r24 = r0->frameTime;
	r9 = r9 * r24;
	r27 = r22->frames;
	if( r27 == NULL ) hl_null_access();
	r30 = r27->self;
	r26 = r27->byteArrayOffset;
	r28 = r21 + r20;
	r33 = 4;
	r28 = r28 * r33;
	r26 = r26 + r28;
	r29 = hl_kinc_bytearray_getuint32(r30,r26);
	r26 = (int)r29;
	r24 = (float)r26;
	r31 = r0->frameTime;
	r24 = r24 * r31;
	r34 = r22->values;
	if( r34 == NULL ) hl_null_access();
	r30 = r34->self;
	r26 = r34->byteArrayOffset;
	r33 = 4;
	r28 = r21 * r33;
	r26 = r26 + r28;
	r31 = hl_kinc_bytearray_getfloat32(r30,r26);
	r35 = r22->values;
	if( r35 == NULL ) hl_null_access();
	r30 = r35->self;
	r26 = r35->byteArrayOffset;
	r28 = r21 + r20;
	r33 = 4;
	r28 = r28 * r33;
	r26 = r26 + r28;
	r36 = hl_kinc_bytearray_getfloat32(r30,r26);
	r37 = r8 - r9;
	r18 = (double)r37;
	r37 = r24 - r9;
	r39 = (double)r37;
	r18 = r18 / r39;
	r39 = 1.;
	r39 = r39 - r18;
	r40 = (double)r31;
	r39 = r39 * r40;
	r41 = (double)r36;
	r40 = r18 * r41;
	r39 = r39 + r40;
	r37 = (float)r39;
	r42 = r22->target;
	if( !r42 ) goto label$cd1e1cd_7_261;
	r26 = r42->length;
	r28 = 6;
	if( r26 != r28 ) goto label$cd1e1cd_7_261;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dqwrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_487;
	label$cd1e1cd_7_261:
	if( !r42 ) goto label$cd1e1cd_7_270;
	r26 = r42->length;
	r28 = 6;
	if( r26 != r28 ) goto label$cd1e1cd_7_270;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dqxrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_492;
	label$cd1e1cd_7_270:
	if( !r42 ) goto label$cd1e1cd_7_279;
	r26 = r42->length;
	r28 = 6;
	if( r26 != r28 ) goto label$cd1e1cd_7_279;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dqyrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_497;
	label$cd1e1cd_7_279:
	if( !r42 ) goto label$cd1e1cd_7_288;
	r26 = r42->length;
	r28 = 6;
	if( r26 != r28 ) goto label$cd1e1cd_7_288;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dqzrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_502;
	label$cd1e1cd_7_288:
	if( !r42 ) goto label$cd1e1cd_7_297;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_297;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dxloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_507;
	label$cd1e1cd_7_297:
	if( !r42 ) goto label$cd1e1cd_7_306;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_306;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dxrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_512;
	label$cd1e1cd_7_306:
	if( !r42 ) goto label$cd1e1cd_7_315;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_315;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dxscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_515;
	label$cd1e1cd_7_315:
	if( !r42 ) goto label$cd1e1cd_7_324;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_324;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dyloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_520;
	label$cd1e1cd_7_324:
	if( !r42 ) goto label$cd1e1cd_7_333;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_333;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dyrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_525;
	label$cd1e1cd_7_333:
	if( !r42 ) goto label$cd1e1cd_7_342;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_342;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dyscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_528;
	label$cd1e1cd_7_342:
	if( !r42 ) goto label$cd1e1cd_7_351;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_351;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dzloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_533;
	label$cd1e1cd_7_351:
	if( !r42 ) goto label$cd1e1cd_7_360;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_360;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dzrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_538;
	label$cd1e1cd_7_360:
	if( !r42 ) goto label$cd1e1cd_7_369;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_369;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("dzscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_541;
	label$cd1e1cd_7_369:
	if( !r42 ) goto label$cd1e1cd_7_378;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_378;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("qwrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_546;
	label$cd1e1cd_7_378:
	if( !r42 ) goto label$cd1e1cd_7_387;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_387;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("qxrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_551;
	label$cd1e1cd_7_387:
	if( !r42 ) goto label$cd1e1cd_7_396;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_396;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("qyrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_556;
	label$cd1e1cd_7_396:
	if( !r42 ) goto label$cd1e1cd_7_405;
	r26 = r42->length;
	r28 = 5;
	if( r26 != r28 ) goto label$cd1e1cd_7_405;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("qzrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_561;
	label$cd1e1cd_7_405:
	if( !r42 ) goto label$cd1e1cd_7_414;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_414;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("xloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_566;
	label$cd1e1cd_7_414:
	if( !r42 ) goto label$cd1e1cd_7_423;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_423;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("xrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_571;
	label$cd1e1cd_7_423:
	if( !r42 ) goto label$cd1e1cd_7_432;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_432;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("xscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_576;
	label$cd1e1cd_7_432:
	if( !r42 ) goto label$cd1e1cd_7_441;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_441;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("yloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_581;
	label$cd1e1cd_7_441:
	if( !r42 ) goto label$cd1e1cd_7_450;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_450;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("yrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_586;
	label$cd1e1cd_7_450:
	if( !r42 ) goto label$cd1e1cd_7_459;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_459;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("yscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_591;
	label$cd1e1cd_7_459:
	if( !r42 ) goto label$cd1e1cd_7_468;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_468;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("zloc");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_596;
	label$cd1e1cd_7_468:
	if( !r42 ) goto label$cd1e1cd_7_477;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_477;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("zrot");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_601;
	label$cd1e1cd_7_477:
	if( !r42 ) goto label$cd1e1cd_7_486;
	r26 = r42->length;
	r28 = 4;
	if( r26 != r28 ) goto label$cd1e1cd_7_486;
	r30 = r42->bytes;
	r43 = (vbyte*)USTR("zscl");
	r26 = hl_string_compare(r30,r43,r26);
	r28 = 0;
	if( r26 == r28 ) goto label$cd1e1cd_7_606;
	label$cd1e1cd_7_486:
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_487:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->drot;
	if( r17 == NULL ) hl_null_access();
	r17->w = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_492:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->drot;
	if( r17 == NULL ) hl_null_access();
	r17->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_497:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->drot;
	if( r17 == NULL ) hl_null_access();
	r17->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_502:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->drot;
	if( r17 == NULL ) hl_null_access();
	r17->z = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_507:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dloc;
	if( r12 == NULL ) hl_null_access();
	r12->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_512:
	if( r2 == NULL ) hl_null_access();
	r2->_deulerX = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_515:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dscale;
	if( r12 == NULL ) hl_null_access();
	r12->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_520:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dloc;
	if( r12 == NULL ) hl_null_access();
	r12->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_525:
	if( r2 == NULL ) hl_null_access();
	r2->_deulerY = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_528:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dscale;
	if( r12 == NULL ) hl_null_access();
	r12->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_533:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dloc;
	if( r12 == NULL ) hl_null_access();
	r12->z = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_538:
	if( r2 == NULL ) hl_null_access();
	r2->_deulerZ = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_541:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->dscale;
	if( r12 == NULL ) hl_null_access();
	r12->z = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_546:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->rot;
	if( r17 == NULL ) hl_null_access();
	r17->w = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_551:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->rot;
	if( r17 == NULL ) hl_null_access();
	r17->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_556:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->rot;
	if( r17 == NULL ) hl_null_access();
	r17->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_561:
	if( r2 == NULL ) hl_null_access();
	r17 = r2->rot;
	if( r17 == NULL ) hl_null_access();
	r17->z = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_566:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->loc;
	if( r12 == NULL ) hl_null_access();
	r12->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_571:
	if( r2 == NULL ) hl_null_access();
	r44 = r2->_eulerY;
	r45 = r2->_eulerZ;
	iron_object_Transform_setRotation(r2,r37,r44,r45);
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_576:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->scale;
	if( r12 == NULL ) hl_null_access();
	r12->x = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_581:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->loc;
	if( r12 == NULL ) hl_null_access();
	r12->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_586:
	if( r2 == NULL ) hl_null_access();
	r38 = r2->_eulerX;
	r45 = r2->_eulerZ;
	iron_object_Transform_setRotation(r2,r38,r37,r45);
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_591:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->scale;
	if( r12 == NULL ) hl_null_access();
	r12->y = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_596:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->loc;
	if( r12 == NULL ) hl_null_access();
	r12->z = r37;
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_601:
	if( r2 == NULL ) hl_null_access();
	r38 = r2->_eulerX;
	r44 = r2->_eulerY;
	iron_object_Transform_setRotation(r2,r38,r44,r37);
	goto label$cd1e1cd_7_610;
	label$cd1e1cd_7_606:
	if( r2 == NULL ) hl_null_access();
	r12 = r2->scale;
	if( r12 == NULL ) hl_null_access();
	r12->z = r37;
	label$cd1e1cd_7_610:
	goto label$cd1e1cd_7_76;
	label$cd1e1cd_7_611:
	return;
}

