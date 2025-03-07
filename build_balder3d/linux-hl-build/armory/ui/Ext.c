﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/ui/Ext.h>
#include <kha/Image.h>
#include <kha/Kravur.h>
#include <zui/Zui.h>
#include <kha/graphics2/Graphics.h>
extern String s$;
extern hl_type t$_i32;
extern hl_type t$nul_f64;
bool zui_Zui_isVisible(zui__Zui,double);
void zui_Zui_endElement(zui__Zui,vdynamic*);
bool zui_Zui_getHover(zui__Zui,double*);
extern zui__$Zui g$_zui_Zui;
extern hl_type t$_bool;
void zui_Zui_fadeColor(zui__Zui);
bool zui_Zui_getReleased(zui__Zui,double*);
void zui_Zui_startTextEdit(zui__Zui,zui__Handle,int*);
void armory_ui_Ext_listenToKey(zui__Zui,zui__Handle);
int String___compare(String,vdynamic*);
extern hl_type t$_f64;
void zui_Zui_drawString(zui__Zui,kha__graphics2__Graphics,String,vdynamic*,double*,int*,bool*);
String armory_ui_Ext_keycodeToString(int);
#include <kha/input/Keyboard.h>
kha__input__Keyboard kha_input_Keyboard_get(int*);
void kha_input_Keyboard_hide(kha__input__Keyboard);
extern String s$Press_a_key_;
String String_fromCharCode(int);
extern String s$None;
extern String s$Unknown;
extern String s$Back;
extern String s$Cancel;
extern String s$Help;
extern String s$Backspace;
extern String s$Tab;
extern String s$Clear;
extern String s$Return;
extern String s$Shift;
extern String s$Ctrl;
extern String s$Alt;
extern String s$Pause;
extern String s$CapsLock;
extern String s$Kana;
extern String s$Eisu;
extern String s$Junja;
extern String s$Final;
extern String s$Hanja;
extern String s$Esc;
extern String s$Convert;
extern String s$NonConvert;
extern String s$Accept;
extern String s$ModeChange;
extern String s$Space;
extern String s$PageUp;
extern String s$PageDown;
extern String s$End;
extern String s$Home;
extern String s$Left;
extern String s$Up;
extern String s$Right;
extern String s$Down;
extern String s$Select;
extern String s$Print;
extern String s$Execute;
extern String s$PrintScreen;
extern String s$Insert;
extern String s$Delete;
extern String s$Colon;
extern String s$Semicolon;
extern String s$LessThan;
extern String s$Equals;
extern String s$GreaterThan;
extern String s$QuestionMark;
extern String s$At;
extern String s$Win;
extern String s$ContextMenu;
extern String s$Sleep;
extern String s$Numpad0;
extern String s$Numpad1;
extern String s$Numpad2;
extern String s$Numpad3;
extern String s$Numpad4;
extern String s$Numpad5;
extern String s$Numpad6;
extern String s$Numpad7;
extern String s$Numpad8;
extern String s$Numpad9;
extern String s$Multiply;
extern String s$Add;
extern String s$Separator;
extern String s$Subtract;
extern String s$Decimal;
extern String s$Divide;
extern String s$F1;
extern String s$F2;
extern String s$F3;
extern String s$F4;
extern String s$F5;
extern String s$F6;
extern String s$F7;
extern String s$F8;
extern String s$F9;
extern String s$F10;
extern String s$F11;
extern String s$F12;
extern String s$F13;
extern String s$F14;
extern String s$F15;
extern String s$F16;
extern String s$F17;
extern String s$F18;
extern String s$F19;
extern String s$F20;
extern String s$F21;
extern String s$F22;
extern String s$F23;
extern String s$F24;
extern String s$NumLock;
extern String s$ScrollLock;
extern String s$WinOemFjJisho;
extern String s$WinOemFjMasshou;
extern String s$WinOemFjTouroku;
extern String s$WinOemFjLoya;
extern String s$WinOemFjRoya;
extern String s$Circumflex;
extern String s$Exclamation;
extern String s$DoubleQuote;
extern String s$Hash;
extern String s$Dollar;
extern String s$Percent;
extern String s$Ampersand;
extern String s$Underscore;
extern String s$OpenParen;
extern String s$CloseParen;
extern String s$Asterisk;
extern String s$Plus;
extern String s$Pipe;
extern String s$HyphenMinus;
extern String s$OpenCurlyBracket;
extern String s$CloseCurlyBracket;
extern String s$Tilde;
extern String s$VolumeMute;
extern String s$VolumeDown;
extern String s$VolumeUp;
extern String s$Comma;
extern String s$Period;
extern String s$Slash;
extern String s$BackQuote;
extern String s$OpenBracket;
extern String s$BackSlash;
extern String s$CloseBracket;
extern String s$Quote;
extern String s$Meta;
extern String s$AltGr;
extern String s$WinIcoHelp;
extern String s$WinIco00;
extern String s$WinIcoClear;
extern String s$WinOemReset;
extern String s$WinOemJump;
extern String s$WinOemPA1;
extern String s$WinOemPA2;
extern String s$WinOemPA3;
extern String s$WinOemWSCTRL;
extern String s$WinOemCUSEL;
extern String s$WinOemATTN;
extern String s$WinOemFinish;
extern String s$WinOemCopy;
extern String s$WinOemAuto;
extern String s$WinOemENLW;
extern String s$WinOemBackTab;
extern String s$ATTN;
extern String s$CRSEL;
extern String s$EXSEL;
extern String s$EREOF;
extern String s$Play;
extern String s$Zoom;
extern String s$PA1;
extern String s$WinOemClear;

int armory_ui_Ext_keyInput(zui__Zui r0,zui__Handle r1,String r2,int* r3) {
	bool *r32;
	String r4, r29;
	vvirtual *r10, *r12;
	bool r7, r16, r25;
	kha__graphics2__Graphics r19;
	zui__$Zui r18;
	vclosure *r17;
	double r8, r13, r20, r21, r22, r23, r24, r26, r27, r28;
	double *r15;
	zui__Handle r14;
	vdynamic *r11;
	int r5, r9, r30, r31, r33;
	if( r2 ) goto label$1dfb406_1_3;
	r4 = (String)s$;
	r2 = r4;
	label$1dfb406_1_3:
	if( r3 ) goto label$1dfb406_1_6;
	r5 = 0;
	goto label$1dfb406_1_7;
	label$1dfb406_1_6:
	r5 = *r3;
	label$1dfb406_1_7:
	if( r0 == NULL ) hl_null_access();
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[12] ? (*(int*)(hl_vfields(r10)[12])) : (int)hl_dyn_geti(r10->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r8 = (double)r9;
	r12 = r0->ops;
	if( r12 == NULL ) hl_null_access();
	r11 = hl_vfields(r12)[5] ? (*(vdynamic**)(hl_vfields(r12)[5])) : (vdynamic*)hl_dyn_getp(r12->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r13 = r11 ? r11->v.d : 0;
	r8 = r8 * r13;
	r7 = zui_Zui_isVisible(r0,r8);
	if( r7 ) goto label$1dfb406_1_25;
	r11 = NULL;
	zui_Zui_endElement(r0,r11);
	if( r1 == NULL ) hl_null_access();
	r8 = r1->value;
	r9 = (int)r8;
	return r9;
	label$1dfb406_1_25:
	r15 = NULL;
	r7 = zui_Zui_getHover(r0,r15);
	if( !r7 ) goto label$1dfb406_1_35;
	r18 = (zui__$Zui)g$_zui_Zui;
	r17 = r18->onTextHover;
	if( !r17 ) goto label$1dfb406_1_35;
	r18 = (zui__$Zui)g$_zui_Zui;
	r17 = r18->onTextHover;
	if( r17 == NULL ) hl_null_access();
	r17->hasValue ? ((void (*)(vdynamic*))r17->fun)((vdynamic*)r17->value) : ((void (*)(void))r17->fun)();
	label$1dfb406_1_35:
	r19 = r0->g;
	if( r19 == NULL ) hl_null_access();
	if( !r7 ) goto label$1dfb406_1_42;
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[1] ? (*(int*)(hl_vfields(r10)[1])) : (int)hl_dyn_geti(r10->value,-43289016/*ACCENT_HOVER_COL*/,&t$_i32);
	goto label$1dfb406_1_45;
	label$1dfb406_1_42:
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[0] ? (*(int*)(hl_vfields(r10)[0])) : (int)hl_dyn_geti(r10->value,34671467/*ACCENT_COL*/,&t$_i32);
	label$1dfb406_1_45:
	r9 = ((int (*)(kha__graphics2__Graphics,int))r19->$type->vobj_proto[11])(r19,r9);
	r19 = r0->g;
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r16 = hl_vfields(r10)[15] ? (*(bool*)(hl_vfields(r10)[15])) : (bool)hl_dyn_geti(r10->value,51671661/*FILL_ACCENT_BG*/,&t$_bool);
	r8 = r0->_x;
	r13 = r0->buttonOffsetY;
	r8 = r8 + r13;
	r13 = r0->_y;
	r20 = r0->buttonOffsetY;
	r13 = r13 + r20;
	r9 = r0->_w;
	r20 = (double)r9;
	r21 = r0->buttonOffsetY;
	r22 = 2.;
	r21 = r21 * r22;
	r20 = r20 - r21;
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[5] ? (*(int*)(hl_vfields(r10)[5])) : (int)hl_dyn_geti(r10->value,-172474255/*BUTTON_H*/,&t$_i32);
	r21 = (double)r9;
	r12 = r0->ops;
	if( r12 == NULL ) hl_null_access();
	r11 = hl_vfields(r12)[5] ? (*(vdynamic**)(hl_vfields(r12)[5])) : (vdynamic*)hl_dyn_getp(r12->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r22 = r11 ? r11->v.d : 0;
	r21 = r21 * r22;
	r22 = 0.;
	r24 = 0.;
	if( r22 != r24 ) goto label$1dfb406_1_76;
	r23 = 1.;
	r22 = r23;
	label$1dfb406_1_76:
	r25 = r0->enabled;
	if( r25 ) goto label$1dfb406_1_79;
	zui_Zui_fadeColor(r0);
	label$1dfb406_1_79:
	if( !r16 ) goto label$1dfb406_1_87;
	if( r19 == NULL ) hl_null_access();
	r26 = 1.;
	r24 = r13 - r26;
	r28 = 1.;
	r27 = r21 + r28;
	((void (*)(kha__graphics2__Graphics,double,double,double,double))r19->$type->vobj_proto[5])(r19,r8,r24,r20,r27);
	goto label$1dfb406_1_91;
	label$1dfb406_1_87:
	if( r19 == NULL ) hl_null_access();
	r28 = r22;
	r15 = &r28;
	((void (*)(kha__graphics2__Graphics,double,double,double,double,double*))r19->$type->vobj_proto[4])(r19,r8,r13,r20,r21,r15);
	label$1dfb406_1_91:
	r15 = NULL;
	r16 = zui_Zui_getReleased(r0,r15);
	if( r16 ) goto label$1dfb406_1_98;
	r16 = r0->tabPressed;
	if( r16 ) goto label$1dfb406_1_98;
	r16 = false;
	goto label$1dfb406_1_99;
	label$1dfb406_1_98:
	r16 = true;
	label$1dfb406_1_99:
	r14 = r0->textSelectedHandle;
	if( r14 == r1 ) goto label$1dfb406_1_104;
	if( !r16 ) goto label$1dfb406_1_104;
	r3 = NULL;
	zui_Zui_startTextEdit(r0,r1,r3);
	label$1dfb406_1_104:
	r14 = r0->textSelectedHandle;
	if( r14 != r1 ) goto label$1dfb406_1_108;
	armory_ui_Ext_listenToKey(r0,r1);
	goto label$1dfb406_1_111;
	label$1dfb406_1_108:
	if( r1 == NULL ) hl_null_access();
	r25 = false;
	r1->changed = r25;
	label$1dfb406_1_111:
	r29 = (String)s$;
	if( r2 == r29 || (r2 && r29 && String___compare(r2,(vdynamic*)r29) == 0) ) goto label$1dfb406_1_139;
	r19 = r0->g;
	if( r19 == NULL ) hl_null_access();
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[21] ? (*(int*)(hl_vfields(r10)[21])) : (int)hl_dyn_geti(r10->value,370483844/*LABEL_COL*/,&t$_i32);
	r9 = ((int (*)(kha__graphics2__Graphics,int))r19->$type->vobj_proto[11])(r19,r9);
	r30 = 2;
	if( r5 != r30 ) goto label$1dfb406_1_123;
	r9 = 0;
	goto label$1dfb406_1_124;
	label$1dfb406_1_123:
	r9 = 2;
	label$1dfb406_1_124:
	r31 = 0;
	if( r9 != r31 ) goto label$1dfb406_1_128;
	r30 = 7;
	goto label$1dfb406_1_129;
	label$1dfb406_1_128:
	r30 = 0;
	label$1dfb406_1_129:
	r19 = r0->g;
	r8 = (double)r30;
	r11 = hl_alloc_dynamic(&t$_f64);
	r11->v.d = r8;
	r31 = 0;
	r8 = (double)r31;
	r15 = &r8;
	r31 = r9;
	r3 = &r31;
	r32 = NULL;
	zui_Zui_drawString(r0,r19,r2,r11,r15,r3,r32);
	label$1dfb406_1_139:
	if( r1 == NULL ) hl_null_access();
	r13 = r1->value;
	r9 = (int)r13;
	r4 = armory_ui_Ext_keycodeToString(r9);
	r1->text = r4;
	r19 = r0->g;
	if( r19 == NULL ) hl_null_access();
	r10 = r0->_t;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[28] ? (*(int*)(hl_vfields(r10)[28])) : (int)hl_dyn_geti(r10->value,-437956663/*TEXT_COL*/,&t$_i32);
	r9 = ((int (*)(kha__graphics2__Graphics,int))r19->$type->vobj_proto[11])(r19,r9);
	r14 = r0->textSelectedHandle;
	if( r14 == r1 ) goto label$1dfb406_1_163;
	r19 = r0->g;
	r4 = r1->text;
	r11 = NULL;
	r9 = 0;
	r20 = (double)r9;
	r15 = &r20;
	r9 = r5;
	r3 = &r9;
	r32 = NULL;
	zui_Zui_drawString(r0,r19,r4,r11,r15,r3,r32);
	goto label$1dfb406_1_173;
	label$1dfb406_1_163:
	r19 = r0->g;
	r4 = r0->textSelected;
	r11 = NULL;
	r30 = 0;
	r21 = (double)r30;
	r15 = &r21;
	r30 = r5;
	r3 = &r30;
	r32 = NULL;
	zui_Zui_drawString(r0,r19,r4,r11,r15,r3,r32);
	label$1dfb406_1_173:
	r11 = NULL;
	zui_Zui_endElement(r0,r11);
	r22 = r1->value;
	r33 = (int)r22;
	return r33;
}

void armory_ui_Ext_listenToKey(zui__Zui r0,zui__Handle r1) {
	String r10;
	bool r3;
	double r7;
	int *r9;
	vdynamic *r5;
	zui__Handle r4;
	kha__input__Keyboard r8;
	int r6;
	if( r0 == NULL ) hl_null_access();
	r3 = r0->isKeyDown;
	if( !r3 ) goto label$1dfb406_2_23;
	if( r1 == NULL ) hl_null_access();
	r5 = r0->key;
	r6 = r5 ? r5->v.i : 0;
	r7 = (double)r6;
	r1->value = r7;
	r3 = true;
	r0->changed = r3;
	r1->changed = r3;
	r4 = NULL;
	r0->textSelectedHandle = r4;
	r3 = false;
	r0->isTyping = r3;
	r9 = NULL;
	r8 = kha_input_Keyboard_get(r9);
	if( !r8 ) goto label$1dfb406_2_22;
	r9 = NULL;
	r8 = kha_input_Keyboard_get(r9);
	if( r8 == NULL ) hl_null_access();
	kha_input_Keyboard_hide(r8);
	label$1dfb406_2_22:
	goto label$1dfb406_2_25;
	label$1dfb406_2_23:
	r10 = (String)s$Press_a_key_;
	r0->textSelected = r10;
	label$1dfb406_2_25:
	return;
}

String armory_ui_Ext_keycodeToString(int r0) {
	String r2;
	int r1;
	r1 = -1;
	if( r1 == r0 ) goto label$1dfb406_3_302;
	r1 = 0;
	if( r1 == r0 ) goto label$1dfb406_3_304;
	r1 = 1;
	if( r1 == r0 ) goto label$1dfb406_3_306;
	r1 = 3;
	if( r1 == r0 ) goto label$1dfb406_3_308;
	r1 = 6;
	if( r1 == r0 ) goto label$1dfb406_3_310;
	r1 = 8;
	if( r1 == r0 ) goto label$1dfb406_3_312;
	r1 = 9;
	if( r1 == r0 ) goto label$1dfb406_3_314;
	r1 = 12;
	if( r1 == r0 ) goto label$1dfb406_3_316;
	r1 = 13;
	if( r1 == r0 ) goto label$1dfb406_3_318;
	r1 = 16;
	if( r1 == r0 ) goto label$1dfb406_3_320;
	r1 = 17;
	if( r1 == r0 ) goto label$1dfb406_3_322;
	r1 = 18;
	if( r1 == r0 ) goto label$1dfb406_3_324;
	r1 = 19;
	if( r1 == r0 ) goto label$1dfb406_3_326;
	r1 = 20;
	if( r1 == r0 ) goto label$1dfb406_3_328;
	r1 = 21;
	if( r1 == r0 ) goto label$1dfb406_3_330;
	r1 = 22;
	if( r1 == r0 ) goto label$1dfb406_3_332;
	r1 = 23;
	if( r1 == r0 ) goto label$1dfb406_3_334;
	r1 = 24;
	if( r1 == r0 ) goto label$1dfb406_3_336;
	r1 = 25;
	if( r1 == r0 ) goto label$1dfb406_3_338;
	r1 = 27;
	if( r1 == r0 ) goto label$1dfb406_3_340;
	r1 = 28;
	if( r1 == r0 ) goto label$1dfb406_3_342;
	r1 = 29;
	if( r1 == r0 ) goto label$1dfb406_3_344;
	r1 = 30;
	if( r1 == r0 ) goto label$1dfb406_3_346;
	r1 = 31;
	if( r1 == r0 ) goto label$1dfb406_3_348;
	r1 = 32;
	if( r1 == r0 ) goto label$1dfb406_3_350;
	r1 = 33;
	if( r1 == r0 ) goto label$1dfb406_3_352;
	r1 = 34;
	if( r1 == r0 ) goto label$1dfb406_3_354;
	r1 = 35;
	if( r1 == r0 ) goto label$1dfb406_3_356;
	r1 = 36;
	if( r1 == r0 ) goto label$1dfb406_3_358;
	r1 = 37;
	if( r1 == r0 ) goto label$1dfb406_3_360;
	r1 = 38;
	if( r1 == r0 ) goto label$1dfb406_3_362;
	r1 = 39;
	if( r1 == r0 ) goto label$1dfb406_3_364;
	r1 = 40;
	if( r1 == r0 ) goto label$1dfb406_3_366;
	r1 = 41;
	if( r1 == r0 ) goto label$1dfb406_3_368;
	r1 = 42;
	if( r1 == r0 ) goto label$1dfb406_3_370;
	r1 = 43;
	if( r1 == r0 ) goto label$1dfb406_3_372;
	r1 = 44;
	if( r1 == r0 ) goto label$1dfb406_3_374;
	r1 = 45;
	if( r1 == r0 ) goto label$1dfb406_3_376;
	r1 = 46;
	if( r1 == r0 ) goto label$1dfb406_3_378;
	r1 = 58;
	if( r1 == r0 ) goto label$1dfb406_3_380;
	r1 = 59;
	if( r1 == r0 ) goto label$1dfb406_3_382;
	r1 = 60;
	if( r1 == r0 ) goto label$1dfb406_3_384;
	r1 = 61;
	if( r1 == r0 ) goto label$1dfb406_3_386;
	r1 = 62;
	if( r1 == r0 ) goto label$1dfb406_3_388;
	r1 = 63;
	if( r1 == r0 ) goto label$1dfb406_3_390;
	r1 = 64;
	if( r1 == r0 ) goto label$1dfb406_3_392;
	r1 = 91;
	if( r1 == r0 ) goto label$1dfb406_3_394;
	r1 = 93;
	if( r1 == r0 ) goto label$1dfb406_3_396;
	r1 = 95;
	if( r1 == r0 ) goto label$1dfb406_3_398;
	r1 = 96;
	if( r1 == r0 ) goto label$1dfb406_3_400;
	r1 = 97;
	if( r1 == r0 ) goto label$1dfb406_3_402;
	r1 = 98;
	if( r1 == r0 ) goto label$1dfb406_3_404;
	r1 = 99;
	if( r1 == r0 ) goto label$1dfb406_3_406;
	r1 = 100;
	if( r1 == r0 ) goto label$1dfb406_3_408;
	r1 = 101;
	if( r1 == r0 ) goto label$1dfb406_3_410;
	r1 = 102;
	if( r1 == r0 ) goto label$1dfb406_3_412;
	r1 = 103;
	if( r1 == r0 ) goto label$1dfb406_3_414;
	r1 = 104;
	if( r1 == r0 ) goto label$1dfb406_3_416;
	r1 = 105;
	if( r1 == r0 ) goto label$1dfb406_3_418;
	r1 = 106;
	if( r1 == r0 ) goto label$1dfb406_3_420;
	r1 = 107;
	if( r1 == r0 ) goto label$1dfb406_3_422;
	r1 = 108;
	if( r1 == r0 ) goto label$1dfb406_3_424;
	r1 = 109;
	if( r1 == r0 ) goto label$1dfb406_3_426;
	r1 = 110;
	if( r1 == r0 ) goto label$1dfb406_3_428;
	r1 = 111;
	if( r1 == r0 ) goto label$1dfb406_3_430;
	r1 = 112;
	if( r1 == r0 ) goto label$1dfb406_3_432;
	r1 = 113;
	if( r1 == r0 ) goto label$1dfb406_3_434;
	r1 = 114;
	if( r1 == r0 ) goto label$1dfb406_3_436;
	r1 = 115;
	if( r1 == r0 ) goto label$1dfb406_3_438;
	r1 = 116;
	if( r1 == r0 ) goto label$1dfb406_3_440;
	r1 = 117;
	if( r1 == r0 ) goto label$1dfb406_3_442;
	r1 = 118;
	if( r1 == r0 ) goto label$1dfb406_3_444;
	r1 = 119;
	if( r1 == r0 ) goto label$1dfb406_3_446;
	r1 = 120;
	if( r1 == r0 ) goto label$1dfb406_3_448;
	r1 = 121;
	if( r1 == r0 ) goto label$1dfb406_3_450;
	r1 = 122;
	if( r1 == r0 ) goto label$1dfb406_3_452;
	r1 = 123;
	if( r1 == r0 ) goto label$1dfb406_3_454;
	r1 = 124;
	if( r1 == r0 ) goto label$1dfb406_3_456;
	r1 = 125;
	if( r1 == r0 ) goto label$1dfb406_3_458;
	r1 = 126;
	if( r1 == r0 ) goto label$1dfb406_3_460;
	r1 = 127;
	if( r1 == r0 ) goto label$1dfb406_3_462;
	r1 = 128;
	if( r1 == r0 ) goto label$1dfb406_3_464;
	r1 = 129;
	if( r1 == r0 ) goto label$1dfb406_3_466;
	r1 = 130;
	if( r1 == r0 ) goto label$1dfb406_3_468;
	r1 = 131;
	if( r1 == r0 ) goto label$1dfb406_3_470;
	r1 = 132;
	if( r1 == r0 ) goto label$1dfb406_3_472;
	r1 = 133;
	if( r1 == r0 ) goto label$1dfb406_3_474;
	r1 = 134;
	if( r1 == r0 ) goto label$1dfb406_3_476;
	r1 = 135;
	if( r1 == r0 ) goto label$1dfb406_3_478;
	r1 = 144;
	if( r1 == r0 ) goto label$1dfb406_3_480;
	r1 = 145;
	if( r1 == r0 ) goto label$1dfb406_3_482;
	r1 = 146;
	if( r1 == r0 ) goto label$1dfb406_3_484;
	r1 = 147;
	if( r1 == r0 ) goto label$1dfb406_3_486;
	r1 = 148;
	if( r1 == r0 ) goto label$1dfb406_3_488;
	r1 = 149;
	if( r1 == r0 ) goto label$1dfb406_3_490;
	r1 = 150;
	if( r1 == r0 ) goto label$1dfb406_3_492;
	r1 = 160;
	if( r1 == r0 ) goto label$1dfb406_3_494;
	r1 = 161;
	if( r1 == r0 ) goto label$1dfb406_3_496;
	r1 = 162;
	if( r1 == r0 ) goto label$1dfb406_3_498;
	r1 = 163;
	if( r1 == r0 ) goto label$1dfb406_3_500;
	r1 = 164;
	if( r1 == r0 ) goto label$1dfb406_3_502;
	r1 = 165;
	if( r1 == r0 ) goto label$1dfb406_3_504;
	r1 = 166;
	if( r1 == r0 ) goto label$1dfb406_3_506;
	r1 = 167;
	if( r1 == r0 ) goto label$1dfb406_3_508;
	r1 = 168;
	if( r1 == r0 ) goto label$1dfb406_3_510;
	r1 = 169;
	if( r1 == r0 ) goto label$1dfb406_3_512;
	r1 = 170;
	if( r1 == r0 ) goto label$1dfb406_3_514;
	r1 = 171;
	if( r1 == r0 ) goto label$1dfb406_3_516;
	r1 = 172;
	if( r1 == r0 ) goto label$1dfb406_3_518;
	r1 = 173;
	if( r1 == r0 ) goto label$1dfb406_3_520;
	r1 = 174;
	if( r1 == r0 ) goto label$1dfb406_3_522;
	r1 = 175;
	if( r1 == r0 ) goto label$1dfb406_3_524;
	r1 = 176;
	if( r1 == r0 ) goto label$1dfb406_3_526;
	r1 = 181;
	if( r1 == r0 ) goto label$1dfb406_3_528;
	r1 = 182;
	if( r1 == r0 ) goto label$1dfb406_3_530;
	r1 = 183;
	if( r1 == r0 ) goto label$1dfb406_3_532;
	r1 = 188;
	if( r1 == r0 ) goto label$1dfb406_3_534;
	r1 = 190;
	if( r1 == r0 ) goto label$1dfb406_3_536;
	r1 = 191;
	if( r1 == r0 ) goto label$1dfb406_3_538;
	r1 = 192;
	if( r1 == r0 ) goto label$1dfb406_3_540;
	r1 = 219;
	if( r1 == r0 ) goto label$1dfb406_3_542;
	r1 = 220;
	if( r1 == r0 ) goto label$1dfb406_3_544;
	r1 = 221;
	if( r1 == r0 ) goto label$1dfb406_3_546;
	r1 = 222;
	if( r1 == r0 ) goto label$1dfb406_3_548;
	r1 = 224;
	if( r1 == r0 ) goto label$1dfb406_3_550;
	r1 = 225;
	if( r1 == r0 ) goto label$1dfb406_3_552;
	r1 = 227;
	if( r1 == r0 ) goto label$1dfb406_3_554;
	r1 = 228;
	if( r1 == r0 ) goto label$1dfb406_3_556;
	r1 = 230;
	if( r1 == r0 ) goto label$1dfb406_3_558;
	r1 = 233;
	if( r1 == r0 ) goto label$1dfb406_3_560;
	r1 = 234;
	if( r1 == r0 ) goto label$1dfb406_3_562;
	r1 = 235;
	if( r1 == r0 ) goto label$1dfb406_3_564;
	r1 = 236;
	if( r1 == r0 ) goto label$1dfb406_3_566;
	r1 = 237;
	if( r1 == r0 ) goto label$1dfb406_3_568;
	r1 = 238;
	if( r1 == r0 ) goto label$1dfb406_3_570;
	r1 = 239;
	if( r1 == r0 ) goto label$1dfb406_3_572;
	r1 = 240;
	if( r1 == r0 ) goto label$1dfb406_3_574;
	r1 = 241;
	if( r1 == r0 ) goto label$1dfb406_3_576;
	r1 = 242;
	if( r1 == r0 ) goto label$1dfb406_3_578;
	r1 = 243;
	if( r1 == r0 ) goto label$1dfb406_3_580;
	r1 = 244;
	if( r1 == r0 ) goto label$1dfb406_3_582;
	r1 = 245;
	if( r1 == r0 ) goto label$1dfb406_3_584;
	r1 = 246;
	if( r1 == r0 ) goto label$1dfb406_3_586;
	r1 = 247;
	if( r1 == r0 ) goto label$1dfb406_3_588;
	r1 = 248;
	if( r1 == r0 ) goto label$1dfb406_3_590;
	r1 = 249;
	if( r1 == r0 ) goto label$1dfb406_3_592;
	r1 = 250;
	if( r1 == r0 ) goto label$1dfb406_3_594;
	r1 = 251;
	if( r1 == r0 ) goto label$1dfb406_3_596;
	r1 = 253;
	if( r1 == r0 ) goto label$1dfb406_3_598;
	r1 = 254;
	if( r1 == r0 ) goto label$1dfb406_3_600;
	r2 = String_fromCharCode(r0);
	return r2;
	label$1dfb406_3_302:
	r2 = (String)s$None;
	return r2;
	label$1dfb406_3_304:
	r2 = (String)s$Unknown;
	return r2;
	label$1dfb406_3_306:
	r2 = (String)s$Back;
	return r2;
	label$1dfb406_3_308:
	r2 = (String)s$Cancel;
	return r2;
	label$1dfb406_3_310:
	r2 = (String)s$Help;
	return r2;
	label$1dfb406_3_312:
	r2 = (String)s$Backspace;
	return r2;
	label$1dfb406_3_314:
	r2 = (String)s$Tab;
	return r2;
	label$1dfb406_3_316:
	r2 = (String)s$Clear;
	return r2;
	label$1dfb406_3_318:
	r2 = (String)s$Return;
	return r2;
	label$1dfb406_3_320:
	r2 = (String)s$Shift;
	return r2;
	label$1dfb406_3_322:
	r2 = (String)s$Ctrl;
	return r2;
	label$1dfb406_3_324:
	r2 = (String)s$Alt;
	return r2;
	label$1dfb406_3_326:
	r2 = (String)s$Pause;
	return r2;
	label$1dfb406_3_328:
	r2 = (String)s$CapsLock;
	return r2;
	label$1dfb406_3_330:
	r2 = (String)s$Kana;
	return r2;
	label$1dfb406_3_332:
	r2 = (String)s$Eisu;
	return r2;
	label$1dfb406_3_334:
	r2 = (String)s$Junja;
	return r2;
	label$1dfb406_3_336:
	r2 = (String)s$Final;
	return r2;
	label$1dfb406_3_338:
	r2 = (String)s$Hanja;
	return r2;
	label$1dfb406_3_340:
	r2 = (String)s$Esc;
	return r2;
	label$1dfb406_3_342:
	r2 = (String)s$Convert;
	return r2;
	label$1dfb406_3_344:
	r2 = (String)s$NonConvert;
	return r2;
	label$1dfb406_3_346:
	r2 = (String)s$Accept;
	return r2;
	label$1dfb406_3_348:
	r2 = (String)s$ModeChange;
	return r2;
	label$1dfb406_3_350:
	r2 = (String)s$Space;
	return r2;
	label$1dfb406_3_352:
	r2 = (String)s$PageUp;
	return r2;
	label$1dfb406_3_354:
	r2 = (String)s$PageDown;
	return r2;
	label$1dfb406_3_356:
	r2 = (String)s$End;
	return r2;
	label$1dfb406_3_358:
	r2 = (String)s$Home;
	return r2;
	label$1dfb406_3_360:
	r2 = (String)s$Left;
	return r2;
	label$1dfb406_3_362:
	r2 = (String)s$Up;
	return r2;
	label$1dfb406_3_364:
	r2 = (String)s$Right;
	return r2;
	label$1dfb406_3_366:
	r2 = (String)s$Down;
	return r2;
	label$1dfb406_3_368:
	r2 = (String)s$Select;
	return r2;
	label$1dfb406_3_370:
	r2 = (String)s$Print;
	return r2;
	label$1dfb406_3_372:
	r2 = (String)s$Execute;
	return r2;
	label$1dfb406_3_374:
	r2 = (String)s$PrintScreen;
	return r2;
	label$1dfb406_3_376:
	r2 = (String)s$Insert;
	return r2;
	label$1dfb406_3_378:
	r2 = (String)s$Delete;
	return r2;
	label$1dfb406_3_380:
	r2 = (String)s$Colon;
	return r2;
	label$1dfb406_3_382:
	r2 = (String)s$Semicolon;
	return r2;
	label$1dfb406_3_384:
	r2 = (String)s$LessThan;
	return r2;
	label$1dfb406_3_386:
	r2 = (String)s$Equals;
	return r2;
	label$1dfb406_3_388:
	r2 = (String)s$GreaterThan;
	return r2;
	label$1dfb406_3_390:
	r2 = (String)s$QuestionMark;
	return r2;
	label$1dfb406_3_392:
	r2 = (String)s$At;
	return r2;
	label$1dfb406_3_394:
	r2 = (String)s$Win;
	return r2;
	label$1dfb406_3_396:
	r2 = (String)s$ContextMenu;
	return r2;
	label$1dfb406_3_398:
	r2 = (String)s$Sleep;
	return r2;
	label$1dfb406_3_400:
	r2 = (String)s$Numpad0;
	return r2;
	label$1dfb406_3_402:
	r2 = (String)s$Numpad1;
	return r2;
	label$1dfb406_3_404:
	r2 = (String)s$Numpad2;
	return r2;
	label$1dfb406_3_406:
	r2 = (String)s$Numpad3;
	return r2;
	label$1dfb406_3_408:
	r2 = (String)s$Numpad4;
	return r2;
	label$1dfb406_3_410:
	r2 = (String)s$Numpad5;
	return r2;
	label$1dfb406_3_412:
	r2 = (String)s$Numpad6;
	return r2;
	label$1dfb406_3_414:
	r2 = (String)s$Numpad7;
	return r2;
	label$1dfb406_3_416:
	r2 = (String)s$Numpad8;
	return r2;
	label$1dfb406_3_418:
	r2 = (String)s$Numpad9;
	return r2;
	label$1dfb406_3_420:
	r2 = (String)s$Multiply;
	return r2;
	label$1dfb406_3_422:
	r2 = (String)s$Add;
	return r2;
	label$1dfb406_3_424:
	r2 = (String)s$Separator;
	return r2;
	label$1dfb406_3_426:
	r2 = (String)s$Subtract;
	return r2;
	label$1dfb406_3_428:
	r2 = (String)s$Decimal;
	return r2;
	label$1dfb406_3_430:
	r2 = (String)s$Divide;
	return r2;
	label$1dfb406_3_432:
	r2 = (String)s$F1;
	return r2;
	label$1dfb406_3_434:
	r2 = (String)s$F2;
	return r2;
	label$1dfb406_3_436:
	r2 = (String)s$F3;
	return r2;
	label$1dfb406_3_438:
	r2 = (String)s$F4;
	return r2;
	label$1dfb406_3_440:
	r2 = (String)s$F5;
	return r2;
	label$1dfb406_3_442:
	r2 = (String)s$F6;
	return r2;
	label$1dfb406_3_444:
	r2 = (String)s$F7;
	return r2;
	label$1dfb406_3_446:
	r2 = (String)s$F8;
	return r2;
	label$1dfb406_3_448:
	r2 = (String)s$F9;
	return r2;
	label$1dfb406_3_450:
	r2 = (String)s$F10;
	return r2;
	label$1dfb406_3_452:
	r2 = (String)s$F11;
	return r2;
	label$1dfb406_3_454:
	r2 = (String)s$F12;
	return r2;
	label$1dfb406_3_456:
	r2 = (String)s$F13;
	return r2;
	label$1dfb406_3_458:
	r2 = (String)s$F14;
	return r2;
	label$1dfb406_3_460:
	r2 = (String)s$F15;
	return r2;
	label$1dfb406_3_462:
	r2 = (String)s$F16;
	return r2;
	label$1dfb406_3_464:
	r2 = (String)s$F17;
	return r2;
	label$1dfb406_3_466:
	r2 = (String)s$F18;
	return r2;
	label$1dfb406_3_468:
	r2 = (String)s$F19;
	return r2;
	label$1dfb406_3_470:
	r2 = (String)s$F20;
	return r2;
	label$1dfb406_3_472:
	r2 = (String)s$F21;
	return r2;
	label$1dfb406_3_474:
	r2 = (String)s$F22;
	return r2;
	label$1dfb406_3_476:
	r2 = (String)s$F23;
	return r2;
	label$1dfb406_3_478:
	r2 = (String)s$F24;
	return r2;
	label$1dfb406_3_480:
	r2 = (String)s$NumLock;
	return r2;
	label$1dfb406_3_482:
	r2 = (String)s$ScrollLock;
	return r2;
	label$1dfb406_3_484:
	r2 = (String)s$WinOemFjJisho;
	return r2;
	label$1dfb406_3_486:
	r2 = (String)s$WinOemFjMasshou;
	return r2;
	label$1dfb406_3_488:
	r2 = (String)s$WinOemFjTouroku;
	return r2;
	label$1dfb406_3_490:
	r2 = (String)s$WinOemFjLoya;
	return r2;
	label$1dfb406_3_492:
	r2 = (String)s$WinOemFjRoya;
	return r2;
	label$1dfb406_3_494:
	r2 = (String)s$Circumflex;
	return r2;
	label$1dfb406_3_496:
	r2 = (String)s$Exclamation;
	return r2;
	label$1dfb406_3_498:
	r2 = (String)s$DoubleQuote;
	return r2;
	label$1dfb406_3_500:
	r2 = (String)s$Hash;
	return r2;
	label$1dfb406_3_502:
	r2 = (String)s$Dollar;
	return r2;
	label$1dfb406_3_504:
	r2 = (String)s$Percent;
	return r2;
	label$1dfb406_3_506:
	r2 = (String)s$Ampersand;
	return r2;
	label$1dfb406_3_508:
	r2 = (String)s$Underscore;
	return r2;
	label$1dfb406_3_510:
	r2 = (String)s$OpenParen;
	return r2;
	label$1dfb406_3_512:
	r2 = (String)s$CloseParen;
	return r2;
	label$1dfb406_3_514:
	r2 = (String)s$Asterisk;
	return r2;
	label$1dfb406_3_516:
	r2 = (String)s$Plus;
	return r2;
	label$1dfb406_3_518:
	r2 = (String)s$Pipe;
	return r2;
	label$1dfb406_3_520:
	r2 = (String)s$HyphenMinus;
	return r2;
	label$1dfb406_3_522:
	r2 = (String)s$OpenCurlyBracket;
	return r2;
	label$1dfb406_3_524:
	r2 = (String)s$CloseCurlyBracket;
	return r2;
	label$1dfb406_3_526:
	r2 = (String)s$Tilde;
	return r2;
	label$1dfb406_3_528:
	r2 = (String)s$VolumeMute;
	return r2;
	label$1dfb406_3_530:
	r2 = (String)s$VolumeDown;
	return r2;
	label$1dfb406_3_532:
	r2 = (String)s$VolumeUp;
	return r2;
	label$1dfb406_3_534:
	r2 = (String)s$Comma;
	return r2;
	label$1dfb406_3_536:
	r2 = (String)s$Period;
	return r2;
	label$1dfb406_3_538:
	r2 = (String)s$Slash;
	return r2;
	label$1dfb406_3_540:
	r2 = (String)s$BackQuote;
	return r2;
	label$1dfb406_3_542:
	r2 = (String)s$OpenBracket;
	return r2;
	label$1dfb406_3_544:
	r2 = (String)s$BackSlash;
	return r2;
	label$1dfb406_3_546:
	r2 = (String)s$CloseBracket;
	return r2;
	label$1dfb406_3_548:
	r2 = (String)s$Quote;
	return r2;
	label$1dfb406_3_550:
	r2 = (String)s$Meta;
	return r2;
	label$1dfb406_3_552:
	r2 = (String)s$AltGr;
	return r2;
	label$1dfb406_3_554:
	r2 = (String)s$WinIcoHelp;
	return r2;
	label$1dfb406_3_556:
	r2 = (String)s$WinIco00;
	return r2;
	label$1dfb406_3_558:
	r2 = (String)s$WinIcoClear;
	return r2;
	label$1dfb406_3_560:
	r2 = (String)s$WinOemReset;
	return r2;
	label$1dfb406_3_562:
	r2 = (String)s$WinOemJump;
	return r2;
	label$1dfb406_3_564:
	r2 = (String)s$WinOemPA1;
	return r2;
	label$1dfb406_3_566:
	r2 = (String)s$WinOemPA2;
	return r2;
	label$1dfb406_3_568:
	r2 = (String)s$WinOemPA3;
	return r2;
	label$1dfb406_3_570:
	r2 = (String)s$WinOemWSCTRL;
	return r2;
	label$1dfb406_3_572:
	r2 = (String)s$WinOemCUSEL;
	return r2;
	label$1dfb406_3_574:
	r2 = (String)s$WinOemATTN;
	return r2;
	label$1dfb406_3_576:
	r2 = (String)s$WinOemFinish;
	return r2;
	label$1dfb406_3_578:
	r2 = (String)s$WinOemCopy;
	return r2;
	label$1dfb406_3_580:
	r2 = (String)s$WinOemAuto;
	return r2;
	label$1dfb406_3_582:
	r2 = (String)s$WinOemENLW;
	return r2;
	label$1dfb406_3_584:
	r2 = (String)s$WinOemBackTab;
	return r2;
	label$1dfb406_3_586:
	r2 = (String)s$ATTN;
	return r2;
	label$1dfb406_3_588:
	r2 = (String)s$CRSEL;
	return r2;
	label$1dfb406_3_590:
	r2 = (String)s$EXSEL;
	return r2;
	label$1dfb406_3_592:
	r2 = (String)s$EREOF;
	return r2;
	label$1dfb406_3_594:
	r2 = (String)s$Play;
	return r2;
	label$1dfb406_3_596:
	r2 = (String)s$Zoom;
	return r2;
	label$1dfb406_3_598:
	r2 = (String)s$PA1;
	return r2;
	label$1dfb406_3_600:
	r2 = (String)s$WinOemClear;
	return r2;
}

