﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/types/ArrayDynIterator.h>
extern hl_type t$hl_types_ArrayDyn;
extern hl_type t$_dyn;
void haxe_iterators_ArrayIterator_new(haxe__iterators__ArrayIterator,hl__types__ArrayDyn);

void hl_types_ArrayDynIterator_new(hl__types__ArrayDynIterator r0,hl__types__ArrayBase r1) {
	hl__types__ArrayDyn r4;
	vdynamic *r3;
	r3 = NULL;
	r4 = (hl__types__ArrayDyn)hl_dyn_castp(&r3,&t$_dyn,&t$hl_types_ArrayDyn);
	haxe_iterators_ArrayIterator_new(((haxe__iterators__ArrayIterator)r0),r4);
	r0->a = r1;
	return;
}

bool hl_types_ArrayDynIterator_hasNext(hl__types__ArrayDynIterator r0) {
	bool r1;
	hl__types__ArrayBase r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->a;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->length;
	if( r2 < r3 ) goto label$602cf05_2_7;
	r1 = false;
	goto label$602cf05_2_8;
	label$602cf05_2_7:
	r1 = true;
	label$602cf05_2_8:
	return r1;
}

vdynamic* hl_types_ArrayDynIterator_next(hl__types__ArrayDynIterator r0) {
	hl__types__ArrayBase r2;
	vdynamic *r1;
	int r3, r4;
	r2 = r0->a;
	if( r2 == NULL ) hl_null_access();
	r3 = r0->current;
	r4 = r3;
	++r3;
	r0->current = r3;
	r1 = ((vdynamic* (*)(hl__types__ArrayBase,int))r2->$type->vobj_proto[0])(r2,r4);
	return r1;
}

