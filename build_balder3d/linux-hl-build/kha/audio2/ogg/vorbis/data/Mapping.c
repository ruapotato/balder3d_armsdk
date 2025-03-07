﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/vorbis/data/Mapping.h>
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#include <hl/types/ArrayDyn.h>
#include <kha/audio2/ogg/vorbis/data/MappingChannel.h>
extern hl_type t$kha_audio2_ogg_vorbis_data_Mapping;
int kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(kha__audio2__ogg__vorbis__VorbisDecodeState,int);
extern hl_type t$kha_audio2_ogg_vorbis_data_ReaderError;
extern venum* g$b94286b;
extern String s$mapping_type_;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
String String___add__(String,String);
extern hl_type t$vrt_329ffa8;
extern String s$4ee2612;
extern hl_type t$String;
extern hl_type t$_i32;
extern String s$59af661;
extern String s$read;
extern hl_type t$vrt_eaa6a3b;
void kha_audio2_ogg_vorbis_data_ReaderError_new(kha__audio2__ogg__vorbis__data__ReaderError,venum*,String,vvirtual*);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$kha_audio2_ogg_vorbis_data_MappingChannel;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$_dyn;
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
void kha_audio2_ogg_vorbis_data_MappingChannel_new(kha__audio2__ogg__vorbis__data__MappingChannel);
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);
#include <hl/types/ArrayBytes_Float.h>
#include <kha/audio2/ogg/vorbis/data/Floor.h>
#include <kha/audio2/ogg/vorbis/data/Floor1.h>
#include <kha/audio2/ogg/vorbis/VorbisTools.h>
extern venum* g$d3e38e8;
extern String s$doFloor;
void kha_audio2_ogg_vorbis_VorbisTools_drawLine(hl__types__ArrayBytes_Float,int,int,int,int,int);
void hl_types_ArrayBytes_Float___expand(hl__types__ArrayBytes_Float,int);
extern kha__audio2__ogg__vorbis__$VorbisTools g$84d8ab9;

void kha_audio2_ogg_vorbis_data_Mapping_new(kha__audio2__ogg__vorbis__data__Mapping r0) {
	return;
}

kha__audio2__ogg__vorbis__data__Mapping kha_audio2_ogg_vorbis_data_Mapping_read(kha__audio2__ogg__vorbis__VorbisDecodeState r0,int r1) {
	String r10, r13;
	hl__types__ArrayObj r16, r19;
	vvirtual *r14, *r15;
	hl_type *r18;
	venum *r9;
	kha__audio2__ogg__vorbis__data__MappingChannel r20;
	hl__types__ArrayBytes_Int r24, r27, r29;
	kha__audio2__ogg__vorbis__data__ReaderError r8;
	int *r11;
	vdynamic *r7;
	kha__audio2__ogg__vorbis__data__Mapping r2;
	varray *r17;
	vbyte *r12;
	int r4, r5, r6, r21, r22, r23, r25, r26, r28;
	r2 = (kha__audio2__ogg__vorbis__data__Mapping)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_Mapping);
	kha_audio2_ogg_vorbis_data_Mapping_new(r2);
	if( r0 == NULL ) hl_null_access();
	r4 = 16;
	r4 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r4);
	r6 = 0;
	if( r4 == r6 ) goto label$4749c2b_2_28;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = (String)s$mapping_type_;
	r5 = r4;
	r11 = &r5;
	r12 = hl_itos(r5,r11);
	r13 = String___alloc__(r12,r5);
	r10 = String___add__(r10,r13);
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r5 = 22;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r5; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r5);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_28:
	r18 = &t$kha_audio2_ogg_vorbis_data_MappingChannel;
	r5 = 0;
	r17 = hl_alloc_array(r18,r5);
	r16 = hl_types_ArrayObj_alloc(r17);
	r6 = 0;
	if( r6 >= r1 ) goto label$4749c2b_2_44;
	if( r16 == NULL ) hl_null_access();
	r6 = 1;
	r5 = r1 - r6;
	r7 = NULL;
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)hl_dyn_castp(&r7,&t$_dyn,&t$kha_audio2_ogg_vorbis_data_MappingChannel);
	r6 = r16->length;
	if( ((unsigned)r5) < ((unsigned)r6) ) goto label$4749c2b_2_42;
	hl_types_ArrayObj___expand(r16,r5);
	label$4749c2b_2_42:
	r17 = r16->array;
	((kha__audio2__ogg__vorbis__data__MappingChannel*)(r17 + 1))[r5] = r20;
	label$4749c2b_2_44:
	r2->chan = r16;
	r5 = 0;
	r6 = r1;
	label$4749c2b_2_47:
	if( r5 >= r6 ) goto label$4749c2b_2_62;
	r21 = r5;
	++r5;
	if( r2 == NULL ) hl_null_access();
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_MappingChannel);
	kha_audio2_ogg_vorbis_data_MappingChannel_new(r20);
	r23 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$4749c2b_2_59;
	hl_types_ArrayObj___expand(r19,r21);
	label$4749c2b_2_59:
	r17 = r19->array;
	((kha__audio2__ogg__vorbis__data__MappingChannel*)(r17 + 1))[r21] = r20;
	goto label$4749c2b_2_47;
	label$4749c2b_2_62:
	if( r0 == NULL ) hl_null_access();
	r5 = 1;
	r5 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$4749c2b_2_74;
	if( r2 == NULL ) hl_null_access();
	r5 = 4;
	r5 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r5);
	r6 = 1;
	r5 = r5 + r6;
	r2->submaps = r5;
	goto label$4749c2b_2_77;
	label$4749c2b_2_74:
	if( r2 == NULL ) hl_null_access();
	r5 = 1;
	r2->submaps = r5;
	label$4749c2b_2_77:
	r5 = 1;
	r5 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$4749c2b_2_607;
	r5 = 8;
	r5 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r5);
	r6 = 1;
	r5 = r5 + r6;
	r2->couplingSteps = r5;
	r5 = 0;
	r6 = r2->couplingSteps;
	label$4749c2b_2_88:
	if( r5 >= r6 ) goto label$4749c2b_2_606;
	r21 = r5;
	++r5;
	r23 = 1;
	r22 = r1 - r23;
	r23 = 64;
	r12 = hl_alloc_bytes(r23);
	r23 = 0;
	r25 = 0;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 1;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 2;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 2;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 3;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 3;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 3;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 3;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r25 = 4;
	r26 = 2;
	r26 = r23 << r26;
	*(int*)(r12 + r26) = r25;
	++r23;
	r23 = 16;
	r24 = hl_types_ArrayBase_allocI32(r12,r23);
	if( r2 == NULL ) hl_null_access();
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r25 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r25) ) goto label$4749c2b_2_186;
	r20 = NULL;
	goto label$4749c2b_2_189;
	label$4749c2b_2_186:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_189:
	if( r20 == NULL ) hl_null_access();
	if( r0 == NULL ) hl_null_access();
	r25 = 16384;
	if( r22 >= r25 ) goto label$4749c2b_2_235;
	r25 = 16;
	if( r22 >= r25 ) goto label$4749c2b_2_205;
	if( r24 == NULL ) hl_null_access();
	r25 = r24->length;
	if( ((unsigned)r22) < ((unsigned)r25) ) goto label$4749c2b_2_200;
	r23 = 0;
	goto label$4749c2b_2_204;
	label$4749c2b_2_200:
	r12 = r24->bytes;
	r25 = 2;
	r25 = r22 << r25;
	r23 = *(int*)(r12 + r25);
	label$4749c2b_2_204:
	goto label$4749c2b_2_234;
	label$4749c2b_2_205:
	r25 = 512;
	if( r22 >= r25 ) goto label$4749c2b_2_221;
	r23 = 5;
	if( r24 == NULL ) hl_null_access();
	r26 = 5;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_215;
	r25 = 0;
	goto label$4749c2b_2_219;
	label$4749c2b_2_215:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_219:
	r23 = r23 + r25;
	goto label$4749c2b_2_234;
	label$4749c2b_2_221:
	r23 = 10;
	if( r24 == NULL ) hl_null_access();
	r26 = 10;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_229;
	r25 = 0;
	goto label$4749c2b_2_233;
	label$4749c2b_2_229:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_233:
	r23 = r23 + r25;
	label$4749c2b_2_234:
	goto label$4749c2b_2_300;
	label$4749c2b_2_235:
	r25 = 16777216;
	if( r22 >= r25 ) goto label$4749c2b_2_267;
	r25 = 524288;
	if( r22 >= r25 ) goto label$4749c2b_2_253;
	r23 = 15;
	if( r24 == NULL ) hl_null_access();
	r26 = 15;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_247;
	r25 = 0;
	goto label$4749c2b_2_251;
	label$4749c2b_2_247:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_251:
	r23 = r23 + r25;
	goto label$4749c2b_2_266;
	label$4749c2b_2_253:
	r23 = 20;
	if( r24 == NULL ) hl_null_access();
	r26 = 20;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_261;
	r25 = 0;
	goto label$4749c2b_2_265;
	label$4749c2b_2_261:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_265:
	r23 = r23 + r25;
	label$4749c2b_2_266:
	goto label$4749c2b_2_300;
	label$4749c2b_2_267:
	r25 = 536870912;
	if( r22 >= r25 ) goto label$4749c2b_2_283;
	r23 = 25;
	if( r24 == NULL ) hl_null_access();
	r26 = 25;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_277;
	r25 = 0;
	goto label$4749c2b_2_281;
	label$4749c2b_2_277:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_281:
	r23 = r23 + r25;
	goto label$4749c2b_2_300;
	label$4749c2b_2_283:
	r25 = 0x80000000;
	if( r22 >= r25 ) goto label$4749c2b_2_299;
	r23 = 30;
	if( r24 == NULL ) hl_null_access();
	r26 = 30;
	r25 = r22 >> r26;
	r26 = r24->length;
	if( ((unsigned)r25) < ((unsigned)r26) ) goto label$4749c2b_2_293;
	r25 = 0;
	goto label$4749c2b_2_297;
	label$4749c2b_2_293:
	r12 = r24->bytes;
	r26 = 2;
	r26 = r25 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_297:
	r23 = r23 + r25;
	goto label$4749c2b_2_300;
	label$4749c2b_2_299:
	r23 = 0;
	label$4749c2b_2_300:
	r23 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r23);
	r20->magnitude = r23;
	r25 = 1;
	r23 = r1 - r25;
	r25 = 64;
	r12 = hl_alloc_bytes(r25);
	r25 = 0;
	r26 = 0;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 1;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 2;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 2;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 3;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 3;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 3;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 3;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r26 = 4;
	r28 = 2;
	r28 = r25 << r28;
	*(int*)(r12 + r28) = r26;
	++r25;
	r25 = 16;
	r27 = hl_types_ArrayBase_allocI32(r12,r25);
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r26 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$4749c2b_2_395;
	r20 = NULL;
	goto label$4749c2b_2_398;
	label$4749c2b_2_395:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_398:
	if( r20 == NULL ) hl_null_access();
	r26 = 16384;
	if( r23 >= r26 ) goto label$4749c2b_2_443;
	r26 = 16;
	if( r23 >= r26 ) goto label$4749c2b_2_413;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->length;
	if( ((unsigned)r23) < ((unsigned)r26) ) goto label$4749c2b_2_408;
	r25 = 0;
	goto label$4749c2b_2_412;
	label$4749c2b_2_408:
	r12 = r27->bytes;
	r26 = 2;
	r26 = r23 << r26;
	r25 = *(int*)(r12 + r26);
	label$4749c2b_2_412:
	goto label$4749c2b_2_442;
	label$4749c2b_2_413:
	r26 = 512;
	if( r23 >= r26 ) goto label$4749c2b_2_429;
	r25 = 5;
	if( r27 == NULL ) hl_null_access();
	r28 = 5;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_423;
	r26 = 0;
	goto label$4749c2b_2_427;
	label$4749c2b_2_423:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_427:
	r25 = r25 + r26;
	goto label$4749c2b_2_442;
	label$4749c2b_2_429:
	r25 = 10;
	if( r27 == NULL ) hl_null_access();
	r28 = 10;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_437;
	r26 = 0;
	goto label$4749c2b_2_441;
	label$4749c2b_2_437:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_441:
	r25 = r25 + r26;
	label$4749c2b_2_442:
	goto label$4749c2b_2_508;
	label$4749c2b_2_443:
	r26 = 16777216;
	if( r23 >= r26 ) goto label$4749c2b_2_475;
	r26 = 524288;
	if( r23 >= r26 ) goto label$4749c2b_2_461;
	r25 = 15;
	if( r27 == NULL ) hl_null_access();
	r28 = 15;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_455;
	r26 = 0;
	goto label$4749c2b_2_459;
	label$4749c2b_2_455:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_459:
	r25 = r25 + r26;
	goto label$4749c2b_2_474;
	label$4749c2b_2_461:
	r25 = 20;
	if( r27 == NULL ) hl_null_access();
	r28 = 20;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_469;
	r26 = 0;
	goto label$4749c2b_2_473;
	label$4749c2b_2_469:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_473:
	r25 = r25 + r26;
	label$4749c2b_2_474:
	goto label$4749c2b_2_508;
	label$4749c2b_2_475:
	r26 = 536870912;
	if( r23 >= r26 ) goto label$4749c2b_2_491;
	r25 = 25;
	if( r27 == NULL ) hl_null_access();
	r28 = 25;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_485;
	r26 = 0;
	goto label$4749c2b_2_489;
	label$4749c2b_2_485:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_489:
	r25 = r25 + r26;
	goto label$4749c2b_2_508;
	label$4749c2b_2_491:
	r26 = 0x80000000;
	if( r23 >= r26 ) goto label$4749c2b_2_507;
	r25 = 30;
	if( r27 == NULL ) hl_null_access();
	r28 = 30;
	r26 = r23 >> r28;
	r28 = r27->length;
	if( ((unsigned)r26) < ((unsigned)r28) ) goto label$4749c2b_2_501;
	r26 = 0;
	goto label$4749c2b_2_505;
	label$4749c2b_2_501:
	r12 = r27->bytes;
	r28 = 2;
	r28 = r26 << r28;
	r26 = *(int*)(r12 + r28);
	label$4749c2b_2_505:
	r25 = r25 + r26;
	goto label$4749c2b_2_508;
	label$4749c2b_2_507:
	r25 = 0;
	label$4749c2b_2_508:
	r25 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r25);
	r20->angle = r25;
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r26 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$4749c2b_2_516;
	r20 = NULL;
	goto label$4749c2b_2_519;
	label$4749c2b_2_516:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_519:
	if( r20 == NULL ) hl_null_access();
	r25 = r20->magnitude;
	if( r25 < r1 ) goto label$4749c2b_2_538;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = NULL;
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r25 = 46;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r25; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r25);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_538:
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r26 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$4749c2b_2_544;
	r20 = NULL;
	goto label$4749c2b_2_547;
	label$4749c2b_2_544:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_547:
	if( r20 == NULL ) hl_null_access();
	r25 = r20->angle;
	if( r25 < r1 ) goto label$4749c2b_2_566;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = NULL;
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r25 = 49;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r25; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r25);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_566:
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r26 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$4749c2b_2_572;
	r20 = NULL;
	goto label$4749c2b_2_575;
	label$4749c2b_2_572:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_575:
	if( r20 == NULL ) hl_null_access();
	r25 = r20->magnitude;
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r28 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r28) ) goto label$4749c2b_2_583;
	r20 = NULL;
	goto label$4749c2b_2_586;
	label$4749c2b_2_583:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_586:
	if( r20 == NULL ) hl_null_access();
	r26 = r20->angle;
	if( r25 != r26 ) goto label$4749c2b_2_605;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = NULL;
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r25 = 52;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r25; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r25);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_605:
	goto label$4749c2b_2_88;
	label$4749c2b_2_606:
	goto label$4749c2b_2_609;
	label$4749c2b_2_607:
	r5 = 0;
	r2->couplingSteps = r5;
	label$4749c2b_2_609:
	if( r0 == NULL ) hl_null_access();
	r5 = 2;
	r5 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r5);
	r6 = 0;
	if( r5 == r6 ) goto label$4749c2b_2_630;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = NULL;
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r5 = 61;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r5; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r5);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_630:
	if( r2 == NULL ) hl_null_access();
	r5 = r2->submaps;
	r6 = 1;
	if( r6 >= r5 ) goto label$4749c2b_2_686;
	r5 = 0;
	r6 = r1;
	label$4749c2b_2_636:
	if( r5 >= r6 ) goto label$4749c2b_2_685;
	r21 = r5;
	++r5;
	if( r2 == NULL ) hl_null_access();
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r23 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$4749c2b_2_647;
	r20 = NULL;
	goto label$4749c2b_2_650;
	label$4749c2b_2_647:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_650:
	if( r20 == NULL ) hl_null_access();
	if( r0 == NULL ) hl_null_access();
	r22 = 4;
	r22 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r22);
	r20->mux = r22;
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r23 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$4749c2b_2_661;
	r20 = NULL;
	goto label$4749c2b_2_664;
	label$4749c2b_2_661:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_664:
	if( r20 == NULL ) hl_null_access();
	r22 = r20->mux;
	r23 = r2->submaps;
	if( r22 < r23 ) goto label$4749c2b_2_684;
	r8 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r9 = (venum*)g$b94286b;
	r10 = NULL;
	r14 = hl_alloc_virtual(&t$vrt_329ffa8);
	r13 = (String)s$4ee2612;
	if( hl_vfields(r14)[1] ) *(String*)(hl_vfields(r14)[1]) = (String)r13; else hl_dyn_setp(r14->value,37969014/*fileName*/,&t$String,r13);
	r22 = 67;
	if( hl_vfields(r14)[2] ) *(int*)(hl_vfields(r14)[2]) = (int)r22; else hl_dyn_seti(r14->value,371360620/*lineNumber*/,&t$_i32,r22);
	r13 = (String)s$59af661;
	if( hl_vfields(r14)[0] ) *(String*)(hl_vfields(r14)[0]) = (String)r13; else hl_dyn_setp(r14->value,-63073762/*className*/,&t$String,r13);
	r13 = (String)s$read;
	if( hl_vfields(r14)[3] ) *(String*)(hl_vfields(r14)[3]) = (String)r13; else hl_dyn_setp(r14->value,302979532/*methodName*/,&t$String,r13);
	r15 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r14);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r8,r9,r10,r15);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$4749c2b_2_684:
	goto label$4749c2b_2_636;
	label$4749c2b_2_685:
	goto label$4749c2b_2_706;
	label$4749c2b_2_686:
	r5 = 0;
	r6 = r1;
	label$4749c2b_2_688:
	if( r5 >= r6 ) goto label$4749c2b_2_706;
	r21 = r5;
	++r5;
	if( r2 == NULL ) hl_null_access();
	r19 = r2->chan;
	if( r19 == NULL ) hl_null_access();
	r23 = r19->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$4749c2b_2_699;
	r20 = NULL;
	goto label$4749c2b_2_702;
	label$4749c2b_2_699:
	r17 = r19->array;
	r7 = ((vdynamic**)(r17 + 1))[r21];
	r20 = (kha__audio2__ogg__vorbis__data__MappingChannel)r7;
	label$4749c2b_2_702:
	if( r20 == NULL ) hl_null_access();
	r22 = 0;
	r20->mux = r22;
	goto label$4749c2b_2_688;
	label$4749c2b_2_706:
	if( r2 == NULL ) hl_null_access();
	r5 = r2->submaps;
	r6 = 0;
	r12 = hl_alloc_bytes(r6);
	r6 = 0;
	r6 = 0;
	r24 = hl_types_ArrayBase_allocI32(r12,r6);
	r21 = 0;
	if( r21 >= r5 ) goto label$4749c2b_2_727;
	if( r24 == NULL ) hl_null_access();
	r21 = 1;
	r6 = r5 - r21;
	r7 = NULL;
	r21 = (int)hl_dyn_casti(&r7,&t$_dyn,&t$_i32);
	r22 = r24->length;
	if( ((unsigned)r6) < ((unsigned)r22) ) goto label$4749c2b_2_723;
	hl_types_ArrayBytes_Int___expand(r24,r6);
	label$4749c2b_2_723:
	r12 = r24->bytes;
	r22 = 2;
	r22 = r6 << r22;
	*(int*)(r12 + r22) = r21;
	label$4749c2b_2_727:
	r2->submapFloor = r24;
	r6 = r2->submaps;
	r21 = 0;
	r12 = hl_alloc_bytes(r21);
	r21 = 0;
	r21 = 0;
	r27 = hl_types_ArrayBase_allocI32(r12,r21);
	r22 = 0;
	if( r22 >= r6 ) goto label$4749c2b_2_748;
	if( r27 == NULL ) hl_null_access();
	r22 = 1;
	r21 = r6 - r22;
	r7 = NULL;
	r22 = (int)hl_dyn_casti(&r7,&t$_dyn,&t$_i32);
	r23 = r27->length;
	if( ((unsigned)r21) < ((unsigned)r23) ) goto label$4749c2b_2_744;
	hl_types_ArrayBytes_Int___expand(r27,r21);
	label$4749c2b_2_744:
	r12 = r27->bytes;
	r23 = 2;
	r23 = r21 << r23;
	*(int*)(r12 + r23) = r22;
	label$4749c2b_2_748:
	r2->submapResidue = r27;
	r21 = 0;
	r22 = r2->submaps;
	label$4749c2b_2_751:
	if( r21 >= r22 ) goto label$4749c2b_2_782;
	r23 = r21;
	++r21;
	if( r0 == NULL ) hl_null_access();
	r25 = 8;
	r25 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r25);
	if( r2 == NULL ) hl_null_access();
	r29 = r2->submapFloor;
	if( r29 == NULL ) hl_null_access();
	r26 = 8;
	r26 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r26);
	r28 = r29->length;
	if( ((unsigned)r23) < ((unsigned)r28) ) goto label$4749c2b_2_766;
	hl_types_ArrayBytes_Int___expand(r29,r23);
	label$4749c2b_2_766:
	r12 = r29->bytes;
	r28 = 2;
	r28 = r23 << r28;
	*(int*)(r12 + r28) = r26;
	r29 = r2->submapResidue;
	if( r29 == NULL ) hl_null_access();
	r26 = 8;
	r26 = kha_audio2_ogg_vorbis_VorbisDecodeState_readBits(r0,r26);
	r28 = r29->length;
	if( ((unsigned)r23) < ((unsigned)r28) ) goto label$4749c2b_2_777;
	hl_types_ArrayBytes_Int___expand(r29,r23);
	label$4749c2b_2_777:
	r12 = r29->bytes;
	r28 = 2;
	r28 = r23 << r28;
	*(int*)(r12 + r28) = r26;
	goto label$4749c2b_2_751;
	label$4749c2b_2_782:
	return r2;
}

void kha_audio2_ogg_vorbis_data_Mapping_doFloor(kha__audio2__ogg__vorbis__data__Mapping r0,hl__types__ArrayObj r1,int r2,int r3,hl__types__ArrayBytes_Float r4,hl__types__ArrayBytes_Int r5,hl__types__ArrayObj r6) {
	String r21, r23;
	kha__audio2__ogg__vorbis__data__Floor1 r25;
	vvirtual *r22, *r24;
	hl__types__ArrayObj r10;
	venum *r20;
	kha__audio2__ogg__vorbis__$VorbisTools r35;
	kha__audio2__ogg__vorbis__data__MappingChannel r12;
	hl__types__ArrayBytes_Int r15;
	kha__audio2__ogg__vorbis__data__Floor r18;
	hl__types__ArrayBytes_Float r34;
	double r33, r36;
	kha__audio2__ogg__vorbis__data__ReaderError r19;
	vdynamic *r13;
	vbyte *r17, *r37;
	varray *r14;
	int r7, r8, r11, r16, r26, r27, r28, r29, r30, r31, r32;
	r8 = 1;
	r7 = r3 >> r8;
	r10 = r0->chan;
	if( r10 == NULL ) hl_null_access();
	r11 = r10->length;
	if( ((unsigned)r2) < ((unsigned)r11) ) goto label$4749c2b_3_8;
	r12 = NULL;
	goto label$4749c2b_3_11;
	label$4749c2b_3_8:
	r14 = r10->array;
	r13 = ((vdynamic**)(r14 + 1))[r2];
	r12 = (kha__audio2__ogg__vorbis__data__MappingChannel)r13;
	label$4749c2b_3_11:
	if( r12 == NULL ) hl_null_access();
	r8 = r12->mux;
	if( r1 == NULL ) hl_null_access();
	r15 = r0->submapFloor;
	if( r15 == NULL ) hl_null_access();
	r16 = r15->length;
	if( ((unsigned)r8) < ((unsigned)r16) ) goto label$4749c2b_3_20;
	r11 = 0;
	goto label$4749c2b_3_24;
	label$4749c2b_3_20:
	r17 = r15->bytes;
	r16 = 2;
	r16 = r8 << r16;
	r11 = *(int*)(r17 + r16);
	label$4749c2b_3_24:
	r16 = r1->length;
	if( ((unsigned)r11) < ((unsigned)r16) ) goto label$4749c2b_3_28;
	r18 = NULL;
	goto label$4749c2b_3_31;
	label$4749c2b_3_28:
	r14 = r1->array;
	r13 = ((vdynamic**)(r14 + 1))[r11];
	r18 = (kha__audio2__ogg__vorbis__data__Floor)r13;
	label$4749c2b_3_31:
	if( r18 == NULL ) hl_null_access();
	r11 = r18->type;
	r16 = 0;
	if( r11 != r16 ) goto label$4749c2b_3_51;
	r19 = (kha__audio2__ogg__vorbis__data__ReaderError)hl_alloc_obj(&t$kha_audio2_ogg_vorbis_data_ReaderError);
	r20 = (venum*)g$d3e38e8;
	r21 = NULL;
	r22 = hl_alloc_virtual(&t$vrt_329ffa8);
	r23 = (String)s$4ee2612;
	if( hl_vfields(r22)[1] ) *(String*)(hl_vfields(r22)[1]) = (String)r23; else hl_dyn_setp(r22->value,37969014/*fileName*/,&t$String,r23);
	r11 = 94;
	if( hl_vfields(r22)[2] ) *(int*)(hl_vfields(r22)[2]) = (int)r11; else hl_dyn_seti(r22->value,371360620/*lineNumber*/,&t$_i32,r11);
	r23 = (String)s$59af661;
	if( hl_vfields(r22)[0] ) *(String*)(hl_vfields(r22)[0]) = (String)r23; else hl_dyn_setp(r22->value,-63073762/*className*/,&t$String,r23);
	r23 = (String)s$doFloor;
	if( hl_vfields(r22)[3] ) *(String*)(hl_vfields(r22)[3]) = (String)r23; else hl_dyn_setp(r22->value,302979532/*methodName*/,&t$String,r23);
	r24 = hl_to_virtual(&t$vrt_eaa6a3b,(vdynamic*)r22);
	kha_audio2_ogg_vorbis_data_ReaderError_new(r19,r20,r21,r24);
	r13 = haxe_Exception_thrown(((vdynamic*)r19));
	hl_throw((vdynamic*)r13);
	label$4749c2b_3_51:
	r25 = r18->floor1;
	r11 = 0;
	if( r5 == NULL ) hl_null_access();
	r16 = 0;
	r26 = r5->length;
	if( ((unsigned)r16) < ((unsigned)r26) ) goto label$4749c2b_3_59;
	r16 = 0;
	goto label$4749c2b_3_63;
	label$4749c2b_3_59:
	r17 = r5->bytes;
	r26 = 2;
	r26 = r16 << r26;
	r16 = *(int*)(r17 + r26);
	label$4749c2b_3_63:
	if( r25 == NULL ) hl_null_access();
	r26 = r25->floor1Multiplier;
	r16 = r16 * r26;
	r26 = 1;
	r27 = r25->values;
	label$4749c2b_3_68:
	if( r26 >= r27 ) goto label$4749c2b_3_118;
	r28 = r26;
	++r26;
	if( r25 == NULL ) hl_null_access();
	r15 = r25->sortedOrder;
	if( r15 == NULL ) hl_null_access();
	r30 = r15->length;
	if( ((unsigned)r28) < ((unsigned)r30) ) goto label$4749c2b_3_79;
	r29 = 0;
	goto label$4749c2b_3_83;
	label$4749c2b_3_79:
	r17 = r15->bytes;
	r30 = 2;
	r30 = r28 << r30;
	r29 = *(int*)(r17 + r30);
	label$4749c2b_3_83:
	if( r5 == NULL ) hl_null_access();
	r31 = r5->length;
	if( ((unsigned)r29) < ((unsigned)r31) ) goto label$4749c2b_3_88;
	r30 = 0;
	goto label$4749c2b_3_92;
	label$4749c2b_3_88:
	r17 = r5->bytes;
	r31 = 2;
	r31 = r29 << r31;
	r30 = *(int*)(r17 + r31);
	label$4749c2b_3_92:
	r31 = 0;
	if( r30 < r31 ) goto label$4749c2b_3_117;
	r31 = r5->length;
	if( ((unsigned)r29) < ((unsigned)r31) ) goto label$4749c2b_3_98;
	r30 = 0;
	goto label$4749c2b_3_102;
	label$4749c2b_3_98:
	r17 = r5->bytes;
	r31 = 2;
	r31 = r29 << r31;
	r30 = *(int*)(r17 + r31);
	label$4749c2b_3_102:
	r31 = r25->floor1Multiplier;
	r30 = r30 * r31;
	r15 = r25->xlist;
	if( r15 == NULL ) hl_null_access();
	r32 = r15->length;
	if( ((unsigned)r29) < ((unsigned)r32) ) goto label$4749c2b_3_110;
	r31 = 0;
	goto label$4749c2b_3_114;
	label$4749c2b_3_110:
	r17 = r15->bytes;
	r32 = 2;
	r32 = r29 << r32;
	r31 = *(int*)(r17 + r32);
	label$4749c2b_3_114:
	kha_audio2_ogg_vorbis_VorbisTools_drawLine(r4,r11,r16,r31,r30,r7);
	r11 = r31;
	r16 = r30;
	label$4749c2b_3_117:
	goto label$4749c2b_3_68;
	label$4749c2b_3_118:
	if( r11 >= r7 ) goto label$4749c2b_3_147;
	r26 = r11;
	r27 = r7;
	label$4749c2b_3_121:
	if( r26 >= r27 ) goto label$4749c2b_3_147;
	r28 = r26;
	++r26;
	if( r4 == NULL ) hl_null_access();
	r30 = r4->length;
	if( ((unsigned)r28) < ((unsigned)r30) ) goto label$4749c2b_3_129;
	hl_types_ArrayBytes_Float___expand(r4,r28);
	label$4749c2b_3_129:
	r17 = r4->bytes;
	r30 = 3;
	r30 = r28 << r30;
	r33 = *(double*)(r17 + r30);
	r35 = (kha__audio2__ogg__vorbis__$VorbisTools)g$84d8ab9;
	r34 = r35->INVERSE_DB_TABLE;
	if( r34 == NULL ) hl_null_access();
	r32 = r34->length;
	if( ((unsigned)r16) < ((unsigned)r32) ) goto label$4749c2b_3_140;
	r36 = 0.;
	goto label$4749c2b_3_144;
	label$4749c2b_3_140:
	r37 = r34->bytes;
	r32 = 3;
	r32 = r16 << r32;
	r36 = *(double*)(r37 + r32);
	label$4749c2b_3_144:
	r33 = r33 * r36;
	*(double*)(r17 + r30) = r33;
	goto label$4749c2b_3_121;
	label$4749c2b_3_147:
	return;
}

