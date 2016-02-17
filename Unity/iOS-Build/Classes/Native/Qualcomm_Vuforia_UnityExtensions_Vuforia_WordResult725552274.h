#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Word
struct Word_t_222253355_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordResul_196595886.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBo477370392.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableB629202430.h"

// Vuforia.WordResultImpl
struct  WordResultImpl_t725552274_0  : public WordResult_t_196595886_0
{
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t477370392_0  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t_725341337_0  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t1989680039_0  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	Object_t * ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;
};
