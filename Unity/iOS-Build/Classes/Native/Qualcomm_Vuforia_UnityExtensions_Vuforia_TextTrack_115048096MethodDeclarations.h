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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t_115048096_0;
// Vuforia.WordList
struct WordList_t848781587_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Rectangl_1532249323.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrack_766653227.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C"  WordList_t848781587_0 * TextTrackerImpl_get_WordList_m_400183868_0 (TextTrackerImpl_t_115048096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C"  bool TextTrackerImpl_Start_m_1818122148_0 (TextTrackerImpl_t_115048096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C"  void TextTrackerImpl_Stop_m_1055454826_0 (TextTrackerImpl_t_115048096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  bool TextTrackerImpl_SetRegionOfInterest_m_699038315_0 (TextTrackerImpl_t_115048096_0 * __this, Rect_t_981940947_0  ___detectionRegion, Rect_t_981940947_0  ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C"  bool TextTrackerImpl_GetRegionOfInterest_m78909955_0 (TextTrackerImpl_t_115048096_0 * __this, Rect_t_981940947_0 * ___detectionRegion, Rect_t_981940947_0 * ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Rect_t_981940947_0  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m506165173_0 (TextTrackerImpl_t_115048096_0 * __this, RectangleIntData_t_1532249323_0  ___camSpaceRectData, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_36928065_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C"  int32_t TextTrackerImpl_get_CurrentUpDirection_m_477913175_0 (TextTrackerImpl_t_115048096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C"  void TextTrackerImpl__ctor_m_1614262992_0 (TextTrackerImpl_t_115048096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
