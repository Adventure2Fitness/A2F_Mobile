#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t_853991962_0;
// Vuforia.WebCamImpl
struct WebCamImpl_t_204365786_0;
// Vuforia.Image
struct Image_t1687075568_0;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t_1823872441_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDev1100320849.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDe_1775423918.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIX1632791727.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"

// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::get_WebCam()
extern "C"  WebCamImpl_t_204365786_0 * CameraDeviceImpl_get_WebCam_m2001506374_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C"  bool CameraDeviceImpl_get_CameraReady_m496077047_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraDeviceImpl_Init_m_2030780322_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C"  bool CameraDeviceImpl_Deinit_m_445955695_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C"  bool CameraDeviceImpl_Start_m1805275460_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C"  bool CameraDeviceImpl_Stop_m_2019562494_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C"  VideoModeData_t_36928065_0  CameraDeviceImpl_GetVideoMode_m270548657_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  VideoModeData_t_36928065_0  CameraDeviceImpl_GetVideoMode_m827024475_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  bool CameraDeviceImpl_SelectVideoMode_m1201625128_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C"  bool CameraDeviceImpl_GetSelectedVideoMode_m116335117_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFlashTorchMode_m_1512781174_0 (CameraDeviceImpl_t_853991962_0 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C"  bool CameraDeviceImpl_SetFocusMode_m_1319651514_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  bool CameraDeviceImpl_SetFrameFormat_m1216581323_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C"  Image_t1687075568_0 * CameraDeviceImpl_GetCameraImage_m_98571640_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C"  int32_t CameraDeviceImpl_GetCameraDirection_m2060903035_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C"  Vector2_t_725341338_0  CameraDeviceImpl_GetCameraFieldOfViewRads_m_943464024_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C"  Dictionary_2_t_1823872441_0 * CameraDeviceImpl_GetAllImages_m625487652_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C"  bool CameraDeviceImpl_IsDirty_m_1370175510_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C"  void CameraDeviceImpl_ResetDirtyFlag_m_1830944605_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C"  void CameraDeviceImpl__ctor_m_1986120464_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C"  void CameraDeviceImpl_ForceFrameFormat_m1293629184_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C"  int32_t CameraDeviceImpl_InitCameraDevice_m_1230755978_0 (CameraDeviceImpl_t_853991962_0 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C"  int32_t CameraDeviceImpl_DeinitCameraDevice_m1499028902_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StartCameraDevice_m_367178779_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C"  int32_t CameraDeviceImpl_StopCameraDevice_m1265128727_0 (CameraDeviceImpl_t_853991962_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C"  void CameraDeviceImpl__cctor_m_1922288451_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
