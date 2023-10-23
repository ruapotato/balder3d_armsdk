﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayObjIterator.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayIterator_new(haxe__iterators__ArrayIterator,hl__types__ArrayDyn);

void hl_types_ArrayObjIterator_new(hl__types__ArrayObjIterator r0,hl__types__ArrayObj r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayIterator_new(((haxe__iterators__ArrayIterator)r0),r4);
	r0->arr = r1;
	return;
}

bool hl_types_ArrayObjIterator_hasNext(hl__types__ArrayObjIterator r0) {
	hl__types__ArrayObj r4;
	bool r1;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->arr;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$05b81c3_2_7;
	r1 = false;
	goto label$05b81c3_2_8;
	label$05b81c3_2_7:
	r1 = true;
	label$05b81c3_2_8:
	return r1;
}

vdynamic* hl_types_ArrayObjIterator_next(hl__types__ArrayObjIterator r0) {
	hl__types__ArrayObj r2;
	vdynamic *r5;
	int r3, r4;
	varray *r1;
	r2 = r0->arr;
	if( r2 == NULL ) hl_null_access();
	r1 = r2->array;
	r3 = r0->current;
	r4 = r3;
	++r3;
	r0->current = r3;
	r5 = ((vdynamic**)(r1 + 1))[r4];
	return r5;
}

