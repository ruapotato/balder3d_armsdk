﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/audio2/ogg/tools/Crc32.h>
extern kha__audio2__ogg__tools__$Crc32 g$_kha_audio2_ogg_tools_Crc32;
#include <hl/natives.h>
hl__types__ArrayBytes_Int hl_types_ArrayBase_allocI32(vbyte*,int);
extern hl_type t$_i32;
extern hl_type t$_dyn;
void hl_types_ArrayBytes_Int___expand(hl__types__ArrayBytes_Int,int);

void kha_audio2_ogg_tools_Crc32_init() {
	kha__audio2__ogg__tools__$Crc32 r2;
	hl__types__ArrayBytes_Int r1, r6;
	vdynamic *r3;
	int r5, r7, r8, r9, r10, r11, r12;
	vbyte *r4;
	r2 = (kha__audio2__ogg__tools__$Crc32)g$_kha_audio2_ogg_tools_Crc32;
	r1 = r2->table;
	if( !r1 ) goto label$04b34af_1_4;
	return;
	label$04b34af_1_4:
	r5 = 0;
	r4 = hl_alloc_bytes(r5);
	r5 = 0;
	r5 = 0;
	r1 = hl_types_ArrayBase_allocI32(r4,r5);
	if( r1 == NULL ) hl_null_access();
	r5 = 255;
	r3 = NULL;
	r7 = (int)hl_dyn_casti(&r3,&t$_dyn,&t$_i32);
	r8 = r1->length;
	if( ((unsigned)r5) < ((unsigned)r8) ) goto label$04b34af_1_16;
	hl_types_ArrayBytes_Int___expand(r1,r5);
	label$04b34af_1_16:
	r4 = r1->bytes;
	r8 = 2;
	r8 = r5 << r8;
	*(int*)(r4 + r8) = r7;
	r2 = (kha__audio2__ogg__tools__$Crc32)g$_kha_audio2_ogg_tools_Crc32;
	r2->table = r1;
	r5 = 0;
	label$04b34af_1_23:
	r8 = 256;
	if( r5 >= r8 ) goto label$04b34af_1_129;
	r7 = r5;
	++r5;
	r9 = 24;
	r8 = r7 << r9;
	r10 = 1;
	r9 = r8 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_38;
	r10 = 79764919;
	goto label$04b34af_1_39;
	label$04b34af_1_38:
	r10 = 0;
	label$04b34af_1_39:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_49;
	r10 = 79764919;
	goto label$04b34af_1_50;
	label$04b34af_1_49:
	r10 = 0;
	label$04b34af_1_50:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_60;
	r10 = 79764919;
	goto label$04b34af_1_61;
	label$04b34af_1_60:
	r10 = 0;
	label$04b34af_1_61:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_71;
	r10 = 79764919;
	goto label$04b34af_1_72;
	label$04b34af_1_71:
	r10 = 0;
	label$04b34af_1_72:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_82;
	r10 = 79764919;
	goto label$04b34af_1_83;
	label$04b34af_1_82:
	r10 = 0;
	label$04b34af_1_83:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_93;
	r10 = 79764919;
	goto label$04b34af_1_94;
	label$04b34af_1_93:
	r10 = 0;
	label$04b34af_1_94:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_104;
	r10 = 79764919;
	goto label$04b34af_1_105;
	label$04b34af_1_104:
	r10 = 0;
	label$04b34af_1_105:
	r9 = r9 ^ r10;
	r8 = r9;
	r10 = 1;
	r9 = r9 << r10;
	r11 = 1;
	r12 = 31;
	r11 = r11 << r12;
	if( ((unsigned)r8) < ((unsigned)r11) ) goto label$04b34af_1_115;
	r10 = 79764919;
	goto label$04b34af_1_116;
	label$04b34af_1_115:
	r10 = 0;
	label$04b34af_1_116:
	r9 = r9 ^ r10;
	r8 = r9;
	r2 = (kha__audio2__ogg__tools__$Crc32)g$_kha_audio2_ogg_tools_Crc32;
	r6 = r2->table;
	if( r6 == NULL ) hl_null_access();
	r11 = r6->length;
	if( ((unsigned)r7) < ((unsigned)r11) ) goto label$04b34af_1_124;
	hl_types_ArrayBytes_Int___expand(r6,r7);
	label$04b34af_1_124:
	r4 = r6->bytes;
	r11 = 2;
	r11 = r7 << r11;
	*(int*)(r4 + r11) = r8;
	goto label$04b34af_1_23;
	label$04b34af_1_129:
	return;
}

