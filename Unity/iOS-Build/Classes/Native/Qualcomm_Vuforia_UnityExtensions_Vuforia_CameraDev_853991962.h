#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t_1823872441_0;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t1517271089_0;
// Vuforia.WebCamImpl
struct WebCamImpl_t_204365786_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDev_353891674.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDev1100320849.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"

// Vuforia.CameraDeviceImpl
struct  CameraDeviceImpl_t_853991962_0  : public CameraDevice_t_353891674_0
{
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::mCameraImages
	Dictionary_2_t_1823872441_0 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDeviceImpl::mForcedCameraFormats
	List_1_t1517271089_0 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDeviceImpl::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mCameraDirection
	int32_t ___mCameraDirection_6;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDeviceImpl::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_7;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::mVideoModeData
	VideoModeData_t_36928065_0  ___mVideoModeData_8;
	// System.Boolean Vuforia.CameraDeviceImpl::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_9;
	// System.Boolean Vuforia.CameraDeviceImpl::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_10;
};
struct CameraDeviceImpl_t_853991962_0_StaticFields{
	// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::mWebCam
	WebCamImpl_t_204365786_0 * ___mWebCam_3;
};
