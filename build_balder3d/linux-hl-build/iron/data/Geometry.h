﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__data__Geometry
#define INC_iron__data__Geometry
typedef struct _iron__data__$Geometry *iron__data__$Geometry;
typedef struct _iron__data__Geometry *iron__data__Geometry;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <hl/types/ArrayObj.h>
#include <kha/graphics4/VertexStructure.h>
#include <kha/arrays/ByteArrayPrivate.h>
#include <kha/graphics4/VertexBuffer.h>
#include <haxe/ds/StringMap.h>
#include <hl/types/ArrayBytes_Int.h>
#include <iron/data/TVertexArray.h>
#include <iron/data/MeshData.h>


struct _iron__data__$Geometry {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	vclosure* getVertexStructure;
	vclosure* getVertexData;
	vclosure* buildVertices;
};
struct _iron__data__Geometry {
	hl_type *$type;
	kha__graphics4__VertexBuffer vertexBuffer;
	haxe__ds__StringMap vertexBufferMap;
	hl__types__ArrayObj indexBuffers;
	int start;
	int count;
	String name;
	bool ready;
	kha__arrays__ByteArrayPrivate vertices;
	hl__types__ArrayObj indices;
	int numTris;
	hl__types__ArrayBytes_Int materialIndices;
	kha__graphics4__VertexStructure _struct;
	int structLength;
	String structStr;
	int usage;
	kha__graphics4__VertexBuffer instancedVB;
	bool instanced;
	int instanceCount;
	iron__data__TVertexArray positions;
	iron__data__TVertexArray normals;
	iron__data__TVertexArray uvs;
	iron__data__TVertexArray cols;
	hl__types__ArrayObj vertexArrays;
	iron__data__MeshData data;
	kha__arrays__ByteArrayPrivate skinBoneCounts;
	kha__arrays__ByteArrayPrivate skinBoneIndices;
	kha__arrays__ByteArrayPrivate skinBoneWeights;
	hl__types__ArrayObj skeletonTransformsI;
	hl__types__ArrayObj skeletonBoneRefs;
	kha__arrays__ByteArrayPrivate skeletonBoneLens;
	haxe__ds__StringMap actions;
	haxe__ds__StringMap mats;
};
#endif

