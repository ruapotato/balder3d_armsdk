﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/BytesKeyValueIterator_Float.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayKeyValueIterator_new(haxe__iterators__ArrayKeyValueIterator,hl__types__ArrayDyn);
extern hl_type t$vrt_e6addf6;
extern hl_type t$_i32;

void hl_types_BytesKeyValueIterator_Float_new(hl__types__BytesKeyValueIterator_Float r0,hl__types__ArrayBytes_Float r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayKeyValueIterator_new(((haxe__iterators__ArrayKeyValueIterator)r0),r4);
	r0->a = r1;
	return;
}

bool hl_types_BytesKeyValueIterator_Float_hasNext(hl__types__BytesKeyValueIterator_Float r0) {
	bool r1;
	hl__types__ArrayBytes_Float r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$896484d_2_7;
	r1 = false;
	goto label$896484d_2_8;
	label$896484d_2_7:
	r1 = true;
	label$896484d_2_8:
	return r1;
}

vvirtual* hl_types_BytesKeyValueIterator_Float_next(hl__types__BytesKeyValueIterator_Float r0) {
	vvirtual *r7;
	hl__types__ArrayBytes_Float r2;
	double r5;
	int r3, r4, r6;
	vbyte *r1;
	r2 = r0->a;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	r3 = r0->current;
	r6 = 3;
	r6 = r3 << r6;
	r5 = *(double*)(r1 + r6);
	r7 = hl_alloc_virtual(&t$vrt_e6addf6);
	r4 = r0->current;
	r6 = r4;
	++r4;
	r0->current = r4;
	if( hl_vfields(r7)[0] ) *(int*)(hl_vfields(r7)[0]) = (int)r6; else hl_dyn_seti(r7->value,5343647/*key*/,&t$_i32,r6);
	if( hl_vfields(r7)[1] ) *(double*)(hl_vfields(r7)[1]) = (double)r5; else hl_dyn_setd(r7->value,297304054/*value*/,r5);
	return r7;
}

