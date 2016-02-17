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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t_1396143329_0;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t1480985205_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C"  void NullCameraConfiguration_Init_m1479095011_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C"  void NullCameraConfiguration_ConfigureVideoBackground_m1973011542_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void NullCameraConfiguration_UpdatePlayModeParameters_m1641275398_0 (NullCameraConfiguration_t_1396143329_0 * __this, WebCamAbstractBehaviour_t1480985205_0 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C"  void NullCameraConfiguration_UpdateProjection_m143833850_0 (NullCameraConfiguration_t_1396143329_0 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.NullCameraConfiguration::CheckForSurfaceChanges()
extern "C"  int32_t NullCameraConfiguration_CheckForSurfaceChanges_m1657528996_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void NullCameraConfiguration_UpdateStereoDepth_m_879636020_0 (NullCameraConfiguration_t_1396143329_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C"  bool NullCameraConfiguration_IsStereo_m1208460393_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void NullCameraConfiguration_ResetBackgroundPlane_m_1775850359_0 (NullCameraConfiguration_t_1396143329_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m708979714_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void NullCameraConfiguration_set_VideoBackgroundMirrored_m1327637019_0 (NullCameraConfiguration_t_1396143329_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m1514101025_0 (NullCameraConfiguration_t_1396143329_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void NullCameraConfiguration_SetSkewFrustum_m2108528320_0 (NullCameraConfiguration_t_1396143329_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_ViewportRect()
extern "C"  Rect_t_981940947_0  NullCameraConfiguration_get_ViewportRect_m_1030573620_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m_270939743_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m1251032696_0 (NullCameraConfiguration_t_1396143329_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C"  void NullCameraConfiguration__ctor_m109669713_0 (NullCameraConfiguration_t_1396143329_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
