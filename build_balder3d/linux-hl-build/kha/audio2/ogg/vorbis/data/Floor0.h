﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__data__Floor0
#define INC_kha__audio2__ogg__vorbis__data__Floor0
typedef struct _kha__audio2__ogg__vorbis__data__$Floor0 *kha__audio2__ogg__vorbis__data__$Floor0;
typedef struct _kha__audio2__ogg__vorbis__data__Floor0 *kha__audio2__ogg__vorbis__data__Floor0;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayBytes_Int.h>


struct _kha__audio2__ogg__vorbis__data__$Floor0 {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__audio2__ogg__vorbis__data__Floor0 {
	hl_type *$type;
	int order;
	int rate;
	int barkMapSize;
	int amplitudeBits;
	int amplitudeOffset;
	int numberOfBooks;
	hl__types__ArrayBytes_Int bookList;
};
#endif

