#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t_1143442460_0;
// Vuforia.TextureRenderer
struct TextureRenderer_t1727728211_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "mscorlib_System_Object_887538054.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRend36454403.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamPro1755741863.h"

// Vuforia.WebCamImpl
struct  WebCamImpl_t_204365786_0  : public Object_t
{
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t1253062672_0* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t1872284309_0* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t_1143442460_0 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t_36928065_0  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t36454403_0  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t1727728211_0 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t_485082364_0 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t_981940947_0  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t1755741863_0  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;
};
