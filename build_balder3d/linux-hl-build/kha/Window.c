﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Window.h>
extern kha__$Window g$_kha_Window;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
int kha_SystemImpl_windowWidth(int);
int kha_SystemImpl_windowHeight(int);

void kha_Window_new(kha__Window r0,int r1) {
	kha__$Window r4;
	hl__types__ArrayObj r3;
	int r2;
	r0->num = r1;
	r4 = (kha__$Window)g$_kha_Window;
	r3 = r4->windows;
	if( r3 == NULL ) hl_null_access();
	r2 = hl_types_ArrayObj_push(r3,((vdynamic*)r0));
	return;
}

kha__Window kha_Window_get(int r0) {
	kha__$Window r2;
	hl__types__ArrayObj r1;
	kha__Window r4;
	vdynamic *r5;
	varray *r6;
	int r3;
	r2 = (kha__$Window)g$_kha_Window;
	r1 = r2->windows;
	if( r1 == NULL ) hl_null_access();
	r3 = r1->length;
	if( ((unsigned)r0) < ((unsigned)r3) ) goto label$438ced6_2_7;
	r4 = NULL;
	goto label$438ced6_2_10;
	label$438ced6_2_7:
	r6 = r1->array;
	r5 = ((vdynamic**)(r6 + 1))[r0];
	r4 = (kha__Window)r5;
	label$438ced6_2_10:
	return r4;
}

int kha_Window_get_width(kha__Window r0) {
	int r1;
	r1 = r0->num;
	r1 = kha_SystemImpl_windowWidth(r1);
	return r1;
}

int kha_Window_get_height(kha__Window r0) {
	int r1;
	r1 = r0->num;
	r1 = kha_SystemImpl_windowHeight(r1);
	return r1;
}

bool kha_Window_get_vSynced(kha__Window r0) {
	bool r1;
	r1 = true;
	return r1;
}

