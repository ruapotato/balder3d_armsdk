﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/vorbis/data/Comment.h>
extern hl_type t$haxe_ds_StringMap;
void haxe_ds_StringMap_new(haxe__ds__StringMap);
#include <hl/types/ArrayObj.h>
String String_toLowerCase(String);
bool haxe_ds_StringMap_exists(haxe__ds__StringMap,String);
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$_dyn;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$String;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void haxe_ds_StringMap_set(haxe__ds__StringMap,String,vdynamic*);

void kha_audio2_ogg_vorbis_data_Comment_new(kha__audio2__ogg__vorbis__data__Comment r0) {
	haxe__ds__StringMap r1;
	r1 = (haxe__ds__StringMap)hl_alloc_obj(&t$haxe_ds_StringMap);
	haxe_ds_StringMap_new(r1);
	r0->data = r1;
	return;
}

void kha_audio2_ogg_vorbis_data_Comment_add(kha__audio2__ogg__vorbis__data__Comment r0,String r1,String r2) {
	String r3;
	hl__types__ArrayObj r9;
	haxe__ds__StringMap r6;
	hl_type *r11;
	bool r5;
	vdynamic *r8;
	varray *r10;
	int r7;
	if( r1 == NULL ) hl_null_access();
	r3 = String_toLowerCase(r1);
	r1 = r3;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r5 = haxe_ds_StringMap_exists(r6,r3);
	if( !r5 ) goto label$8239b37_2_14;
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	r8 = haxe_ds_StringMap_get(r6,r3);
	r9 = (hl__types__ArrayObj)hl_dyn_castp(&r8,&t$_dyn,&t$hl_types_ArrayObj);
	if( r9 == NULL ) hl_null_access();
	r7 = hl_types_ArrayObj_push(r9,((vdynamic*)r2));
	goto label$8239b37_2_23;
	label$8239b37_2_14:
	r11 = &t$String;
	r7 = 1;
	r10 = hl_alloc_array(r11,r7);
	r7 = 0;
	((String*)(r10 + 1))[r7] = r2;
	r9 = hl_types_ArrayObj_alloc(r10);
	r6 = r0->data;
	if( r6 == NULL ) hl_null_access();
	haxe_ds_StringMap_set(r6,r1,((vdynamic*)r9));
	label$8239b37_2_23:
	return;
}

