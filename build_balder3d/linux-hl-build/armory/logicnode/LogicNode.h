﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__LogicNode
#define INC_armory__logicnode__LogicNode
typedef struct _armory__logicnode__$LogicNode *armory__logicnode__$LogicNode;
typedef struct _armory__logicnode__LogicNode *armory__logicnode__LogicNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNodeLink.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>


struct _armory__logicnode__$LogicNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* addLink;
};
struct _armory__logicnode__LogicNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
};
#endif

