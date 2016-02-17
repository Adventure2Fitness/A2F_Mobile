#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t1278883054_0;
// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t_1508367454_0;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_818605340_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_HideExces1563475997.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t509141484_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.Shader Vuforia.HideExcessAreaAbstractBehaviour::matteShader
	Shader_t1278883054_0 * ___matteShader_2;
	// Vuforia.HideExcessAreaAbstractBehaviour/CLIPPING_MODE Vuforia.HideExcessAreaAbstractBehaviour::clippingMode
	int32_t ___clippingMode_3;
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaAbstractBehaviour::mClippingImpl
	Object_t * ___mClippingImpl_4;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t_818605340_0 * ___mVuforiaBehaviour_5;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mPlaneOffset
	Vector3_t_725341337_0  ___mPlaneOffset_6;
};
