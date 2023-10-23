﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <zui/Ext.h>
#include <kha/Image.h>
#include <kha/Kravur.h>
#include <kha/graphics2/Graphics.h>
extern hl_type t$_i32;
extern hl_type t$nul_f64;
bool zui_Zui_isVisible(zui__Zui,double);
void zui_Zui_endElement(zui__Zui,vdynamic*);
bool zui_Zui_getHover(zui__Zui,double*);
bool zui_Zui_getReleased(zui__Zui,double*);
void zui_Zui_fadeColor(zui__Zui);
void zui_Zui_drawString(zui__Zui,kha__graphics2__Graphics,String,vdynamic*,double*,int*,bool*);
#include <hl/natives.h>
String String___alloc__(vbyte*,int);
extern String s$;
String String___add__(String,String);
extern String s$7215ee9;
#include <hl/types/ArrayBase.h>
extern String s$5e732a1;
extern String s$0cf31b2;
String StringTools_replace(String,String,String);
extern String s$68b329d;
hl__types__ArrayObj String_split(String,String);
int String___compare(String,vdynamic*);
String hl_types_ArrayObj_join(hl__types__ArrayObj,String);
extern hl_type t$String;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$kha_Kravur;
double kha_Kravur_width(kha__Kravur,int,String);
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
extern zui__$Ext g$_zui_Ext;
int zui_Zui_text(zui__Zui,String,int*,int*);
String zui_Zui_textInput(zui__Zui,zui__Handle,String,int*,bool*,bool*);
void hl_types_ArrayObj___expand(hl__types__ArrayObj,int);
void zui_Ext_scrollAlign(zui__Zui,zui__Handle);
String String_substr(String,int,vdynamic*);
void hl_types_ArrayObj_insert(hl__types__ArrayObj,int,vdynamic*);
void zui_Zui_startTextEdit(zui__Zui,zui__Handle,int*);
hl__types__ArrayBase hl_types_ArrayObj_splice(hl__types__ArrayObj,int,int);
extern hl_type t$hl_types_ArrayObj;
extern hl_type t$hl_types_ArrayBase;

int zui_Ext_inlineRadio(zui__Zui r0,zui__Handle r1,hl__types__ArrayObj r2,int* r3) {
	bool *r28;
	String r26;
	vvirtual *r9, *r11;
	bool r6;
	kha__graphics2__Graphics r23;
	double r7, r12, r15, r21, r22, r24;
	double *r14;
	vdynamic *r10, *r13;
	varray *r27;
	int r4, r8, r16, r17, r18, r19, r20, r25;
	if( r3 ) goto label$b6ce9d2_1_3;
	r4 = 0;
	goto label$b6ce9d2_1_4;
	label$b6ce9d2_1_3:
	r4 = *r3;
	label$b6ce9d2_1_4:
	if( r0 == NULL ) hl_null_access();
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r8 = hl_vfields(r9)[12] ? (*(int*)(hl_vfields(r9)[12])) : (int)hl_dyn_geti(r9->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r7 = (double)r8;
	r11 = r0->ops;
	if( r11 == NULL ) hl_null_access();
	r10 = hl_vfields(r11)[5] ? (*(vdynamic**)(hl_vfields(r11)[5])) : (vdynamic*)hl_dyn_getp(r11->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r12 = r10 ? r10->v.d : 0;
	r7 = r7 * r12;
	r6 = zui_Zui_isVisible(r0,r7);
	if( r6 ) goto label$b6ce9d2_1_21;
	r10 = NULL;
	zui_Zui_endElement(r0,r10);
	if( r1 == NULL ) hl_null_access();
	r8 = r1->position;
	return r8;
	label$b6ce9d2_1_21:
	r8 = r0->_w;
	r7 = (double)r8;
	if( r2 == NULL ) hl_null_access();
	r8 = r2->length;
	r12 = (double)r8;
	r7 = r7 / r12;
	r8 = -1;
	r14 = NULL;
	r6 = zui_Zui_getHover(r0,r14);
	if( !r6 ) goto label$b6ce9d2_1_51;
	r12 = r0->inputX;
	r15 = r0->_x;
	r12 = r12 - r15;
	r15 = r0->_windowX;
	r12 = r12 - r15;
	r16 = (int)r12;
	r17 = 0;
	r18 = r2->length;
	label$b6ce9d2_1_39:
	if( r17 >= r18 ) goto label$b6ce9d2_1_51;
	r19 = r17;
	++r17;
	r15 = (double)r16;
	r21 = (double)r19;
	r21 = r21 * r7;
	r21 = r21 + r7;
	if( !(r15 < r21) ) goto label$b6ce9d2_1_50;
	r8 = r19;
	goto label$b6ce9d2_1_51;
	label$b6ce9d2_1_50:
	goto label$b6ce9d2_1_39;
	label$b6ce9d2_1_51:
	if( r0 == NULL ) hl_null_access();
	r14 = NULL;
	r6 = zui_Zui_getReleased(r0,r14);
	if( !r6 ) goto label$b6ce9d2_1_61;
	if( r1 == NULL ) hl_null_access();
	r1->position = r8;
	r6 = true;
	r0->changed = r6;
	r1->changed = r6;
	goto label$b6ce9d2_1_64;
	label$b6ce9d2_1_61:
	if( r1 == NULL ) hl_null_access();
	r6 = false;
	r1->changed = r6;
	label$b6ce9d2_1_64:
	r16 = 0;
	if( r2 == NULL ) hl_null_access();
	r17 = r2->length;
	label$b6ce9d2_1_67:
	if( r16 >= r17 ) goto label$b6ce9d2_1_174;
	r18 = r16;
	++r16;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	if( r19 != r18 ) goto label$b6ce9d2_1_104;
	if( r0 == NULL ) hl_null_access();
	r23 = r0->g;
	if( r23 == NULL ) hl_null_access();
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r19 = hl_vfields(r9)[1] ? (*(int*)(hl_vfields(r9)[1])) : (int)hl_dyn_geti(r9->value,-43289016/*ACCENT_HOVER_COL*/,&t$_i32);
	r19 = ((int (*)(kha__graphics2__Graphics,int))r23->$type->vobj_proto[11])(r23,r19);
	r6 = r0->enabled;
	if( r6 ) goto label$b6ce9d2_1_84;
	zui_Zui_fadeColor(r0);
	label$b6ce9d2_1_84:
	r23 = r0->g;
	if( r23 == NULL ) hl_null_access();
	r12 = r0->_x;
	r21 = (double)r18;
	r15 = r7 * r21;
	r12 = r12 + r15;
	r15 = r0->_y;
	r21 = r0->buttonOffsetY;
	r15 = r15 + r21;
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r19 = hl_vfields(r9)[5] ? (*(int*)(hl_vfields(r9)[5])) : (int)hl_dyn_geti(r9->value,-172474255/*BUTTON_H*/,&t$_i32);
	r22 = (double)r19;
	r11 = r0->ops;
	if( r11 == NULL ) hl_null_access();
	r10 = hl_vfields(r11)[5] ? (*(vdynamic**)(hl_vfields(r11)[5])) : (vdynamic*)hl_dyn_getp(r11->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r24 = r10 ? r10->v.d : 0;
	r22 = r22 * r24;
	((void (*)(kha__graphics2__Graphics,double,double,double,double))r23->$type->vobj_proto[5])(r23,r12,r15,r7,r22);
	goto label$b6ce9d2_1_135;
	label$b6ce9d2_1_104:
	if( r8 != r18 ) goto label$b6ce9d2_1_135;
	if( r0 == NULL ) hl_null_access();
	r23 = r0->g;
	if( r23 == NULL ) hl_null_access();
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r19 = hl_vfields(r9)[0] ? (*(int*)(hl_vfields(r9)[0])) : (int)hl_dyn_geti(r9->value,34671467/*ACCENT_COL*/,&t$_i32);
	r19 = ((int (*)(kha__graphics2__Graphics,int))r23->$type->vobj_proto[11])(r23,r19);
	r6 = r0->enabled;
	if( r6 ) goto label$b6ce9d2_1_115;
	zui_Zui_fadeColor(r0);
	label$b6ce9d2_1_115:
	r23 = r0->g;
	if( r23 == NULL ) hl_null_access();
	r12 = r0->_x;
	r21 = (double)r18;
	r15 = r7 * r21;
	r12 = r12 + r15;
	r15 = r0->_y;
	r21 = r0->buttonOffsetY;
	r15 = r15 + r21;
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r19 = hl_vfields(r9)[5] ? (*(int*)(hl_vfields(r9)[5])) : (int)hl_dyn_geti(r9->value,-172474255/*BUTTON_H*/,&t$_i32);
	r22 = (double)r19;
	r11 = r0->ops;
	if( r11 == NULL ) hl_null_access();
	r10 = hl_vfields(r11)[5] ? (*(vdynamic**)(hl_vfields(r11)[5])) : (vdynamic*)hl_dyn_getp(r11->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r24 = r10 ? r10->v.d : 0;
	r22 = r22 * r24;
	r14 = NULL;
	((void (*)(kha__graphics2__Graphics,double,double,double,double,double*))r23->$type->vobj_proto[4])(r23,r12,r15,r7,r22,r14);
	label$b6ce9d2_1_135:
	if( r0 == NULL ) hl_null_access();
	r23 = r0->g;
	if( r23 == NULL ) hl_null_access();
	r9 = r0->_t;
	if( r9 == NULL ) hl_null_access();
	r19 = hl_vfields(r9)[28] ? (*(int*)(hl_vfields(r9)[28])) : (int)hl_dyn_geti(r9->value,-437956663/*TEXT_COL*/,&t$_i32);
	r19 = ((int (*)(kha__graphics2__Graphics,int))r23->$type->vobj_proto[11])(r23,r19);
	r12 = r0->_x;
	r21 = (double)r18;
	r15 = r7 * r21;
	r12 = r12 + r15;
	r0->_x = r12;
	r19 = r0->_w;
	r20 = (int)r7;
	r0->_w = r20;
	r23 = r0->g;
	if( r2 == NULL ) hl_null_access();
	r25 = r2->length;
	if( ((unsigned)r18) < ((unsigned)r25) ) goto label$b6ce9d2_1_156;
	r26 = NULL;
	goto label$b6ce9d2_1_159;
	label$b6ce9d2_1_156:
	r27 = r2->array;
	r13 = ((vdynamic**)(r27 + 1))[r18];
	r26 = (String)r13;
	label$b6ce9d2_1_159:
	r10 = NULL;
	r20 = 0;
	r12 = (double)r20;
	r14 = &r12;
	r20 = r4;
	r3 = &r20;
	r28 = NULL;
	zui_Zui_drawString(r0,r23,r26,r10,r14,r3,r28);
	r15 = r0->_x;
	r22 = (double)r18;
	r21 = r7 * r22;
	r15 = r15 - r21;
	r0->_x = r15;
	r0->_w = r19;
	goto label$b6ce9d2_1_67;
	label$b6ce9d2_1_174:
	if( r0 == NULL ) hl_null_access();
	r10 = NULL;
	zui_Zui_endElement(r0,r10);
	if( r1 == NULL ) hl_null_access();
	r16 = r1->position;
	return r16;
}

String zui_Ext_rightAlignNumber(int r0,int r1) {
	String r2, r6;
	int *r4;
	vbyte *r5;
	int r3;
	r3 = r0;
	r4 = &r3;
	r5 = hl_itos(r3,r4);
	r2 = String___alloc__(r5,r3);
	r6 = (String)s$;
	r2 = String___add__(r2,r6);
	label$b6ce9d2_2_6:
	if( r2 == NULL ) hl_null_access();
	r3 = r2->length;
	if( r3 >= r1 ) goto label$b6ce9d2_2_14;
	r6 = (String)s$7215ee9;
	r6 = String___add__(r6,r2);
	r2 = r6;
	goto label$b6ce9d2_2_6;
	label$b6ce9d2_2_14:
	return r2;
}

String zui_Ext_textArea(zui__Zui r0,zui__Handle r1,int* r2,bool* r3,String r4,bool* r5) {
	String r8, r11, r12, r34;
	vvirtual *r33, *r40, *r41, *r53, *r54;
	hl__types__ArrayObj r15, r18, r29;
	hl_type *r30;
	bool r7, r9, r13, r16, r22, r23, r38;
	zui__$Ext r39;
	hl__types__ArrayBase r59;
	kha__graphics2__Graphics r46;
	kha__Kravur r32;
	double r31, r35, r36, r37, r47, r48, r49, r50, r51, r52;
	double *r55;
	int *r43;
	vdynamic *r20, *r44, *r56, *r57;
	zui__Handle r10;
	vbyte *r45;
	varray *r21, *r58;
	int r6, r17, r19, r24, r25, r26, r27, r28, r42;
	if( r2 ) goto label$b6ce9d2_3_3;
	r6 = 0;
	goto label$b6ce9d2_3_4;
	label$b6ce9d2_3_3:
	r6 = *r2;
	label$b6ce9d2_3_4:
	if( r3 ) goto label$b6ce9d2_3_7;
	r7 = true;
	goto label$b6ce9d2_3_8;
	label$b6ce9d2_3_7:
	r7 = *r3;
	label$b6ce9d2_3_8:
	if( r4 ) goto label$b6ce9d2_3_11;
	r8 = (String)s$;
	r4 = r8;
	label$b6ce9d2_3_11:
	if( r5 ) goto label$b6ce9d2_3_14;
	r9 = false;
	goto label$b6ce9d2_3_15;
	label$b6ce9d2_3_14:
	r9 = *r5;
	label$b6ce9d2_3_15:
	if( r1 == NULL ) hl_null_access();
	r8 = r1->text;
	r11 = (String)s$5e732a1;
	r12 = (String)s$0cf31b2;
	r8 = StringTools_replace(r8,r11,r12);
	r1->text = r8;
	if( r0 == NULL ) hl_null_access();
	r10 = r0->textSelectedHandle;
	if( r10 == r1 ) goto label$b6ce9d2_3_26;
	r13 = false;
	goto label$b6ce9d2_3_27;
	label$b6ce9d2_3_26:
	r13 = true;
	label$b6ce9d2_3_27:
	r8 = r1->text;
	if( r8 == NULL ) hl_null_access();
	r11 = (String)s$68b329d;
	r15 = String_split(r8,r11);
	if( r15 == NULL ) hl_null_access();
	r17 = r15->length;
	r19 = 1;
	if( r17 != r19 ) goto label$b6ce9d2_3_47;
	r17 = 0;
	r19 = r15->length;
	if( ((unsigned)r17) < ((unsigned)r19) ) goto label$b6ce9d2_3_40;
	r8 = NULL;
	goto label$b6ce9d2_3_43;
	label$b6ce9d2_3_40:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r17];
	r8 = (String)r20;
	label$b6ce9d2_3_43:
	r11 = (String)s$;
	if( r8 != r11 && (!r8 || !r11 || String___compare(r8,(vdynamic*)r11) != 0) ) goto label$b6ce9d2_3_47;
	r16 = true;
	goto label$b6ce9d2_3_48;
	label$b6ce9d2_3_47:
	r16 = false;
	label$b6ce9d2_3_48:
	if( !r13 ) goto label$b6ce9d2_3_53;
	r22 = r0->isKeyPressed;
	if( !r22 ) goto label$b6ce9d2_3_53;
	r22 = true;
	goto label$b6ce9d2_3_54;
	label$b6ce9d2_3_53:
	r22 = false;
	label$b6ce9d2_3_54:
	r23 = false;
	r0->highlightOnSelect = r23;
	r23 = false;
	r0->tabSwitchEnabled = r23;
	if( !r9 ) goto label$b6ce9d2_3_197;
	r8 = r1->text;
	r11 = (String)s$;
	if( r8 == r11 || (r8 && r11 && String___compare(r8,(vdynamic*)r11) == 0) ) goto label$b6ce9d2_3_197;
	r23 = false;
	r17 = r0->cursorX;
	r19 = 0;
	r24 = r1->position;
	label$b6ce9d2_3_66:
	if( r19 >= r24 ) goto label$b6ce9d2_3_85;
	r25 = r19;
	++r19;
	if( r15 == NULL ) hl_null_access();
	r28 = r15->length;
	if( ((unsigned)r25) < ((unsigned)r28) ) goto label$b6ce9d2_3_75;
	r8 = NULL;
	goto label$b6ce9d2_3_78;
	label$b6ce9d2_3_75:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r25];
	r8 = (String)r20;
	label$b6ce9d2_3_78:
	if( r8 == NULL ) hl_null_access();
	r27 = r8->length;
	r28 = 1;
	r27 = r27 + r28;
	r26 = r17 + r27;
	r17 = r26;
	goto label$b6ce9d2_3_66;
	label$b6ce9d2_3_85:
	if( r15 == NULL ) hl_null_access();
	r8 = (String)s$7215ee9;
	r8 = hl_types_ArrayObj_join(r15,r8);
	if( r8 == NULL ) hl_null_access();
	r11 = (String)s$7215ee9;
	r18 = String_split(r8,r11);
	r30 = &t$String;
	r19 = 0;
	r21 = hl_alloc_array(r30,r19);
	r29 = hl_types_ArrayObj_alloc(r21);
	r15 = r29;
	r8 = (String)s$;
	r19 = 0;
	label$b6ce9d2_3_98:
	if( r18 == NULL ) hl_null_access();
	r25 = r18->length;
	if( r19 >= r25 ) goto label$b6ce9d2_3_182;
	r25 = r18->length;
	if( ((unsigned)r19) < ((unsigned)r25) ) goto label$b6ce9d2_3_106;
	r11 = NULL;
	goto label$b6ce9d2_3_109;
	label$b6ce9d2_3_106:
	r21 = r18->array;
	r20 = ((vdynamic**)(r21 + 1))[r19];
	r11 = (String)r20;
	label$b6ce9d2_3_109:
	++r19;
	if( r0 == NULL ) hl_null_access();
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r32 = hl_vfields(r33)[3] ? (*(kha__Kravur*)(hl_vfields(r33)[3])) : (kha__Kravur)hl_dyn_getp(r33->value,62938841/*font*/,&t$kha_Kravur);
	if( r32 == NULL ) hl_null_access();
	r24 = r0->fontSize;
	r34 = (String)s$7215ee9;
	r12 = String___add__(r8,r34);
	r12 = String___add__(r12,r11);
	r31 = kha_Kravur_width(r32,r24,r12);
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r32 = hl_vfields(r33)[3] ? (*(kha__Kravur*)(hl_vfields(r33)[3])) : (kha__Kravur)hl_dyn_getp(r33->value,62938841/*font*/,&t$kha_Kravur);
	if( r32 == NULL ) hl_null_access();
	r24 = r0->fontSize;
	r12 = (String)s$7215ee9;
	r12 = String___add__(r12,r11);
	r35 = kha_Kravur_width(r32,r24,r12);
	r24 = r0->_w;
	r25 = 10;
	r24 = r24 - r25;
	r37 = (double)r24;
	if( !(r37 < r31) ) goto label$b6ce9d2_3_138;
	if( !(r35 < r31) ) goto label$b6ce9d2_3_138;
	if( r15 == NULL ) hl_null_access();
	r24 = hl_types_ArrayObj_push(r15,((vdynamic*)r8));
	r12 = (String)s$;
	r8 = r12;
	label$b6ce9d2_3_138:
	r34 = (String)s$;
	if( r8 != r34 && (!r8 || !r34 || String___compare(r8,(vdynamic*)r34) != 0) ) goto label$b6ce9d2_3_142;
	r12 = r11;
	goto label$b6ce9d2_3_145;
	label$b6ce9d2_3_142:
	r34 = (String)s$7215ee9;
	r12 = String___add__(r8,r34);
	r12 = String___add__(r12,r11);
	label$b6ce9d2_3_145:
	r8 = r12;
	if( r15 == NULL ) hl_null_access();
	r24 = r15->length;
	r25 = 0;
	label$b6ce9d2_3_149:
	if( r15 == NULL ) hl_null_access();
	r27 = r15->length;
	if( r25 >= r27 ) goto label$b6ce9d2_3_166;
	r27 = r15->length;
	if( ((unsigned)r25) < ((unsigned)r27) ) goto label$b6ce9d2_3_157;
	r12 = NULL;
	goto label$b6ce9d2_3_160;
	label$b6ce9d2_3_157:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r25];
	r12 = (String)r20;
	label$b6ce9d2_3_160:
	++r25;
	if( r12 == NULL ) hl_null_access();
	r27 = r12->length;
	r26 = r24 + r27;
	r24 = r26;
	goto label$b6ce9d2_3_149;
	label$b6ce9d2_3_166:
	if( !r13 ) goto label$b6ce9d2_3_181;
	if( r23 ) goto label$b6ce9d2_3_181;
	if( r8 == NULL ) hl_null_access();
	r27 = r8->length;
	r26 = r24 + r27;
	if( r26 < r17 ) goto label$b6ce9d2_3_181;
	r38 = true;
	r23 = r38;
	if( r1 == NULL ) hl_null_access();
	r25 = r15->length;
	r1->position = r25;
	if( r0 == NULL ) hl_null_access();
	r25 = r17 - r24;
	r0->highlightAnchor = r25;
	r0->cursorX = r25;
	label$b6ce9d2_3_181:
	goto label$b6ce9d2_3_98;
	label$b6ce9d2_3_182:
	if( r15 == NULL ) hl_null_access();
	r19 = hl_types_ArrayObj_push(r15,((vdynamic*)r8));
	if( !r13 ) goto label$b6ce9d2_3_197;
	if( r0 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = r15->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$b6ce9d2_3_192;
	r11 = NULL;
	goto label$b6ce9d2_3_195;
	label$b6ce9d2_3_192:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r19];
	r11 = (String)r20;
	label$b6ce9d2_3_195:
	r1->text = r11;
	r0->textSelected = r11;
	label$b6ce9d2_3_197:
	if( r0 == NULL ) hl_null_access();
	r17 = r0->cursorX;
	r39 = (zui__$Ext)g$_zui_Ext;
	r23 = r39->textAreaLineNumbers;
	if( !r23 ) goto label$b6ce9d2_3_269;
	r31 = r0->_y;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[28] ? (*(int*)(hl_vfields(r40)[28])) : (int)hl_dyn_geti(r40->value,-437956663/*TEXT_COL*/,&t$_i32);
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r41 = r0->_t;
	if( r41 == NULL ) hl_null_access();
	r24 = hl_vfields(r41)[0] ? (*(int*)(hl_vfields(r41)[0])) : (int)hl_dyn_geti(r41->value,34671467/*ACCENT_COL*/,&t$_i32);
	if( hl_vfields(r40)[28] ) *(int*)(hl_vfields(r40)[28]) = (int)r24; else hl_dyn_seti(r40->value,-437956663/*TEXT_COL*/,&t$_i32,r24);
	r24 = r15->length;
	r35 = (double)r24;
	r36 = 0.5;
	r35 = r35 + r36;
	r35 = hl_math_log(r35);
	r36 = 10.;
	r36 = hl_math_log(r36);
	r35 = r35 / r36;
	r24 = hl_math_ceil(r35);
	r25 = 0;
	r26 = r15->length;
	label$b6ce9d2_3_223:
	if( r25 >= r26 ) goto label$b6ce9d2_3_247;
	r27 = r25;
	++r25;
	if( r0 == NULL ) hl_null_access();
	r42 = 1;
	r28 = r27 + r42;
	r8 = zui_Ext_rightAlignNumber(r28,r24);
	r2 = NULL;
	r43 = NULL;
	r28 = zui_Zui_text(r0,r8,r2,r43);
	r35 = r0->_y;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r28 = hl_vfields(r40)[13] ? (*(int*)(hl_vfields(r40)[13])) : (int)hl_dyn_geti(r40->value,146972182/*ELEMENT_OFFSET*/,&t$_i32);
	r36 = (double)r28;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r37 = r44 ? r44->v.d : 0;
	r36 = r36 * r37;
	r35 = r35 - r36;
	r0->_y = r35;
	goto label$b6ce9d2_3_223;
	label$b6ce9d2_3_247:
	if( r0 == NULL ) hl_null_access();
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	if( hl_vfields(r40)[28] ) *(int*)(hl_vfields(r40)[28]) = (int)r19; else hl_dyn_seti(r40->value,-437956663/*TEXT_COL*/,&t$_i32,r19);
	r0->_y = r31;
	r35 = r0->_x;
	if( r15 == NULL ) hl_null_access();
	r25 = r15->length;
	r2 = &r25;
	r45 = hl_itos(r25,r2);
	r8 = String___alloc__(r45,r25);
	r11 = (String)s$;
	r8 = String___add__(r8,r11);
	if( r8 == NULL ) hl_null_access();
	r25 = r8->length;
	r26 = 16;
	r25 = r25 * r26;
	r26 = 4;
	r25 = r25 + r26;
	r36 = (double)r25;
	r35 = r35 + r36;
	r0->_x = r35;
	label$b6ce9d2_3_269:
	r46 = r0->g;
	if( r46 == NULL ) hl_null_access();
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[26] ? (*(int*)(hl_vfields(r40)[26])) : (int)hl_dyn_geti(r40->value,379861099/*SEPARATOR_COL*/,&t$_i32);
	r19 = ((int (*)(kha__graphics2__Graphics,int))r46->$type->vobj_proto[11])(r46,r19);
	r46 = r0->g;
	r31 = r0->_x;
	r35 = r0->buttonOffsetY;
	r31 = r31 + r35;
	r35 = r0->_y;
	r36 = r0->buttonOffsetY;
	r35 = r35 + r36;
	r19 = r0->_w;
	r36 = (double)r19;
	r37 = r0->buttonOffsetY;
	r47 = 2.;
	r37 = r37 * r47;
	r36 = r36 - r37;
	r19 = r15->length;
	r37 = (double)r19;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[12] ? (*(int*)(hl_vfields(r40)[12])) : (int)hl_dyn_geti(r40->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r47 = (double)r19;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r48 = r44 ? r44->v.d : 0;
	r47 = r47 * r48;
	r37 = r37 * r47;
	r47 = r0->buttonOffsetY;
	r48 = 2.;
	r47 = r47 * r48;
	r37 = r37 - r47;
	r47 = 0.;
	r49 = 0.;
	if( r47 != r49 ) goto label$b6ce9d2_3_308;
	r48 = 1.;
	label$b6ce9d2_3_308:
	r23 = r0->enabled;
	if( r23 ) goto label$b6ce9d2_3_311;
	zui_Zui_fadeColor(r0);
	label$b6ce9d2_3_311:
	if( r46 == NULL ) hl_null_access();
	r50 = 1.;
	r49 = r35 - r50;
	r52 = 1.;
	r51 = r37 + r52;
	((void (*)(kha__graphics2__Graphics,double,double,double,double))r46->$type->vobj_proto[5])(r46,r31,r49,r36,r51);
	r53 = r0->textColoring;
	r39 = (zui__$Ext)g$_zui_Ext;
	r54 = r39->textAreaColoring;
	r0->textColoring = r54;
	r19 = 0;
	r24 = r15->length;
	label$b6ce9d2_3_323:
	if( r19 >= r24 ) goto label$b6ce9d2_3_421;
	r25 = r19;
	++r19;
	if( r13 ) goto label$b6ce9d2_3_332;
	if( r0 == NULL ) hl_null_access();
	r55 = NULL;
	r23 = zui_Zui_getHover(r0,r55);
	if( r23 ) goto label$b6ce9d2_3_336;
	label$b6ce9d2_3_332:
	if( !r13 ) goto label$b6ce9d2_3_376;
	if( r1 == NULL ) hl_null_access();
	r27 = r1->position;
	if( r25 != r27 ) goto label$b6ce9d2_3_376;
	label$b6ce9d2_3_336:
	if( r1 == NULL ) hl_null_access();
	r1->position = r25;
	if( r15 == NULL ) hl_null_access();
	r27 = r15->length;
	if( ((unsigned)r25) < ((unsigned)r27) ) goto label$b6ce9d2_3_343;
	r8 = NULL;
	goto label$b6ce9d2_3_346;
	label$b6ce9d2_3_343:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r25];
	r8 = (String)r20;
	label$b6ce9d2_3_346:
	r1->text = r8;
	if( r0 == NULL ) hl_null_access();
	r10 = NULL;
	r0->submitTextHandle = r10;
	if( !r16 ) goto label$b6ce9d2_3_353;
	r8 = r4;
	goto label$b6ce9d2_3_354;
	label$b6ce9d2_3_353:
	r8 = (String)s$;
	label$b6ce9d2_3_354:
	r26 = r6;
	r2 = &r26;
	r23 = r7;
	r3 = &r23;
	r5 = NULL;
	r8 = zui_Zui_textInput(r0,r1,r8,r2,r3,r5);
	if( !r22 ) goto label$b6ce9d2_3_375;
	r56 = r0->key;
	r27 = 13;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r27;
	if( r56 == r57 || (r56 && r57 && (r56->v.i == r57->v.i)) ) goto label$b6ce9d2_3_375;
	r56 = r0->key;
	r27 = 27;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r27;
	if( r56 == r57 || (r56 && r57 && (r56->v.i == r57->v.i)) ) goto label$b6ce9d2_3_375;
	r8 = r0->textSelected;
	r28 = r15->length;
	if( ((unsigned)r25) < ((unsigned)r28) ) goto label$b6ce9d2_3_373;
	hl_types_ArrayObj___expand(r15,r25);
	label$b6ce9d2_3_373:
	r21 = r15->array;
	((String*)(r21 + 1))[r25] = r8;
	label$b6ce9d2_3_375:
	goto label$b6ce9d2_3_408;
	label$b6ce9d2_3_376:
	if( !r16 ) goto label$b6ce9d2_3_395;
	if( r0 == NULL ) hl_null_access();
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r27 = hl_vfields(r40)[28] ? (*(int*)(hl_vfields(r40)[28])) : (int)hl_dyn_geti(r40->value,-437956663/*TEXT_COL*/,&t$_i32);
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r41 = r0->_t;
	if( r41 == NULL ) hl_null_access();
	r28 = hl_vfields(r41)[21] ? (*(int*)(hl_vfields(r41)[21])) : (int)hl_dyn_geti(r41->value,370483844/*LABEL_COL*/,&t$_i32);
	if( hl_vfields(r40)[28] ) *(int*)(hl_vfields(r40)[28]) = (int)r28; else hl_dyn_seti(r40->value,-437956663/*TEXT_COL*/,&t$_i32,r28);
	r28 = 2;
	r2 = &r28;
	r43 = NULL;
	r28 = zui_Zui_text(r0,r4,r2,r43);
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	if( hl_vfields(r40)[28] ) *(int*)(hl_vfields(r40)[28]) = (int)r27; else hl_dyn_seti(r40->value,-437956663/*TEXT_COL*/,&t$_i32,r27);
	goto label$b6ce9d2_3_408;
	label$b6ce9d2_3_395:
	if( r0 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r42 = r15->length;
	if( ((unsigned)r25) < ((unsigned)r42) ) goto label$b6ce9d2_3_401;
	r8 = NULL;
	goto label$b6ce9d2_3_404;
	label$b6ce9d2_3_401:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r25];
	r8 = (String)r20;
	label$b6ce9d2_3_404:
	r27 = r6;
	r2 = &r27;
	r43 = NULL;
	r27 = zui_Zui_text(r0,r8,r2,r43);
	label$b6ce9d2_3_408:
	r31 = r0->_y;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r42 = hl_vfields(r40)[13] ? (*(int*)(hl_vfields(r40)[13])) : (int)hl_dyn_geti(r40->value,146972182/*ELEMENT_OFFSET*/,&t$_i32);
	r35 = (double)r42;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r36 = r44 ? r44->v.d : 0;
	r35 = r35 * r36;
	r31 = r31 - r35;
	r0->_y = r31;
	goto label$b6ce9d2_3_323;
	label$b6ce9d2_3_421:
	if( r0 == NULL ) hl_null_access();
	r31 = r0->_y;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[13] ? (*(int*)(hl_vfields(r40)[13])) : (int)hl_dyn_geti(r40->value,146972182/*ELEMENT_OFFSET*/,&t$_i32);
	r35 = (double)r19;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r36 = r44 ? r44->v.d : 0;
	r35 = r35 * r36;
	r31 = r31 + r35;
	r0->_y = r31;
	r0->textColoring = r53;
	r39 = (zui__$Ext)g$_zui_Ext;
	r38 = r39->textAreaScrollPastEnd;
	if( !r38 ) goto label$b6ce9d2_3_465;
	r31 = r0->_y;
	r19 = r0->_h;
	r35 = (double)r19;
	r36 = r0->windowHeaderH;
	r35 = r35 - r36;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[12] ? (*(int*)(hl_vfields(r40)[12])) : (int)hl_dyn_geti(r40->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r36 = (double)r19;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r37 = r44 ? r44->v.d : 0;
	r36 = r36 * r37;
	r35 = r35 - r36;
	r40 = r0->_t;
	if( r40 == NULL ) hl_null_access();
	r19 = hl_vfields(r40)[13] ? (*(int*)(hl_vfields(r40)[13])) : (int)hl_dyn_geti(r40->value,146972182/*ELEMENT_OFFSET*/,&t$_i32);
	r36 = (double)r19;
	r33 = r0->ops;
	if( r33 == NULL ) hl_null_access();
	r44 = hl_vfields(r33)[5] ? (*(vdynamic**)(hl_vfields(r33)[5])) : (vdynamic*)hl_dyn_getp(r33->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r37 = r44 ? r44->v.d : 0;
	r36 = r36 * r37;
	r35 = r35 - r36;
	r31 = r31 + r35;
	r0->_y = r31;
	label$b6ce9d2_3_465:
	if( !r22 ) goto label$b6ce9d2_3_612;
	r56 = r0->key;
	r19 = 40;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r19;
	if( r56 != r57 && (!r56 || !r57 || (r56->v.i != r57->v.i)) ) goto label$b6ce9d2_3_481;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	if( r15 == NULL ) hl_null_access();
	r24 = r15->length;
	r25 = 1;
	r24 = r24 - r25;
	if( r19 >= r24 ) goto label$b6ce9d2_3_481;
	r19 = r1->position;
	++r19;
	r1->position = r19;
	zui_Ext_scrollAlign(r0,r1);
	label$b6ce9d2_3_481:
	r56 = r0->key;
	r19 = 38;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r19;
	if( r56 != r57 && (!r56 || !r57 || (r56->v.i != r57->v.i)) ) goto label$b6ce9d2_3_493;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = 0;
	if( r24 >= r19 ) goto label$b6ce9d2_3_493;
	r19 = r1->position;
	--r19;
	r1->position = r19;
	zui_Ext_scrollAlign(r0,r1);
	label$b6ce9d2_3_493:
	if( !r7 ) goto label$b6ce9d2_3_549;
	r56 = r0->key;
	r19 = 13;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r19;
	if( r56 != r57 && (!r56 || !r57 || (r56->v.i != r57->v.i)) ) goto label$b6ce9d2_3_549;
	if( r9 ) goto label$b6ce9d2_3_549;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	++r19;
	r1->position = r19;
	if( r15 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = r1->position;
	r25 = 1;
	r24 = r24 - r25;
	r25 = r15->length;
	if( ((unsigned)r24) < ((unsigned)r25) ) goto label$b6ce9d2_3_512;
	r8 = NULL;
	goto label$b6ce9d2_3_515;
	label$b6ce9d2_3_512:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r24];
	r8 = (String)r20;
	label$b6ce9d2_3_515:
	if( r8 == NULL ) hl_null_access();
	r24 = r0->cursorX;
	r56 = NULL;
	r8 = String_substr(r8,r24,r56);
	hl_types_ArrayObj_insert(r15,r19,((vdynamic*)r8));
	r19 = r1->position;
	r24 = 1;
	r19 = r19 - r24;
	r24 = r1->position;
	r25 = 1;
	r24 = r24 - r25;
	r25 = r15->length;
	if( ((unsigned)r24) < ((unsigned)r25) ) goto label$b6ce9d2_3_530;
	r8 = NULL;
	goto label$b6ce9d2_3_533;
	label$b6ce9d2_3_530:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r24];
	r8 = (String)r20;
	label$b6ce9d2_3_533:
	if( r8 == NULL ) hl_null_access();
	r24 = 0;
	r25 = r0->cursorX;
	r56 = hl_alloc_dynamic(&t$_i32);
	r56->v.i = r25;
	r8 = String_substr(r8,r24,r56);
	r24 = r15->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$b6ce9d2_3_541;
	hl_types_ArrayObj___expand(r15,r19);
	label$b6ce9d2_3_541:
	r21 = r15->array;
	((String*)(r21 + 1))[r19] = r8;
	r2 = NULL;
	zui_Zui_startTextEdit(r0,r1,r2);
	r19 = 0;
	r0->highlightAnchor = r19;
	r0->cursorX = r19;
	zui_Ext_scrollAlign(r0,r1);
	label$b6ce9d2_3_549:
	if( !r7 ) goto label$b6ce9d2_3_601;
	r56 = r0->key;
	r19 = 8;
	r57 = hl_alloc_dynamic(&t$_i32);
	r57->v.i = r19;
	if( r56 != r57 && (!r56 || !r57 || (r56->v.i != r57->v.i)) ) goto label$b6ce9d2_3_601;
	r24 = 0;
	if( r17 != r24 ) goto label$b6ce9d2_3_601;
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = 0;
	if( r24 >= r19 ) goto label$b6ce9d2_3_601;
	r19 = r1->position;
	--r19;
	r1->position = r19;
	if( r15 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = r15->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$b6ce9d2_3_569;
	r8 = NULL;
	goto label$b6ce9d2_3_572;
	label$b6ce9d2_3_569:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r19];
	r8 = (String)r20;
	label$b6ce9d2_3_572:
	if( r8 == NULL ) hl_null_access();
	r19 = r8->length;
	r0->highlightAnchor = r19;
	r0->cursorX = r19;
	r19 = r1->position;
	r24 = r15->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$b6ce9d2_3_580;
	hl_types_ArrayObj___expand(r15,r19);
	label$b6ce9d2_3_580:
	r21 = r15->array;
	r8 = ((String*)(r21 + 1))[r19];
	r24 = r1->position;
	r25 = 1;
	r24 = r24 + r25;
	r25 = r15->length;
	if( ((unsigned)r24) < ((unsigned)r25) ) goto label$b6ce9d2_3_589;
	r11 = NULL;
	goto label$b6ce9d2_3_592;
	label$b6ce9d2_3_589:
	r58 = r15->array;
	r20 = ((vdynamic**)(r58 + 1))[r24];
	r11 = (String)r20;
	label$b6ce9d2_3_592:
	r8 = String___add__(r8,r11);
	((String*)(r21 + 1))[r19] = r8;
	r19 = r1->position;
	r24 = 1;
	r19 = r19 + r24;
	r24 = 1;
	r59 = hl_types_ArrayObj_splice(r15,r19,r24);
	r18 = (hl__types__ArrayObj)hl_dyn_castp(&r59,&t$hl_types_ArrayBase,&t$hl_types_ArrayObj);
	zui_Ext_scrollAlign(r0,r1);
	label$b6ce9d2_3_601:
	if( r15 == NULL ) hl_null_access();
	if( r1 == NULL ) hl_null_access();
	r19 = r1->position;
	r24 = r15->length;
	if( ((unsigned)r19) < ((unsigned)r24) ) goto label$b6ce9d2_3_608;
	r8 = NULL;
	goto label$b6ce9d2_3_611;
	label$b6ce9d2_3_608:
	r21 = r15->array;
	r20 = ((vdynamic**)(r21 + 1))[r19];
	r8 = (String)r20;
	label$b6ce9d2_3_611:
	r0->textSelected = r8;
	label$b6ce9d2_3_612:
	r38 = true;
	r0->highlightOnSelect = r38;
	r38 = true;
	r0->tabSwitchEnabled = r38;
	if( r1 == NULL ) hl_null_access();
	if( r15 == NULL ) hl_null_access();
	r8 = (String)s$68b329d;
	r8 = hl_types_ArrayObj_join(r15,r8);
	r1->text = r8;
	r8 = r1->text;
	return r8;
}

void zui_Ext_scrollAlign(zui__Zui r0,zui__Handle r1) {
	vvirtual *r8, *r10;
	double r3, r7, r11;
	vdynamic *r9;
	zui__Handle r5;
	int r4, r6;
	if( r1 == NULL ) hl_null_access();
	r4 = r1->position;
	r6 = 1;
	r4 = r4 + r6;
	r3 = (double)r4;
	if( r0 == NULL ) hl_null_access();
	r8 = r0->_t;
	if( r8 == NULL ) hl_null_access();
	r4 = hl_vfields(r8)[12] ? (*(int*)(hl_vfields(r8)[12])) : (int)hl_dyn_geti(r8->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r7 = (double)r4;
	r10 = r0->ops;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[5] ? (*(vdynamic**)(hl_vfields(r10)[5])) : (vdynamic*)hl_dyn_getp(r10->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r11 = r9 ? r9->v.d : 0;
	r7 = r7 * r11;
	r3 = r3 * r7;
	r5 = r0->currentWindow;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->scrollOffset;
	r3 = r3 + r7;
	r4 = r0->_h;
	r7 = (double)r4;
	r11 = r0->windowHeaderH;
	r7 = r7 - r11;
	if( !(r7 < r3) ) goto label$b6ce9d2_4_40;
	r5 = r0->currentWindow;
	if( r5 == NULL ) hl_null_access();
	r3 = r5->scrollOffset;
	r8 = r0->_t;
	if( r8 == NULL ) hl_null_access();
	r4 = hl_vfields(r8)[12] ? (*(int*)(hl_vfields(r8)[12])) : (int)hl_dyn_geti(r8->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r7 = (double)r4;
	r10 = r0->ops;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[5] ? (*(vdynamic**)(hl_vfields(r10)[5])) : (vdynamic*)hl_dyn_getp(r10->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r11 = r9 ? r9->v.d : 0;
	r7 = r7 * r11;
	r3 = r3 - r7;
	r5->scrollOffset = r3;
	goto label$b6ce9d2_4_74;
	label$b6ce9d2_4_40:
	r4 = r1->position;
	r6 = 1;
	r4 = r4 + r6;
	r3 = (double)r4;
	r8 = r0->_t;
	if( r8 == NULL ) hl_null_access();
	r4 = hl_vfields(r8)[12] ? (*(int*)(hl_vfields(r8)[12])) : (int)hl_dyn_geti(r8->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r7 = (double)r4;
	r10 = r0->ops;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[5] ? (*(vdynamic**)(hl_vfields(r10)[5])) : (vdynamic*)hl_dyn_getp(r10->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r11 = r9 ? r9->v.d : 0;
	r7 = r7 * r11;
	r3 = r3 * r7;
	r5 = r0->currentWindow;
	if( r5 == NULL ) hl_null_access();
	r7 = r5->scrollOffset;
	r3 = r3 + r7;
	r7 = r0->windowHeaderH;
	if( !(r3 < r7) ) goto label$b6ce9d2_4_74;
	r5 = r0->currentWindow;
	if( r5 == NULL ) hl_null_access();
	r3 = r5->scrollOffset;
	r8 = r0->_t;
	if( r8 == NULL ) hl_null_access();
	r4 = hl_vfields(r8)[12] ? (*(int*)(hl_vfields(r8)[12])) : (int)hl_dyn_geti(r8->value,-482102240/*ELEMENT_H*/,&t$_i32);
	r7 = (double)r4;
	r10 = r0->ops;
	if( r10 == NULL ) hl_null_access();
	r9 = hl_vfields(r10)[5] ? (*(vdynamic**)(hl_vfields(r10)[5])) : (vdynamic*)hl_dyn_getp(r10->value,-267297164/*scaleFactor*/,&t$nul_f64);
	r11 = r9 ? r9->v.d : 0;
	r7 = r7 * r11;
	r3 = r3 + r7;
	r5->scrollOffset = r3;
	label$b6ce9d2_4_74:
	return;
}

