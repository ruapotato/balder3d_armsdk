﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__audio2__StreamChannel
#define INC_kha__audio2__StreamChannel
typedef struct _kha__audio2__$StreamChannel *kha__audio2__$StreamChannel;
typedef struct _kha__audio2__StreamChannel *kha__audio2__StreamChannel;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__audio2__$StreamChannel {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__audio2__StreamChannel {
	hl_type *$type;
	vbyte* _vorbis;
	bool atend;
	bool loop;
	double myVolume;
	bool paused;
	vvirtual* f$5;
};
#endif

