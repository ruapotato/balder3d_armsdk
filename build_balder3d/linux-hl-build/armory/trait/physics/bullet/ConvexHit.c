﻿// Generated by HLC 4.2.5 (HL v4)
#define HLC_BOOT
#include <hlc.h>
#include <armory/trait/physics/bullet/ConvexHit.h>

void armory_trait_physics_bullet_ConvexHit_new(armory__trait__physics__bullet__ConvexHit r0,iron__math__Vec4 r1,iron__math__Vec4 r2,double r3) {
	r0->pos = r1;
	r0->normal = r2;
	r0->hitFraction = r3;
	return;
}

