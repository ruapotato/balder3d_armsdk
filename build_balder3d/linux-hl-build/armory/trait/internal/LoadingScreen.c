﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/trait/internal/LoadingScreen.h>
#include <iron/App.h>
extern iron__$App g$_iron_App;

void armory_trait_internal_LoadingScreen_render(kha__graphics2__Graphics r0,int r1,int r2) {
	iron__$App r7;
	vclosure *r6;
	double r5, r9, r10, r11;
	int r3, r8;
	if( r0 == NULL ) hl_null_access();
	r3 = -3200189;
	r3 = ((int (*)(kha__graphics2__Graphics,int))r0->$type->vobj_proto[11])(r0,r3);
	r5 = 0.;
	r7 = (iron__$App)g$_iron_App;
	r6 = r7->h;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->hasValue ? ((int (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((int (*)(void))r6->fun)();
	r8 = 6;
	r3 = r3 - r8;
	r9 = (double)r3;
	r7 = (iron__$App)g$_iron_App;
	r6 = r7->w;
	if( r6 == NULL ) hl_null_access();
	r3 = r6->hasValue ? ((int (*)(vdynamic*))r6->fun)((vdynamic*)r6->value) : ((int (*)(void))r6->fun)();
	r10 = (double)r3;
	r11 = (double)r2;
	r10 = r10 / r11;
	r11 = (double)r1;
	r10 = r10 * r11;
	r11 = 6.;
	((void (*)(kha__graphics2__Graphics,double,double,double,double))r0->$type->vobj_proto[5])(r0,r5,r9,r10,r11);
	return;
}

