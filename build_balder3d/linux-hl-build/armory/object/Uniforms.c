﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/object/Uniforms.h>
#include <hl/types/ArrayObj.h>
#include <iron/object/Uniforms.h>
kha__Image armory_object_Uniforms_textureLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_620f373;
iron__math__Vec4 armory_object_Uniforms_vec2Link(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_03d60de;
iron__math__Vec4 armory_object_Uniforms_vec3Link(iron__object__Object,iron__data__MaterialData,String);
vdynamic* armory_object_Uniforms_floatLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_f126611;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern iron__object__$Uniforms g$_iron_object_Uniforms;
extern hl_type t$fun_dd25f4d;
#include <iron/object/MorphTarget.h>
#include <iron/object/MeshObject.h>
#include <armory/renderpath/NishitaData.h>
#include <armory/renderpath/Nishita.h>
#include <iron/data/WorldData.h>
#include <iron/Scene.h>
#include <haxe/ds/StringMap.h>
#include <iron/RenderPath.h>
#include <iron/RenderTarget.h>
extern hl_type t$iron_object_MeshObject;
extern hl_type t$iron_object_Object;
extern armory__renderpath__$Nishita g$_armory_renderpath_Nishita;
extern iron__$Scene g$_iron_Scene;
void armory_renderpath_Nishita_recompute(iron__data__WorldData);
extern iron__$RenderPath g$_iron_RenderPath;
extern String s$_depth;
bool StringTools_endsWith(String,String);
extern hl_type t$_i32;
String String_substr(String,int,vdynamic*);
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
#include <kha/arrays/ByteArrayPrivate.h>
#include <iron/data/TWorldData.h>
extern String s$_nishitaDensity;
int String___compare(String,vdynamic*);

void armory_object_Uniforms_register() {
	hl__types__ArrayObj r0;
	hl_type *r2;
	iron__object__$Uniforms r5;
	vclosure *r4, *r6, *r7;
	int r3;
	varray *r1;
	static vclosure cl$0 = { &t$fun_620f373, armory_object_Uniforms_textureLink, 0 };
	static vclosure cl$1 = { &t$fun_03d60de, armory_object_Uniforms_vec2Link, 0 };
	static vclosure cl$2 = { &t$fun_03d60de, armory_object_Uniforms_vec3Link, 0 };
	static vclosure cl$3 = { &t$fun_f126611, armory_object_Uniforms_floatLink, 0 };
	r2 = &t$fun_620f373;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r4 = &cl$0;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r4;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalTextureLinks = r0;
	r2 = &t$fun_03d60de;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r6 = &cl$1;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r6;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalVec2Links = r0;
	r2 = &t$fun_03d60de;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r6 = &cl$2;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r6;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalVec3Links = r0;
	r2 = &t$fun_03d60de;
	r3 = 0;
	r1 = hl_alloc_array(r2,r3);
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalVec4Links = r0;
	r2 = &t$fun_f126611;
	r3 = 1;
	r1 = hl_alloc_array(r2,r3);
	r7 = &cl$3;
	r3 = 0;
	((vclosure**)(r1 + 1))[r3] = r7;
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalFloatLinks = r0;
	r2 = &t$fun_dd25f4d;
	r3 = 0;
	r1 = hl_alloc_array(r2,r3);
	r0 = hl_types_ArrayObj_alloc(r1);
	r5 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r5->externalIntLinks = r0;
	return;
}

kha__Image armory_object_Uniforms_textureLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	iron__$RenderPath r20;
	String r4, r22;
	iron__object__MeshObject r11;
	kha__Image r9;
	haxe__ds__StringMap r18;
	bool r21;
	iron__$Scene r17;
	iron__Scene r16;
	iron__RenderTarget r25;
	armory__renderpath__$Nishita r14;
	iron__object__MorphTarget r10;
	iron__data__WorldData r15;
	armory__renderpath__NishitaData r13;
	vdynamic *r12, *r24;
	iron__RenderPath r19;
	vbyte *r7, *r8;
	int r5, r6, r23;
	if( !r2 ) goto label$35fef05_2_9;
	r5 = r2->length;
	r6 = 13;
	if( r5 != r6 ) goto label$35fef05_2_9;
	r7 = r2->bytes;
	r8 = (vbyte*)USTR("_morphDataNor");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$35fef05_2_28;
	label$35fef05_2_9:
	if( !r2 ) goto label$35fef05_2_18;
	r5 = r2->length;
	r6 = 13;
	if( r5 != r6 ) goto label$35fef05_2_18;
	r7 = r2->bytes;
	r8 = (vbyte*)USTR("_morphDataPos");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$35fef05_2_34;
	label$35fef05_2_18:
	if( !r2 ) goto label$35fef05_2_27;
	r5 = r2->length;
	r6 = 11;
	if( r5 != r6 ) goto label$35fef05_2_27;
	r7 = r2->bytes;
	r8 = (vbyte*)USTR("_nishitaLUT");
	r5 = hl_string_compare(r7,r8,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$35fef05_2_40;
	label$35fef05_2_27:
	goto label$35fef05_2_53;
	label$35fef05_2_28:
	r11 = (iron__object__MeshObject)hl_dyn_castp(&r0,&t$iron_object_Object,&t$iron_object_MeshObject);
	if( r11 == NULL ) hl_null_access();
	r10 = r11->morphTarget;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->morphDataNor;
	return r9;
	label$35fef05_2_34:
	r11 = (iron__object__MeshObject)hl_dyn_castp(&r0,&t$iron_object_Object,&t$iron_object_MeshObject);
	if( r11 == NULL ) hl_null_access();
	r10 = r11->morphTarget;
	if( r10 == NULL ) hl_null_access();
	r9 = r10->morphDataPos;
	return r9;
	label$35fef05_2_40:
	r14 = (armory__renderpath__$Nishita)g$_armory_renderpath_Nishita;
	r13 = r14->data;
	if( r13 ) goto label$35fef05_2_48;
	r17 = (iron__$Scene)g$_iron_Scene;
	r16 = r17->active;
	if( r16 == NULL ) hl_null_access();
	r15 = r16->world;
	armory_renderpath_Nishita_recompute(r15);
	label$35fef05_2_48:
	r14 = (armory__renderpath__$Nishita)g$_armory_renderpath_Nishita;
	r13 = r14->data;
	if( r13 == NULL ) hl_null_access();
	r9 = r13->lut;
	return r9;
	label$35fef05_2_53:
	r20 = (iron__$RenderPath)g$_iron_RenderPath;
	r19 = r20->active;
	if( r19 == NULL ) hl_null_access();
	r18 = r19->renderTargets;
	if( r18 == NULL ) hl_null_access();
	r22 = (String)s$_depth;
	r21 = StringTools_endsWith(r2,r22);
	if( !r21 ) goto label$35fef05_2_69;
	if( r2 == NULL ) hl_null_access();
	r5 = 0;
	r6 = r2->length;
	r23 = 6;
	r6 = r6 - r23;
	r24 = hl_alloc_dynamic(&t$_i32);
	r24->v.i = r6;
	r4 = String_substr(r2,r5,r24);
	goto label$35fef05_2_70;
	label$35fef05_2_69:
	r4 = r2;
	label$35fef05_2_70:
	r12 = haxe_ds_StringMap_get(r18,r4);
	r25 = (iron__RenderTarget)r12;
	if( !r25 ) goto label$35fef05_2_76;
	if( r25 == NULL ) hl_null_access();
	r9 = r25->image;
	return r9;
	label$35fef05_2_76:
	r9 = NULL;
	return r9;
}

iron__math__Vec4 armory_object_Uniforms_vec3Link(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	iron__math__Vec4 r3;
	r3 = NULL;
	return r3;
}

iron__math__Vec4 armory_object_Uniforms_vec2Link(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	String r4;
	iron__$Scene r7;
	iron__Scene r6;
	iron__object__$Uniforms r9;
	iron__math__Vec4 r3, r8;
	iron__data__TWorldData r11;
	kha__arrays__ByteArrayPrivate r10, r14;
	float r12;
	iron__data__WorldData r5;
	int r15, r16;
	vbyte *r13;
	r3 = NULL;
	r4 = (String)s$_nishitaDensity;
	if( r2 != r4 && (!r2 || !r4 || String___compare(r2,(vdynamic*)r4) != 0) ) goto label$35fef05_4_31;
	r7 = (iron__$Scene)g$_iron_Scene;
	r6 = r7->active;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->world;
	if( !r5 ) goto label$35fef05_4_31;
	r9 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
	r8 = r9->helpVec;
	r3 = r8;
	if( r5 == NULL ) hl_null_access();
	r11 = r5->raw;
	if( r11 == NULL ) hl_null_access();
	r10 = r11->nishita_density;
	if( r8 == NULL ) hl_null_access();
	if( r10 == NULL ) hl_null_access();
	r13 = r10->self;
	r15 = r10->byteArrayOffset;
	r12 = hl_kinc_bytearray_getfloat32(r13,r15);
	r8->x = r12;
	r11 = r5->raw;
	if( r11 == NULL ) hl_null_access();
	r14 = r11->nishita_density;
	if( r14 == NULL ) hl_null_access();
	r13 = r14->self;
	r15 = r14->byteArrayOffset;
	r16 = 4;
	r15 = r15 + r16;
	r12 = hl_kinc_bytearray_getfloat32(r13,r15);
	r8->y = r12;
	label$35fef05_4_31:
	return r3;
}

vdynamic* armory_object_Uniforms_floatLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	vdynamic *r3;
	r3 = NULL;
	return r3;
}

