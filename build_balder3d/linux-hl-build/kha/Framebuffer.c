﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/Framebuffer.h>
int kha_System_windowWidth(int*);
int kha_System_windowHeight(int*);

void kha_Framebuffer_new(kha__Framebuffer r0,int r1,vvirtual* r2,kha__graphics2__Graphics r3,vvirtual* r4) {
	r0->window = r1;
	r0->graphics1 = r2;
	r0->graphics2 = r3;
	r0->graphics4 = r4;
	return;
}

void kha_Framebuffer_init(kha__Framebuffer r0,vvirtual* r1,kha__graphics2__Graphics r2,vvirtual* r3) {
	r0->graphics1 = r1;
	r0->graphics2 = r2;
	r0->graphics4 = r3;
	return;
}

kha__graphics2__Graphics kha_Framebuffer_get_g2(kha__Framebuffer r0) {
	kha__graphics2__Graphics r1;
	r1 = r0->graphics2;
	return r1;
}

vvirtual* kha_Framebuffer_get_g4(kha__Framebuffer r0) {
	vvirtual *r1;
	r1 = r0->graphics4;
	return r1;
}

int kha_Framebuffer_get_width(kha__Framebuffer r0) {
	int *r2;
	int r1;
	r1 = r0->window;
	r2 = &r1;
	r1 = kha_System_windowWidth(r2);
	return r1;
}

int kha_Framebuffer_get_height(kha__Framebuffer r0) {
	int *r2;
	int r1;
	r1 = r0->window;
	r2 = &r1;
	r1 = kha_System_windowHeight(r2);
	return r1;
}

