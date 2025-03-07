﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__RotationNode
#define INC_armory__logicnode__RotationNode
typedef struct _armory__logicnode__$RotationNode *armory__logicnode__$RotationNode;
typedef struct _armory__logicnode__RotationNode *armory__logicnode__RotationNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>
#include <iron/math/Quat.h>


struct _armory__logicnode__$RotationNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _armory__logicnode__RotationNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
	String property0;
	String property1;
	String property2;
	iron__math__Quat value;
};
#endif

