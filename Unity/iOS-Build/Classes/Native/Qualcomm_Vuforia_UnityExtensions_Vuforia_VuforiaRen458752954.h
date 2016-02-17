#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaR_1500841350.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaR_1701293981.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"

// Vuforia.VuforiaRendererImpl
struct  VuforiaRendererImpl_t458752954_0  : public VuforiaRenderer_t_1500841350_0
{
	// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::mVideoBGConfig
	VideoBGCfgData_t_1701293981_0  ___mVideoBGConfig_1;
	// System.Boolean Vuforia.VuforiaRendererImpl::mVideoBGConfigSet
	bool ___mVideoBGConfigSet_2;
	// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::mVideoBackgroundTexture
	Texture2D_t_485082364_0 * ___mVideoBackgroundTexture_3;
	// System.Boolean Vuforia.VuforiaRendererImpl::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_4;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::mLastSetReflection
	int32_t ___mLastSetReflection_5;
};
