﻿// Generated by HLC 4.2.5 (HL v4)
#ifndef INC_kha__input__Surface
#define INC_kha__input__Surface
typedef struct _kha__input__$Surface *kha__input__$Surface;
typedef struct _kha__input__Surface *kha__input__Surface;
#include <hl/Class.h>
#include <hl/BaseType.h>
#include <_std/String.h>
#include <kha/input/TouchDownEventBlockBehavior.h>
#include <hl/types/ArrayObj.h>


struct _kha__input__$Surface {
	hl_type *$type;
	hl_type* __type__;
	vdynamic* __meta__;
	varray* __implementedBy__;
	String __name__;
	vdynamic* __constructor__;
	venum* touchDownEventBlockBehavior;
	vclosure* get;
	vclosure* setTouchDownEventBlockBehavior;
	kha__input__Surface instance;
};
struct _kha__input__Surface {
	hl_type *$type;
	hl__types__ArrayObj touchStartListeners;
	hl__types__ArrayObj touchEndListeners;
	hl__types__ArrayObj moveListeners;
};
#endif

