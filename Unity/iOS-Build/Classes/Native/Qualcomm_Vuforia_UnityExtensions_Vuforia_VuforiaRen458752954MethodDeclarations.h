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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t458752954_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaR_1701293981.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRend36454403.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRe1215232091.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen372576175.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"

// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C"  Texture2D_t_485082364_0 * VuforiaRendererImpl_get_VideoBackgroundTexture_m_785548628_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C"  VideoBGCfgData_t_1701293981_0  VuforiaRendererImpl_GetVideoBackgroundConfig_m1124814034_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C"  void VuforiaRendererImpl_ClearVideoBackgroundConfig_m103631372_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfig_m_2117441069_0 (VuforiaRendererImpl_t458752954_0 * __this, VideoBGCfgData_t_1701293981_0  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C"  bool VuforiaRendererImpl_SetVideoBackgroundTexture_m1246416751_0 (VuforiaRendererImpl_t458752954_0 * __this, Texture2D_t_485082364_0 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C"  bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m1477187454_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C"  VideoTextureInfo_t36454403_0  VuforiaRendererImpl_GetVideoTextureInfo_m1434496297_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C"  void VuforiaRendererImpl_Pause_m780323617_0 (VuforiaRendererImpl_t458752954_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C"  int32_t VuforiaRendererImpl_GetRecommendedFps_m181172634_0 (VuforiaRendererImpl_t458752954_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C"  void VuforiaRendererImpl_UnityRenderEvent_m_547259001_0 (VuforiaRendererImpl_t458752954_0 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C"  bool VuforiaRendererImpl_HasBackgroundTextureChanged_m218271745_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C"  void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m725302704_0 (VuforiaRendererImpl_t458752954_0 * __this, VideoBGCfgData_t_1701293981_0  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C"  int32_t VuforiaRendererImpl_GetLastSetReflection_m3612314_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C"  void VuforiaRendererImpl__ctor_m117637526_0 (VuforiaRendererImpl_t458752954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
