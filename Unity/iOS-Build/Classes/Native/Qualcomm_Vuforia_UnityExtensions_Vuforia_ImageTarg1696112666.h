#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTarget
struct ImageTarget_t_1244257119_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t1731474139_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTra399724709.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTarg_550965381.h"

// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t1696112666_0  : public DataSetTrackableBehaviour_t399724709_0
{
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_21;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Object_t * ___mImageTarget_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t1731474139_0 * ___mVirtualButtonBehaviours_23;
};
