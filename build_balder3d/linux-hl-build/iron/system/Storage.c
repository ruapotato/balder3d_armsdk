﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <iron/system/Storage.h>
kha__StorageFile kha_Storage_defaultFile(void);
extern iron__system__$Storage g$_iron_system_Storage;
vdynamic* kha_StorageFile_readObject(kha__StorageFile);
void iron_system_Storage_save(void);
void kha_StorageFile_writeObject(kha__StorageFile,vdynamic*);

void iron_system_Storage_init() {
	vdynobj *r4;
	iron__system__$Storage r1;
	kha__StorageFile r0;
	vdynamic *r3;
	r0 = kha_Storage_defaultFile();
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r1->file = r0;
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r0 = r1->file;
	if( !r0 ) goto label$60c8e5e_1_19;
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r0 = r1->file;
	if( r0 == NULL ) hl_null_access();
	r3 = kha_StorageFile_readObject(r0);
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r1->_data = r3;
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r3 = r1->_data;
	if( r3 ) goto label$60c8e5e_1_18;
	r4 = hl_alloc_dynobj();
	r1 = (iron__system__$Storage)g$_iron_system_Storage;
	r1->_data = ((vdynamic*)r4);
	label$60c8e5e_1_18:
	iron_system_Storage_save();
	label$60c8e5e_1_19:
	return;
}

void iron_system_Storage_save() {
	iron__system__$Storage r2;
	kha__StorageFile r1;
	vdynamic *r3;
	r2 = (iron__system__$Storage)g$_iron_system_Storage;
	r1 = r2->file;
	if( !r1 ) goto label$60c8e5e_2_9;
	r2 = (iron__system__$Storage)g$_iron_system_Storage;
	r1 = r2->file;
	if( r1 == NULL ) hl_null_access();
	r2 = (iron__system__$Storage)g$_iron_system_Storage;
	r3 = r2->_data;
	kha_StorageFile_writeObject(r1,r3);
	label$60c8e5e_2_9:
	return;
}

vdynamic* iron_system_Storage_get_data() {
	iron__system__$Storage r2;
	kha__StorageFile r1;
	vdynamic *r3;
	r2 = (iron__system__$Storage)g$_iron_system_Storage;
	r1 = r2->file;
	if( r1 ) goto label$60c8e5e_3_4;
	iron_system_Storage_init();
	label$60c8e5e_3_4:
	r2 = (iron__system__$Storage)g$_iron_system_Storage;
	r3 = r2->_data;
	return r3;
}

