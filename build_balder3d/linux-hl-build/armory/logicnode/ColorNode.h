﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__ColorNode
#define INC_armory__logicnode__ColorNode
typedef struct _armory__logicnode__$ColorNode *armory__logicnode__$ColorNode;
typedef struct _armory__logicnode__ColorNode *armory__logicnode__ColorNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>
#include <iron/math/Vec4.h>


struct _armory__logicnode__$ColorNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _armory__logicnode__ColorNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
	iron__math__Vec4 value;
};
#endif

