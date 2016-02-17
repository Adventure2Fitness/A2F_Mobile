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

// Vuforia.StereoCameraConfiguration
struct StereoCameraConfiguration_t_767371314_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// System.Action
struct Action_t2132293834_0;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t1480985205_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"

// System.Void Vuforia.StereoCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Boolean,System.Boolean,System.Single,Vuforia.CameraDevice/CameraDeviceMode,System.Action,System.Int32)
extern "C"  void StereoCameraConfiguration__ctor_m_970504591_0 (StereoCameraConfiguration_t_767371314_0 * __this, Camera_t814710830_0 * ___leftCamera, Camera_t814710830_0 * ___rightCamera, bool ___autoStereoSkewing, bool ___integratedWithOtherSDK, float ___cameraOffset, int32_t ___cameraDeviceMode, Action_t2132293834_0 * ___onVideoBackgroundConfigChanged, int32_t ___eyewearUserCalibrationProfileId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::Init()
extern "C"  void StereoCameraConfiguration_Init_m_1480501294_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ConfigureVideoBackground()
extern "C"  void StereoCameraConfiguration_ConfigureVideoBackground_m1317346245_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void StereoCameraConfiguration_UpdatePlayModeParameters_m_1765781257_0 (StereoCameraConfiguration_t_767371314_0 * __this, WebCamAbstractBehaviour_t1480985205_0 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C"  void StereoCameraConfiguration_UpdateProjection_m1190113003_0 (StereoCameraConfiguration_t_767371314_0 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.StereoCameraConfiguration::CheckForSurfaceChanges()
extern "C"  int32_t StereoCameraConfiguration_CheckForSurfaceChanges_m8192851_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void StereoCameraConfiguration_UpdateStereoDepth_m_1266943237_0 (StereoCameraConfiguration_t_767371314_0 * __this, Transform_t1584899523_0 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::IsStereo()
extern "C"  bool StereoCameraConfiguration_IsStereo_m1436841176_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void StereoCameraConfiguration_ApplyCorrectedProjectionMatrix_m_2123565616_0 (StereoCameraConfiguration_t_767371314_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void StereoCameraConfiguration_ResolveVideoBackgroundBehaviours_m_1951201739_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoCameraConfiguration::CameraParameterChanged()
extern "C"  bool StereoCameraConfiguration_CameraParameterChanged_m898665190_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::ExtractCameraClippingPlanes(UnityEngine.Matrix4x4,System.Single&,System.Single&)
extern "C"  void StereoCameraConfiguration_ExtractCameraClippingPlanes_m_488059461_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inverseProjMatrix, float* ___near, float* ___far, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.StereoCameraConfiguration::ExtractCameraFoV(UnityEngine.Matrix4x4)
extern "C"  float StereoCameraConfiguration_ExtractCameraFoV_m1345670557_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___inverseProjMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StereoCameraConfiguration::HomogenizedVec3(UnityEngine.Vector4)
extern "C"  Vector3_t_725341337_0  StereoCameraConfiguration_HomogenizedVec3_m1125314248_0 (Object_t * __this /* static, unused */, Vector4_t_725341336_0  ___vec4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void StereoCameraConfiguration_SetSkewFrustum_m_1187930449_0 (StereoCameraConfiguration_t_767371314_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.StereoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t StereoCameraConfiguration_get_EyewearUserCalibrationProfileId_m1504632146_0 (StereoCameraConfiguration_t_767371314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void StereoCameraConfiguration_set_EyewearUserCalibrationProfileId_m1702951465_0 (StereoCameraConfiguration_t_767371314_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoCameraConfiguration::.cctor()
extern "C"  void StereoCameraConfiguration__cctor_m2013965739_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
