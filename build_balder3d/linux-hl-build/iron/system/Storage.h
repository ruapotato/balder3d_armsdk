﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_iron__system__Storage
#define INC_iron__system__Storage
typedef struct _iron__system__$Storage *iron__system__$Storage;
typedef struct _iron__system__Storage *iron__system__Storage;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/StorageFile.h>


struct _iron__system__$Storage {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	kha__StorageFile file;
	vdynamic* _data;
	vclosure* init;
	vclosure* save;
	vclosure* get_data;
};
struct _iron__system__Storage {
	hl_type *$type;
};
#endif

