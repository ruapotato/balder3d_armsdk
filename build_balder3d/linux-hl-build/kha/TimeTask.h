﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__TimeTask
#define INC_kha__TimeTask
typedef struct _kha__$TimeTask *kha__$TimeTask;
typedef struct _kha__TimeTask *kha__TimeTask;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>


struct _kha__$TimeTask {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
};
struct _kha__TimeTask {
	hl_type *$type;
	vclosure* task;
	double start;
	double period;
	double duration;
	double next;
	int id;
	int groupId;
	bool active;
	bool paused;
};
#endif

