﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/TShaderOverride.h>

void iron_data_TShaderOverride_new(iron__data__TShaderOverride r0,String r1,String r2,String r3,String r4) {
	r0->cull_mode = r1;
	r0->addressing = r2;
	r0->filter = r3;
	r0->shared_sampler = r4;
	return;
}

