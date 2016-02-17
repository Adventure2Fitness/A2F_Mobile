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

// Vuforia.WebCamImpl
struct WebCamImpl_t_204365786_0;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1253062672_0;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t_1782843845_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRe2008990966.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRend36454403.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C"  bool WebCamImpl_get_DidUpdateThisFrame_m1276712816_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C"  bool WebCamImpl_get_IsPlaying_m_805996899_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C"  int32_t WebCamImpl_get_ActualWidth_m_1955459401_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C"  int32_t WebCamImpl_get_ActualHeight_m14115064_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C"  bool WebCamImpl_get_IsTextureSizeAvailable_m_102754816_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C"  void WebCamImpl_set_IsTextureSizeAvailable_m1061755839_0 (WebCamImpl_t_204365786_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C"  bool WebCamImpl_get_FlipHorizontally_m_1885254329_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C"  Vec2I_t2008990966_0  WebCamImpl_get_ResampledTextureSize_m162083568_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C"  void WebCamImpl_ComputeResampledTextureSize_m950732026_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C"  void WebCamImpl__ctor_m1520558972_0 (WebCamImpl_t_204365786_0 * __this, CameraU5BU5D_t1253062672_0* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C"  void WebCamImpl_StartCamera_m_1174404939_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C"  void WebCamImpl_StopCamera_m2103670811_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C"  void WebCamImpl_ResetPlaying_m1247424371_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C"  Color32U5BU5D_t_1782843845_0* WebCamImpl_GetPixels32AndBufferFrame_m_689011840_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C"  void WebCamImpl_RenderFrame_m1085023702_0 (WebCamImpl_t_204365786_0 * __this, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C"  VideoModeData_t_36928065_0  WebCamImpl_GetVideoMode_m1477620337_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t36454403_0  WebCamImpl_GetVideoTextureInfo_m_1929428159_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C"  bool WebCamImpl_IsRendererDirty_m_1452341849_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C"  void WebCamImpl_OnDestroy_m1235223017_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C"  void WebCamImpl_Update_m1239960605_0 (WebCamImpl_t_204365786_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
