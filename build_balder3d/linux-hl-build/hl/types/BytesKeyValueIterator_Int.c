﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/BytesKeyValueIterator_Int.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayKeyValueIterator_new(haxe__iterators__ArrayKeyValueIterator,hl__types__ArrayDyn);
extern hl_type t$vrt_2f50e9c;
extern hl_type t$_i32;

void hl_types_BytesKeyValueIterator_Int_new(hl__types__BytesKeyValueIterator_Int r0,hl__types__ArrayBytes_Int r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayKeyValueIterator_new(((haxe__iterators__ArrayKeyValueIterator)r0),r4);
	r0->a = r1;
	return;
}

bool hl_types_BytesKeyValueIterator_Int_hasNext(hl__types__BytesKeyValueIterator_Int r0) {
	bool r1;
	hl__types__ArrayBytes_Int r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$1af452a_2_7;
	r1 = false;
	goto label$1af452a_2_8;
	label$1af452a_2_7:
	r1 = true;
	label$1af452a_2_8:
	return r1;
}

vvirtual* hl_types_BytesKeyValueIterator_Int_next(hl__types__BytesKeyValueIterator_Int r0) {
	vvirtual *r6;
	hl__types__ArrayBytes_Int r2;
	int r3, r4, r5, r7;
	vbyte *r1;
	r2 = r0->a;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->bytes;
	r3 = r0->current;
	r5 = 2;
	r5 = r3 << r5;
	r4 = *(int*)(r1 + r5);
	r6 = hl_alloc_virtual(&t$vrt_2f50e9c);
	r5 = r0->current;
	r7 = r5;
	++r5;
	r0->current = r5;
	if( hl_vfields(r6)[0] ) *(int*)(hl_vfields(r6)[0]) = (int)r7; else hl_dyn_seti(r6->value,5343647/*key*/,&t$_i32,r7);
	if( hl_vfields(r6)[1] ) *(int*)(hl_vfields(r6)[1]) = (int)r4; else hl_dyn_seti(r6->value,297304054/*value*/,&t$_i32,r4);
	return r6;
}

