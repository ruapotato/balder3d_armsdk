﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__data__ReaderError
#define INC_kha__audio2__ogg__vorbis__data__ReaderError
typedef struct _kha__audio2__ogg__vorbis__data__$ReaderError *kha__audio2__ogg__vorbis__data__$ReaderError;
typedef struct _kha__audio2__ogg__vorbis__data__ReaderError *kha__audio2__ogg__vorbis__data__ReaderError;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#include <hl/types/ArrayDyn.h>


struct _kha__audio2__ogg__vorbis__data__$ReaderError {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__audio2__ogg__vorbis__data__ReaderError {
	hl_type *$type;
	venum* type;
	String message;
	vvirtual* posInfos;
};
#endif

