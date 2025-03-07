﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/iterators/ArrayIterator.h>
int hl_types_ArrayDyn_get_length(hl__types__ArrayDyn);

bool haxe_iterators_ArrayIterator_hasNext(haxe__iterators__ArrayIterator r0) {
	bool r1;
	hl__types__ArrayDyn r4;
	int r2, r3;
	r2 = r0->current;
	r4 = r0->array;
	if( r4 == NULL ) hl_null_access();
	r3 = hl_types_ArrayDyn_get_length(r4);
	if( r2 < r3 ) goto label$1445c14_1_7;
	r1 = false;
	goto label$1445c14_1_8;
	label$1445c14_1_7:
	r1 = true;
	label$1445c14_1_8:
	return r1;
}

vdynamic* haxe_iterators_ArrayIterator_next(haxe__iterators__ArrayIterator r0) {
	hl__types__ArrayDyn r1;
	vdynamic *r4;
	int r2, r3;
	r1 = r0->array;
	if( r1 == NULL ) hl_null_access();
	r2 = r0->current;
	r3 = r2;
	++r2;
	r0->current = r2;
	r4 = ((vdynamic* (*)(hl__types__ArrayDyn,int))r1->$type->vobj_proto[0])(r1,r3);
	return r4;
}

void haxe_iterators_ArrayIterator_new(haxe__iterators__ArrayIterator r0,hl__types__ArrayDyn r1) {
	int r2;
	r2 = 0;
	r0->current = r2;
	r0->array = r1;
	return;
}

