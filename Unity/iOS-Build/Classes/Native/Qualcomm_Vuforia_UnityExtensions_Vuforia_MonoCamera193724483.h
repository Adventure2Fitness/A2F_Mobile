#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t814710830_0;
// System.Action
struct Action_t2132293834_0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct Dictionary_2_t1460639956_0;

#include "mscorlib_System_Object_887538054.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t193724483_0  : public Object_t
{
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t814710830_0 * ___mPrimaryCamera_0;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.MonoCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_1;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_2;
	// System.Action Vuforia.MonoCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t2132293834_0 * ___mOnVideoBackgroundConfigChanged_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour> Vuforia.MonoCameraConfiguration::mVideoBackgroundBehaviours
	Dictionary_2_t1460639956_0 * ___mVideoBackgroundBehaviours_4;
	// UnityEngine.Rect Vuforia.MonoCameraConfiguration::mViewportRect
	Rect_t_981940947_0  ___mViewportRect_5;
	// System.Boolean Vuforia.MonoCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_6;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraWidthFactor
	int32_t ___mCameraWidthFactor_7;
	// System.Int32 Vuforia.MonoCameraConfiguration::mViewPortWidth
	int32_t ___mViewPortWidth_8;
	// System.Int32 Vuforia.MonoCameraConfiguration::mViewPortHeight
	int32_t ___mViewPortHeight_9;
	// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_10;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_11;
};
