﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__ogg__vorbis__VorbisDecoder
#define INC_kha__audio2__ogg__vorbis__VorbisDecoder
typedef struct _kha__audio2__ogg__vorbis__$VorbisDecoder *kha__audio2__ogg__vorbis__$VorbisDecoder;
typedef struct _kha__audio2__ogg__vorbis__VorbisDecoder *kha__audio2__ogg__vorbis__VorbisDecoder;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <haxe/io/Input.h>
#include <hl/types/ArrayObj.h>
#include <kha/audio2/ogg/vorbis/data/Header.h>
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>


struct _kha__audio2__ogg__vorbis__$VorbisDecoder {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* start;
};
struct _kha__audio2__ogg__vorbis__VorbisDecoder {
	hl_type *$type;
	hl__types__ArrayObj previousWindow;
	int previousLength;
	hl__types__ArrayObj finalY;
	hl__types__ArrayObj a;
	hl__types__ArrayObj b;
	hl__types__ArrayObj c;
	hl__types__ArrayObj window;
	hl__types__ArrayObj bitReverseData;
	hl__types__ArrayObj channelBuffers;
	int channelBufferStart;
	int channelBufferEnd;
	kha__audio2__ogg__vorbis__data__Header header;
	int currentSample;
	vdynamic* totalSample;
	kha__audio2__ogg__vorbis__VorbisDecodeState decodeState;
};
#endif

