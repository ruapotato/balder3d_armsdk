﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_armory__logicnode__SpawnObjectByNameNode
#define INC_armory__logicnode__SpawnObjectByNameNode
typedef struct _armory__logicnode__$SpawnObjectByNameNode *armory__logicnode__$SpawnObjectByNameNode;
typedef struct _armory__logicnode__SpawnObjectByNameNode *armory__logicnode__SpawnObjectByNameNode;
#include <_std/String.h>
#include <armory/logicnode/SpawnObjectByNameNode.h>
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <armory/logicnode/LogicNode.h>
#include <armory/logicnode/LogicTree.h>
#include <hl/types/ArrayObj.h>
#include <iron/object/Object.h>


typedef struct {
	HL__ENUM_CONSTRUCT__
	String p0;
	bool p1;
	armory__logicnode__SpawnObjectByNameNode p2;
} Enumt$ctx_48fe493;
struct _armory__logicnode__$SpawnObjectByNameNode {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _armory__logicnode__SpawnObjectByNameNode {
	hl_type *$type;
	armory__logicnode__LogicTree tree;
	hl__types__ArrayObj inputs;
	hl__types__ArrayObj outputs;
	iron__object__Object object;
	hl__types__ArrayObj matrices;
	String property0;
};
#endif

