﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__MathNode
#define INC_armory__logicnode__MathNode
typedef struct _armory__logicnode__$MathNode *armory__logicnode__$MathNode;
typedef struct _armory__logicnode__MathNode *armory__logicnode__MathNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>


struct _armory__logicnode__$MathNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* round;
};
struct _armory__logicnode__MathNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
	String property0;
	bool property1;
};
#endif

