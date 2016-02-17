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

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t193724483_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// System.Action
struct Action_t2132293834_0;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t1480985205_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void MonoCameraConfiguration__ctor_m1342741180_0 (MonoCameraConfiguration_t193724483_0 * __this, Camera_t814710830_0 * ___leftCamera, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t2132293834_0 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::Init()
extern "C"  void MonoCameraConfiguration_Init_m1682392071_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C"  void MonoCameraConfiguration_ConfigureVideoBackground_m881318778_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void MonoCameraConfiguration_UpdatePlayModeParameters_m_533785758_0 (MonoCameraConfiguration_t193724483_0 * __this, WebCamAbstractBehaviour_t1480985205_0 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C"  void MonoCameraConfiguration_UpdateProjection_m2029470294_0 (MonoCameraConfiguration_t193724483_0 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges()
extern "C"  int32_t MonoCameraConfiguration_CheckForSurfaceChanges_m534606536_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void MonoCameraConfiguration_UpdateStereoDepth_m728144368_0 (MonoCameraConfiguration_t193724483_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C"  bool MonoCameraConfiguration_IsStereo_m112231309_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void MonoCameraConfiguration_ResetBackgroundPlane_m2144151213_0 (MonoCameraConfiguration_t193724483_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t MonoCameraConfiguration_get_VideoBackgroundMirrored_m_417787298_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m_1378598075_0 (MonoCameraConfiguration_t193724483_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void MonoCameraConfiguration_SetSkewFrustum_m1538489316_0 (MonoCameraConfiguration_t193724483_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.MonoCameraConfiguration::get_ViewportRect()
extern "C"  Rect_t_981940947_0  MonoCameraConfiguration_get_ViewportRect_m_812897040_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void MonoCameraConfiguration_EnableObjectRenderer_m2134083401_0 (MonoCameraConfiguration_t193724483_0 * __this, GameObject_t_184308134_0 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C"  void MonoCameraConfiguration_ApplyMatrix_m1775297202_0 (MonoCameraConfiguration_t193724483_0 * __this, Camera_t814710830_0 * ___cam, Matrix4x4_t1577636070_0  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m854147306_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C"  bool MonoCameraConfiguration_CameraParameterChanged_m_1450297125_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MonoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t MonoCameraConfiguration_get_EyewearUserCalibrationProfileId_m990024701_0 (MonoCameraConfiguration_t193724483_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void MonoCameraConfiguration_set_EyewearUserCalibrationProfileId_m871456468_0 (MonoCameraConfiguration_t193724483_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
