#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Trackable
struct Trackable_t400369722_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Reconstruc814040911.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// Vuforia.ReconstructionFromTargetImpl
struct  ReconstructionFromTargetImpl_t_1839041270_0  : public ReconstructionImpl_t814040911_0
{
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMin
	Vector3_t_725341337_0  ___mOccluderMin_5;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMax
	Vector3_t_725341337_0  ___mOccluderMax_6;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderOffset
	Vector3_t_725341337_0  ___mOccluderOffset_7;
	// UnityEngine.Quaternion Vuforia.ReconstructionFromTargetImpl::mOccluderRotation
	Quaternion_t1989680039_0  ___mOccluderRotation_8;
	// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::mInitializationTarget
	Object_t * ___mInitializationTarget_9;
	// System.Boolean Vuforia.ReconstructionFromTargetImpl::mCanAutoSetInitializationTarget
	bool ___mCanAutoSetInitializationTarget_10;
};
