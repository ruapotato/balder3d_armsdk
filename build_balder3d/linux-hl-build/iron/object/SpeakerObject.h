﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__object__SpeakerObject
#define INC_iron__object__SpeakerObject
typedef struct _iron__object__$SpeakerObject *iron__object__$SpeakerObject;
typedef struct _iron__object__SpeakerObject *iron__object__SpeakerObject;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <iron/object/Object.h>
#include <iron/data/TObj.h>
#include <iron/object/Transform.h>
#include <hl/types/ArrayObj.h>
#include <iron/object/Animation.h>
#include <haxe/ds/StringMap.h>
#include <iron/data/TSpeakerData.h>
#include <kha/Sound.h>


struct _iron__object__$SpeakerObject {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__object__SpeakerObject {
	hl_type *$type;
	int uid;
	double urandom;
	iron__data__TObj raw;
	String name;
	iron__object__Transform transform;
	hl__types__ArrayObj constraints;
	hl__types__ArrayObj traits;
	iron__object__Object parent;
	hl__types__ArrayObj children;
	hl__types__ArrayObj lods;
	iron__object__Animation animation;
	bool visible;
	bool visibleMesh;
	bool visibleShadow;
	bool culled;
	bool culledMesh;
	bool culledShadow;
	haxe__ds__StringMap properties;
	bool isEmpty;
	iron__data__TSpeakerData data;
	bool paused;
	kha__Sound sound;
	hl__types__ArrayObj channels;
	float volume;
};
#endif

