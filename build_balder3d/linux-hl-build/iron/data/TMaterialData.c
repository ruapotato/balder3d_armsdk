﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/data/TMaterialData.h>

void iron_data_TMaterialData_new(iron__data__TMaterialData r0,String r1,String r2,hl__types__ArrayObj r3,String r4,iron__data__TShaderOverride r5) {
	r0->name = r1;
	r0->shader = r2;
	r0->contexts = r3;
	r0->skip_context = r4;
	r0->override_context = r5;
	return;
}

