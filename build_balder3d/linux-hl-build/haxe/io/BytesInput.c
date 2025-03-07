﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/BytesInput.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
extern hl_type t$_i32;
extern venum* g$haxe_io_Error_OutsideBounds;
vdynamic* haxe_Exception_thrown(vdynamic*);
#include <haxe/io/Eof.h>
extern hl_type t$haxe_io_Eof;
void haxe_io_Eof_new(haxe__io__Eof);
#include <hl/natives.h>

void haxe_io_BytesInput_new(haxe__io__BytesInput r0,haxe__io__Bytes r1,vdynamic* r2,vdynamic* r3) {
	venum *r9;
	vdynamic *r5, *r8;
	vbyte *r10;
	int r6, r7;
	if( r2 ) goto label$8de92c3_1_4;
	r6 = 0;
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r6;
	r2 = r5;
	label$8de92c3_1_4:
	if( r3 ) goto label$8de92c3_1_11;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	r7 = r2 ? r2->v.i : 0;
	r6 = r6 - r7;
	r5 = hl_alloc_dynamic(&t$_i32);
	r5->v.i = r6;
	r3 = r5;
	label$8de92c3_1_11:
	r6 = r2 ? r2->v.i : 0;
	r7 = 0;
	if( r6 < r7 ) goto label$8de92c3_1_23;
	r6 = r3 ? r3->v.i : 0;
	r7 = 0;
	if( r6 < r7 ) goto label$8de92c3_1_23;
	r6 = r2 ? r2->v.i : 0;
	r7 = r3 ? r3->v.i : 0;
	r6 = r6 + r7;
	if( r1 == NULL ) hl_null_access();
	r7 = r1->length;
	if( r7 >= r6 ) goto label$8de92c3_1_26;
	label$8de92c3_1_23:
	r9 = (venum*)g$haxe_io_Error_OutsideBounds;
	r8 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r8);
	label$8de92c3_1_26:
	r10 = r1->b;
	r0->b = r10;
	r6 = r2 ? r2->v.i : 0;
	r0->pos = r6;
	r6 = r3 ? r3->v.i : 0;
	r0->len = r6;
	r6 = r3 ? r3->v.i : 0;
	r0->totlen = r6;
	return;
}

int haxe_io_BytesInput_set_position(haxe__io__BytesInput r0,int r1) {
	int r2, r3;
	r3 = 0;
	if( r1 >= r3 ) goto label$8de92c3_2_5;
	r2 = 0;
	r1 = r2;
	goto label$8de92c3_2_9;
	label$8de92c3_2_5:
	r3 = r0->totlen;
	if( r3 >= r1 ) goto label$8de92c3_2_9;
	r2 = r0->totlen;
	r1 = r2;
	label$8de92c3_2_9:
	r2 = r0->totlen;
	r2 = r2 - r1;
	r0->len = r2;
	r0->pos = r1;
	return r1;
}

int haxe_io_BytesInput_readByte(haxe__io__BytesInput r0) {
	haxe__io__Eof r5;
	vdynamic *r4;
	vbyte *r6;
	int r2, r3;
	r2 = r0->len;
	r3 = 0;
	if( r2 != r3 ) goto label$8de92c3_3_7;
	r5 = (haxe__io__Eof)hl_alloc_obj(&t$haxe_io_Eof);
	haxe_io_Eof_new(r5);
	r4 = haxe_Exception_thrown(((vdynamic*)r5));
	hl_throw((vdynamic*)r4);
	label$8de92c3_3_7:
	r2 = r0->len;
	--r2;
	r0->len = r2;
	r6 = r0->b;
	r2 = r0->pos;
	r3 = r2;
	++r2;
	r0->pos = r2;
	r3 = *(unsigned char*)(r6 + r3);
	return r3;
}

int haxe_io_BytesInput_readBytes(haxe__io__BytesInput r0,haxe__io__Bytes r1,int r2,int r3) {
	venum *r8;
	haxe__io__Eof r9;
	vdynamic *r7;
	vbyte *r10, *r11;
	int r5, r6;
	r6 = 0;
	if( r2 < r6 ) goto label$8de92c3_4_8;
	r6 = 0;
	if( r3 < r6 ) goto label$8de92c3_4_8;
	r5 = r2 + r3;
	if( r1 == NULL ) hl_null_access();
	r6 = r1->length;
	if( r6 >= r5 ) goto label$8de92c3_4_11;
	label$8de92c3_4_8:
	r8 = (venum*)g$haxe_io_Error_OutsideBounds;
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$8de92c3_4_11:
	r5 = r0->len;
	r6 = 0;
	if( r5 != r6 ) goto label$8de92c3_4_20;
	r6 = 0;
	if( r6 >= r3 ) goto label$8de92c3_4_20;
	r9 = (haxe__io__Eof)hl_alloc_obj(&t$haxe_io_Eof);
	haxe_io_Eof_new(r9);
	r7 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r7);
	label$8de92c3_4_20:
	r5 = r0->len;
	if( r5 >= r3 ) goto label$8de92c3_4_24;
	r5 = r0->len;
	r3 = r5;
	label$8de92c3_4_24:
	r10 = r1->b;
	r11 = r0->b;
	r6 = r0->pos;
	hl_bytes_blit(r10,r2,r11,r6,r3);
	r5 = r0->pos;
	r5 = r5 + r3;
	r0->pos = r5;
	r5 = r0->len;
	r5 = r5 - r3;
	r0->len = r5;
	return r3;
}

