﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__data__ProbedPage
#define INC_kha__audio2__ogg__vorbis__data__ProbedPage
typedef struct _kha__audio2__ogg__vorbis__data__$ProbedPage *kha__audio2__ogg__vorbis__data__$ProbedPage;
typedef struct _kha__audio2__ogg__vorbis__data__ProbedPage *kha__audio2__ogg__vorbis__data__ProbedPage;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__audio2__ogg__vorbis__data__$ProbedPage {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__audio2__ogg__vorbis__data__ProbedPage {
	hl_type *$type;
	int pageStart;
	int pageEnd;
	int afterPreviousPageStart;
	vdynamic* firstDecodedSample;
	vdynamic* lastDecodedSample;
};
#endif

