﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <haxe/format/JsonParser.h>
vdynamic* haxe_format_JsonParser_parseRec(haxe__format__JsonParser);
void haxe_format_JsonParser_invalidChar(haxe__format__JsonParser);
#include <hl/types/ArrayDyn.h>
#include <hl/types/ArrayObj.h>
String haxe_format_JsonParser_parseString(haxe__format__JsonParser);
void haxe_format_JsonParser_invalidNumber(haxe__format__JsonParser,int);
extern hl_type t$_i32;
String String_substr(String,int,vdynamic*);
double Std_parseFloat(String);
extern hl_type t$_f64;
extern hl_type t$_dyn;
#include <hl/natives.h>
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
#include <hl/types/ArrayBase.h>
hl__types__ArrayDyn hl_types_ArrayDyn_alloc(hl__types__ArrayBase,bool*);
int hl_types_ArrayDyn_push(hl__types__ArrayDyn,vdynamic*);
void Reflect_setField(vdynamic*,String,vdynamic*);
#include <_std/StringBuf.h>
extern hl_type t$StringBuf;
void StringBuf_new(StringBuf);
void StringBuf_addSub(StringBuf,String,int,vdynamic*);
void StringBuf_addChar(StringBuf,int);
extern String s$Invalid_escape_sequence_;
String String_fromCharCode(int);
String String___add__(String,String);
extern String s$_at_position_;
String String___alloc__(vbyte*,int);
vdynamic* haxe_Exception_thrown(vdynamic*);
extern String s$0x;
vdynamic* Std_parseInt(String);
extern String s$Unclosed_string;
String StringBuf_toString(StringBuf);
extern String s$Invalid_char_;
extern String s$Invalid_number_at_position_;
extern String s$e265492;

void haxe_format_JsonParser_new(haxe__format__JsonParser r0,String r1) {
	int r2;
	r0->str = r1;
	r2 = 0;
	r0->pos = r2;
	return;
}

vdynamic* haxe_format_JsonParser_doParse(haxe__format__JsonParser r0) {
	String r7;
	bool r3;
	vdynamic *r1;
	vbyte *r6;
	int r4, r5, r8, r9;
	r1 = haxe_format_JsonParser_parseRec(r0);
	label$36f55b1_2_1:
	r3 = true;
	if( !r3 ) goto label$36f55b1_2_21;
	r4 = r0->pos;
	r5 = r4;
	++r4;
	r0->pos = r4;
	r7 = r0->str;
	if( r7 == NULL ) hl_null_access();
	r6 = r7->bytes;
	r9 = 1;
	r8 = r5 << r9;
	r8 = *(unsigned short*)(r6 + r8);
	r9 = 0;
	if( r8 != r9 ) goto label$36f55b1_2_17;
	goto label$36f55b1_2_21;
	label$36f55b1_2_17:
	switch(r8) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			haxe_format_JsonParser_invalidChar(r0);
			goto label$36f55b1_2_20;
		case 9:
			break;
		case 10:
			break;
		case 13:
			break;
		case 32:
			break;
	}
	label$36f55b1_2_20:
	goto label$36f55b1_2_1;
	label$36f55b1_2_21:
	return r1;
}

vdynamic* haxe_format_JsonParser_parseRec(haxe__format__JsonParser r0) {
	vdynobj *r33;
	bool *r29;
	String r6, r34;
	hl__types__ArrayObj r28;
	hl_type *r27;
	bool r1, r13, r14, r15, r16, r17, r18, r19;
	hl__types__ArrayDyn r25;
	double r22, r24;
	vdynamic *r9, *r23, *r30, *r31, *r32, *r35;
	varray *r26;
	vbyte *r5, *r7, *r20;
	int r2, r3, r8, r10, r11, r12, r21;
	label$36f55b1_3_0:
	r1 = true;
	if( !r1 ) goto label$36f55b1_3_410;
	r2 = r0->pos;
	r3 = r2;
	++r2;
	r0->pos = r2;
	r6 = r0->str;
	if( r6 == NULL ) hl_null_access();
	r5 = r6->bytes;
	r8 = 1;
	r3 = r3 << r8;
	r3 = *(unsigned short*)(r5 + r3);
	switch(r3) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 33:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 47:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
			haxe_format_JsonParser_invalidChar(r0);
			goto label$36f55b1_3_409;
		case 9:
		case 10:
		case 13:
		case 32:
			goto label$36f55b1_3_409;
		case 34:
			r6 = haxe_format_JsonParser_parseString(r0);
			return ((vdynamic*)r6);
		case 45:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
			r10 = r0->pos;
			r11 = 1;
			r10 = r10 - r11;
			r12 = 45;
			if( r3 == r12 ) goto label$36f55b1_3_26;
			r1 = false;
			goto label$36f55b1_3_27;
			label$36f55b1_3_26:
			r1 = true;
			label$36f55b1_3_27:
			r13 = !r1;
			r12 = 48;
			if( r3 == r12 ) goto label$36f55b1_3_32;
			r14 = false;
			goto label$36f55b1_3_33;
			label$36f55b1_3_32:
			r14 = true;
			label$36f55b1_3_33:
			r15 = false;
			r16 = false;
			r17 = false;
			r18 = false;
			label$36f55b1_3_37:
			r19 = true;
			if( !r19 ) goto label$36f55b1_3_109;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r7 + r12);
			switch(r12) {
				default:
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 32:
				case 33:
				case 34:
				case 35:
				case 36:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 44:
				case 47:
				case 58:
				case 59:
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
				case 97:
				case 98:
				case 99:
				case 100:
					if( r13 ) goto label$36f55b1_3_53;
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_53:
					r12 = r0->pos;
					--r12;
					r0->pos = r12;
					r19 = true;
					r18 = r19;
					goto label$36f55b1_3_106;
				case 43:
				case 45:
					if( !r16 ) goto label$36f55b1_3_61;
					if( !r17 ) goto label$36f55b1_3_62;
					label$36f55b1_3_61:
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_62:
					r19 = false;
					r13 = r19;
					r19 = true;
					r17 = r19;
					goto label$36f55b1_3_106;
				case 46:
					if( r1 ) goto label$36f55b1_3_70;
					if( r15 ) goto label$36f55b1_3_70;
					if( !r16 ) goto label$36f55b1_3_71;
					label$36f55b1_3_70:
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_71:
					r19 = false;
					r13 = r19;
					r19 = true;
					r15 = r19;
					goto label$36f55b1_3_106;
				case 48:
					if( !r14 ) goto label$36f55b1_3_79;
					if( r15 ) goto label$36f55b1_3_79;
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_79:
					if( !r1 ) goto label$36f55b1_3_84;
					r19 = false;
					r1 = r19;
					r19 = true;
					r14 = r19;
					label$36f55b1_3_84:
					r19 = true;
					r13 = r19;
					goto label$36f55b1_3_106;
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
				case 56:
				case 57:
					if( !r14 ) goto label$36f55b1_3_90;
					if( r15 ) goto label$36f55b1_3_90;
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_90:
					if( !r1 ) goto label$36f55b1_3_93;
					r19 = false;
					r1 = r19;
					label$36f55b1_3_93:
					r19 = true;
					r13 = r19;
					r19 = false;
					r14 = r19;
					goto label$36f55b1_3_106;
				case 69:
				case 101:
					if( r1 ) goto label$36f55b1_3_101;
					if( r14 ) goto label$36f55b1_3_101;
					if( !r16 ) goto label$36f55b1_3_102;
					label$36f55b1_3_101:
					haxe_format_JsonParser_invalidNumber(r0,r10);
					label$36f55b1_3_102:
					r19 = false;
					r13 = r19;
					r19 = true;
					r16 = r19;
			}
			label$36f55b1_3_106:
			if( !r18 ) goto label$36f55b1_3_108;
			goto label$36f55b1_3_109;
			label$36f55b1_3_108:
			goto label$36f55b1_3_37;
			label$36f55b1_3_109:
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r12 = r0->pos;
			r12 = r12 - r10;
			r23 = hl_alloc_dynamic(&t$_i32);
			r23->v.i = r12;
			r6 = String_substr(r6,r10,r23);
			r22 = Std_parseFloat(r6);
			if( !r15 ) goto label$36f55b1_3_119;
			r9 = hl_alloc_dynamic(&t$_f64);
			r9->v.d = r22;
			return r9;
			label$36f55b1_3_119:
			r11 = (int)r22;
			r24 = (double)r11;
			if( r24 != r22 ) goto label$36f55b1_3_124;
			r9 = hl_alloc_dynamic(&t$_i32);
			r9->v.i = r11;
			return r9;
			label$36f55b1_3_124:
			r9 = hl_alloc_dynamic(&t$_f64);
			r9->v.d = r22;
			return r9;
		case 91:
			r27 = &t$_dyn;
			r8 = 0;
			r26 = hl_alloc_array(r27,r8);
			r28 = hl_types_ArrayObj_alloc(r26);
			r1 = true;
			r29 = &r1;
			r25 = hl_types_ArrayDyn_alloc(((hl__types__ArrayBase)r28),r29);
			r30 = NULL;
			label$36f55b1_3_134:
			r1 = true;
			if( !r1 ) goto label$36f55b1_3_176;
			r8 = r0->pos;
			r10 = r8;
			++r8;
			r0->pos = r8;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->bytes;
			r11 = 1;
			r10 = r10 << r11;
			r10 = *(unsigned short*)(r7 + r10);
			switch(r10) {
				default:
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 11:
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 33:
				case 34:
				case 35:
				case 36:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
				case 56:
				case 57:
				case 58:
				case 59:
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
					r1 = r30 ? r30->v.b : 0;
					if( !r1 ) goto label$36f55b1_3_151;
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_151:
					r11 = r0->pos;
					--r11;
					r0->pos = r11;
					if( r25 == NULL ) hl_null_access();
					r9 = haxe_format_JsonParser_parseRec(r0);
					r11 = hl_types_ArrayDyn_push(r25,r9);
					r1 = true;
					r31 = hl_alloc_dynbool(r1);
					r30 = r31;
					goto label$36f55b1_3_175;
				case 9:
				case 10:
				case 13:
				case 32:
					goto label$36f55b1_3_175;
				case 44:
					r1 = r30 ? r30->v.b : 0;
					if( !r1 ) goto label$36f55b1_3_168;
					r1 = false;
					r31 = hl_alloc_dynbool(r1);
					r30 = r31;
					goto label$36f55b1_3_169;
					label$36f55b1_3_168:
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_169:
					goto label$36f55b1_3_175;
				case 93:
					r1 = false;
					r32 = hl_alloc_dynbool(r1);
					if( r30 != r32 && (!r30 || !r32 || (r30->v.b != r32->v.b)) ) goto label$36f55b1_3_174;
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_174:
					return ((vdynamic*)r25);
			}
			label$36f55b1_3_175:
			goto label$36f55b1_3_134;
			label$36f55b1_3_176:
			goto label$36f55b1_3_409;
		case 102:
			r8 = r0->pos;
			r10 = r0->pos;
			r11 = r10;
			++r10;
			r0->pos = r10;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->bytes;
			r12 = 1;
			r11 = r11 << r12;
			r11 = *(unsigned short*)(r7 + r11);
			r12 = 97;
			if( r11 != r12 ) goto label$36f55b1_3_206;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 108;
			if( r12 != r21 ) goto label$36f55b1_3_204;
			r13 = false;
			goto label$36f55b1_3_205;
			label$36f55b1_3_204:
			r13 = true;
			label$36f55b1_3_205:
			goto label$36f55b1_3_207;
			label$36f55b1_3_206:
			r13 = true;
			label$36f55b1_3_207:
			if( r13 ) goto label$36f55b1_3_224;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 115;
			if( r12 != r21 ) goto label$36f55b1_3_222;
			r14 = false;
			goto label$36f55b1_3_223;
			label$36f55b1_3_222:
			r14 = true;
			label$36f55b1_3_223:
			goto label$36f55b1_3_225;
			label$36f55b1_3_224:
			r14 = true;
			label$36f55b1_3_225:
			if( r14 ) goto label$36f55b1_3_242;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 101;
			if( r12 != r21 ) goto label$36f55b1_3_240;
			r15 = false;
			goto label$36f55b1_3_241;
			label$36f55b1_3_240:
			r15 = true;
			label$36f55b1_3_241:
			goto label$36f55b1_3_243;
			label$36f55b1_3_242:
			r15 = true;
			label$36f55b1_3_243:
			if( !r15 ) goto label$36f55b1_3_246;
			r0->pos = r8;
			haxe_format_JsonParser_invalidChar(r0);
			label$36f55b1_3_246:
			r15 = false;
			r9 = hl_alloc_dynbool(r15);
			return r9;
		case 110:
			r8 = r0->pos;
			r10 = r0->pos;
			r11 = r10;
			++r10;
			r0->pos = r10;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->bytes;
			r12 = 1;
			r11 = r11 << r12;
			r11 = *(unsigned short*)(r7 + r11);
			r12 = 117;
			if( r11 != r12 ) goto label$36f55b1_3_278;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 108;
			if( r12 != r21 ) goto label$36f55b1_3_276;
			r13 = false;
			goto label$36f55b1_3_277;
			label$36f55b1_3_276:
			r13 = true;
			label$36f55b1_3_277:
			goto label$36f55b1_3_279;
			label$36f55b1_3_278:
			r13 = true;
			label$36f55b1_3_279:
			if( r13 ) goto label$36f55b1_3_296;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 108;
			if( r12 != r21 ) goto label$36f55b1_3_294;
			r14 = false;
			goto label$36f55b1_3_295;
			label$36f55b1_3_294:
			r14 = true;
			label$36f55b1_3_295:
			goto label$36f55b1_3_297;
			label$36f55b1_3_296:
			r14 = true;
			label$36f55b1_3_297:
			if( !r14 ) goto label$36f55b1_3_300;
			r0->pos = r8;
			haxe_format_JsonParser_invalidChar(r0);
			label$36f55b1_3_300:
			r9 = NULL;
			return r9;
		case 116:
			r8 = r0->pos;
			r10 = r0->pos;
			r11 = r10;
			++r10;
			r0->pos = r10;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r7 = r6->bytes;
			r12 = 1;
			r11 = r11 << r12;
			r11 = *(unsigned short*)(r7 + r11);
			r12 = 114;
			if( r11 != r12 ) goto label$36f55b1_3_331;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 117;
			if( r12 != r21 ) goto label$36f55b1_3_329;
			r13 = false;
			goto label$36f55b1_3_330;
			label$36f55b1_3_329:
			r13 = true;
			label$36f55b1_3_330:
			goto label$36f55b1_3_332;
			label$36f55b1_3_331:
			r13 = true;
			label$36f55b1_3_332:
			if( r13 ) goto label$36f55b1_3_349;
			r11 = r0->pos;
			r12 = r11;
			++r11;
			r0->pos = r11;
			r6 = r0->str;
			if( r6 == NULL ) hl_null_access();
			r20 = r6->bytes;
			r21 = 1;
			r12 = r12 << r21;
			r12 = *(unsigned short*)(r20 + r12);
			r21 = 101;
			if( r12 != r21 ) goto label$36f55b1_3_347;
			r14 = false;
			goto label$36f55b1_3_348;
			label$36f55b1_3_347:
			r14 = true;
			label$36f55b1_3_348:
			goto label$36f55b1_3_350;
			label$36f55b1_3_349:
			r14 = true;
			label$36f55b1_3_350:
			if( !r14 ) goto label$36f55b1_3_353;
			r0->pos = r8;
			haxe_format_JsonParser_invalidChar(r0);
			label$36f55b1_3_353:
			r14 = true;
			r9 = hl_alloc_dynbool(r14);
			return r9;
		case 123:
			r33 = hl_alloc_dynobj();
			r9 = ((vdynamic*)r33);
			r6 = NULL;
			r30 = NULL;
			label$36f55b1_3_360:
			r1 = true;
			if( !r1 ) goto label$36f55b1_3_409;
			r8 = r0->pos;
			r10 = r8;
			++r8;
			r0->pos = r8;
			r34 = r0->str;
			if( r34 == NULL ) hl_null_access();
			r7 = r34->bytes;
			r11 = 1;
			r10 = r10 << r11;
			r10 = *(unsigned short*)(r7 + r10);
			switch(r10) {
				default:
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 11:
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 24:
				case 25:
				case 26:
				case 27:
				case 28:
				case 29:
				case 30:
				case 31:
				case 33:
				case 35:
				case 36:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
				case 52:
				case 53:
				case 54:
				case 55:
				case 56:
				case 57:
				case 59:
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
				case 72:
				case 73:
				case 74:
				case 75:
				case 76:
				case 77:
				case 78:
				case 79:
				case 80:
				case 81:
				case 82:
				case 83:
				case 84:
				case 85:
				case 86:
				case 87:
				case 88:
				case 89:
				case 90:
				case 91:
				case 92:
				case 93:
				case 94:
				case 95:
				case 96:
				case 97:
				case 98:
				case 99:
				case 100:
				case 101:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
				case 114:
				case 115:
				case 116:
				case 117:
				case 118:
				case 119:
				case 120:
				case 121:
				case 122:
				case 123:
				case 124:
					haxe_format_JsonParser_invalidChar(r0);
					goto label$36f55b1_3_408;
				case 9:
				case 10:
				case 13:
				case 32:
					goto label$36f55b1_3_408;
				case 34:
					if( r6 ) goto label$36f55b1_3_380;
					r1 = r30 ? r30->v.b : 0;
					if( !r1 ) goto label$36f55b1_3_381;
					label$36f55b1_3_380:
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_381:
					r34 = haxe_format_JsonParser_parseString(r0);
					r6 = r34;
					goto label$36f55b1_3_408;
				case 44:
					r1 = r30 ? r30->v.b : 0;
					if( !r1 ) goto label$36f55b1_3_390;
					r1 = false;
					r31 = hl_alloc_dynbool(r1);
					r30 = r31;
					goto label$36f55b1_3_391;
					label$36f55b1_3_390:
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_391:
					goto label$36f55b1_3_408;
				case 58:
					if( r6 ) goto label$36f55b1_3_394;
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_394:
					r35 = haxe_format_JsonParser_parseRec(r0);
					Reflect_setField(r9,r6,r35);
					r34 = NULL;
					r6 = r34;
					r1 = true;
					r31 = hl_alloc_dynbool(r1);
					r30 = r31;
					goto label$36f55b1_3_408;
				case 125:
					if( r6 ) goto label$36f55b1_3_406;
					r1 = false;
					r32 = hl_alloc_dynbool(r1);
					if( r30 != r32 && (!r30 || !r32 || (r30->v.b != r32->v.b)) ) goto label$36f55b1_3_407;
					label$36f55b1_3_406:
					haxe_format_JsonParser_invalidChar(r0);
					label$36f55b1_3_407:
					return r9;
			}
			label$36f55b1_3_408:
			goto label$36f55b1_3_360;
	}
	label$36f55b1_3_409:
	goto label$36f55b1_3_0;
	label$36f55b1_3_410:
	r9 = NULL;
	return r9;
}

String haxe_format_JsonParser_parseString(haxe__format__JsonParser r0) {
	String r9, r18;
	bool r5;
	StringBuf r3, r13;
	int *r19;
	vdynamic *r15, *r17;
	vbyte *r8, *r10, *r16;
	int r1, r4, r6, r7, r11, r12, r14, r20, r21;
	r1 = r0->pos;
	r3 = NULL;
	r4 = -1;
	label$36f55b1_4_3:
	r5 = true;
	if( !r5 ) goto label$36f55b1_4_138;
	r6 = r0->pos;
	r7 = r6;
	++r6;
	r0->pos = r6;
	r9 = r0->str;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->bytes;
	r11 = 1;
	r7 = r7 << r11;
	r7 = *(unsigned short*)(r8 + r7);
	r12 = 34;
	if( r7 != r12 ) goto label$36f55b1_4_19;
	goto label$36f55b1_4_138;
	label$36f55b1_4_19:
	r12 = 92;
	if( r7 != r12 ) goto label$36f55b1_4_132;
	if( r3 ) goto label$36f55b1_4_25;
	r13 = (StringBuf)hl_alloc_obj(&t$StringBuf);
	StringBuf_new(r13);
	r3 = r13;
	label$36f55b1_4_25:
	if( r3 == NULL ) hl_null_access();
	r9 = r0->str;
	r12 = r0->pos;
	r12 = r12 - r1;
	r14 = 1;
	r12 = r12 - r14;
	r15 = hl_alloc_dynamic(&t$_i32);
	r15->v.i = r12;
	StringBuf_addSub(r3,r9,r1,r15);
	r11 = r0->pos;
	r12 = r11;
	++r11;
	r0->pos = r11;
	r9 = r0->str;
	if( r9 == NULL ) hl_null_access();
	r10 = r9->bytes;
	r14 = 1;
	r12 = r12 << r14;
	r12 = *(unsigned short*)(r10 + r12);
	r7 = r12;
	r14 = 117;
	if( r12 == r14 ) goto label$36f55b1_4_52;
	r14 = -1;
	if( r4 == r14 ) goto label$36f55b1_4_52;
	r12 = 65533;
	StringBuf_addChar(r3,r12);
	r12 = -1;
	r4 = r12;
	label$36f55b1_4_52:
	switch(r7) {
		default:
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 111:
		case 112:
		case 113:
		case 115:
			r9 = (String)s$Invalid_escape_sequence_;
			r18 = String_fromCharCode(r7);
			r9 = String___add__(r9,r18);
			r18 = (String)s$_at_position_;
			r9 = String___add__(r9,r18);
			r12 = r0->pos;
			r14 = 1;
			r12 = r12 - r14;
			r19 = &r12;
			r16 = hl_itos(r12,r19);
			r18 = String___alloc__(r16,r12);
			r9 = String___add__(r9,r18);
			r17 = haxe_Exception_thrown(((vdynamic*)r9));
			hl_throw((vdynamic*)r17);
		case 34:
		case 47:
		case 92:
			StringBuf_addChar(r3,r7);
			goto label$36f55b1_4_129;
		case 98:
			r12 = 8;
			StringBuf_addChar(r3,r12);
			goto label$36f55b1_4_129;
		case 102:
			r12 = 12;
			StringBuf_addChar(r3,r12);
			goto label$36f55b1_4_129;
		case 110:
			r12 = 10;
			StringBuf_addChar(r3,r12);
			goto label$36f55b1_4_129;
		case 114:
			r12 = 13;
			StringBuf_addChar(r3,r12);
			goto label$36f55b1_4_129;
		case 116:
			r12 = 9;
			StringBuf_addChar(r3,r12);
			goto label$36f55b1_4_129;
		case 117:
			r9 = (String)s$0x;
			r18 = r0->str;
			if( r18 == NULL ) hl_null_access();
			r12 = r0->pos;
			r14 = 4;
			r15 = hl_alloc_dynamic(&t$_i32);
			r15->v.i = r14;
			r18 = String_substr(r18,r12,r15);
			r9 = String___add__(r9,r18);
			r15 = Std_parseInt(r9);
			r12 = r15 ? r15->v.i : 0;
			r14 = r0->pos;
			r20 = 4;
			r14 = r14 + r20;
			r0->pos = r14;
			r20 = -1;
			if( r4 == r20 ) goto label$36f55b1_4_122;
			r20 = 56320;
			if( r12 < r20 ) goto label$36f55b1_4_104;
			r20 = 57343;
			if( r20 >= r12 ) goto label$36f55b1_4_109;
			label$36f55b1_4_104:
			r14 = 65533;
			StringBuf_addChar(r3,r14);
			r14 = -1;
			r4 = r14;
			goto label$36f55b1_4_121;
			label$36f55b1_4_109:
			r20 = 55296;
			r14 = r4 - r20;
			r20 = 10;
			r14 = r14 << r20;
			r21 = 56320;
			r20 = r12 - r21;
			r14 = r14 + r20;
			r20 = 65536;
			r14 = r14 + r20;
			StringBuf_addChar(r3,r14);
			r14 = -1;
			r4 = r14;
			label$36f55b1_4_121:
			goto label$36f55b1_4_129;
			label$36f55b1_4_122:
			r20 = 55296;
			if( r12 < r20 ) goto label$36f55b1_4_128;
			r20 = 56319;
			if( r20 < r12 ) goto label$36f55b1_4_128;
			r4 = r12;
			goto label$36f55b1_4_129;
			label$36f55b1_4_128:
			StringBuf_addChar(r3,r12);
	}
	label$36f55b1_4_129:
	r12 = r0->pos;
	r1 = r12;
	goto label$36f55b1_4_137;
	label$36f55b1_4_132:
	r12 = 0;
	if( r7 != r12 ) goto label$36f55b1_4_137;
	r9 = (String)s$Unclosed_string;
	r17 = haxe_Exception_thrown(((vdynamic*)r9));
	hl_throw((vdynamic*)r17);
	label$36f55b1_4_137:
	goto label$36f55b1_4_3;
	label$36f55b1_4_138:
	r7 = -1;
	if( r4 == r7 ) goto label$36f55b1_4_144;
	if( r3 == NULL ) hl_null_access();
	r6 = 65533;
	StringBuf_addChar(r3,r6);
	r6 = -1;
	label$36f55b1_4_144:
	if( r3 ) goto label$36f55b1_4_154;
	r9 = r0->str;
	if( r9 == NULL ) hl_null_access();
	r7 = r0->pos;
	r7 = r7 - r1;
	r11 = 1;
	r7 = r7 - r11;
	r15 = hl_alloc_dynamic(&t$_i32);
	r15->v.i = r7;
	r9 = String_substr(r9,r1,r15);
	return r9;
	label$36f55b1_4_154:
	if( r3 == NULL ) hl_null_access();
	r9 = r0->str;
	r7 = r0->pos;
	r7 = r7 - r1;
	r11 = 1;
	r7 = r7 - r11;
	r15 = hl_alloc_dynamic(&t$_i32);
	r15->v.i = r7;
	StringBuf_addSub(r3,r9,r1,r15);
	r9 = StringBuf_toString(r3);
	return r9;
}

void haxe_format_JsonParser_invalidChar(haxe__format__JsonParser r0) {
	String r4, r9;
	int *r8;
	vdynamic *r5;
	vbyte *r3, *r6;
	int r1, r2, r7;
	r1 = r0->pos;
	--r1;
	r0->pos = r1;
	r1 = r0->pos;
	r4 = r0->str;
	if( r4 == NULL ) hl_null_access();
	r3 = r4->bytes;
	r4 = (String)s$Invalid_char_;
	r7 = 1;
	r2 = r1 << r7;
	r2 = *(unsigned short*)(r3 + r2);
	r8 = &r2;
	r6 = hl_itos(r2,r8);
	r9 = String___alloc__(r6,r2);
	r4 = String___add__(r4,r9);
	r9 = (String)s$_at_position_;
	r4 = String___add__(r4,r9);
	r2 = r0->pos;
	r8 = &r2;
	r6 = hl_itos(r2,r8);
	r9 = String___alloc__(r6,r2);
	r4 = String___add__(r4,r9);
	r5 = haxe_Exception_thrown(((vdynamic*)r4));
	hl_throw((vdynamic*)r5);
}

void haxe_format_JsonParser_invalidNumber(haxe__format__JsonParser r0,int r1) {
	String r3, r7;
	int *r5;
	vdynamic *r2, *r9;
	vbyte *r6;
	int r4, r8;
	r3 = (String)s$Invalid_number_at_position_;
	r4 = r1;
	r5 = &r4;
	r6 = hl_itos(r4,r5);
	r7 = String___alloc__(r6,r4);
	r3 = String___add__(r3,r7);
	r7 = (String)s$e265492;
	r3 = String___add__(r3,r7);
	r7 = r0->str;
	if( r7 == NULL ) hl_null_access();
	r8 = r0->pos;
	r8 = r8 - r1;
	r9 = hl_alloc_dynamic(&t$_i32);
	r9->v.i = r8;
	r7 = String_substr(r7,r1,r9);
	r3 = String___add__(r3,r7);
	r2 = haxe_Exception_thrown(((vdynamic*)r3));
	hl_throw((vdynamic*)r2);
}

