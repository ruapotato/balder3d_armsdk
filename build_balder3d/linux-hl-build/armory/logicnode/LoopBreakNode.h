﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__LoopBreakNode
#define INC_armory__logicnode__LoopBreakNode
typedef struct _armory__logicnode__$LoopBreakNode *armory__logicnode__$LoopBreakNode;
typedef struct _armory__logicnode__LoopBreakNode *armory__logicnode__LoopBreakNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>


struct _armory__logicnode__$LoopBreakNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _armory__logicnode__LoopBreakNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
};
#endif

