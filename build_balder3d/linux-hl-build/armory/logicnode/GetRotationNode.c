﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/logicnode/GetRotationNode.h>
void armory_logicnode_LogicNode_new(armory__logicnode__LogicNode,armory__logicnode__LogicTree);
#include <armory/logicnode/LogicNodeLink.h>
#include <iron/object/Object.h>
#include <iron/math/Quat.h>
#include <iron/math/Mat4.h>
#include <iron/object/Transform.h>
#include <kha/math/FastMatrix4.h>
#include <iron/math/Vec4.h>
extern hl_type t$iron_object_Object;
extern hl_type t$_dyn;
#include <hl/natives.h>
extern hl_type t$iron_math_Quat;
void iron_math_Quat_new(iron__math__Quat,float*,float*,float*,float*);
extern iron__math__$Mat4 g$_iron_math_Mat4;

void armory_logicnode_GetRotationNode_new(armory__logicnode__GetRotationNode r0,armory__logicnode__LogicTree r1) {
	armory_logicnode_LogicNode_new(((armory__logicnode__LogicNode)r0),r1);
	return;
}

vdynamic* armory_logicnode_GetRotationNode_get(armory__logicnode__GetRotationNode r0,int r1) {
	String r11;
	iron__math__Quat r19;
	armory__logicnode__LogicNodeLink r5;
	hl__types__ArrayObj r2;
	kha__math__FastMatrix4 r27, r35, r66;
	iron__math__Vec4 r29, r31, r34;
	armory__logicnode__LogicNode r9;
	iron__object__Transform r25;
	iron__math__$Mat4 r30;
	iron__math__Mat4 r24, r28;
	float r15, r16, r17, r18, r26, r32, r33, r36, r37, r38, r39, r40, r41, r42, r43, r44, r45, r46, r47, r48, r49, r50, r51, r52, r53, r54, r55, r56, r57, r58, r59, r60, r61, r62, r63, r64, r68, r69, r70, r71, r72, r73, r74, r75;
	double r14, r65, r67, r76, r77;
	iron__object__Object r10;
	vdynamic *r6;
	float *r20, *r21, *r22, *r23;
	vbyte *r12, *r13;
	varray *r7;
	int r3, r4;
	r2 = r0->inputs;
	if( r2 == NULL ) hl_null_access();
	r3 = 0;
	r4 = r2->length;
	if( ((unsigned)r3) < ((unsigned)r4) ) goto label$6dca5a9_2_7;
	r5 = NULL;
	goto label$6dca5a9_2_10;
	label$6dca5a9_2_7:
	r7 = r2->array;
	r6 = ((vdynamic**)(r7 + 1))[r3];
	r5 = (armory__logicnode__LogicNodeLink)r6;
	label$6dca5a9_2_10:
	if( r5 == NULL ) hl_null_access();
	r9 = r5->fromNode;
	if( r9 == NULL ) hl_null_access();
	r3 = r5->fromIndex;
	r6 = ((vdynamic* (*)(armory__logicnode__LogicNode,int))r9->$type->vobj_proto[1])(r9,r3);
	r10 = (iron__object__Object)hl_dyn_castp(&r6,&t$_dyn,&t$iron_object_Object);
	if( r10 ) goto label$6dca5a9_2_19;
	r6 = NULL;
	return r6;
	label$6dca5a9_2_19:
	r11 = r0->property0;
	if( !r11 ) goto label$6dca5a9_2_29;
	r3 = r11->length;
	r4 = 6;
	if( r3 != r4 ) goto label$6dca5a9_2_29;
	r12 = r11->bytes;
	r13 = (vbyte*)USTR("Global");
	r3 = hl_string_compare(r12,r13,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6dca5a9_2_39;
	label$6dca5a9_2_29:
	if( !r11 ) goto label$6dca5a9_2_38;
	r3 = r11->length;
	r4 = 5;
	if( r3 != r4 ) goto label$6dca5a9_2_38;
	r12 = r11->bytes;
	r13 = (vbyte*)USTR("Local");
	r3 = hl_string_compare(r12,r13,r3);
	r4 = 0;
	if( r3 == r4 ) goto label$6dca5a9_2_554;
	label$6dca5a9_2_38:
	goto label$6dca5a9_2_559;
	label$6dca5a9_2_39:
	r14 = 0.;
	r15 = (float)r14;
	r14 = 0.;
	r16 = (float)r14;
	r14 = 0.;
	r17 = (float)r14;
	r14 = 1.;
	r18 = (float)r14;
	r19 = (iron__math__Quat)hl_alloc_obj(&t$iron_math_Quat);
	r20 = NULL;
	r21 = NULL;
	r22 = NULL;
	r23 = NULL;
	iron_math_Quat_new(r19,r20,r21,r22,r23);
	if( r10 == NULL ) hl_null_access();
	r25 = r10->transform;
	if( r25 == NULL ) hl_null_access();
	r24 = r25->world;
	if( r24 == NULL ) hl_null_access();
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_30;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_31;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_32;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r29 = r30->helpVec;
	if( r29 == NULL ) hl_null_access();
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_00;
	r29->x = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_01;
	r29->y = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_02;
	r29->z = r26;
	r14 = 1.;
	r26 = (float)r14;
	r29->w = r26;
	r26 = r29->x;
	r32 = r29->x;
	r26 = r26 * r32;
	r32 = r29->y;
	r33 = r29->y;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r32 = r29->z;
	r33 = r29->z;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r14 = (double)r26;
	r14 = hl_math_sqrt(r14);
	r26 = (float)r14;
	r15 = r26;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r31 = r30->helpVec;
	if( r31 == NULL ) hl_null_access();
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_10;
	r31->x = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_11;
	r31->y = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_12;
	r31->z = r26;
	r14 = 1.;
	r26 = (float)r14;
	r31->w = r26;
	r26 = r31->x;
	r32 = r31->x;
	r26 = r26 * r32;
	r32 = r31->y;
	r33 = r31->y;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r32 = r31->z;
	r33 = r31->z;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r14 = (double)r26;
	r14 = hl_math_sqrt(r14);
	r26 = (float)r14;
	r16 = r26;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r34 = r30->helpVec;
	if( r34 == NULL ) hl_null_access();
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_20;
	r34->x = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_21;
	r34->y = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_22;
	r34->z = r26;
	r14 = 1.;
	r26 = (float)r14;
	r34->w = r26;
	r26 = r34->x;
	r32 = r34->x;
	r26 = r26 * r32;
	r32 = r34->y;
	r33 = r34->y;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r32 = r34->z;
	r33 = r34->z;
	r32 = r32 * r33;
	r26 = r26 + r32;
	r14 = (double)r26;
	r14 = hl_math_sqrt(r14);
	r26 = (float)r14;
	r17 = r26;
	r27 = r24->self;
	if( r27 == NULL ) hl_null_access();
	r26 = r27->_12;
	r32 = r27->_22;
	r33 = r27->_32;
	r36 = r27->_13;
	r37 = r27->_23;
	r38 = r27->_33;
	r39 = r27->_11;
	r40 = r32 * r38;
	r41 = r33 * r37;
	r40 = r40 - r41;
	r39 = r39 * r40;
	r40 = r27->_21;
	r41 = r26 * r38;
	r42 = r33 * r36;
	r41 = r41 - r42;
	r40 = r40 * r41;
	r39 = r39 - r40;
	r40 = r27->_31;
	r41 = r26 * r37;
	r42 = r32 * r36;
	r41 = r41 - r42;
	r40 = r40 * r41;
	r39 = r39 + r40;
	r40 = r27->_12;
	r41 = r27->_22;
	r42 = r27->_32;
	r43 = r27->_13;
	r44 = r27->_23;
	r45 = r27->_33;
	r46 = r27->_10;
	r47 = r41 * r45;
	r48 = r42 * r44;
	r47 = r47 - r48;
	r46 = r46 * r47;
	r47 = r27->_20;
	r48 = r40 * r45;
	r49 = r42 * r43;
	r48 = r48 - r49;
	r47 = r47 * r48;
	r46 = r46 - r47;
	r47 = r27->_30;
	r48 = r40 * r44;
	r49 = r41 * r43;
	r48 = r48 - r49;
	r47 = r47 * r48;
	r46 = r46 + r47;
	r47 = r27->_11;
	r48 = r27->_21;
	r49 = r27->_31;
	r50 = r27->_13;
	r51 = r27->_23;
	r52 = r27->_33;
	r53 = r27->_10;
	r54 = r48 * r52;
	r55 = r49 * r51;
	r54 = r54 - r55;
	r53 = r53 * r54;
	r54 = r27->_20;
	r55 = r47 * r52;
	r56 = r49 * r50;
	r55 = r55 - r56;
	r54 = r54 * r55;
	r53 = r53 - r54;
	r54 = r27->_30;
	r55 = r47 * r51;
	r56 = r48 * r50;
	r55 = r55 - r56;
	r54 = r54 * r55;
	r53 = r53 + r54;
	r54 = r27->_11;
	r55 = r27->_21;
	r56 = r27->_31;
	r57 = r27->_12;
	r58 = r27->_22;
	r59 = r27->_32;
	r60 = r27->_10;
	r61 = r55 * r59;
	r62 = r56 * r58;
	r61 = r61 - r62;
	r60 = r60 * r61;
	r61 = r27->_20;
	r62 = r54 * r59;
	r63 = r56 * r57;
	r62 = r62 - r63;
	r61 = r61 * r62;
	r60 = r60 - r61;
	r61 = r27->_30;
	r62 = r54 * r58;
	r63 = r55 * r57;
	r62 = r62 - r63;
	r61 = r61 * r62;
	r60 = r60 + r61;
	r61 = r27->_00;
	r61 = r61 * r39;
	r62 = r27->_01;
	r62 = r62 * r46;
	r61 = r61 - r62;
	r62 = r27->_02;
	r62 = r62 * r53;
	r61 = r61 + r62;
	r62 = r27->_03;
	r62 = r62 * r60;
	r61 = r61 - r62;
	r14 = (double)r61;
	r65 = 0.;
	if( !(r14 < r65) ) goto label$6dca5a9_2_276;
	r61 = -r15;
	r15 = r61;
	label$6dca5a9_2_276:
	r14 = 1.;
	r65 = (double)r15;
	r14 = r14 / r65;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_00;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_00 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_01;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_01 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_02;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_02 = r61;
	r65 = 1.;
	r67 = (double)r16;
	r65 = r65 / r67;
	r14 = r65;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_10;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_10 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_11;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_11 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_12;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_12 = r61;
	r65 = 1.;
	r67 = (double)r17;
	r65 = r65 / r67;
	r14 = r65;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_20;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_20 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_21;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_21 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r66 = r24->self;
	if( r66 == NULL ) hl_null_access();
	r61 = r66->_22;
	r65 = (double)r61;
	r65 = r65 * r14;
	r61 = (float)r65;
	r35->_22 = r61;
	r30 = (iron__math__$Mat4)g$_iron_math_Mat4;
	r28 = r30->helpMat;
	if( r28 == NULL ) hl_null_access();
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r61 = r35->_00;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r62 = r35->_10;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r63 = r35->_20;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r64 = r35->_01;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r68 = r35->_11;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r69 = r35->_21;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r70 = r35->_02;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r71 = r35->_12;
	r35 = r28->self;
	if( r35 == NULL ) hl_null_access();
	r72 = r35->_22;
	r73 = r61 + r68;
	r73 = r73 + r72;
	r65 = 0.;
	r3 = 0;
	r75 = (float)r3;
	if( !(r75 < r73) ) goto label$6dca5a9_2_458;
	r67 = 0.5;
	r76 = (double)r73;
	r77 = 1.;
	r76 = r76 + r77;
	r76 = hl_math_sqrt(r76);
	r67 = r67 / r76;
	r65 = r67;
	r67 = 0.25;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->w = r74;
	r74 = r71 - r69;
	r67 = (double)r74;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->x = r74;
	r74 = r63 - r70;
	r67 = (double)r74;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->y = r74;
	r74 = r64 - r62;
	r67 = (double)r74;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->z = r74;
	goto label$6dca5a9_2_553;
	label$6dca5a9_2_458:
	if( !(r68 < r61) ) goto label$6dca5a9_2_491;
	if( !(r72 < r61) ) goto label$6dca5a9_2_491;
	r67 = 2.;
	r76 = 1.;
	r77 = (double)r61;
	r76 = r76 + r77;
	r77 = (double)r68;
	r76 = r76 - r77;
	r77 = (double)r72;
	r76 = r76 - r77;
	r76 = hl_math_sqrt(r76);
	r67 = r67 * r76;
	r65 = r67;
	r74 = r71 - r69;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->w = r74;
	r67 = 0.25;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->x = r74;
	r74 = r62 + r64;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->y = r74;
	r74 = r63 + r70;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->z = r74;
	goto label$6dca5a9_2_553;
	label$6dca5a9_2_491:
	if( !(r72 < r68) ) goto label$6dca5a9_2_523;
	r67 = 2.;
	r76 = 1.;
	r77 = (double)r68;
	r76 = r76 + r77;
	r77 = (double)r61;
	r76 = r76 - r77;
	r77 = (double)r72;
	r76 = r76 - r77;
	r76 = hl_math_sqrt(r76);
	r67 = r67 * r76;
	r65 = r67;
	r74 = r63 - r70;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->w = r74;
	r74 = r62 + r64;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->x = r74;
	r67 = 0.25;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->y = r74;
	r74 = r69 + r71;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->z = r74;
	goto label$6dca5a9_2_553;
	label$6dca5a9_2_523:
	r67 = 2.;
	r76 = 1.;
	r77 = (double)r72;
	r76 = r76 + r77;
	r77 = (double)r61;
	r76 = r76 - r77;
	r77 = (double)r68;
	r76 = r76 - r77;
	r76 = hl_math_sqrt(r76);
	r67 = r67 * r76;
	r65 = r67;
	r74 = r64 - r62;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->w = r74;
	r74 = r63 + r70;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->x = r74;
	r74 = r69 + r71;
	r67 = (double)r74;
	r67 = r67 / r65;
	r74 = (float)r67;
	r19->y = r74;
	r67 = 0.25;
	r67 = r67 * r65;
	r74 = (float)r67;
	r19->z = r74;
	label$6dca5a9_2_553:
	return ((vdynamic*)r19);
	label$6dca5a9_2_554:
	if( r10 == NULL ) hl_null_access();
	r25 = r10->transform;
	if( r25 == NULL ) hl_null_access();
	r19 = r25->rot;
	return ((vdynamic*)r19);
	label$6dca5a9_2_559:
	r6 = NULL;
	return r6;
}

