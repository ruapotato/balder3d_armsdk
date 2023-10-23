﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/SystemImpl.h>
#include <hl/types/ArrayDyn.h>
extern hl_type t$String;
extern String s$853ae90;
String String___add__(String,String);
extern hl_type t$_i32;
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$e265492;
String Std_string(vdynamic*);
#include <haxe/Log.h>
#include <kha/FramebufferOptions.h>
#include <kha/WindowOptions.h>
#include <kha/korehl/graphics4/Graphics.h>
#include <kha/graphics4/VertexBuffer.h>
#include <kha/Image.h>
#include <kha/graphics4/PipelineState.h>
#include <kha/math/FastMatrix3.h>
#include <kha/math/FastMatrix4.h>
#include <kha/graphics4/IndexBuffer.h>
#include <kha/arrays/ByteArrayPrivate.h>
#include <kha/graphics4/CubeMap.h>
#include <kha/graphics2/Graphics.h>
#include <kha/graphics2/Graphics1.h>
#include <kha/korehl/graphics4/Graphics2.h>
#include <kha/audio2/Audio.h>
#include <kha/input/MouseImpl.h>
#include <kha/input/Gamepad.h>
extern hl_type t$fun_439b121;
void kha_audio2_Audio__callCallback(int);
extern hl_type t$fun_8249ca6;
float kha_audio2_Audio__readSample(void);
extern hl_type t$fun_6ededf8;
void kha_SystemImpl_keyDown(int);
void kha_SystemImpl_keyUp(int);
void kha_SystemImpl_keyPress(int);
void kha_SystemImpl_mouseDown(int,int,int,int);
extern hl_type t$fun_b6373da;
void kha_SystemImpl_mouseUp(int,int,int,int);
void kha_SystemImpl_mouseMove(int,int,int,int,int);
extern hl_type t$fun_8ffe477;
void kha_SystemImpl_mouseWheel(int,int);
extern hl_type t$fun_efca04c;
void kha_SystemImpl_penDown(int,int,int,double);
extern hl_type t$fun_c33199c;
void kha_SystemImpl_penUp(int,int,int,double);
void kha_SystemImpl_penMove(int,int,int,double);
void kha_SystemImpl_gamepadAxis(int,int,double);
extern hl_type t$fun_589d191;
void kha_SystemImpl_gamepadButton(int,int,double);
void kha_SystemImpl_touchStart(int,int,int);
extern hl_type t$fun_1e336b5;
void kha_SystemImpl_touchEnd(int,int,int);
void kha_SystemImpl_touchMove(int,int,int);
void kha_input_Sensor__accelerometerChanged(double,double,double);
extern hl_type t$fun_7764b95;
void kha_input_Sensor__gyroscopeChanged(double,double,double);
void kha_SystemImpl_foreground(void);
extern hl_type t$fun_7b48b4f;
void kha_SystemImpl_resume(void);
void kha_SystemImpl_pause(void);
void kha_SystemImpl_background(void);
void kha_SystemImpl_shutdown(void);
void kha_SystemImpl_dropFiles(String);
extern hl_type t$fun_6047e2e;
vbyte* kha_SystemImpl_copy(void);
extern hl_type t$fun_8de7c93;
vbyte* kha_SystemImpl_cut(void);
void kha_SystemImpl_paste(vbyte*);
extern hl_type t$fun_10aec05;
extern haxe__$Log g$_haxe_Log;
extern hl_type t$kha_Window;
void kha_Window_new(kha__Window,int);
void kha_Scheduler_init(void);
void kha_Shaders_init(void);
extern hl_type t$kha_korehl_graphics4_Graphics;
void kha_korehl_graphics4_Graphics_new(kha__korehl__graphics4__Graphics,vvirtual*);
extern hl_type t$kha_Framebuffer;
extern hl_type t$vrt_779b131;
void kha_Framebuffer_new(kha__Framebuffer,int,vvirtual*,kha__graphics2__Graphics,vvirtual*);
extern kha__$SystemImpl g$_kha_SystemImpl;
extern hl_type t$kha_graphics2_Graphics1;
extern hl_type t$vrt_7ced7cf;
void kha_graphics2_Graphics1_new(kha__graphics2__Graphics1,vvirtual*);
extern hl_type t$vrt_b840ca7;
extern hl_type t$kha_korehl_graphics4_Graphics2;
void kha_korehl_graphics4_Graphics2_new(kha__korehl__graphics4__Graphics2,vvirtual*);
void kha_Framebuffer_init(kha__Framebuffer,vvirtual*,kha__graphics2__Graphics,vvirtual*);
extern kha__audio2__$Audio g$_kha_audio2_Audio;
void kha_audio2_Audio1__init(void);
void kha_audio2_Audio__init(void);
extern hl_type t$kha_input_Keyboard;
void kha_input_Keyboard_new(kha__input__Keyboard);
extern hl_type t$kha_input_MouseImpl;
void kha_input_MouseImpl_new(kha__input__MouseImpl);
extern hl_type t$kha_input_Pen;
void kha_input_Pen_new(kha__input__Pen);
extern hl_type t$hl_types_ArrayObj;
void hl_types_ArrayObj_new(hl__types__ArrayObj);
extern hl_type t$kha_input_Gamepad;
void kha_input_Gamepad_new(kha__input__Gamepad,int*,String);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern hl_type t$kha_input_Surface;
void kha_input_Surface_new(kha__input__Surface);
void kha_Scheduler_start(bool*);
kha__Window kha_Window_get(int);
void kha_Scheduler_executeFrame(void);
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
void kha_System_render(hl__types__ArrayObj);
bool kha_SystemImpl_isMouseLocked(int*);
bool hl_types_ArrayObj_remove(hl__types__ArrayObj,vdynamic*);
void kha_input_Keyboard_sendDownEvent(kha__input__Keyboard,int);
void kha_input_Keyboard_sendUpEvent(kha__input__Keyboard,int);
String String_fromCharCode(int);
void kha_input_Keyboard_sendPressEvent(kha__input__Keyboard,String);
void kha_input_Mouse_sendDownEvent(kha__input__Mouse,int,int,int,int);
void kha_input_Mouse_sendUpEvent(kha__input__Mouse,int,int,int,int);
void kha_input_Mouse_sendMoveEvent(kha__input__Mouse,int,int,int,int,int);
void kha_input_Mouse_sendWheelEvent(kha__input__Mouse,int,int);
void kha_input_Pen_sendDownEvent(kha__input__Pen,int,int,int,double);
void kha_input_Pen_sendUpEvent(kha__input__Pen,int,int,int,double);
void kha_input_Pen_sendMoveEvent(kha__input__Pen,int,int,int,double);
void kha_input_Gamepad_sendAxisEvent(kha__input__Gamepad,int,double);
void kha_input_Gamepad_sendButtonEvent(kha__input__Gamepad,int,double);
void kha_input_Surface_sendTouchStartEvent(kha__input__Surface,int,int,int);
void kha_input_Surface_sendTouchEndEvent(kha__input__Surface,int,int,int);
void kha_input_Surface_sendMoveEvent(kha__input__Surface,int,int,int);
void kha_System_foreground(void);
void kha_System_resume(void);
void kha_System_pause(void);
void kha_System_background(void);
void kha_System_shutdown(void);
void kha_System_dropFiles(String);
#include <kha/System.h>
extern kha__$System g$_kha_System;
String String_fromUTF8(vbyte*);
extern String s$;

void kha_SystemImpl_init__$1(vdynamic* r0,vvirtual* r1) {
	String r2, r3;
	int *r5;
	vbyte *r6, *r8;
	int r4, r9;
	if( !r1 ) goto label$fc555d2_1_15;
	if( r1 == NULL ) hl_null_access();
	r2 = hl_vfields(r1)[0] ? (*(String*)(hl_vfields(r1)[0])) : (String)hl_dyn_getp(r1->value,-63073762/*className*/,&t$String);
	r3 = (String)s$853ae90;
	r2 = String___add__(r2,r3);
	r4 = hl_vfields(r1)[3] ? (*(int*)(hl_vfields(r1)[3])) : (int)hl_dyn_geti(r1->value,371360620/*lineNumber*/,&t$_i32);
	r5 = &r4;
	r6 = hl_itos(r4,r5);
	r3 = String___alloc__(r6,r4);
	r2 = String___add__(r2,r3);
	r3 = (String)s$e265492;
	r2 = String___add__(r2,r3);
	r3 = Std_string(r0);
	r2 = String___add__(r2,r3);
	goto label$fc555d2_1_16;
	label$fc555d2_1_15:
	r2 = Std_string(r0);
	label$fc555d2_1_16:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r6 = r2->bytes;
	r5 = &r4;
	r9 = 0;
	r8 = hl_utf16_to_utf8(r6,r9,r5);
	hl_kinc_log(r8);
	return;
}

void kha_SystemImpl_init(kha__SystemOptions r0,vclosure* r1) {
	bool *r65;
	kha__audio2__$Audio r30;
	kha__korehl__graphics4__Graphics2 r29;
	String r7;
	kha__Framebuffer r22, r28;
	hl__types__ArrayObj r37;
	vvirtual *r21, *r23, *r25;
	kha__input__Surface r39;
	bool r15;
	kha__input__Gamepad r38;
	kha__korehl__graphics4__Graphics r20;
	kha__Window r19;
	kha__graphics2__Graphics r24;
	haxe__$Log r3;
	kha__input__MouseImpl r35;
	kha__FramebufferOptions r14;
	kha__graphics2__Graphics1 r27;
	kha__$SystemImpl r26;
	kha__input__Pen r36;
	vclosure *r2, *r31, *r32, *r40, *r41, *r42, *r43, *r44, *r45, *r46, *r47, *r48, *r49, *r50, *r51, *r52, *r53, *r54, *r55, *r56, *r57, *r58, *r59, *r60, *r61, *r62, *r63, *r64;
	int *r8, *r11, *r33;
	kha__input__Keyboard r34;
	kha__WindowOptions r17;
	vbyte *r6, *r9;
	int r4, r10, r12, r13, r16, r18, r66;
	static vclosure cl$0 = { &t$fun_439b121, kha_SystemImpl_init__$1, 0 };
	static vclosure cl$1 = { &t$fun_8249ca6, kha_audio2_Audio__callCallback, 0 };
	static vclosure cl$2 = { &t$fun_6ededf8, kha_audio2_Audio__readSample, 0 };
	static vclosure cl$3 = { &t$fun_8249ca6, kha_SystemImpl_keyDown, 0 };
	static vclosure cl$4 = { &t$fun_8249ca6, kha_SystemImpl_keyUp, 0 };
	static vclosure cl$5 = { &t$fun_8249ca6, kha_SystemImpl_keyPress, 0 };
	static vclosure cl$6 = { &t$fun_b6373da, kha_SystemImpl_mouseDown, 0 };
	static vclosure cl$7 = { &t$fun_b6373da, kha_SystemImpl_mouseUp, 0 };
	static vclosure cl$8 = { &t$fun_8ffe477, kha_SystemImpl_mouseMove, 0 };
	static vclosure cl$9 = { &t$fun_efca04c, kha_SystemImpl_mouseWheel, 0 };
	static vclosure cl$10 = { &t$fun_c33199c, kha_SystemImpl_penDown, 0 };
	static vclosure cl$11 = { &t$fun_c33199c, kha_SystemImpl_penUp, 0 };
	static vclosure cl$12 = { &t$fun_c33199c, kha_SystemImpl_penMove, 0 };
	static vclosure cl$13 = { &t$fun_589d191, kha_SystemImpl_gamepadAxis, 0 };
	static vclosure cl$14 = { &t$fun_589d191, kha_SystemImpl_gamepadButton, 0 };
	static vclosure cl$15 = { &t$fun_1e336b5, kha_SystemImpl_touchStart, 0 };
	static vclosure cl$16 = { &t$fun_1e336b5, kha_SystemImpl_touchEnd, 0 };
	static vclosure cl$17 = { &t$fun_1e336b5, kha_SystemImpl_touchMove, 0 };
	static vclosure cl$18 = { &t$fun_7764b95, kha_input_Sensor__accelerometerChanged, 0 };
	static vclosure cl$19 = { &t$fun_7764b95, kha_input_Sensor__gyroscopeChanged, 0 };
	static vclosure cl$20 = { &t$fun_7b48b4f, kha_SystemImpl_foreground, 0 };
	static vclosure cl$21 = { &t$fun_7b48b4f, kha_SystemImpl_resume, 0 };
	static vclosure cl$22 = { &t$fun_7b48b4f, kha_SystemImpl_pause, 0 };
	static vclosure cl$23 = { &t$fun_7b48b4f, kha_SystemImpl_background, 0 };
	static vclosure cl$24 = { &t$fun_7b48b4f, kha_SystemImpl_shutdown, 0 };
	static vclosure cl$25 = { &t$fun_6047e2e, kha_SystemImpl_dropFiles, 0 };
	static vclosure cl$26 = { &t$fun_8de7c93, kha_SystemImpl_copy, 0 };
	static vclosure cl$27 = { &t$fun_8de7c93, kha_SystemImpl_cut, 0 };
	static vclosure cl$28 = { &t$fun_10aec05, kha_SystemImpl_paste, 0 };
	r2 = &cl$0;
	r3 = (haxe__$Log)g$_haxe_Log;
	r3->trace = r2;
	r4 = 0;
	if( r0 == NULL ) hl_null_access();
	r7 = r0->title;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->bytes;
	r8 = &r4;
	r10 = 0;
	r9 = hl_utf16_to_utf8(r6,r10,r8);
	r10 = r0->width;
	r12 = r0->height;
	r14 = r0->framebuffer;
	if( r14 == NULL ) hl_null_access();
	r13 = r14->samplesPerPixel;
	r14 = r0->framebuffer;
	if( r14 == NULL ) hl_null_access();
	r15 = r14->verticalSync;
	r17 = r0->window;
	if( r17 == NULL ) hl_null_access();
	r16 = r17->mode;
	r17 = r0->window;
	if( r17 == NULL ) hl_null_access();
	r18 = r17->windowFeatures;
	hl_init_kore(r9,r10,r12,r13,r15,r16,r18);
	r19 = (kha__Window)hl_alloc_obj(&t$kha_Window);
	r10 = 0;
	kha_Window_new(r19,r10);
	kha_Scheduler_init();
	kha_Shaders_init();
	r20 = (kha__korehl__graphics4__Graphics)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics);
	r21 = NULL;
	kha_korehl_graphics4_Graphics_new(r20,r21);
	r22 = (kha__Framebuffer)hl_alloc_obj(&t$kha_Framebuffer);
	r10 = 0;
	r23 = NULL;
	r24 = NULL;
	if( r20 ) goto label$fc555d2_2_41;
	r25 = NULL;
	goto label$fc555d2_2_45;
	label$fc555d2_2_41:
	r25 = r20->f$1;
	if( r25 ) goto label$fc555d2_2_45;
	r25 = hl_to_virtual(&t$vrt_779b131,(vdynamic*)r20);
	r20->f$1 = r25;
	label$fc555d2_2_45:
	kha_Framebuffer_new(r22,r10,r23,r24,r25);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->framebuffer = r22;
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r22 = r26->framebuffer;
	if( r22 == NULL ) hl_null_access();
	r27 = (kha__graphics2__Graphics1)hl_alloc_obj(&t$kha_graphics2_Graphics1);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r28 = r26->framebuffer;
	if( r28 ) goto label$fc555d2_2_57;
	r21 = NULL;
	goto label$fc555d2_2_61;
	label$fc555d2_2_57:
	r21 = r28->f$6;
	if( r21 ) goto label$fc555d2_2_61;
	r21 = hl_to_virtual(&t$vrt_7ced7cf,(vdynamic*)r28);
	r28->f$6 = r21;
	label$fc555d2_2_61:
	kha_graphics2_Graphics1_new(r27,r21);
	if( r27 ) goto label$fc555d2_2_65;
	r23 = NULL;
	goto label$fc555d2_2_69;
	label$fc555d2_2_65:
	r23 = r27->f$1;
	if( r23 ) goto label$fc555d2_2_69;
	r23 = hl_to_virtual(&t$vrt_b840ca7,(vdynamic*)r27);
	r27->f$1 = r23;
	label$fc555d2_2_69:
	r29 = (kha__korehl__graphics4__Graphics2)hl_alloc_obj(&t$kha_korehl_graphics4_Graphics2);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r28 = r26->framebuffer;
	if( r28 ) goto label$fc555d2_2_75;
	r21 = NULL;
	goto label$fc555d2_2_79;
	label$fc555d2_2_75:
	r21 = r28->f$6;
	if( r21 ) goto label$fc555d2_2_79;
	r21 = hl_to_virtual(&t$vrt_7ced7cf,(vdynamic*)r28);
	r28->f$6 = r21;
	label$fc555d2_2_79:
	kha_korehl_graphics4_Graphics2_new(r29,r21);
	if( r20 ) goto label$fc555d2_2_83;
	r25 = NULL;
	goto label$fc555d2_2_87;
	label$fc555d2_2_83:
	r25 = r20->f$1;
	if( r25 ) goto label$fc555d2_2_87;
	r25 = hl_to_virtual(&t$vrt_779b131,(vdynamic*)r20);
	r20->f$1 = r25;
	label$fc555d2_2_87:
	kha_Framebuffer_init(r22,r23,((kha__graphics2__Graphics)r29),r25);
	r30 = (kha__audio2__$Audio)g$_kha_audio2_Audio;
	r10 = r30->samplesPerSecond;
	r11 = &r10;
	r31 = &cl$1;
	r32 = &cl$2;
	hl_kinc_init_audio(r31,r32,r11);
	r12 = *r11;
	r30 = (kha__audio2__$Audio)g$_kha_audio2_Audio;
	r30->samplesPerSecond = r12;
	kha_audio2_Audio1__init();
	kha_audio2_Audio__init();
	r34 = (kha__input__Keyboard)hl_alloc_obj(&t$kha_input_Keyboard);
	kha_input_Keyboard_new(r34);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->keyboard = r34;
	r35 = (kha__input__MouseImpl)hl_alloc_obj(&t$kha_input_MouseImpl);
	kha_input_MouseImpl_new(r35);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->mouse = ((kha__input__Mouse)r35);
	r36 = (kha__input__Pen)hl_alloc_obj(&t$kha_input_Pen);
	kha_input_Pen_new(r36);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->pen = r36;
	r37 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r37);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->gamepads = r37;
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r37 = r26->gamepads;
	if( r37 == NULL ) hl_null_access();
	r38 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r12 = 0;
	r33 = &r12;
	r7 = NULL;
	kha_input_Gamepad_new(r38,r33,r7);
	r12 = hl_types_ArrayObj_push(r37,((vdynamic*)r38));
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r37 = r26->gamepads;
	if( r37 == NULL ) hl_null_access();
	r38 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r13 = 1;
	r33 = &r13;
	r7 = NULL;
	kha_input_Gamepad_new(r38,r33,r7);
	r13 = hl_types_ArrayObj_push(r37,((vdynamic*)r38));
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r37 = r26->gamepads;
	if( r37 == NULL ) hl_null_access();
	r38 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r16 = 2;
	r33 = &r16;
	r7 = NULL;
	kha_input_Gamepad_new(r38,r33,r7);
	r16 = hl_types_ArrayObj_push(r37,((vdynamic*)r38));
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r37 = r26->gamepads;
	if( r37 == NULL ) hl_null_access();
	r38 = (kha__input__Gamepad)hl_alloc_obj(&t$kha_input_Gamepad);
	r18 = 3;
	r33 = &r18;
	r7 = NULL;
	kha_input_Gamepad_new(r38,r33,r7);
	r18 = hl_types_ArrayObj_push(r37,((vdynamic*)r38));
	r39 = (kha__input__Surface)hl_alloc_obj(&t$kha_input_Surface);
	kha_input_Surface_new(r39);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->surface = r39;
	r37 = (hl__types__ArrayObj)hl_alloc_obj(&t$hl_types_ArrayObj);
	hl_types_ArrayObj_new(r37);
	r26 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r26->mouseLockListeners = r37;
	r31 = &cl$3;
	r40 = &cl$4;
	r41 = &cl$5;
	hl_kinc_register_keyboard(r31,r40,r41);
	r42 = &cl$6;
	r43 = &cl$7;
	r44 = &cl$8;
	r45 = &cl$9;
	hl_kinc_register_mouse(r42,r43,r44,r45);
	r46 = &cl$10;
	r47 = &cl$11;
	r48 = &cl$12;
	hl_kinc_register_pen(r46,r47,r48);
	r49 = &cl$13;
	r50 = &cl$14;
	hl_kinc_register_gamepad(r49,r50);
	r51 = &cl$15;
	r52 = &cl$16;
	r53 = &cl$17;
	hl_kinc_register_surface(r51,r52,r53);
	r54 = &cl$18;
	r55 = &cl$19;
	hl_kinc_register_sensor(r54,r55);
	r56 = &cl$20;
	r57 = &cl$21;
	r58 = &cl$22;
	r59 = &cl$23;
	r60 = &cl$24;
	hl_kinc_register_callbacks(r56,r57,r58,r59,r60);
	r61 = &cl$25;
	hl_kinc_register_dropfiles(r61);
	r62 = &cl$26;
	r63 = &cl$27;
	r64 = &cl$28;
	hl_kinc_register_copycutpaste(r62,r63,r64);
	r65 = NULL;
	kha_Scheduler_start(r65);
	if( r1 == NULL ) hl_null_access();
	r66 = 0;
	r19 = kha_Window_get(r66);
	r1->hasValue ? ((void (*)(vdynamic*,kha__Window))r1->fun)((vdynamic*)r1->value,r19) : ((void (*)(kha__Window))r1->fun)(r19);
	hl_run_kore();
	return;
}

void kha_SystemImpl_frame() {
	kha__Framebuffer r5;
	hl__types__ArrayObj r1;
	hl_type *r3;
	kha__$SystemImpl r6;
	int r4;
	varray *r2;
	kha_Scheduler_executeFrame();
	r3 = &t$kha_Framebuffer;
	r4 = 1;
	r2 = hl_alloc_array(r3,r4);
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->framebuffer;
	r4 = 0;
	((kha__Framebuffer*)(r2 + 1))[r4] = r5;
	r1 = hl_types_ArrayObj_alloc(r2);
	kha_System_render(r1);
	return;
}

double kha_SystemImpl_getTime() {
	double r0;
	r0 = hl_kinc_get_time();
	return r0;
}

int kha_SystemImpl_windowWidth(int r0) {
	int r1;
	r1 = hl_kinc_get_window_width(r0);
	return r1;
}

int kha_SystemImpl_windowHeight(int r0) {
	int r1;
	r1 = hl_kinc_get_window_height(r0);
	return r1;
}

kha__input__Mouse kha_SystemImpl_getMouse(int r0) {
	kha__input__Mouse r2;
	kha__$SystemImpl r3;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_7_4;
	r2 = NULL;
	return r2;
	label$fc555d2_7_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->mouse;
	return r2;
}

kha__input__Pen kha_SystemImpl_getPen(int r0) {
	kha__$SystemImpl r3;
	kha__input__Pen r2;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_8_4;
	r2 = NULL;
	return r2;
	label$fc555d2_8_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->pen;
	return r2;
}

kha__input__Keyboard kha_SystemImpl_getKeyboard(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	int r1;
	r1 = 0;
	if( r0 == r1 ) goto label$fc555d2_9_4;
	r2 = NULL;
	return r2;
	label$fc555d2_9_4:
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	return r2;
}

void kha_SystemImpl_lockMouse(int* r0) {
	hl__types__ArrayObj r5;
	bool r3;
	kha__$SystemImpl r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r1, r4, r7;
	if( r0 ) goto label$fc555d2_10_3;
	r1 = 0;
	goto label$fc555d2_10_4;
	label$fc555d2_10_3:
	r1 = *r0;
	label$fc555d2_10_4:
	r0 = NULL;
	r3 = kha_SystemImpl_isMouseLocked(r0);
	if( r3 ) goto label$fc555d2_10_26;
	hl_kinc_mouse_lock(r1);
	r4 = 0;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouseLockListeners;
	label$fc555d2_10_11:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$fc555d2_10_26;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$fc555d2_10_19;
	r8 = NULL;
	goto label$fc555d2_10_22;
	label$fc555d2_10_19:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$fc555d2_10_22:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*))r8->fun)((vdynamic*)r8->value) : ((void (*)(void))r8->fun)();
	goto label$fc555d2_10_11;
	label$fc555d2_10_26:
	return;
}

void kha_SystemImpl_unlockMouse(int* r0) {
	hl__types__ArrayObj r5;
	bool r3;
	kha__$SystemImpl r6;
	vclosure *r8;
	vdynamic *r9;
	varray *r10;
	int r1, r4, r7;
	if( r0 ) goto label$fc555d2_11_3;
	r1 = 0;
	goto label$fc555d2_11_4;
	label$fc555d2_11_3:
	r1 = *r0;
	label$fc555d2_11_4:
	r0 = NULL;
	r3 = kha_SystemImpl_isMouseLocked(r0);
	if( !r3 ) goto label$fc555d2_11_26;
	hl_kinc_mouse_unlock(r1);
	r4 = 0;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouseLockListeners;
	label$fc555d2_11_11:
	if( r5 == NULL ) hl_null_access();
	r7 = r5->length;
	if( r4 >= r7 ) goto label$fc555d2_11_26;
	r7 = r5->length;
	if( ((unsigned)r4) < ((unsigned)r7) ) goto label$fc555d2_11_19;
	r8 = NULL;
	goto label$fc555d2_11_22;
	label$fc555d2_11_19:
	r10 = r5->array;
	r9 = ((vdynamic**)(r10 + 1))[r4];
	r8 = (vclosure*)r9;
	label$fc555d2_11_22:
	++r4;
	if( r8 == NULL ) hl_null_access();
	r8->hasValue ? ((void (*)(vdynamic*))r8->fun)((vdynamic*)r8->value) : ((void (*)(void))r8->fun)();
	goto label$fc555d2_11_11;
	label$fc555d2_11_26:
	return;
}

bool kha_SystemImpl_canLockMouse(int* r0) {
	bool r2;
	int r1;
	if( r0 ) goto label$fc555d2_12_3;
	r1 = 0;
	goto label$fc555d2_12_4;
	label$fc555d2_12_3:
	r1 = *r0;
	label$fc555d2_12_4:
	r2 = hl_kinc_can_lock_mouse(r1);
	return r2;
}

bool kha_SystemImpl_isMouseLocked(int* r0) {
	bool r2;
	int r1;
	if( r0 ) goto label$fc555d2_13_3;
	r1 = 0;
	goto label$fc555d2_13_4;
	label$fc555d2_13_3:
	r1 = *r0;
	label$fc555d2_13_4:
	r2 = hl_kinc_is_mouse_locked(r1);
	return r2;
}

void kha_SystemImpl_notifyOfMouseLockChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r7;
	bool r3;
	kha__$SystemImpl r8;
	int *r5;
	int r4, r6;
	r4 = 0;
	r5 = &r4;
	r3 = kha_SystemImpl_canLockMouse(r5);
	if( !r3 ) goto label$fc555d2_14_9;
	if( !r0 ) goto label$fc555d2_14_9;
	r8 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r7 = r8->mouseLockListeners;
	if( r7 == NULL ) hl_null_access();
	r6 = hl_types_ArrayObj_push(r7,((vdynamic*)r0));
	label$fc555d2_14_9:
	return;
}

void kha_SystemImpl_removeFromMouseLockChange(vclosure* r0,vclosure* r1) {
	hl__types__ArrayObj r6;
	bool r3;
	kha__$SystemImpl r7;
	int *r5;
	int r4;
	r4 = 0;
	r5 = &r4;
	r3 = kha_SystemImpl_canLockMouse(r5);
	if( !r3 ) goto label$fc555d2_15_9;
	if( !r0 ) goto label$fc555d2_15_9;
	r7 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r6 = r7->mouseLockListeners;
	if( r6 == NULL ) hl_null_access();
	r3 = hl_types_ArrayObj_remove(r6,((vdynamic*)r0));
	label$fc555d2_15_9:
	return;
}

void kha_SystemImpl_hideSystemCursor() {
	bool r1;
	r1 = false;
	hl_kinc_show_mouse(r1);
	return;
}

void kha_SystemImpl_showSystemCursor() {
	bool r1;
	r1 = true;
	hl_kinc_show_mouse(r1);
	return;
}

void kha_SystemImpl_keyDown(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	kha_input_Keyboard_sendDownEvent(r2,r0);
	return;
}

void kha_SystemImpl_keyUp(int r0) {
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	kha_input_Keyboard_sendUpEvent(r2,r0);
	return;
}

void kha_SystemImpl_keyPress(int r0) {
	String r4;
	kha__$SystemImpl r3;
	kha__input__Keyboard r2;
	r3 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r2 = r3->keyboard;
	if( r2 == NULL ) hl_null_access();
	r4 = String_fromCharCode(r0);
	kha_input_Keyboard_sendPressEvent(r2,r4);
	return;
}

void kha_SystemImpl_mouseDown(int r0,int r1,int r2,int r3) {
	kha__input__Mouse r5;
	kha__$SystemImpl r6;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouse;
	if( r5 == NULL ) hl_null_access();
	kha_input_Mouse_sendDownEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_mouseUp(int r0,int r1,int r2,int r3) {
	kha__input__Mouse r5;
	kha__$SystemImpl r6;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->mouse;
	if( r5 == NULL ) hl_null_access();
	kha_input_Mouse_sendUpEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_mouseMove(int r0,int r1,int r2,int r3,int r4) {
	kha__input__Mouse r6;
	kha__$SystemImpl r7;
	r7 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r6 = r7->mouse;
	if( r6 == NULL ) hl_null_access();
	kha_input_Mouse_sendMoveEvent(r6,r0,r1,r2,r3,r4);
	return;
}

void kha_SystemImpl_mouseWheel(int r0,int r1) {
	kha__input__Mouse r3;
	kha__$SystemImpl r4;
	r4 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r3 = r4->mouse;
	if( r3 == NULL ) hl_null_access();
	kha_input_Mouse_sendWheelEvent(r3,r0,r1);
	return;
}

void kha_SystemImpl_penDown(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendDownEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_penUp(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendUpEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_penMove(int r0,int r1,int r2,double r3) {
	kha__$SystemImpl r6;
	kha__input__Pen r5;
	r6 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r5 = r6->pen;
	if( r5 == NULL ) hl_null_access();
	kha_input_Pen_sendMoveEvent(r5,r0,r1,r2,r3);
	return;
}

void kha_SystemImpl_gamepadAxis(int r0,int r1,double r2) {
	hl__types__ArrayObj r4;
	kha__input__Gamepad r7;
	kha__$SystemImpl r5;
	vdynamic *r8;
	varray *r9;
	int r6;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->gamepads;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( ((unsigned)r0) < ((unsigned)r6) ) goto label$fc555d2_28_7;
	r7 = NULL;
	goto label$fc555d2_28_10;
	label$fc555d2_28_7:
	r9 = r4->array;
	r8 = ((vdynamic**)(r9 + 1))[r0];
	r7 = (kha__input__Gamepad)r8;
	label$fc555d2_28_10:
	if( r7 == NULL ) hl_null_access();
	kha_input_Gamepad_sendAxisEvent(r7,r1,r2);
	return;
}

void kha_SystemImpl_gamepadButton(int r0,int r1,double r2) {
	hl__types__ArrayObj r4;
	kha__input__Gamepad r7;
	kha__$SystemImpl r5;
	vdynamic *r8;
	varray *r9;
	int r6;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->gamepads;
	if( r4 == NULL ) hl_null_access();
	r6 = r4->length;
	if( ((unsigned)r0) < ((unsigned)r6) ) goto label$fc555d2_29_7;
	r7 = NULL;
	goto label$fc555d2_29_10;
	label$fc555d2_29_7:
	r9 = r4->array;
	r8 = ((vdynamic**)(r9 + 1))[r0];
	r7 = (kha__input__Gamepad)r8;
	label$fc555d2_29_10:
	if( r7 == NULL ) hl_null_access();
	kha_input_Gamepad_sendButtonEvent(r7,r1,r2);
	return;
}

void kha_SystemImpl_touchStart(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendTouchStartEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_touchEnd(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendTouchEndEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_touchMove(int r0,int r1,int r2) {
	kha__input__Surface r4;
	kha__$SystemImpl r5;
	r5 = (kha__$SystemImpl)g$_kha_SystemImpl;
	r4 = r5->surface;
	if( r4 == NULL ) hl_null_access();
	kha_input_Surface_sendMoveEvent(r4,r0,r1,r2);
	return;
}

void kha_SystemImpl_foreground() {
	kha_System_foreground();
	return;
}

void kha_SystemImpl_resume() {
	kha_System_resume();
	return;
}

void kha_SystemImpl_pause() {
	kha_System_pause();
	return;
}

void kha_SystemImpl_background() {
	kha_System_background();
	return;
}

void kha_SystemImpl_shutdown() {
	kha_System_shutdown();
	return;
}

void kha_SystemImpl_dropFiles(String r0) {
	kha_System_dropFiles(r0);
	return;
}

vbyte* kha_SystemImpl_copy() {
	String r2;
	kha__$System r1;
	vclosure *r0;
	int *r5;
	int r4, r7;
	vbyte *r3, *r6;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->copyListener;
	if( !r0 ) goto label$fc555d2_39_17;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->copyListener;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->hasValue ? ((String (*)(vdynamic*))r0->fun)((vdynamic*)r0->value) : ((String (*)(void))r0->fun)();
	if( r2 ) goto label$fc555d2_39_10;
	r3 = NULL;
	return r3;
	label$fc555d2_39_10:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->bytes;
	r5 = &r4;
	r7 = 0;
	r6 = hl_utf16_to_utf8(r3,r7,r5);
	return r6;
	label$fc555d2_39_17:
	r3 = NULL;
	return r3;
}

vbyte* kha_SystemImpl_cut() {
	String r2;
	kha__$System r1;
	vclosure *r0;
	int *r5;
	int r4, r7;
	vbyte *r3, *r6;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->cutListener;
	if( !r0 ) goto label$fc555d2_40_17;
	r1 = (kha__$System)g$_kha_System;
	r0 = r1->cutListener;
	if( r0 == NULL ) hl_null_access();
	r2 = r0->hasValue ? ((String (*)(vdynamic*))r0->fun)((vdynamic*)r0->value) : ((String (*)(void))r0->fun)();
	if( r2 ) goto label$fc555d2_40_10;
	r3 = NULL;
	return r3;
	label$fc555d2_40_10:
	r4 = 0;
	if( r2 == NULL ) hl_null_access();
	r3 = r2->bytes;
	r5 = &r4;
	r7 = 0;
	r6 = hl_utf16_to_utf8(r3,r7,r5);
	return r6;
	label$fc555d2_40_17:
	r3 = NULL;
	return r3;
}

void kha_SystemImpl_paste(vbyte* r0) {
	String r1;
	kha__$System r4;
	vclosure *r3;
	r1 = String_fromUTF8(r0);
	r4 = (kha__$System)g$_kha_System;
	r3 = r4->pasteListener;
	if( !r3 ) goto label$fc555d2_41_8;
	r4 = (kha__$System)g$_kha_System;
	r3 = r4->pasteListener;
	if( r3 == NULL ) hl_null_access();
	r3->hasValue ? ((void (*)(vdynamic*,String))r3->fun)((vdynamic*)r3->value,r1) : ((void (*)(String))r3->fun)(r1);
	label$fc555d2_41_8:
	return;
}

String kha_SystemImpl_getGamepadId(int r0) {
	String r1;
	r1 = (String)s$;
	return r1;
}

String kha_SystemImpl_getGamepadVendor(int r0) {
	String r1;
	r1 = (String)s$;
	return r1;
}

void kha_SystemImpl_setGamepadRumble(int r0,double r1,double r2) {
	return;
}

