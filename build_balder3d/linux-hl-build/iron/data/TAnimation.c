﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/TAnimation.h>

void iron_data_TAnimation_new(iron__data__TAnimation r0,hl__types__ArrayObj r1,vdynamic* r2,vdynamic* r3,vdynamic* r4,kha__arrays__ByteArrayPrivate r5,hl__types__ArrayObj r6) {
	r0->tracks = r1;
	r0->begin = r2;
	r0->end = r3;
	r0->has_delta = r4;
	r0->marker_frames = r5;
	r0->marker_names = r6;
	return;
}

