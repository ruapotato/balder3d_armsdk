﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/trait/internal/UniformsManager.h>
#include <iron/object/MeshObject.h>
extern iron__object__$MeshObject g$_iron_object_MeshObject;
bool Std_isOfType(vdynamic*,vdynamic*);
extern hl_type t$iron_object_MeshObject;
extern hl_type t$iron_object_Object;
bool armory_trait_internal_UniformsManager_registerShaderUniforms(iron__data__MaterialData);
#include <iron/Scene.h>
extern iron__$Scene g$_iron_Scene;
void armory_trait_internal_UniformsManager_removeObjectFromAllMaps(iron__object__Object);
#include <iron/object/Uniforms.h>
vdynamic* armory_trait_internal_UniformsManager_floatLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_f126611;
iron__math__Vec4 armory_trait_internal_UniformsManager_vec3Link(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_03d60de;
kha__Image armory_trait_internal_UniformsManager_textureLink(iron__object__Object,iron__data__MaterialData,String);
extern hl_type t$fun_620f373;
extern armory__trait__internal__$UniformsManager g$fad0d91;
extern iron__object__$Uniforms g$_iron_object_Uniforms;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
void armory_trait_internal_UniformsManager_setTextureValue(iron__data__MaterialData,iron__object__Object,String,kha__Image);
#include <iron/data/TShaderData.h>
#include <iron/data/ShaderData.h>
#include <iron/data/TShaderContext.h>
#include <iron/data/TShaderConstant.h>
#include <kha/arrays/ByteArrayPrivate.h>
bool haxe_ds_ObjectMap_exists(haxe__ds__ObjectMap,vdynamic*);
void haxe_ds_ObjectMap_set(haxe__ds__ObjectMap,vdynamic*,vdynamic*);
#include <hl/natives.h>
void armory_trait_internal_UniformsManager_setFloatValue(iron__data__MaterialData,iron__object__Object,String,vdynamic*);
extern hl_type t$iron_math_Vec4;
void iron_math_Vec4_new(iron__math__Vec4,float*,float*,float*,float*);
void armory_trait_internal_UniformsManager_setVec3Value(iron__data__MaterialData,iron__object__Object,String,iron__math__Vec4);
extern hl_type t$ctx_b780948;
extern hl_type t$fun_45f9ba1;
void iron_data_Data_getImage(String,vclosure*,bool*,String);
#include <haxe/ds/StringMap.h>
vdynamic* haxe_ds_ObjectMap_get(haxe__ds__ObjectMap,vdynamic*);
extern hl_type t$haxe_ds_ObjectMap;
void haxe_ds_ObjectMap_new(haxe__ds__ObjectMap);
extern hl_type t$haxe_ds_StringMap;
void haxe_ds_StringMap_new(haxe__ds__StringMap);
void haxe_ds_StringMap_set(haxe__ds__StringMap,String,vdynamic*);
vdynamic* armory_trait_internal_UniformsManager_getObjectFloatLink(iron__object__Object,iron__data__MaterialData,String);
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
iron__math__Vec4 armory_trait_internal_UniformsManager_getObjectVec3Link(iron__object__Object,iron__data__MaterialData,String);
kha__Image armory_trait_internal_UniformsManager_getObjectTextureLink(iron__object__Object,iron__data__MaterialData,String);
bool haxe_ds_ObjectMap_remove(haxe__ds__ObjectMap,vdynamic*);
bool haxe_ds_StringMap_remove(haxe__ds__StringMap,String);
vvirtual* haxe_ds_StringMap_keys(haxe__ds__StringMap);
extern hl_type t$fun_bf7849e;
vvirtual* haxe_ds_ObjectMap_keys(haxe__ds__ObjectMap);
extern hl_type t$vrt_2c38ff2;
extern hl_type t$fun_7b48b4f;
void iron_Trait_new(iron__Trait);
extern hl_type t$fun_24ae6eb;
void iron_Trait_notifyOnAdd(iron__Trait,vclosure*);
void iron_Trait_notifyOnRemove(iron__Trait,vclosure*);
void iron_Scene_notifyOnRemove(iron__Scene,vclosure*);

void armory_trait_internal_UniformsManager_init(armory__trait__internal__UniformsManager r0) {
	iron__object__$MeshObject r4;
	iron__object__MeshObject r6;
	hl__types__ArrayObj r5;
	bool r2, r12;
	iron__data__MaterialData r9;
	vdynamic *r10;
	iron__object__Object r3;
	varray *r11;
	int r7, r8;
	r3 = r0->object;
	r4 = (iron__object__$MeshObject)g$_iron_object_MeshObject;
	r2 = Std_isOfType(((vdynamic*)r3),((vdynamic*)r4));
	if( !r2 ) goto label$0eaff1e_1_26;
	r3 = r0->object;
	r6 = (iron__object__MeshObject)hl_dyn_castp(&r3,&t$iron_object_Object,&t$iron_object_MeshObject);
	if( r6 == NULL ) hl_null_access();
	r5 = r6->materials;
	r7 = 0;
	label$0eaff1e_1_9:
	if( r5 == NULL ) hl_null_access();
	r8 = r5->length;
	if( r7 >= r8 ) goto label$0eaff1e_1_26;
	r8 = r5->length;
	if( ((unsigned)r7) < ((unsigned)r8) ) goto label$0eaff1e_1_17;
	r9 = NULL;
	goto label$0eaff1e_1_20;
	label$0eaff1e_1_17:
	r11 = r5->array;
	r10 = ((vdynamic**)(r11 + 1))[r7];
	r9 = (iron__data__MaterialData)r10;
	label$0eaff1e_1_20:
	++r7;
	r2 = armory_trait_internal_UniformsManager_registerShaderUniforms(r9);
	if( !r2 ) goto label$0eaff1e_1_25;
	r12 = true;
	r0->uniformExists = r12;
	label$0eaff1e_1_25:
	goto label$0eaff1e_1_9;
	label$0eaff1e_1_26:
	return;
}

void armory_trait_internal_UniformsManager_removeScene() {
	iron__$Scene r3;
	iron__Scene r2;
	iron__object__Object r1;
	r3 = (iron__$Scene)g$_iron_Scene;
	r2 = r3->active;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->root;
	armory_trait_internal_UniformsManager_removeObjectFromAllMaps(r1);
	return;
}

void armory_trait_internal_UniformsManager_removeObject(armory__trait__internal__UniformsManager r0) {
	iron__object__Object r2;
	r2 = r0->object;
	armory_trait_internal_UniformsManager_removeObjectFromAllMaps(r2);
	return;
}

void armory_trait_internal_UniformsManager_register(int r0) {
	hl__types__ArrayObj r5;
	bool r3;
	iron__object__$Uniforms r6;
	armory__trait__internal__$UniformsManager r4;
	vclosure *r7, *r8, *r9;
	int r2;
	static vclosure cl$0 = { &t$fun_f126611, armory_trait_internal_UniformsManager_floatLink, 0 };
	static vclosure cl$1 = { &t$fun_03d60de, armory_trait_internal_UniformsManager_vec3Link, 0 };
	static vclosure cl$2 = { &t$fun_620f373, armory_trait_internal_UniformsManager_textureLink, 0 };
	switch(r0) {
		default:
			goto label$0eaff1e_4_37;
		case 0:
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r3 = r4->floatsRegistered;
			if( r3 ) goto label$0eaff1e_4_13;
			r3 = true;
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4->floatsRegistered = r3;
			r6 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
			r5 = r6->externalFloatLinks;
			if( r5 == NULL ) hl_null_access();
			r7 = &cl$0;
			r2 = hl_types_ArrayObj_push(r5,((vdynamic*)r7));
			label$0eaff1e_4_13:
			goto label$0eaff1e_4_37;
		case 1:
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r3 = r4->vectorsRegistered;
			if( r3 ) goto label$0eaff1e_4_25;
			r3 = true;
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4->vectorsRegistered = r3;
			r6 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
			r5 = r6->externalVec3Links;
			if( r5 == NULL ) hl_null_access();
			r8 = &cl$1;
			r2 = hl_types_ArrayObj_push(r5,((vdynamic*)r8));
			label$0eaff1e_4_25:
			goto label$0eaff1e_4_37;
		case 2:
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r3 = r4->texturesRegistered;
			if( r3 ) goto label$0eaff1e_4_37;
			r3 = true;
			r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4->texturesRegistered = r3;
			r6 = (iron__object__$Uniforms)g$_iron_object_Uniforms;
			r5 = r6->externalTextureLinks;
			if( r5 == NULL ) hl_null_access();
			r9 = &cl$2;
			r2 = hl_types_ArrayObj_push(r5,((vdynamic*)r9));
	}
	label$0eaff1e_4_37:
	return;
}

void armory_trait_internal_UniformsManager_registerShaderUniforms__$1(venum* r0,kha__Image r1) {
	String r5;
	iron__data__MaterialData r3;
	iron__data__TTextureUnit r6;
	iron__object__Object r4;
	r3 = ((Enumt$ctx_b780948*)r0)->p0;
	r4 = ((Enumt$ctx_b780948*)r0)->p2;
	r6 = ((Enumt$ctx_b780948*)r0)->p1;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->link;
	armory_trait_internal_UniformsManager_setTextureValue(r3,r4,r5,r1);
	return;
}

bool armory_trait_internal_UniformsManager_registerShaderUniforms(iron__data__MaterialData r0) {
	bool *r41;
	String r23, r27;
	kha__Image r38;
	haxe__ds__ObjectMap r4, r9;
	hl__types__ArrayObj r11, r16;
	venum *r40;
	iron__data__TShaderContext r17;
	iron__$Scene r8;
	iron__Scene r7;
	bool r1, r3;
	iron__math__Vec4 r28;
	iron__data__TShaderData r12;
	iron__data__TShaderConstant r21;
	kha__arrays__ByteArrayPrivate r33, r35, r36;
	armory__trait__internal__$UniformsManager r5;
	float r34;
	vclosure *r39;
	iron__data__ShaderData r13;
	iron__data__TTextureUnit r37;
	vdynamic *r18, *r22, *r26;
	iron__object__Object r6;
	float *r29, *r30, *r31, *r32;
	vbyte *r24, *r25;
	varray *r19;
	int r10, r14, r15, r20;
	r1 = false;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->floatsMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r3 = haxe_ds_ObjectMap_exists(r4,((vdynamic*)r6));
	if( r3 ) goto label$0eaff1e_6_19;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->floatsMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r9 = NULL;
	haxe_ds_ObjectMap_set(r4,((vdynamic*)r6),((vdynamic*)r9));
	label$0eaff1e_6_19:
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->vectorsMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r3 = haxe_ds_ObjectMap_exists(r4,((vdynamic*)r6));
	if( r3 ) goto label$0eaff1e_6_37;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->vectorsMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r9 = NULL;
	haxe_ds_ObjectMap_set(r4,((vdynamic*)r6),((vdynamic*)r9));
	label$0eaff1e_6_37:
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->texturesMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r3 = haxe_ds_ObjectMap_exists(r4,((vdynamic*)r6));
	if( r3 ) goto label$0eaff1e_6_55;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->texturesMap;
	if( r4 == NULL ) hl_null_access();
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r9 = NULL;
	haxe_ds_ObjectMap_set(r4,((vdynamic*)r6),((vdynamic*)r9));
	label$0eaff1e_6_55:
	r10 = 0;
	if( r0 == NULL ) hl_null_access();
	r13 = r0->shader;
	if( r13 == NULL ) hl_null_access();
	r12 = r13->raw;
	if( r12 == NULL ) hl_null_access();
	r11 = r12->contexts;
	label$0eaff1e_6_62:
	if( r11 == NULL ) hl_null_access();
	r15 = r11->length;
	if( r10 >= r15 ) goto label$0eaff1e_6_202;
	r15 = r11->length;
	if( ((unsigned)r10) < ((unsigned)r15) ) goto label$0eaff1e_6_70;
	r17 = NULL;
	goto label$0eaff1e_6_73;
	label$0eaff1e_6_70:
	r19 = r11->array;
	r18 = ((vdynamic**)(r19 + 1))[r10];
	r17 = (iron__data__TShaderContext)r18;
	label$0eaff1e_6_73:
	++r10;
	r14 = 0;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->constants;
	label$0eaff1e_6_77:
	if( r16 == NULL ) hl_null_access();
	r20 = r16->length;
	if( r14 >= r20 ) goto label$0eaff1e_6_158;
	r20 = r16->length;
	if( ((unsigned)r14) < ((unsigned)r20) ) goto label$0eaff1e_6_85;
	r21 = NULL;
	goto label$0eaff1e_6_88;
	label$0eaff1e_6_85:
	r19 = r16->array;
	r18 = ((vdynamic**)(r19 + 1))[r14];
	r21 = (iron__data__TShaderConstant)r18;
	label$0eaff1e_6_88:
	++r14;
	if( r21 == NULL ) hl_null_access();
	r22 = r21->is_arm_parameter;
	r3 = r22 ? r22->v.b : 0;
	if( !r3 ) goto label$0eaff1e_6_157;
	r3 = true;
	r1 = r3;
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r23 = r21->type;
	if( !r23 ) goto label$0eaff1e_6_109;
	r15 = r23->length;
	r20 = 5;
	if( r15 != r20 ) goto label$0eaff1e_6_109;
	r24 = r23->bytes;
	r25 = (vbyte*)USTR("float");
	r15 = hl_string_compare(r24,r25,r15);
	r20 = 0;
	if( r15 == r20 ) goto label$0eaff1e_6_119;
	label$0eaff1e_6_109:
	if( !r23 ) goto label$0eaff1e_6_118;
	r15 = r23->length;
	r20 = 4;
	if( r15 != r20 ) goto label$0eaff1e_6_118;
	r24 = r23->bytes;
	r25 = (vbyte*)USTR("vec3");
	r15 = hl_string_compare(r24,r25,r15);
	r20 = 0;
	if( r15 == r20 ) goto label$0eaff1e_6_125;
	label$0eaff1e_6_118:
	goto label$0eaff1e_6_157;
	label$0eaff1e_6_119:
	r23 = r21->link;
	r26 = r21->floatValue;
	armory_trait_internal_UniformsManager_setFloatValue(r0,r6,r23,r26);
	r15 = 0;
	armory_trait_internal_UniformsManager_register(r15);
	goto label$0eaff1e_6_157;
	label$0eaff1e_6_125:
	r28 = (iron__math__Vec4)hl_alloc_obj(&t$iron_math_Vec4);
	r29 = NULL;
	r30 = NULL;
	r31 = NULL;
	r32 = NULL;
	iron_math_Vec4_new(r28,r29,r30,r31,r32);
	r33 = r21->vec3Value;
	if( r33 == NULL ) hl_null_access();
	r24 = r33->self;
	r15 = r33->byteArrayOffset;
	r34 = hl_kinc_bytearray_getfloat32(r24,r15);
	r28->x = r34;
	r35 = r21->vec3Value;
	if( r35 == NULL ) hl_null_access();
	r24 = r35->self;
	r15 = r35->byteArrayOffset;
	r20 = 4;
	r15 = r15 + r20;
	r34 = hl_kinc_bytearray_getfloat32(r24,r15);
	r28->y = r34;
	r36 = r21->vec3Value;
	if( r36 == NULL ) hl_null_access();
	r24 = r36->self;
	r15 = r36->byteArrayOffset;
	r20 = 8;
	r15 = r15 + r20;
	r34 = hl_kinc_bytearray_getfloat32(r24,r15);
	r28->z = r34;
	r23 = r21->link;
	armory_trait_internal_UniformsManager_setVec3Value(r0,r6,r23,r28);
	r15 = 1;
	armory_trait_internal_UniformsManager_register(r15);
	label$0eaff1e_6_157:
	goto label$0eaff1e_6_77;
	label$0eaff1e_6_158:
	r14 = 0;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->texture_units;
	label$0eaff1e_6_161:
	if( r16 == NULL ) hl_null_access();
	r20 = r16->length;
	if( r14 >= r20 ) goto label$0eaff1e_6_201;
	r20 = r16->length;
	if( ((unsigned)r14) < ((unsigned)r20) ) goto label$0eaff1e_6_169;
	r37 = NULL;
	goto label$0eaff1e_6_172;
	label$0eaff1e_6_169:
	r19 = r16->array;
	r18 = ((vdynamic**)(r19 + 1))[r14];
	r37 = (iron__data__TTextureUnit)r18;
	label$0eaff1e_6_172:
	++r14;
	if( r37 == NULL ) hl_null_access();
	r22 = r37->is_arm_parameter;
	r3 = r22 ? r22->v.b : 0;
	if( !r3 ) goto label$0eaff1e_6_200;
	r3 = true;
	r1 = r3;
	r8 = (iron__$Scene)g$_iron_Scene;
	r7 = r8->active;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->root;
	r23 = r37->default_image_file;
	if( r23 ) goto label$0eaff1e_6_189;
	r23 = r37->link;
	r38 = NULL;
	armory_trait_internal_UniformsManager_setTextureValue(r0,r6,r23,r38);
	goto label$0eaff1e_6_198;
	label$0eaff1e_6_189:
	r23 = r37->default_image_file;
	r40 = hl_alloc_enum(&t$ctx_b780948,0);
	((Enumt$ctx_b780948*)r40)->p0 = (iron__data__MaterialData)r0;
	((Enumt$ctx_b780948*)r40)->p1 = (iron__data__TTextureUnit)r37;
	((Enumt$ctx_b780948*)r40)->p2 = (iron__object__Object)r6;
	r39 = hl_alloc_closure_ptr(&t$fun_45f9ba1,armory_trait_internal_UniformsManager_registerShaderUniforms__$1,r40);
	r41 = NULL;
	r27 = NULL;
	iron_data_Data_getImage(r23,r39,r41,r27);
	label$0eaff1e_6_198:
	r15 = 2;
	armory_trait_internal_UniformsManager_register(r15);
	label$0eaff1e_6_200:
	goto label$0eaff1e_6_161;
	label$0eaff1e_6_201:
	goto label$0eaff1e_6_62;
	label$0eaff1e_6_202:
	return r1;
}

void armory_trait_internal_UniformsManager_setFloatValue(iron__data__MaterialData r0,iron__object__Object r1,String r2,vdynamic* r3) {
	haxe__ds__ObjectMap r6, r8, r9;
	haxe__ds__StringMap r10, r11;
	armory__trait__internal__$UniformsManager r7;
	vdynamic *r5;
	if( !r1 ) goto label$0eaff1e_7_3;
	if( !r0 ) goto label$0eaff1e_7_3;
	if( r2 ) goto label$0eaff1e_7_4;
	label$0eaff1e_7_3:
	return;
	label$0eaff1e_7_4:
	r7 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r6 = r7->floatsMap;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r6,((vdynamic*)r1));
	r8 = (haxe__ds__ObjectMap)r5;
	if( r8 ) goto label$0eaff1e_7_14;
	r9 = (haxe__ds__ObjectMap)hl_alloc_obj(&t$haxe_ds_ObjectMap);
	haxe_ds_ObjectMap_new(r9);
	r8 = r9;
	haxe_ds_ObjectMap_set(r6,((vdynamic*)r1),((vdynamic*)r8));
	label$0eaff1e_7_14:
	if( r8 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r8,((vdynamic*)r0));
	r10 = (haxe__ds__StringMap)r5;
	if( r10 ) goto label$0eaff1e_7_22;
	r11 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r11);
	r10 = r11;
	haxe_ds_ObjectMap_set(r8,((vdynamic*)r0),((vdynamic*)r11));
	label$0eaff1e_7_22:
	if( r10 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r10,r2,((vdynamic*)r3));
	return;
}

void armory_trait_internal_UniformsManager_setVec3Value(iron__data__MaterialData r0,iron__object__Object r1,String r2,iron__math__Vec4 r3) {
	haxe__ds__ObjectMap r6, r8, r9;
	haxe__ds__StringMap r10, r11;
	armory__trait__internal__$UniformsManager r7;
	vdynamic *r5;
	if( !r1 ) goto label$0eaff1e_8_3;
	if( !r0 ) goto label$0eaff1e_8_3;
	if( r2 ) goto label$0eaff1e_8_4;
	label$0eaff1e_8_3:
	return;
	label$0eaff1e_8_4:
	r7 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r6 = r7->vectorsMap;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r6,((vdynamic*)r1));
	r8 = (haxe__ds__ObjectMap)r5;
	if( r8 ) goto label$0eaff1e_8_14;
	r9 = (haxe__ds__ObjectMap)hl_alloc_obj(&t$haxe_ds_ObjectMap);
	haxe_ds_ObjectMap_new(r9);
	r8 = r9;
	haxe_ds_ObjectMap_set(r6,((vdynamic*)r1),((vdynamic*)r8));
	label$0eaff1e_8_14:
	if( r8 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r8,((vdynamic*)r0));
	r10 = (haxe__ds__StringMap)r5;
	if( r10 ) goto label$0eaff1e_8_22;
	r11 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r11);
	r10 = r11;
	haxe_ds_ObjectMap_set(r8,((vdynamic*)r0),((vdynamic*)r11));
	label$0eaff1e_8_22:
	if( r10 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r10,r2,((vdynamic*)r3));
	return;
}

void armory_trait_internal_UniformsManager_setTextureValue(iron__data__MaterialData r0,iron__object__Object r1,String r2,kha__Image r3) {
	haxe__ds__ObjectMap r6, r8, r9;
	haxe__ds__StringMap r10, r11;
	armory__trait__internal__$UniformsManager r7;
	vdynamic *r5;
	if( !r1 ) goto label$0eaff1e_9_3;
	if( !r0 ) goto label$0eaff1e_9_3;
	if( r2 ) goto label$0eaff1e_9_4;
	label$0eaff1e_9_3:
	return;
	label$0eaff1e_9_4:
	r7 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r6 = r7->texturesMap;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r6,((vdynamic*)r1));
	r8 = (haxe__ds__ObjectMap)r5;
	if( r8 ) goto label$0eaff1e_9_14;
	r9 = (haxe__ds__ObjectMap)hl_alloc_obj(&t$haxe_ds_ObjectMap);
	haxe_ds_ObjectMap_new(r9);
	r8 = r9;
	haxe_ds_ObjectMap_set(r6,((vdynamic*)r1),((vdynamic*)r8));
	label$0eaff1e_9_14:
	if( r8 == NULL ) hl_null_access();
	r5 = haxe_ds_ObjectMap_get(r8,((vdynamic*)r0));
	r10 = (haxe__ds__StringMap)r5;
	if( r10 ) goto label$0eaff1e_9_22;
	r11 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r11);
	r10 = r11;
	haxe_ds_ObjectMap_set(r8,((vdynamic*)r0),((vdynamic*)r11));
	label$0eaff1e_9_22:
	if( r10 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r10,r2,((vdynamic*)r3));
	return;
}

vdynamic* armory_trait_internal_UniformsManager_floatLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	iron__$Scene r7;
	iron__Scene r6;
	vdynamic *r4, *r5;
	iron__object__Object r3;
	if( !r0 ) goto label$0eaff1e_10_2;
	if( r1 ) goto label$0eaff1e_10_4;
	label$0eaff1e_10_2:
	r4 = NULL;
	return r4;
	label$0eaff1e_10_4:
	r4 = armory_trait_internal_UniformsManager_getObjectFloatLink(r0,r1,r2);
	if( r4 ) goto label$0eaff1e_10_12;
	r7 = (iron__$Scene)g$_iron_Scene;
	r6 = r7->active;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->root;
	r5 = armory_trait_internal_UniformsManager_getObjectFloatLink(r3,r1,r2);
	r4 = r5;
	label$0eaff1e_10_12:
	return r4;
}

vdynamic* armory_trait_internal_UniformsManager_getObjectFloatLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	haxe__ds__ObjectMap r4;
	haxe__ds__StringMap r7;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3, *r6;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->floatsMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_11_8;
	r6 = NULL;
	return r6;
	label$0eaff1e_11_8:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r7 = (haxe__ds__StringMap)r3;
	if( r7 ) goto label$0eaff1e_11_14;
	r6 = NULL;
	return r6;
	label$0eaff1e_11_14:
	if( r7 == NULL ) hl_null_access();
	r3 = haxe_ds_StringMap_get(r7,r2);
	r6 = (vdynamic*)r3;
	return r6;
}

iron__math__Vec4 armory_trait_internal_UniformsManager_vec3Link(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	iron__$Scene r7;
	iron__Scene r6;
	iron__math__Vec4 r4, r5;
	iron__object__Object r3;
	if( !r0 ) goto label$0eaff1e_12_2;
	if( r1 ) goto label$0eaff1e_12_4;
	label$0eaff1e_12_2:
	r4 = NULL;
	return r4;
	label$0eaff1e_12_4:
	r4 = armory_trait_internal_UniformsManager_getObjectVec3Link(r0,r1,r2);
	if( r4 ) goto label$0eaff1e_12_12;
	r7 = (iron__$Scene)g$_iron_Scene;
	r6 = r7->active;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->root;
	r5 = armory_trait_internal_UniformsManager_getObjectVec3Link(r3,r1,r2);
	r4 = r5;
	label$0eaff1e_12_12:
	return r4;
}

iron__math__Vec4 armory_trait_internal_UniformsManager_getObjectVec3Link(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	haxe__ds__ObjectMap r4;
	haxe__ds__StringMap r7;
	iron__math__Vec4 r6;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->vectorsMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_13_8;
	r6 = NULL;
	return r6;
	label$0eaff1e_13_8:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r7 = (haxe__ds__StringMap)r3;
	if( r7 ) goto label$0eaff1e_13_14;
	r6 = NULL;
	return r6;
	label$0eaff1e_13_14:
	if( r7 == NULL ) hl_null_access();
	r3 = haxe_ds_StringMap_get(r7,r2);
	r6 = (iron__math__Vec4)r3;
	return r6;
}

kha__Image armory_trait_internal_UniformsManager_textureLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	kha__Image r4, r5;
	iron__$Scene r7;
	iron__Scene r6;
	iron__object__Object r3;
	if( !r0 ) goto label$0eaff1e_14_2;
	if( r1 ) goto label$0eaff1e_14_4;
	label$0eaff1e_14_2:
	r4 = NULL;
	return r4;
	label$0eaff1e_14_4:
	r4 = armory_trait_internal_UniformsManager_getObjectTextureLink(r0,r1,r2);
	if( r4 ) goto label$0eaff1e_14_12;
	r7 = (iron__$Scene)g$_iron_Scene;
	r6 = r7->active;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->root;
	r5 = armory_trait_internal_UniformsManager_getObjectTextureLink(r3,r1,r2);
	r4 = r5;
	label$0eaff1e_14_12:
	return r4;
}

kha__Image armory_trait_internal_UniformsManager_getObjectTextureLink(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	kha__Image r6;
	haxe__ds__ObjectMap r4;
	haxe__ds__StringMap r7;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->texturesMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_15_8;
	r6 = NULL;
	return r6;
	label$0eaff1e_15_8:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r7 = (haxe__ds__StringMap)r3;
	if( r7 ) goto label$0eaff1e_15_14;
	r6 = NULL;
	return r6;
	label$0eaff1e_15_14:
	if( r7 == NULL ) hl_null_access();
	r3 = haxe_ds_StringMap_get(r7,r2);
	r6 = (kha__Image)r3;
	return r6;
}

haxe__ds__ObjectMap armory_trait_internal_UniformsManager_getFloatsMap() {
	haxe__ds__ObjectMap r0;
	armory__trait__internal__$UniformsManager r1;
	r1 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r0 = r1->floatsMap;
	return r0;
}

haxe__ds__ObjectMap armory_trait_internal_UniformsManager_getVectorsMap() {
	haxe__ds__ObjectMap r0;
	armory__trait__internal__$UniformsManager r1;
	r1 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r0 = r1->vectorsMap;
	return r0;
}

haxe__ds__ObjectMap armory_trait_internal_UniformsManager_getTexturesMap() {
	haxe__ds__ObjectMap r0;
	armory__trait__internal__$UniformsManager r1;
	r1 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r0 = r1->texturesMap;
	return r0;
}

void armory_trait_internal_UniformsManager_removeObjectFromAllMaps(iron__object__Object r0) {
	haxe__ds__ObjectMap r2;
	bool r1;
	armory__trait__internal__$UniformsManager r3;
	r3 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r2 = r3->floatsMap;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_ds_ObjectMap_remove(r2,((vdynamic*)r0));
	r3 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r2 = r3->vectorsMap;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_ds_ObjectMap_remove(r2,((vdynamic*)r0));
	r3 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r2 = r3->texturesMap;
	if( r2 == NULL ) hl_null_access();
	r1 = haxe_ds_ObjectMap_remove(r2,((vdynamic*)r0));
	return;
}

void armory_trait_internal_UniformsManager_removeObjectFromMap(iron__object__Object r0,int r1) {
	haxe__ds__ObjectMap r4;
	bool r3;
	armory__trait__internal__$UniformsManager r5;
	switch(r1) {
		default:
			goto label$0eaff1e_20_16;
		case 0:
			r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4 = r5->floatsMap;
			if( r4 == NULL ) hl_null_access();
			r3 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r0));
			goto label$0eaff1e_20_16;
		case 1:
			r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4 = r5->vectorsMap;
			if( r4 == NULL ) hl_null_access();
			r3 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r0));
			goto label$0eaff1e_20_16;
		case 2:
			r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
			r4 = r5->texturesMap;
			if( r4 == NULL ) hl_null_access();
			r3 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r0));
	}
	label$0eaff1e_20_16:
	return;
}

void armory_trait_internal_UniformsManager_removeFloatValue(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	haxe__ds__ObjectMap r4, r7;
	vvirtual *r10, *r11, *r12;
	haxe__ds__StringMap r8;
	bool r9;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->floatsMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_21_7;
	return;
	label$0eaff1e_21_7:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r8 = (haxe__ds__StringMap)r3;
	if( r8 ) goto label$0eaff1e_21_12;
	return;
	label$0eaff1e_21_12:
	if( r8 == NULL ) hl_null_access();
	r9 = haxe_ds_StringMap_remove(r8,r2);
	r10 = haxe_ds_StringMap_keys(r8);
	if( r10 == NULL ) hl_null_access();
	if( hl_vfields(r10)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r10)[0])(r10->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r10->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_21_19;
	r9 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r1));
	label$0eaff1e_21_19:
	r11 = haxe_ds_ObjectMap_keys(r4);
	r12 = hl_to_virtual(&t$vrt_2c38ff2,(vdynamic*)r11);
	if( r12 == NULL ) hl_null_access();
	if( hl_vfields(r12)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r12)[0])(r12->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r12->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_21_28;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r7 = r5->floatsMap;
	if( r7 == NULL ) hl_null_access();
	r9 = haxe_ds_ObjectMap_remove(r7,((vdynamic*)r0));
	label$0eaff1e_21_28:
	return;
}

void armory_trait_internal_UniformsManager_removeVectorValue(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	haxe__ds__ObjectMap r4, r7;
	vvirtual *r10, *r11, *r12;
	haxe__ds__StringMap r8;
	bool r9;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->vectorsMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_22_7;
	return;
	label$0eaff1e_22_7:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r8 = (haxe__ds__StringMap)r3;
	if( r8 ) goto label$0eaff1e_22_12;
	return;
	label$0eaff1e_22_12:
	if( r8 == NULL ) hl_null_access();
	r9 = haxe_ds_StringMap_remove(r8,r2);
	r10 = haxe_ds_StringMap_keys(r8);
	if( r10 == NULL ) hl_null_access();
	if( hl_vfields(r10)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r10)[0])(r10->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r10->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_22_19;
	r9 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r1));
	label$0eaff1e_22_19:
	r11 = haxe_ds_ObjectMap_keys(r4);
	r12 = hl_to_virtual(&t$vrt_2c38ff2,(vdynamic*)r11);
	if( r12 == NULL ) hl_null_access();
	if( hl_vfields(r12)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r12)[0])(r12->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r12->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_22_28;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r7 = r5->vectorsMap;
	if( r7 == NULL ) hl_null_access();
	r9 = haxe_ds_ObjectMap_remove(r7,((vdynamic*)r0));
	label$0eaff1e_22_28:
	return;
}

void armory_trait_internal_UniformsManager_removeTextureValue(iron__object__Object r0,iron__data__MaterialData r1,String r2) {
	haxe__ds__ObjectMap r4, r7;
	vvirtual *r10, *r11, *r12;
	haxe__ds__StringMap r8;
	bool r9;
	armory__trait__internal__$UniformsManager r5;
	vdynamic *r3;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r4 = r5->texturesMap;
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r0));
	r4 = (haxe__ds__ObjectMap)r3;
	if( r4 ) goto label$0eaff1e_23_7;
	return;
	label$0eaff1e_23_7:
	if( r4 == NULL ) hl_null_access();
	r3 = haxe_ds_ObjectMap_get(r4,((vdynamic*)r1));
	r8 = (haxe__ds__StringMap)r3;
	if( r8 ) goto label$0eaff1e_23_12;
	return;
	label$0eaff1e_23_12:
	if( r8 == NULL ) hl_null_access();
	r9 = haxe_ds_StringMap_remove(r8,r2);
	r10 = haxe_ds_StringMap_keys(r8);
	if( r10 == NULL ) hl_null_access();
	if( hl_vfields(r10)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r10)[0])(r10->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r10->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_23_19;
	r9 = haxe_ds_ObjectMap_remove(r4,((vdynamic*)r1));
	label$0eaff1e_23_19:
	r11 = haxe_ds_ObjectMap_keys(r4);
	r12 = hl_to_virtual(&t$vrt_2c38ff2,(vdynamic*)r11);
	if( r12 == NULL ) hl_null_access();
	if( hl_vfields(r12)[0] ) r9 = ((bool (*)(vdynamic*))hl_vfields(r12)[0])(r12->value); else {
		vdynamic ret;
		hl_dyn_call_obj(r12->value,&t$fun_bf7849e,407283053/*hasNext*/,NULL,&ret);
		r9 = (bool)ret.v.i;
	}
	if( r9 ) goto label$0eaff1e_23_28;
	r5 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r7 = r5->texturesMap;
	if( r7 == NULL ) hl_null_access();
	r9 = haxe_ds_ObjectMap_remove(r7,((vdynamic*)r0));
	label$0eaff1e_23_28:
	return;
}

void armory_trait_internal_UniformsManager_new(armory__trait__internal__UniformsManager r0) {
	iron__$Scene r6;
	iron__Scene r5;
	bool r1;
	armory__trait__internal__$UniformsManager r4;
	vclosure *r3;
	static vclosure cl$0 = { &t$fun_7b48b4f, armory_trait_internal_UniformsManager_removeScene, 0 };
	r1 = false;
	r0->uniformExists = r1;
	iron_Trait_new(((iron__Trait)r0));
	r3 = hl_alloc_closure_ptr(&t$fun_24ae6eb,armory_trait_internal_UniformsManager_init,r0);
	iron_Trait_notifyOnAdd(((iron__Trait)r0),r3);
	r3 = hl_alloc_closure_ptr(&t$fun_24ae6eb,armory_trait_internal_UniformsManager_removeObject,r0);
	iron_Trait_notifyOnRemove(((iron__Trait)r0),r3);
	r4 = (armory__trait__internal__$UniformsManager)g$fad0d91;
	r1 = r4->sceneRemoveInitalized;
	if( r1 ) goto label$0eaff1e_24_15;
	r6 = (iron__$Scene)g$_iron_Scene;
	r5 = r6->active;
	if( r5 == NULL ) hl_null_access();
	r3 = &cl$0;
	iron_Scene_notifyOnRemove(r5,r3);
	label$0eaff1e_24_15:
	return;
}

