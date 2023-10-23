﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/system/VirtualInput.h>
#include <iron/system/VirtualButton.h>
vdynamic* haxe_ds_StringMap_get(haxe__ds__StringMap,String);

void iron_system_VirtualInput_new(iron__system__VirtualInput r0) {
	haxe__ds__StringMap r1;
	r1 = NULL;
	r0->virtualButtons = r1;
	return;
}

void iron_system_VirtualInput_downVirtual(iron__system__VirtualInput r0,String r1) {
	haxe__ds__StringMap r3;
	bool r6;
	iron__system__VirtualButton r5;
	vdynamic *r4;
	r3 = r0->virtualButtons;
	if( !r3 ) goto label$83a2863_2_12;
	r3 = r0->virtualButtons;
	if( r3 == NULL ) hl_null_access();
	r4 = haxe_ds_StringMap_get(r3,r1);
	r5 = (iron__system__VirtualButton)r4;
	if( !r5 ) goto label$83a2863_2_12;
	if( r5 == NULL ) hl_null_access();
	r6 = true;
	r5->down = r6;
	r6 = true;
	r5->started = r6;
	label$83a2863_2_12:
	return;
}

void iron_system_VirtualInput_upVirtual(iron__system__VirtualInput r0,String r1) {
	haxe__ds__StringMap r3;
	bool r6;
	iron__system__VirtualButton r5;
	vdynamic *r4;
	r3 = r0->virtualButtons;
	if( !r3 ) goto label$83a2863_3_12;
	r3 = r0->virtualButtons;
	if( r3 == NULL ) hl_null_access();
	r4 = haxe_ds_StringMap_get(r3,r1);
	r5 = (iron__system__VirtualButton)r4;
	if( !r5 ) goto label$83a2863_3_12;
	if( r5 == NULL ) hl_null_access();
	r6 = false;
	r5->down = r6;
	r6 = true;
	r5->released = r6;
	label$83a2863_3_12:
	return;
}

