﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <sys/io/File.h>
#include <_std/SysError.h>
vbyte* Sys_getPath(String);
#include <hl/natives.h>
extern hl_type t$SysError;
extern String s$Can_t_read_;
String String___add__(String,String);
void SysError_new(SysError,String);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern hl_type t$haxe_io_Bytes;
void haxe_io_Bytes_new(haxe__io__Bytes,vbyte*,int);

haxe__io__Bytes sys_io_File_getBytes(String r0) {
	String r4;
	SysError r8;
	haxe__io__Bytes r9;
	vdynamic *r7;
	int *r5;
	vbyte *r3, *r6;
	int r1;
	r1 = 0;
	r3 = Sys_getPath(r0);
	r5 = &r1;
	r6 = hl_file_contents(r3,r5);
	if( r6 ) goto label$3b6e088_1_11;
	r8 = (SysError)hl_alloc_obj(&t$SysError);
	r4 = (String)s$Can_t_read_;
	r4 = String___add__(r4,r0);
	SysError_new(r8,r4);
	r7 = haxe_Exception_thrown(((vdynamic*)r8));
	hl_throw((vdynamic*)r7);
	label$3b6e088_1_11:
	r9 = (haxe__io__Bytes)hl_alloc_obj(&t$haxe_io_Bytes);
	haxe_io_Bytes_new(r9,r6,r1);
	return r9;
}

