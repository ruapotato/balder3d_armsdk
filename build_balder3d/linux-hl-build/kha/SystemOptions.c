﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/SystemOptions.h>
extern String s$Kha;
extern hl_type t$_i32;
extern hl_type t$kha_WindowOptions;
void kha_WindowOptions_new(kha__WindowOptions,String,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*);
extern hl_type t$kha_FramebufferOptions;
void kha_FramebufferOptions_new(kha__FramebufferOptions,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*,vdynamic*);

void kha_SystemOptions_new(kha__SystemOptions r0,String r1,vdynamic* r2,vdynamic* r3,kha__WindowOptions r4,kha__FramebufferOptions r5) {
	String r6;
	bool r15;
	kha__FramebufferOptions r8;
	vdynamic *r10, *r11, *r12, *r13, *r14, *r16, *r17, *r18;
	kha__WindowOptions r9;
	int r7, r20;
	if( r1 ) goto label$452d4ae_1_3;
	r6 = (String)s$Kha;
	r1 = r6;
	label$452d4ae_1_3:
	if( r2 ) goto label$452d4ae_1_6;
	r7 = -1;
	r2 = hl_alloc_dynamic(&t$_i32);
	r2->v.i = r7;
	label$452d4ae_1_6:
	if( r3 ) goto label$452d4ae_1_9;
	r7 = -1;
	r3 = hl_alloc_dynamic(&t$_i32);
	r3->v.i = r7;
	label$452d4ae_1_9:
	r8 = NULL;
	r0->framebuffer = r8;
	r9 = NULL;
	r0->window = r9;
	r7 = -1;
	r0->height = r7;
	r7 = -1;
	r0->width = r7;
	r6 = (String)s$Kha;
	r0->title = r6;
	r0->title = r1;
	if( r4 ) goto label$452d4ae_1_40;
	r9 = (kha__WindowOptions)hl_alloc_obj(&t$kha_WindowOptions);
	r6 = NULL;
	r7 = -1;
	r10 = hl_alloc_dynamic(&t$_i32);
	r10->v.i = r7;
	r7 = -1;
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r7;
	r7 = 800;
	r12 = hl_alloc_dynamic(&t$_i32);
	r12->v.i = r7;
	r7 = 600;
	r13 = hl_alloc_dynamic(&t$_i32);
	r13->v.i = r7;
	r7 = -1;
	r14 = hl_alloc_dynamic(&t$_i32);
	r14->v.i = r7;
	r15 = true;
	r16 = hl_alloc_dynbool(r15);
	r17 = NULL;
	r7 = 0;
	r18 = hl_alloc_dynamic(&t$_i32);
	r18->v.i = r7;
	kha_WindowOptions_new(r9,r6,r10,r11,r12,r13,r14,r16,r17,r18);
	goto label$452d4ae_1_41;
	label$452d4ae_1_40:
	r9 = r4;
	label$452d4ae_1_41:
	r0->window = r9;
	r7 = r2 ? r2->v.i : 0;
	r20 = 0;
	if( r20 >= r7 ) goto label$452d4ae_1_52;
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r7 = r2 ? r2->v.i : 0;
	r9->width = r7;
	r7 = r2 ? r2->v.i : 0;
	r0->width = r7;
	goto label$452d4ae_1_56;
	label$452d4ae_1_52:
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r7 = r9->width;
	r0->width = r7;
	label$452d4ae_1_56:
	r7 = r3 ? r3->v.i : 0;
	r20 = 0;
	if( r20 >= r7 ) goto label$452d4ae_1_66;
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r7 = r3 ? r3->v.i : 0;
	r9->height = r7;
	r7 = r3 ? r3->v.i : 0;
	r0->height = r7;
	goto label$452d4ae_1_70;
	label$452d4ae_1_66:
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r7 = r9->height;
	r0->height = r7;
	label$452d4ae_1_70:
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r6 = r9->title;
	if( r6 ) goto label$452d4ae_1_77;
	r9 = r0->window;
	if( r9 == NULL ) hl_null_access();
	r9->title = r1;
	label$452d4ae_1_77:
	if( r5 ) goto label$452d4ae_1_93;
	r8 = (kha__FramebufferOptions)hl_alloc_obj(&t$kha_FramebufferOptions);
	r7 = 60;
	r10 = hl_alloc_dynamic(&t$_i32);
	r10->v.i = r7;
	r15 = true;
	r16 = hl_alloc_dynbool(r15);
	r7 = 32;
	r11 = hl_alloc_dynamic(&t$_i32);
	r11->v.i = r7;
	r7 = 16;
	r12 = hl_alloc_dynamic(&t$_i32);
	r12->v.i = r7;
	r7 = 8;
	r13 = hl_alloc_dynamic(&t$_i32);
	r13->v.i = r7;
	r7 = 1;
	r14 = hl_alloc_dynamic(&t$_i32);
	r14->v.i = r7;
	kha_FramebufferOptions_new(r8,r10,r16,r11,r12,r13,r14);
	goto label$452d4ae_1_94;
	label$452d4ae_1_93:
	r8 = r5;
	label$452d4ae_1_94:
	r0->framebuffer = r8;
	return;
}

