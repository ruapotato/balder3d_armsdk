﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/io/FPHelper.h>
extern haxe__io__$FPHelper g$_haxe_io_FPHelper;

float haxe_io_FPHelper_i32ToFloat(int r0) {
	haxe__io__$FPHelper r2;
	float r4;
	int r3;
	vbyte *r1;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	*(int*)(r1 + r3) = r0;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	r4 = *(float*)(r1 + r3);
	return r4;
}

int haxe_io_FPHelper_floatToI32(float r0) {
	haxe__io__$FPHelper r2;
	int r3;
	vbyte *r1;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	*(float*)(r1 + r3) = r0;
	r2 = (haxe__io__$FPHelper)g$_haxe_io_FPHelper;
	r1 = r2->helper;
	r3 = 0;
	r3 = *(int*)(r1 + r3);
	return r3;
}

