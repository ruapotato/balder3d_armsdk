﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <kha/graphics4/ImageShaderPainter.h>
extern kha__graphics4__$ImageShaderPainter g$a0efbdf;
#include <kha/graphics4/PerFramebufferPipelineCache.h>
kha__graphics4__VertexStructure kha_graphics4_Graphics2_createImageVertexStructure(void);
kha__graphics4__PipelineState kha_graphics4_Graphics2_createImagePipeline(kha__graphics4__VertexStructure);
extern hl_type t$kha_graphics4_PerFramebufferPipelineCache;
void kha_graphics4_PerFramebufferPipelineCache_new(kha__graphics4__PerFramebufferPipelineCache,kha__graphics4__PipelineState,bool);
extern hl_type t$vrt_39c470b;
extern hl_type t$kha_graphics4_VertexBuffer;
void kha_graphics4_VertexBuffer_new(kha__graphics4__VertexBuffer,int,kha__graphics4__VertexStructure,int,int*,bool*);
kha__arrays__ByteArrayPrivate kha_graphics4_VertexBuffer_lock(kha__graphics4__VertexBuffer,vdynamic*,vdynamic*);
extern hl_type t$kha_graphics4_IndexBuffer;
void kha_graphics4_IndexBuffer_new(kha__graphics4__IndexBuffer,int,int,bool*);
kha__arrays__ByteArrayPrivate kha_graphics4_IndexBuffer_lock(kha__graphics4__IndexBuffer,vdynamic*,vdynamic*);
#include <hl/natives.h>
void kha_graphics4_IndexBuffer_unlock(kha__graphics4__IndexBuffer,vdynamic*);
extern hl_type t$_i32;
void kha_graphics4_VertexBuffer_unlock(kha__graphics4__VertexBuffer,vdynamic*);
extern hl_type t$fun_c881552;
extern hl_type t$fun_c80ec77;
extern hl_type t$fun_a561c62;
extern hl_type t$fun_46c6b6e;
extern hl_type t$fun_04e2896;
extern hl_type t$fun_4ad9aaa;
extern hl_type t$fun_896f717;
extern hl_type t$fun_8305be0;

vvirtual* kha_graphics4_ImageShaderPainter_set_pipeline(kha__graphics4__ImageShaderPainter r0,vvirtual* r1) {
	vvirtual *r2;
	kha__graphics4__$ImageShaderPainter r3;
	if( !r1 ) goto label$b78fc65_1_3;
	r2 = r1;
	goto label$b78fc65_1_5;
	label$b78fc65_1_3:
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2 = r3->standardImagePipeline;
	label$b78fc65_1_5:
	r0->myPipeline = r2;
	r2 = r0->myPipeline;
	return r2;
}

void kha_graphics4_ImageShaderPainter_setProjection(kha__graphics4__ImageShaderPainter r0,kha__math__FastMatrix4 r1) {
	r0->projectionMatrix = r1;
	return;
}

void kha_graphics4_ImageShaderPainter_initShaders() {
	kha__graphics4__PipelineState r4;
	vvirtual *r3;
	bool r6;
	kha__graphics4__$ImageShaderPainter r2;
	kha__graphics4__PerFramebufferPipelineCache r5;
	kha__graphics4__VertexStructure r1;
	r2 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r1 = r2->structure;
	if( r1 ) goto label$b78fc65_3_6;
	r1 = kha_graphics4_Graphics2_createImageVertexStructure();
	r2 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2->structure = r1;
	label$b78fc65_3_6:
	r2 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3 = r2->standardImagePipeline;
	if( r3 ) goto label$b78fc65_3_24;
	r2 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r1 = r2->structure;
	r4 = kha_graphics4_Graphics2_createImagePipeline(r1);
	r5 = (kha__graphics4__PerFramebufferPipelineCache)hl_alloc_obj(&t$kha_graphics4_PerFramebufferPipelineCache);
	r6 = true;
	kha_graphics4_PerFramebufferPipelineCache_new(r5,r4,r6);
	if( r5 ) goto label$b78fc65_3_18;
	r3 = NULL;
	goto label$b78fc65_3_22;
	label$b78fc65_3_18:
	r3 = r5->f$1;
	if( r3 ) goto label$b78fc65_3_22;
	r3 = hl_to_virtual(&t$vrt_39c470b,(vdynamic*)r5);
	r5->f$1 = r3;
	label$b78fc65_3_22:
	r2 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2->standardImagePipeline = r3;
	label$b78fc65_3_24:
	return;
}

void kha_graphics4_ImageShaderPainter_initBuffers(kha__graphics4__ImageShaderPainter r0) {
	bool *r8;
	int64 r18;
	kha__graphics4__VertexBuffer r2;
	kha__graphics4__IndexBuffer r12;
	kha__arrays__ByteArrayPrivate r9;
	kha__graphics4__$ImageShaderPainter r3;
	vdynamic *r10, *r11;
	int *r7;
	vbyte *r15;
	kha__graphics4__VertexStructure r5;
	int r4, r6, r13, r14, r16, r17;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2 = r3->rectVertexBuffer;
	if( r2 ) goto label$b78fc65_4_179;
	r2 = (kha__graphics4__VertexBuffer)hl_alloc_obj(&t$kha_graphics4_VertexBuffer);
	r4 = 6000;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5 = r3->structure;
	r6 = 1;
	r7 = NULL;
	r8 = NULL;
	kha_graphics4_VertexBuffer_new(r2,r4,r5,r6,r7,r8);
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3->rectVertexBuffer = r2;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2 = r3->rectVertexBuffer;
	if( r2 == NULL ) hl_null_access();
	r10 = NULL;
	r11 = NULL;
	r9 = kha_graphics4_VertexBuffer_lock(r2,r10,r11);
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3->rectVertices = r9;
	r12 = (kha__graphics4__IndexBuffer)hl_alloc_obj(&t$kha_graphics4_IndexBuffer);
	r4 = 9000;
	r6 = 0;
	r8 = NULL;
	kha_graphics4_IndexBuffer_new(r12,r4,r6,r8);
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3->indexBuffer = r12;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r12 = r3->indexBuffer;
	if( r12 == NULL ) hl_null_access();
	r10 = NULL;
	r11 = NULL;
	r9 = kha_graphics4_IndexBuffer_lock(r12,r10,r11);
	r4 = 0;
	label$b78fc65_4_35:
	r13 = 1500;
	if( r4 >= r13 ) goto label$b78fc65_4_174;
	r6 = r4;
	++r4;
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	if( r9 == NULL ) hl_null_access();
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	r14 = 1;
	r13 = r13 + r14;
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r17 = 1;
	r16 = r16 + r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	r14 = 2;
	r13 = r13 + r14;
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r17 = 2;
	r16 = r16 + r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	r14 = 3;
	r13 = r13 + r14;
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	r14 = 4;
	r13 = r13 + r14;
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r17 = 2;
	r16 = r16 + r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	r14 = 3;
	r13 = r6 * r14;
	r14 = 2;
	r13 = r13 * r14;
	r14 = 5;
	r13 = r13 + r14;
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r17 = 4;
	r16 = r6 * r17;
	r17 = 3;
	r16 = r16 + r17;
	r18 = (int)r16;
	hl_kinc_bytearray_setuint32(r15,r14,r18);
	r15 = r9->self;
	r14 = r9->byteArrayOffset;
	r17 = 4;
	r16 = r13 * r17;
	r14 = r14 + r16;
	r18 = hl_kinc_bytearray_getuint32(r15,r14);
	goto label$b78fc65_4_35;
	label$b78fc65_4_174:
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r12 = r3->indexBuffer;
	if( r12 == NULL ) hl_null_access();
	r10 = NULL;
	kha_graphics4_IndexBuffer_unlock(r12,r10);
	label$b78fc65_4_179:
	return;
}

void kha_graphics4_ImageShaderPainter_drawBuffer(kha__graphics4__ImageShaderPainter r0,bool r1) {
	kha__Image r15;
	kha__graphics4__PipelineState r12;
	vvirtual *r9, *r11, *r14;
	kha__math__FastMatrix4 r20;
	bool r17;
	hl__types__ArrayBytes_Int r10;
	kha__graphics4__VertexBuffer r6;
	kha__arrays__ByteArrayPrivate r23;
	kha__graphics4__IndexBuffer r13;
	kha__graphics4__InternalPipeline r8;
	kha__graphics4__$ImageShaderPainter r4;
	int *r21, *r22;
	vdynamic *r7, *r24;
	int r3, r5, r16, r18, r19;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3 = r4->bufferIndex;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5 = r4->bufferStart;
	r3 = r3 - r5;
	r5 = 0;
	if( r3 != r5 ) goto label$b78fc65_5_8;
	return;
	label$b78fc65_5_8:
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r6 = r4->rectVertexBuffer;
	if( r6 == NULL ) hl_null_access();
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3 = r4->bufferIndex;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5 = r4->bufferStart;
	r3 = r3 - r5;
	r5 = 4;
	r3 = r3 * r5;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r3;
	kha_graphics4_VertexBuffer_unlock(r6,r7);
	r9 = r0->myPipeline;
	if( r9 == NULL ) hl_null_access();
	r10 = NULL;
	r3 = 3;
	if( hl_vfields(r9)[0] ) r8 = ((kha__graphics4__InternalPipeline (*)(vdynamic*,hl__types__ArrayBytes_Int,int))hl_vfields(r9)[0])(r9->value,r10,r3); else {
		void *args[] = {r10,&r3};
		r8 = (kha__graphics4__InternalPipeline)hl_dyn_call_obj(r9->value,&t$fun_c881552,5144726/*get*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	if( r8 == NULL ) hl_null_access();
	r12 = r8->pipeline;
	if( hl_vfields(r11)[8] ) ((void (*)(vdynamic*,kha__graphics4__PipelineState))hl_vfields(r11)[8])(r11->value,r12); else {
		void *args[] = {r12};
		hl_dyn_call_obj(r11->value,&t$fun_c80ec77,467961459/*setPipeline*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r6 = r4->rectVertexBuffer;
	if( hl_vfields(r11)[2] ) ((void (*)(vdynamic*,kha__graphics4__VertexBuffer))hl_vfields(r11)[2])(r11->value,r6); else {
		void *args[] = {r6};
		hl_dyn_call_obj(r11->value,&t$fun_a561c62,-278953801/*setVertexBuffer*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r13 = r4->indexBuffer;
	if( hl_vfields(r11)[12] ) ((void (*)(vdynamic*,kha__graphics4__IndexBuffer))hl_vfields(r11)[12])(r11->value,r13); else {
		void *args[] = {r13};
		hl_dyn_call_obj(r11->value,&t$fun_46c6b6e,-43737183/*setIndexBuffer*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r14 = r8->textureLocation;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r15 = r4->lastTexture;
	if( hl_vfields(r11)[7] ) ((void (*)(vdynamic*,vvirtual*,kha__Image))hl_vfields(r11)[7])(r11->value,r14,r15); else {
		void *args[] = {r14,r15};
		hl_dyn_call_obj(r11->value,&t$fun_04e2896,-239080103/*setTexture*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r14 = r8->textureLocation;
	r3 = 2;
	r5 = 2;
	r17 = r0->bilinear;
	if( !r17 ) goto label$b78fc65_5_55;
	r16 = 1;
	goto label$b78fc65_5_56;
	label$b78fc65_5_55:
	r16 = 0;
	label$b78fc65_5_56:
	r17 = r0->bilinear;
	if( !r17 ) goto label$b78fc65_5_60;
	r18 = 1;
	goto label$b78fc65_5_61;
	label$b78fc65_5_60:
	r18 = 0;
	label$b78fc65_5_61:
	r17 = r0->bilinearMipmaps;
	if( !r17 ) goto label$b78fc65_5_65;
	r19 = 2;
	goto label$b78fc65_5_66;
	label$b78fc65_5_65:
	r19 = 0;
	label$b78fc65_5_66:
	if( hl_vfields(r11)[3] ) ((void (*)(vdynamic*,vvirtual*,int,int,int,int,int))hl_vfields(r11)[3])(r11->value,r14,r3,r5,r16,r18,r19); else {
		void *args[] = {r14,&r3,&r5,&r16,&r18,&r19};
		hl_dyn_call_obj(r11->value,&t$fun_4ad9aaa,357382632/*setTextureParameters*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r14 = r8->projectionLocation;
	r20 = r0->projectionMatrix;
	if( hl_vfields(r11)[10] ) ((void (*)(vdynamic*,vvirtual*,kha__math__FastMatrix4))hl_vfields(r11)[10])(r11->value,r14,r20); else {
		void *args[] = {r14,r20};
		hl_dyn_call_obj(r11->value,&t$fun_896f717,460303235/*setMatrix*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3 = r4->bufferStart;
	r5 = 2;
	r3 = r3 * r5;
	r5 = 3;
	r3 = r3 * r5;
	r21 = &r3;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5 = r4->bufferIndex;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r16 = r4->bufferStart;
	r5 = r5 - r16;
	r16 = 2;
	r5 = r5 * r16;
	r16 = 3;
	r5 = r5 * r16;
	r22 = &r5;
	if( hl_vfields(r11)[26] ) ((void (*)(vdynamic*,int*,int*))hl_vfields(r11)[26])(r11->value,r21,r22); else {
		void *args[] = {r21,r22};
		hl_dyn_call_obj(r11->value,&t$fun_8305be0,-519327652/*drawIndexedVertices*/,args,NULL);
	}
	r11 = r0->g;
	if( r11 == NULL ) hl_null_access();
	r14 = r8->textureLocation;
	r15 = NULL;
	if( hl_vfields(r11)[7] ) ((void (*)(vdynamic*,vvirtual*,kha__Image))hl_vfields(r11)[7])(r11->value,r14,r15); else {
		void *args[] = {r14,r15};
		hl_dyn_call_obj(r11->value,&t$fun_04e2896,-239080103/*setTexture*/,args,NULL);
	}
	if( r1 ) goto label$b78fc65_5_109;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r16 = r4->bufferStart;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r18 = r4->bufferIndex;
	r16 = r16 + r18;
	r18 = 1;
	r16 = r16 + r18;
	r18 = 4;
	r16 = r16 * r18;
	r18 = 1500;
	if( r16 < r18 ) goto label$b78fc65_5_125;
	label$b78fc65_5_109:
	r16 = 0;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r4->bufferStart = r16;
	r16 = 0;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r4->bufferIndex = r16;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r6 = r4->rectVertexBuffer;
	if( r6 == NULL ) hl_null_access();
	r16 = 0;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r16;
	r24 = NULL;
	r23 = kha_graphics4_VertexBuffer_lock(r6,r7,r24);
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r4->rectVertices = r23;
	goto label$b78fc65_5_141;
	label$b78fc65_5_125:
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r16 = r4->bufferIndex;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r4->bufferStart = r16;
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r6 = r4->rectVertexBuffer;
	if( r6 == NULL ) hl_null_access();
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r16 = r4->bufferStart;
	r18 = 4;
	r16 = r16 * r18;
	r7 = hl_alloc_dynamic(&t$_i32);
	r7->v.i = r16;
	r24 = NULL;
	r23 = kha_graphics4_VertexBuffer_lock(r6,r7,r24);
	r4 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r4->rectVertices = r23;
	label$b78fc65_5_141:
	return;
}

void kha_graphics4_ImageShaderPainter_setBilinearFilter(kha__graphics4__ImageShaderPainter r0,bool r1) {
	kha__Image r4;
	bool r3;
	kha__graphics4__$ImageShaderPainter r5;
	r3 = false;
	kha_graphics4_ImageShaderPainter_drawBuffer(r0,r3);
	r4 = NULL;
	r5 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5->lastTexture = r4;
	r0->bilinear = r1;
	return;
}

void kha_graphics4_ImageShaderPainter_end(kha__graphics4__ImageShaderPainter r0) {
	kha__Image r6;
	bool r5;
	kha__graphics4__$ImageShaderPainter r3;
	int r2, r4;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2 = r3->bufferIndex;
	r4 = 0;
	if( r4 >= r2 ) goto label$b78fc65_7_6;
	r5 = true;
	kha_graphics4_ImageShaderPainter_drawBuffer(r0,r5);
	label$b78fc65_7_6:
	r6 = NULL;
	r3 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r3->lastTexture = r6;
	return;
}

void kha_graphics4_ImageShaderPainter_new(kha__graphics4__ImageShaderPainter r0,vvirtual* r1) {
	vvirtual *r2;
	bool r3;
	kha__graphics4__$ImageShaderPainter r5;
	int r4;
	r2 = NULL;
	r0->myPipeline = r2;
	r3 = false;
	r0->bilinearMipmaps = r3;
	r3 = false;
	r0->bilinear = r3;
	r0->g = r1;
	r4 = 0;
	r5 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5->bufferStart = r4;
	r4 = 0;
	r5 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r5->bufferIndex = r4;
	kha_graphics4_ImageShaderPainter_initShaders();
	r5 = (kha__graphics4__$ImageShaderPainter)g$a0efbdf;
	r2 = r5->standardImagePipeline;
	r0->myPipeline = r2;
	kha_graphics4_ImageShaderPainter_initBuffers(r0);
	return;
}

