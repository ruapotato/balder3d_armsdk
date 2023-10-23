﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__TSceneFormat
#define INC_iron__data__TSceneFormat
typedef struct _iron__data__$TSceneFormat *iron__data__$TSceneFormat;
typedef struct _iron__data__TSceneFormat *iron__data__TSceneFormat;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <kha/arrays/ByteArrayPrivate.h>


struct _iron__data__$TSceneFormat {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _iron__data__TSceneFormat {
	hl_type *$type;
	String name;
	hl__types__ArrayObj mesh_datas;
	hl__types__ArrayObj light_datas;
	hl__types__ArrayObj probe_datas;
	hl__types__ArrayObj camera_datas;
	String camera_ref;
	hl__types__ArrayObj material_datas;
	hl__types__ArrayObj particle_datas;
	hl__types__ArrayObj shader_datas;
	hl__types__ArrayObj speaker_datas;
	hl__types__ArrayObj world_datas;
	String world_ref;
	hl__types__ArrayObj tilesheet_datas;
	hl__types__ArrayObj objects;
	hl__types__ArrayObj groups;
	kha__arrays__ByteArrayPrivate gravity;
	hl__types__ArrayObj traits;
	hl__types__ArrayObj embedded_datas;
	vdynamic* frame_time;
	kha__arrays__ByteArrayPrivate irradiance;
	hl__types__ArrayObj terrain_datas;
	String terrain_ref;
};
#endif

