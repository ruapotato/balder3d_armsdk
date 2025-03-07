﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics4/PipelineState.h>
void kha_graphics4_PipelineStateBase_new(kha__graphics4__PipelineStateBase);
void kha_graphics4_PipelineState_init(kha__graphics4__PipelineState);
#include <hl/natives.h>
#include <kha/graphics4/VertexStructure.h>
#include <kha/graphics4/VertexElement.h>
extern hl_type t$kha_graphics4_VertexStructure;
hl__types__ArrayObj hl_types_ArrayObj_alloc(varray*);
extern hl_type t$_dyn;
extern hl_type t$_bytes;
int hl_types_ArrayObj_push(hl__types__ArrayObj,vdynamic*);
int kha_graphics4_VertexStructure_size(kha__graphics4__VertexStructure);
kha__graphics4__VertexElement kha_graphics4_VertexStructure_get(kha__graphics4__VertexStructure,int);
int kha_graphics4_PipelineState_getBlendFunc(int);
extern hl_type t$_bool;
#include <kha/korehl/graphics4/ConstantLocation.h>
extern hl_type t$kha_korehl_graphics4_ConstantLocation;
void kha_korehl_graphics4_ConstantLocation_new(kha__korehl__graphics4__ConstantLocation,vbyte*);
extern hl_type t$vrt_b840ca7;
#include <kha/korehl/graphics4/TextureUnit.h>
extern hl_type t$kha_korehl_graphics4_TextureUnit;
void kha_korehl_graphics4_TextureUnit_new(kha__korehl__graphics4__TextureUnit,vbyte*);

void kha_graphics4_PipelineState_new(kha__graphics4__PipelineState r0) {
	kha_graphics4_PipelineStateBase_new(((kha__graphics4__PipelineStateBase)r0));
	kha_graphics4_PipelineState_init(r0);
	return;
}

void kha_graphics4_PipelineState_init(kha__graphics4__PipelineState r0) {
	vbyte *r1;
	r1 = hl_kinc_create_pipeline();
	r0->_pipeline = r1;
	return;
}

void kha_graphics4_PipelineState_delete(kha__graphics4__PipelineState r0) {
	vbyte *r2;
	r2 = r0->_pipeline;
	hl_kinc_delete_pipeline(r2);
	return;
}

void kha_graphics4_PipelineState_linkWithStructures2(kha__graphics4__PipelineState r0,kha__graphics4__VertexStructure r1,kha__graphics4__VertexStructure r2,kha__graphics4__VertexStructure r3,kha__graphics4__VertexStructure r4,int r5) {
	String r30;
	kha__graphics4__FragmentShader r10;
	hl__types__ArrayObj r14, r19;
	hl_type *r16;
	bool r23;
	kha__graphics4__TessellationControlShader r12;
	kha__graphics4__VertexShader r9;
	kha__graphics4__VertexElement r28;
	kha__graphics4__TessellationEvaluationShader r13;
	kha__graphics4__GeometryShader r11;
	int *r31;
	vdynamic *r25;
	kha__graphics4__VertexStructure r18;
	int r17, r20, r21, r22, r24, r26, r27, r29, r33;
	varray *r15;
	vbyte *r7, *r8, *r32, *r34, *r35;
	r7 = r0->_pipeline;
	r9 = r0->vertexShader;
	if( r9 == NULL ) hl_null_access();
	r8 = r9->_shader;
	hl_kinc_pipeline_set_vertex_shader(r7,r8);
	r7 = r0->_pipeline;
	r10 = r0->fragmentShader;
	if( r10 == NULL ) hl_null_access();
	r8 = r10->_shader;
	hl_kinc_pipeline_set_fragment_shader(r7,r8);
	r11 = r0->geometryShader;
	if( !r11 ) goto label$16082cb_4_17;
	r7 = r0->_pipeline;
	r11 = r0->geometryShader;
	if( r11 == NULL ) hl_null_access();
	r8 = r11->_shader;
	hl_kinc_pipeline_set_geometry_shader(r7,r8);
	label$16082cb_4_17:
	r12 = r0->tessellationControlShader;
	if( !r12 ) goto label$16082cb_4_24;
	r7 = r0->_pipeline;
	r12 = r0->tessellationControlShader;
	if( r12 == NULL ) hl_null_access();
	r8 = r12->_shader;
	hl_kinc_pipeline_set_tesscontrol_shader(r7,r8);
	label$16082cb_4_24:
	r13 = r0->tessellationEvaluationShader;
	if( !r13 ) goto label$16082cb_4_31;
	r7 = r0->_pipeline;
	r13 = r0->tessellationEvaluationShader;
	if( r13 == NULL ) hl_null_access();
	r8 = r13->_shader;
	hl_kinc_pipeline_set_tesseval_shader(r7,r8);
	label$16082cb_4_31:
	r16 = &t$kha_graphics4_VertexStructure;
	r17 = 4;
	r15 = hl_alloc_array(r16,r17);
	r17 = 0;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r1;
	r17 = 1;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r2;
	r17 = 2;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r3;
	r17 = 3;
	((kha__graphics4__VertexStructure*)(r15 + 1))[r17] = r4;
	r14 = hl_types_ArrayObj_alloc(r15);
	r16 = &t$_dyn;
	r17 = 0;
	r15 = hl_alloc_array(r16,r17);
	r19 = hl_types_ArrayObj_alloc(r15);
	r17 = 0;
	r20 = r5;
	label$16082cb_4_49:
	if( r17 >= r20 ) goto label$16082cb_4_215;
	r21 = r17;
	++r17;
	if( r14 == NULL ) hl_null_access();
	r24 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r24) ) goto label$16082cb_4_58;
	r18 = NULL;
	goto label$16082cb_4_61;
	label$16082cb_4_58:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_61:
	if( r18 == NULL ) hl_null_access();
	r23 = r18->instanced;
	r7 = hl_kinc_create_vertexstructure(r23);
	if( r19 == NULL ) hl_null_access();
	if( r7 == NULL ) r25 = NULL; else {
		r25 = hl_alloc_dynamic(&t$_bytes);
		r25->v.ptr = r7;
	}
	r22 = hl_types_ArrayObj_push(r19,r25);
	r22 = 0;
	r26 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r26) ) goto label$16082cb_4_72;
	r18 = NULL;
	goto label$16082cb_4_75;
	label$16082cb_4_72:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_75:
	if( r18 == NULL ) hl_null_access();
	r24 = kha_graphics4_VertexStructure_size(r18);
	label$16082cb_4_77:
	if( r22 >= r24 ) goto label$16082cb_4_214;
	r26 = r22;
	++r22;
	if( r14 == NULL ) hl_null_access();
	r29 = r14->length;
	if( ((unsigned)r21) < ((unsigned)r29) ) goto label$16082cb_4_86;
	r18 = NULL;
	goto label$16082cb_4_89;
	label$16082cb_4_86:
	r15 = r14->array;
	r25 = ((vdynamic**)(r15 + 1))[r21];
	r18 = (kha__graphics4__VertexStructure)r25;
	label$16082cb_4_89:
	if( r18 == NULL ) hl_null_access();
	r28 = kha_graphics4_VertexStructure_get(r18,r26);
	r27 = 0;
	if( r28 == NULL ) hl_null_access();
	r30 = r28->name;
	if( r30 == NULL ) hl_null_access();
	r8 = r30->bytes;
	r31 = &r27;
	r29 = 0;
	r32 = hl_utf16_to_utf8(r8,r29,r31);
	r29 = r28->data;
	switch(r29) {
		default:
			goto label$16082cb_4_212;
		case 0:
			r33 = 1;
			r29 = r33;
			goto label$16082cb_4_212;
		case 1:
			r33 = 2;
			r29 = r33;
			goto label$16082cb_4_212;
		case 2:
			r33 = 3;
			r29 = r33;
			goto label$16082cb_4_212;
		case 3:
			r33 = 4;
			r29 = r33;
			goto label$16082cb_4_212;
		case 4:
			r33 = 5;
			r29 = r33;
			goto label$16082cb_4_212;
		case 5:
			r33 = 6;
			r29 = r33;
			goto label$16082cb_4_212;
		case 6:
			r33 = 7;
			r29 = r33;
			goto label$16082cb_4_212;
		case 7:
			r33 = 8;
			r29 = r33;
			goto label$16082cb_4_212;
		case 8:
			r33 = 9;
			r29 = r33;
			goto label$16082cb_4_212;
		case 9:
			r33 = 10;
			r29 = r33;
			goto label$16082cb_4_212;
		case 10:
			r33 = 11;
			r29 = r33;
			goto label$16082cb_4_212;
		case 11:
			r33 = 12;
			r29 = r33;
			goto label$16082cb_4_212;
		case 12:
			r33 = 13;
			r29 = r33;
			goto label$16082cb_4_212;
		case 13:
			r33 = 14;
			r29 = r33;
			goto label$16082cb_4_212;
		case 14:
			r33 = 15;
			r29 = r33;
			goto label$16082cb_4_212;
		case 15:
			r33 = 16;
			r29 = r33;
			goto label$16082cb_4_212;
		case 16:
			r33 = 17;
			r29 = r33;
			goto label$16082cb_4_212;
		case 17:
			r33 = 18;
			r29 = r33;
			goto label$16082cb_4_212;
		case 18:
			r33 = 19;
			r29 = r33;
			goto label$16082cb_4_212;
		case 19:
			r33 = 20;
			r29 = r33;
			goto label$16082cb_4_212;
		case 20:
			r33 = 21;
			r29 = r33;
			goto label$16082cb_4_212;
		case 21:
			r33 = 22;
			r29 = r33;
			goto label$16082cb_4_212;
		case 22:
			r33 = 23;
			r29 = r33;
			goto label$16082cb_4_212;
		case 23:
			r33 = 24;
			r29 = r33;
			goto label$16082cb_4_212;
		case 24:
			r33 = 25;
			r29 = r33;
			goto label$16082cb_4_212;
		case 25:
			r33 = 26;
			r29 = r33;
			goto label$16082cb_4_212;
		case 26:
			r33 = 27;
			r29 = r33;
			goto label$16082cb_4_212;
		case 27:
			r33 = 28;
			r29 = r33;
			goto label$16082cb_4_212;
		case 28:
			r33 = 29;
			r29 = r33;
			goto label$16082cb_4_212;
		case 29:
			r33 = 30;
			r29 = r33;
			goto label$16082cb_4_212;
		case 30:
			r33 = 31;
			r29 = r33;
			goto label$16082cb_4_212;
		case 31:
			r33 = 32;
			r29 = r33;
			goto label$16082cb_4_212;
		case 32:
			r33 = 33;
			r29 = r33;
			goto label$16082cb_4_212;
		case 33:
			r33 = 34;
			r29 = r33;
			goto label$16082cb_4_212;
		case 34:
			r33 = 35;
			r29 = r33;
			goto label$16082cb_4_212;
		case 35:
			r33 = 36;
			r29 = r33;
			goto label$16082cb_4_212;
		case 36:
			r33 = 37;
			r29 = r33;
	}
	label$16082cb_4_212:
	hl_kinc_vertexstructure_add(r7,r32,r29);
	goto label$16082cb_4_77;
	label$16082cb_4_214:
	goto label$16082cb_4_49;
	label$16082cb_4_215:
	r7 = r0->_pipeline;
	if( r19 == NULL ) hl_null_access();
	r17 = 0;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_222;
	r8 = NULL;
	goto label$16082cb_4_225;
	label$16082cb_4_222:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r8 = (vbyte*)hl_dyn_castp(&r25,&t$_dyn,&t$_bytes);
	label$16082cb_4_225:
	r20 = 1;
	if( r20 >= r5 ) goto label$16082cb_4_236;
	r17 = 1;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_232;
	r32 = NULL;
	goto label$16082cb_4_235;
	label$16082cb_4_232:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r32 = (vbyte*)hl_dyn_castp(&r25,&t$_dyn,&t$_bytes);
	label$16082cb_4_235:
	goto label$16082cb_4_237;
	label$16082cb_4_236:
	r32 = NULL;
	label$16082cb_4_237:
	r20 = 2;
	if( r20 >= r5 ) goto label$16082cb_4_248;
	r17 = 2;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_244;
	r34 = NULL;
	goto label$16082cb_4_247;
	label$16082cb_4_244:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r34 = (vbyte*)hl_dyn_castp(&r25,&t$_dyn,&t$_bytes);
	label$16082cb_4_247:
	goto label$16082cb_4_249;
	label$16082cb_4_248:
	r34 = NULL;
	label$16082cb_4_249:
	r20 = 3;
	if( r20 >= r5 ) goto label$16082cb_4_260;
	r17 = 3;
	r20 = r19->length;
	if( ((unsigned)r17) < ((unsigned)r20) ) goto label$16082cb_4_256;
	r35 = NULL;
	goto label$16082cb_4_259;
	label$16082cb_4_256:
	r15 = r19->array;
	r25 = ((vdynamic**)(r15 + 1))[r17];
	r35 = (vbyte*)hl_dyn_castp(&r25,&t$_dyn,&t$_bytes);
	label$16082cb_4_259:
	goto label$16082cb_4_261;
	label$16082cb_4_260:
	r35 = NULL;
	label$16082cb_4_261:
	hl_kinc_pipeline_compile(r7,r8,r32,r34,r35);
	return;
}

int kha_graphics4_PipelineState_getDepthBufferBits(int r0) {
	int r1;
	switch(r0) {
		default:
			goto label$16082cb_5_14;
		case 0:
			r1 = 0;
			return r1;
		case 1:
			r1 = 24;
			return r1;
		case 2:
			r1 = 24;
			return r1;
		case 3:
			r1 = 24;
			return r1;
		case 4:
			r1 = 32;
			return r1;
		case 5:
			r1 = 16;
			return r1;
	}
	label$16082cb_5_14:
	r1 = 0;
	return r1;
}

int kha_graphics4_PipelineState_getStencilBufferBits(int r0) {
	int r1;
	switch(r0) {
		default:
			goto label$16082cb_6_14;
		case 0:
			r1 = 0;
			return r1;
		case 1:
			r1 = 0;
			return r1;
		case 2:
			r1 = 8;
			return r1;
		case 3:
			r1 = 8;
			return r1;
		case 4:
			r1 = 8;
			return r1;
		case 5:
			r1 = 0;
			return r1;
	}
	label$16082cb_6_14:
	r1 = 0;
	return r1;
}

void kha_graphics4_PipelineState_compile(kha__graphics4__PipelineState r0) {
	hl__types__ArrayObj r22;
	venum *r3;
	bool r19, r25, r28, r29, r30, r42;
	hl__types__ArrayBytes_Int r31;
	vdynamic *r26;
	kha__graphics4__VertexStructure r43, r44, r45, r46;
	varray *r27;
	vbyte *r6, *r33;
	int r1, r4, r5, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r20, r21, r23, r24, r32, r34, r35, r36, r37, r38, r39, r40, r41;
	r1 = 0;
	r3 = r0->stencilReferenceValue;
	if( r3 == NULL ) hl_null_access();
	r4 = HL__ENUM_INDEX__(r3);
	r5 = 1;
	if( r4 != r5 ) goto label$16082cb_7_8;
	r4 = ((kha_graphics4_StencilValue_Static*)r3)->p0;
	r1 = r4;
	label$16082cb_7_8:
	r6 = r0->_pipeline;
	r4 = r0->cullMode;
	r5 = r0->depthMode;
	r7 = r0->stencilFrontMode;
	r8 = r0->stencilFrontBothPass;
	r9 = r0->stencilFrontDepthFail;
	r10 = r0->stencilFrontFail;
	r11 = r0->stencilBackMode;
	r12 = r0->stencilBackBothPass;
	r13 = r0->stencilBackDepthFail;
	r14 = r0->stencilBackFail;
	r15 = r0->blendSource;
	r15 = kha_graphics4_PipelineState_getBlendFunc(r15);
	r16 = r0->blendDestination;
	r16 = kha_graphics4_PipelineState_getBlendFunc(r16);
	r17 = r0->alphaBlendSource;
	r17 = kha_graphics4_PipelineState_getBlendFunc(r17);
	r18 = r0->alphaBlendDestination;
	r18 = kha_graphics4_PipelineState_getBlendFunc(r18);
	r19 = r0->depthWrite;
	r20 = r0->stencilReadMask;
	r21 = r0->stencilWriteMask;
	r22 = r0->colorWriteMasksRed;
	if( r22 == NULL ) hl_null_access();
	r23 = 0;
	r24 = r22->length;
	if( ((unsigned)r23) < ((unsigned)r24) ) goto label$16082cb_7_37;
	r25 = false;
	goto label$16082cb_7_40;
	label$16082cb_7_37:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r23];
	r25 = (bool)hl_dyn_casti(&r26,&t$_dyn,&t$_bool);
	label$16082cb_7_40:
	r22 = r0->colorWriteMasksGreen;
	if( r22 == NULL ) hl_null_access();
	r23 = 0;
	r24 = r22->length;
	if( ((unsigned)r23) < ((unsigned)r24) ) goto label$16082cb_7_47;
	r28 = false;
	goto label$16082cb_7_50;
	label$16082cb_7_47:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r23];
	r28 = (bool)hl_dyn_casti(&r26,&t$_dyn,&t$_bool);
	label$16082cb_7_50:
	r22 = r0->colorWriteMasksBlue;
	if( r22 == NULL ) hl_null_access();
	r23 = 0;
	r24 = r22->length;
	if( ((unsigned)r23) < ((unsigned)r24) ) goto label$16082cb_7_57;
	r29 = false;
	goto label$16082cb_7_60;
	label$16082cb_7_57:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r23];
	r29 = (bool)hl_dyn_casti(&r26,&t$_dyn,&t$_bool);
	label$16082cb_7_60:
	r22 = r0->colorWriteMasksAlpha;
	if( r22 == NULL ) hl_null_access();
	r23 = 0;
	r24 = r22->length;
	if( ((unsigned)r23) < ((unsigned)r24) ) goto label$16082cb_7_67;
	r30 = false;
	goto label$16082cb_7_70;
	label$16082cb_7_67:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r23];
	r30 = (bool)hl_dyn_casti(&r26,&t$_dyn,&t$_bool);
	label$16082cb_7_70:
	r23 = r0->colorAttachmentCount;
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r24 = 0;
	r32 = r31->length;
	if( ((unsigned)r24) < ((unsigned)r32) ) goto label$16082cb_7_78;
	r24 = 0;
	goto label$16082cb_7_82;
	label$16082cb_7_78:
	r33 = r31->bytes;
	r32 = 2;
	r32 = r24 << r32;
	r24 = *(int*)(r33 + r32);
	label$16082cb_7_82:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r32 = 1;
	r34 = r31->length;
	if( ((unsigned)r32) < ((unsigned)r34) ) goto label$16082cb_7_89;
	r32 = 0;
	goto label$16082cb_7_93;
	label$16082cb_7_89:
	r33 = r31->bytes;
	r34 = 2;
	r34 = r32 << r34;
	r32 = *(int*)(r33 + r34);
	label$16082cb_7_93:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r34 = 2;
	r35 = r31->length;
	if( ((unsigned)r34) < ((unsigned)r35) ) goto label$16082cb_7_100;
	r34 = 0;
	goto label$16082cb_7_104;
	label$16082cb_7_100:
	r33 = r31->bytes;
	r35 = 2;
	r35 = r34 << r35;
	r34 = *(int*)(r33 + r35);
	label$16082cb_7_104:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r35 = 3;
	r36 = r31->length;
	if( ((unsigned)r35) < ((unsigned)r36) ) goto label$16082cb_7_111;
	r35 = 0;
	goto label$16082cb_7_115;
	label$16082cb_7_111:
	r33 = r31->bytes;
	r36 = 2;
	r36 = r35 << r36;
	r35 = *(int*)(r33 + r36);
	label$16082cb_7_115:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r36 = 4;
	r37 = r31->length;
	if( ((unsigned)r36) < ((unsigned)r37) ) goto label$16082cb_7_122;
	r36 = 0;
	goto label$16082cb_7_126;
	label$16082cb_7_122:
	r33 = r31->bytes;
	r37 = 2;
	r37 = r36 << r37;
	r36 = *(int*)(r33 + r37);
	label$16082cb_7_126:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r37 = 5;
	r38 = r31->length;
	if( ((unsigned)r37) < ((unsigned)r38) ) goto label$16082cb_7_133;
	r37 = 0;
	goto label$16082cb_7_137;
	label$16082cb_7_133:
	r33 = r31->bytes;
	r38 = 2;
	r38 = r37 << r38;
	r37 = *(int*)(r33 + r38);
	label$16082cb_7_137:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r38 = 6;
	r39 = r31->length;
	if( ((unsigned)r38) < ((unsigned)r39) ) goto label$16082cb_7_144;
	r38 = 0;
	goto label$16082cb_7_148;
	label$16082cb_7_144:
	r33 = r31->bytes;
	r39 = 2;
	r39 = r38 << r39;
	r38 = *(int*)(r33 + r39);
	label$16082cb_7_148:
	r31 = r0->colorAttachments;
	if( r31 == NULL ) hl_null_access();
	r39 = 7;
	r40 = r31->length;
	if( ((unsigned)r39) < ((unsigned)r40) ) goto label$16082cb_7_155;
	r39 = 0;
	goto label$16082cb_7_159;
	label$16082cb_7_155:
	r33 = r31->bytes;
	r40 = 2;
	r40 = r39 << r40;
	r39 = *(int*)(r33 + r40);
	label$16082cb_7_159:
	r40 = r0->depthStencilAttachment;
	r40 = kha_graphics4_PipelineState_getDepthBufferBits(r40);
	r41 = r0->depthStencilAttachment;
	r41 = kha_graphics4_PipelineState_getStencilBufferBits(r41);
	r42 = r0->conservativeRasterization;
	hl_kinc_pipeline_set_states(r6,r4,r5,r7,r8,r9,r10,r11,r12,r13,r14,r15,r16,r17,r18,r19,r1,r20,r21,r25,r28,r29,r30,r23,r24,r32,r34,r35,r36,r37,r38,r39,r40,r41,r42);
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = r22->length;
	r5 = 0;
	if( r5 >= r4 ) goto label$16082cb_7_181;
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = 0;
	r5 = r22->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_7_177;
	r43 = NULL;
	goto label$16082cb_7_180;
	label$16082cb_7_177:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r4];
	r43 = (kha__graphics4__VertexStructure)r26;
	label$16082cb_7_180:
	goto label$16082cb_7_182;
	label$16082cb_7_181:
	r43 = NULL;
	label$16082cb_7_182:
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = r22->length;
	r5 = 1;
	if( r5 >= r4 ) goto label$16082cb_7_198;
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = 1;
	r5 = r22->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_7_194;
	r44 = NULL;
	goto label$16082cb_7_197;
	label$16082cb_7_194:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r4];
	r44 = (kha__graphics4__VertexStructure)r26;
	label$16082cb_7_197:
	goto label$16082cb_7_199;
	label$16082cb_7_198:
	r44 = NULL;
	label$16082cb_7_199:
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = r22->length;
	r5 = 2;
	if( r5 >= r4 ) goto label$16082cb_7_215;
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = 2;
	r5 = r22->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_7_211;
	r45 = NULL;
	goto label$16082cb_7_214;
	label$16082cb_7_211:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r4];
	r45 = (kha__graphics4__VertexStructure)r26;
	label$16082cb_7_214:
	goto label$16082cb_7_216;
	label$16082cb_7_215:
	r45 = NULL;
	label$16082cb_7_216:
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = r22->length;
	r5 = 3;
	if( r5 >= r4 ) goto label$16082cb_7_232;
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = 3;
	r5 = r22->length;
	if( ((unsigned)r4) < ((unsigned)r5) ) goto label$16082cb_7_228;
	r46 = NULL;
	goto label$16082cb_7_231;
	label$16082cb_7_228:
	r27 = r22->array;
	r26 = ((vdynamic**)(r27 + 1))[r4];
	r46 = (kha__graphics4__VertexStructure)r26;
	label$16082cb_7_231:
	goto label$16082cb_7_233;
	label$16082cb_7_232:
	r46 = NULL;
	label$16082cb_7_233:
	r22 = r0->inputLayout;
	if( r22 == NULL ) hl_null_access();
	r4 = r22->length;
	kha_graphics4_PipelineState_linkWithStructures2(r0,r43,r44,r45,r46,r4);
	return;
}

vvirtual* kha_graphics4_PipelineState_getConstantLocation(kha__graphics4__PipelineState r0,String r1) {
	vvirtual *r11;
	kha__korehl__graphics4__ConstantLocation r7;
	int *r6;
	int r4, r10;
	vbyte *r2, *r5, *r8, *r9;
	r2 = r0->_pipeline;
	r4 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r6 = &r4;
	r7 = (kha__korehl__graphics4__ConstantLocation)hl_alloc_obj(&t$kha_korehl_graphics4_ConstantLocation);
	r10 = 0;
	r9 = hl_utf16_to_utf8(r5,r10,r6);
	r8 = hl_kinc_pipeline_get_constantlocation(r2,r9);
	kha_korehl_graphics4_ConstantLocation_new(r7,r8);
	if( r7 ) goto label$16082cb_8_13;
	r11 = NULL;
	goto label$16082cb_8_17;
	label$16082cb_8_13:
	r11 = r7->f$1;
	if( r11 ) goto label$16082cb_8_17;
	r11 = hl_to_virtual(&t$vrt_b840ca7,(vdynamic*)r7);
	r7->f$1 = r11;
	label$16082cb_8_17:
	return r11;
}

vvirtual* kha_graphics4_PipelineState_getTextureUnit(kha__graphics4__PipelineState r0,String r1) {
	vvirtual *r11;
	kha__korehl__graphics4__TextureUnit r7;
	int *r6;
	int r4, r10;
	vbyte *r2, *r5, *r8, *r9;
	r2 = r0->_pipeline;
	r4 = 0;
	if( r1 == NULL ) hl_null_access();
	r5 = r1->bytes;
	r6 = &r4;
	r7 = (kha__korehl__graphics4__TextureUnit)hl_alloc_obj(&t$kha_korehl_graphics4_TextureUnit);
	r10 = 0;
	r9 = hl_utf16_to_utf8(r5,r10,r6);
	r8 = hl_kinc_pipeline_get_textureunit(r2,r9);
	kha_korehl_graphics4_TextureUnit_new(r7,r8);
	if( r7 ) goto label$16082cb_9_13;
	r11 = NULL;
	goto label$16082cb_9_17;
	label$16082cb_9_13:
	r11 = r7->f$1;
	if( r11 ) goto label$16082cb_9_17;
	r11 = hl_to_virtual(&t$vrt_b840ca7,(vdynamic*)r7);
	r7->f$1 = r11;
	label$16082cb_9_17:
	return r11;
}

int kha_graphics4_PipelineState_getBlendFunc(int r0) {
	int r1;
	switch(r0) {
		default:
			r1 = 0;
			return r1;
		case 0:
		case 1:
			r1 = 0;
			return r1;
		case 2:
			r1 = 1;
			return r1;
		case 3:
			r1 = 2;
			return r1;
		case 4:
			r1 = 3;
			return r1;
		case 5:
			r1 = 4;
			return r1;
		case 6:
			r1 = 5;
			return r1;
		case 7:
			r1 = 6;
			return r1;
		case 8:
			r1 = 7;
			return r1;
		case 9:
			r1 = 8;
			return r1;
		case 10:
			r1 = 9;
			return r1;
	}
}

void kha_graphics4_PipelineState_set(kha__graphics4__PipelineState r0) {
	vbyte *r2;
	r2 = r0->_pipeline;
	hl_kinc_pipeline_set(r2);
	return;
}

