﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_arm__node__Player
#define INC_arm__node__Player
typedef struct _arm__node__$Player *arm__node__$Player;
typedef struct _arm__node__Player *arm__node__Player;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <armory/logicnode/LogicTree.h>
#include <iron/Trait.h>
#include <iron/object/Object.h>
#include <hl/types/ArrayObj.h>
#include <haxe/ds/StringMap.h>


struct _arm__node__$Player {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _arm__node__Player {
	hl_type *$type;
	iron__object__Object object;
	hl__types__ArrayObj _add;
	hl__types__ArrayObj _init;
	hl__types__ArrayObj _remove;
	hl__types__ArrayObj _update;
	hl__types__ArrayObj _lateUpdate;
	hl__types__ArrayObj _render;
	hl__types__ArrayObj _render2D;
	bool loopBreak;
	bool loopContinue;
	haxe__ds__StringMap functionNodes;
	haxe__ds__StringMap functionOutputNodes;
};
#endif

