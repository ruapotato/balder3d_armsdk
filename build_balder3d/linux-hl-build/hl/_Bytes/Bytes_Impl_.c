﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <hl/_Bytes/Bytes_Impl_.h>
#include <hl/natives.h>

vbyte* hl__Bytes_Bytes_Impl__sub(vbyte* r0,int r1,int r2) {
	int r4;
	vbyte *r3;
	r3 = hl_alloc_bytes(r2);
	r4 = 0;
	hl_bytes_blit(r3,r4,r0,r1,r2);
	return r3;
}

