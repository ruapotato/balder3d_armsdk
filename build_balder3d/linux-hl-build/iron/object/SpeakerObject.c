﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/object/SpeakerObject.h>
void iron_object_SpeakerObject_init(iron__object__SpeakerObject);
extern hl_type t$fun_bcdd8b0;
void iron_App_notifyOnInit(vclosure*);
void iron_object_SpeakerObject_play(iron__object__SpeakerObject);
extern hl_type t$vrt_0135aa0;
extern hl_type t$fun_4c7a70a;
vvirtual* iron_system_Audio_play(kha__Sound,bool*,bool*);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void iron_object_SpeakerObject_update(iron__object__SpeakerObject);
void iron_App_notifyOnUpdate(vclosure*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayBase hl_types_ArrayObj_splice(hl__types__ArrayObj,int,int);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$hl_types_ArrayBase;
#include <iron/math/Mat4.h>
#include <iron/object/CameraObject.h>
#include <iron/Scene.h>
#include <kha/math/FastMatrix4.h>
extern hl_type t$fun_bf7849e;
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
void iron_App_removeUpdate(vclosure*);
extern iron__$Scene g$_iron_Scene;
#include <hl/natives.h>
double Math_min(double,double);
double Math_max(double,double);
extern hl_type t$fun_801b286;
void iron_object_Object_remove(iron__object__Object);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void iron_object_Object_new(iron__object__Object);
extern String s$;
int String___compare(String,vdynamic*);
extern hl_type t$fun_b2538ac;
void iron_data_Data_getSound(String,vclosure*);

void iron_object_SpeakerObject_new__$1(iron__object__SpeakerObject r0,kha__Sound r1) {
	vclosure *r3;
	if( r0 == NULL ) hl_null_access();
	r0->sound = r1;
	r3 = hl_alloc_closure_ptr(&t$fun_bcdd8b0,iron_object_SpeakerObject_init,r0);
	iron_App_notifyOnInit(r3);
	return;
}

void iron_object_SpeakerObject_init(iron__object__SpeakerObject r0) {
	bool r2;
	iron__data__TSpeakerData r3;
	r2 = r0->visible;
	if( !r2 ) goto label$7038637_2_7;
	r3 = r0->data;
	if( r3 == NULL ) hl_null_access();
	r2 = r3->play_on_start;
	if( !r2 ) goto label$7038637_2_7;
	iron_object_SpeakerObject_play(r0);
	label$7038637_2_7:
	return;
}

void iron_object_SpeakerObject_play(iron__object__SpeakerObject r0) {
	bool *r12, *r14;
	vvirtual *r10;
	hl__types__ArrayObj r7;
	bool r3, r13;
	float r15, r16;
	vclosure *r17;
	kha__Sound r2;
	vdynamic *r5;
	varray *r11;
	int r6, r8, r9;
	iron__data__TSpeakerData r4;
	r2 = r0->sound;
	if( !r2 ) goto label$7038637_3_6;
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->muted;
	if( !r3 ) goto label$7038637_3_7;
	label$7038637_3_6:
	return;
	label$7038637_3_7:
	r3 = r0->paused;
	if( !r3 ) goto label$7038637_3_29;
	r6 = 0;
	r7 = r0->channels;
	label$7038637_3_11:
	if( r7 == NULL ) hl_null_access();
	r9 = r7->length;
	if( r6 >= r9 ) goto label$7038637_3_26;
	r9 = r7->length;
	if( ((unsigned)r6) < ((unsigned)r9) ) goto label$7038637_3_19;
	r10 = NULL;
	goto label$7038637_3_22;
	label$7038637_3_19:
	r11 = r7->array;
	r5 = ((vdynamic**)(r11 + 1))[r6];
	r10 = hl_to_virtual(&t$vrt_0135aa0,(vdynamic*)r5);
	label$7038637_3_22:
	++r6;
	if( r10 == NULL ) hl_null_access();
	if( hl_vfields(r10)[2] ) ((void (*)(vdynamic*))hl_vfields(r10)[2])(r10->value); else {
		hl_dyn_call_obj(r10->value,&t$fun_4c7a70a,173682430/*play*/,NULL,NULL);
	}
	goto label$7038637_3_11;
	label$7038637_3_26:
	r3 = false;
	r0->paused = r3;
	return;
	label$7038637_3_29:
	r2 = r0->sound;
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->loop;
	r12 = &r3;
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r13 = r4->stream;
	r14 = &r13;
	r10 = iron_system_Audio_play(r2,r12,r14);
	if( !r10 ) goto label$7038637_3_56;
	r7 = r0->channels;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r10));
	r4 = r0->data;
	if( r4 == NULL ) hl_null_access();
	r15 = r4->attenuation;
	r6 = 0;
	r16 = (float)r6;
	if( !(r16 < r15) ) goto label$7038637_3_56;
	r7 = r0->channels;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->length;
	r8 = 1;
	if( r6 != r8 ) goto label$7038637_3_56;
	r17 = hl_alloc_closure_ptr(&t$fun_bcdd8b0,iron_object_SpeakerObject_update,r0);
	iron_App_notifyOnUpdate(r17);
	label$7038637_3_56:
	return;
}

void iron_object_SpeakerObject_stop(iron__object__SpeakerObject r0) {
	vvirtual *r7;
	hl__types__ArrayObj r3, r6;
	hl__types__ArrayBase r10;
	vdynamic *r8;
	varray *r9;
	int r1, r4, r5;
	r1 = 0;
	r3 = r0->channels;
	label$7038637_4_2:
	if( r3 == NULL ) hl_null_access();
	r5 = r3->length;
	if( r1 >= r5 ) goto label$7038637_4_17;
	r5 = r3->length;
	if( ((unsigned)r1) < ((unsigned)r5) ) goto label$7038637_4_10;
	r7 = NULL;
	goto label$7038637_4_13;
	label$7038637_4_10:
	r9 = r3->array;
	r8 = ((vdynamic**)(r9 + 1))[r1];
	r7 = hl_to_virtual(&t$vrt_0135aa0,(vdynamic*)r8);
	label$7038637_4_13:
	++r1;
	if( r7 == NULL ) hl_null_access();
	if( hl_vfields(r7)[0] ) ((void (*)(vdynamic*))hl_vfields(r7)[0])(r7->value); else {
		hl_dyn_call_obj(r7->value,&t$fun_4c7a70a,207352076/*stop*/,NULL,NULL);
	}
	goto label$7038637_4_2;
	label$7038637_4_17:
	r3 = r0->channels;
	if( r3 == NULL ) hl_null_access();
	r1 = 0;
	r6 = r0->channels;
	if( r6 == NULL ) hl_null_access();
	r4 = r6->length;
	r10 = hl_types_ArrayObj_splice(r3,r1,r4);
	r3 = (hl__types__ArrayObj)hl_dyn_castp(&r10,&t$hl_types_ArrayBase,&t$hl_types_ArrayObj);
	return;
}

void iron_object_SpeakerObject_update(iron__object__SpeakerObject r0) {
	vvirtual *r9;
	hl__types__ArrayObj r5, r8;
	kha__math__FastMatrix4 r20;
	iron__$Scene r19;
	iron__Scene r18;
	bool r2;
	iron__object__Transform r16;
	iron__math__Mat4 r15, r21;
	float r12, r14, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31, r33, r34, r36, r37;
	double r32, r35;
	iron__object__CameraObject r17;
	vclosure *r11;
	vdynamic *r3;
	iron__data__TSpeakerData r13;
	varray *r10;
	int r4, r6, r7;
	r2 = r0->paused;
	if( !r2 ) goto label$7038637_5_3;
	return;
	label$7038637_5_3:
	r4 = 0;
	r5 = r0->channels;
	label$7038637_5_5:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$7038637_5_24;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$7038637_5_13;
	r9 = NULL;
	goto label$7038637_5_16;
	label$7038637_5_13:
	r10 = r5->array;
	r3 = ((vdynamic**)(r10 + 1))[r4];
	r9 = hl_to_virtual(&t$vrt_0135aa0,(vdynamic*)r3);
	label$7038637_5_16:
	++r4;
	if( r9 == NULL ) hl_null_access();
	if( hl_vfields(r9)[3] ) r2 = ((bool (*)(vdynamic*))hl_vfields(r9)[3])(r9->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r9->value,&t$fun_bf7849e,170412165/*get_finished*/,NULL,&ret);
		r2 = (bool)ret.v.i;
	}
	if( !r2 ) goto label$7038637_5_23;
	r8 = r0->channels;
	if( r8 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_remove(r8,((vdynamic*)r9));
	label$7038637_5_23:
	goto label$7038637_5_5;
	label$7038637_5_24:
	r5 = r0->channels;
	if( r5 == NULL ) hl_null_access();
	r4 = r5->length;
	r6 = 0;
	if( r4 != r6 ) goto label$7038637_5_32;
	r11 = hl_alloc_closure_ptr(&t$fun_bcdd8b0,iron_object_SpeakerObject_update,r0);
	iron_App_removeUpdate(r11);
	return;
	label$7038637_5_32:
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->attenuation;
	r4 = 0;
	r14 = (float)r4;
	if( !(r14 < r12) ) goto label$7038637_5_126;
	r19 = (iron__$Scene)g$_iron_Scene;
	r18 = r19->active;
	if( r18 == NULL ) hl_null_access();
	r17 = r18->camera;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->transform;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->world;
	if( r15 == NULL ) hl_null_access();
	r20 = r15->self;
	if( r20 == NULL ) hl_null_access();
	r12 = r20->_30;
	r20 = r15->self;
	if( r20 == NULL ) hl_null_access();
	r14 = r20->_31;
	r20 = r15->self;
	if( r20 == NULL ) hl_null_access();
	r22 = r20->_32;
	r20 = r15->self;
	if( r20 == NULL ) hl_null_access();
	r23 = r20->_33;
	r16 = r0->transform;
	if( r16 == NULL ) hl_null_access();
	r21 = r16->world;
	if( r21 == NULL ) hl_null_access();
	r20 = r21->self;
	if( r20 == NULL ) hl_null_access();
	r24 = r20->_30;
	r20 = r21->self;
	if( r20 == NULL ) hl_null_access();
	r25 = r20->_31;
	r20 = r21->self;
	if( r20 == NULL ) hl_null_access();
	r26 = r20->_32;
	r20 = r21->self;
	if( r20 == NULL ) hl_null_access();
	r27 = r20->_33;
	r28 = r12 - r24;
	r29 = r14 - r25;
	r30 = r22 - r26;
	r31 = r28 * r28;
	r33 = r29 * r29;
	r31 = r31 + r33;
	r33 = r30 * r30;
	r31 = r31 + r33;
	r32 = (double)r31;
	r32 = hl_math_sqrt(r32);
	r31 = (float)r32;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r33 = r13->distance_max;
	r32 = (double)r33;
	r35 = (double)r31;
	r32 = Math_min(r32,r35);
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r33 = r13->distance_reference;
	r35 = (double)r33;
	r32 = Math_max(r32,r35);
	r33 = (float)r32;
	r31 = r33;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r33 = r13->distance_reference;
	r32 = (double)r33;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r33 = r13->distance_reference;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r34 = r13->attenuation;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r37 = r13->distance_reference;
	r36 = r31 - r37;
	r34 = r34 * r36;
	r33 = r33 + r34;
	r35 = (double)r33;
	r32 = r32 / r35;
	r33 = (float)r32;
	r0->volume = r33;
	r33 = r0->volume;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r34 = r13->volume;
	r33 = r33 * r34;
	r0->volume = r33;
	goto label$7038637_5_130;
	label$7038637_5_126:
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->volume;
	r0->volume = r12;
	label$7038637_5_130:
	r12 = r0->volume;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r14 = r13->volume_max;
	if( !(r14 < r12) ) goto label$7038637_5_140;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->volume_max;
	r0->volume = r12;
	goto label$7038637_5_149;
	label$7038637_5_140:
	r12 = r0->volume;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r14 = r13->volume_min;
	if( !(r12 < r14) ) goto label$7038637_5_149;
	r13 = r0->data;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->volume_min;
	r0->volume = r12;
	label$7038637_5_149:
	r4 = 0;
	r5 = r0->channels;
	label$7038637_5_151:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$7038637_5_168;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$7038637_5_159;
	r9 = NULL;
	goto label$7038637_5_162;
	label$7038637_5_159:
	r10 = r5->array;
	r3 = ((vdynamic**)(r10 + 1))[r4];
	r9 = hl_to_virtual(&t$vrt_0135aa0,(vdynamic*)r3);
	label$7038637_5_162:
	++r4;
	if( r9 == NULL ) hl_null_access();
	r12 = r0->volume;
	r32 = (double)r12;
	if( hl_vfields(r9)[1] ) r32 = ((double (*)(vdynamic*,double))hl_vfields(r9)[1])(r9->value,r32); else {
		void *args[] = {&r32};
		vdynamic ret;
		hl_dyn_call_obj(r9->value,&t$fun_801b286,324548897/*set_volume*/,args,&ret);
		r32 = (double)ret.v.d;
	}
	goto label$7038637_5_151;
	label$7038637_5_168:
	return;
}

void iron_object_SpeakerObject_remove(iron__object__SpeakerObject r0) {
	hl__types__ArrayObj r5;
	bool r4;
	iron__$Scene r3;
	iron__Scene r2;
	iron_object_SpeakerObject_stop(r0);
	r3 = (iron__$Scene)g$_iron_Scene;
	r2 = r3->active;
	if( !r2 ) goto label$7038637_6_10;
	r3 = (iron__$Scene)g$_iron_Scene;
	r2 = r3->active;
	if( r2 == NULL ) hl_null_access();
	r5 = r2->speakers;
	if( r5 == NULL ) hl_null_access();
	r4 = hl_types_ArrayObj_remove(r5,((vdynamic*)r0));
	label$7038637_6_10:
	iron_object_Object_remove(((iron__object__Object)r0));
	return;
}

void iron_object_SpeakerObject_new(iron__object__SpeakerObject r0,iron__data__TSpeakerData r1) {
	String r11, r12;
	hl__types__ArrayObj r2;
	hl_type *r4;
	iron__$Scene r10;
	iron__Scene r9;
	bool r7;
	vclosure *r13;
	kha__Sound r6;
	int r5;
	varray *r3;
	r4 = &t$vrt_0135aa0;
	r5 = 0;
	r3 = hl_alloc_array(r4,r5);
	r2 = hl_types_ArrayObj_alloc(r3);
	r0->channels = r2;
	r6 = NULL;
	r0->sound = r6;
	r7 = false;
	r0->paused = r7;
	iron_object_Object_new(((iron__object__Object)r0));
	r0->data = r1;
	r10 = (iron__$Scene)g$_iron_Scene;
	r9 = r10->active;
	if( r9 == NULL ) hl_null_access();
	r2 = r9->speakers;
	if( r2 == NULL ) hl_null_access();
	r5 = hl_types_ArrayObj_push(r2,((vdynamic*)r0));
	if( r1 == NULL ) hl_null_access();
	r11 = r1->sound;
	r12 = (String)s$;
	if( r11 != r12 && (!r11 || !r12 || String___compare(r11,(vdynamic*)r12) != 0) ) goto label$7038637_7_22;
	return;
	label$7038637_7_22:
	r11 = r1->sound;
	r13 = hl_alloc_closure_ptr(&t$fun_b2538ac,iron_object_SpeakerObject_new__$1,r0);
	iron_data_Data_getSound(r11,r13);
	return;
}

