﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__OnCanvasElementNode
#define INC_armory__logicnode__OnCanvasElementNode
typedef struct _armory__logicnode__$OnCanvasElementNode *armory__logicnode__$OnCanvasElementNode;
typedef struct _armory__logicnode__OnCanvasElementNode *armory__logicnode__OnCanvasElementNode;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>
#include <armory/trait/internal/CanvasScript.h>


struct _armory__logicnode__$OnCanvasElementNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _armory__logicnode__OnCanvasElementNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
	armory__trait__internal__CanvasScript canvas;
	String element;
	String property0;
	String property1;
	String property2;
};
#endif

