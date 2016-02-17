#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTarget
struct ObjectTarget_t_247709061_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTra399724709.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.ObjectTargetAbstractBehaviour
struct  ObjectTargetAbstractBehaviour_t_1924484736_0  : public DataSetTrackableBehaviour_t399724709_0
{
	// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::mObjectTarget
	Object_t * ___mObjectTarget_20;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_21;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_22;
	// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMin
	Vector3_t_725341337_0  ___mBBoxMin_24;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMax
	Vector3_t_725341337_0  ___mBBoxMax_25;
	// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::mPreviewImage
	Texture2D_t_485082364_0 * ___mPreviewImage_26;
};
