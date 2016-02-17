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

// Vuforia.EyewearImpl
struct EyewearImpl_t_1142606523_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Eyewear_Ey685724130.h"

// System.Boolean Vuforia.EyewearImpl::IsDeviceDetected()
extern "C"  bool EyewearImpl_IsDeviceDetected_m660937999_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::setHeadsetPresent(System.String)
extern "C"  bool EyewearImpl_setHeadsetPresent_m1640423954_0 (EyewearImpl_t_1142606523_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::setHeadsetNotPresent()
extern "C"  bool EyewearImpl_setHeadsetNotPresent_m1685778677_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsSeeThru()
extern "C"  bool EyewearImpl_IsSeeThru_m_1676166443_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.EyewearImpl::GetScreenOrientation()
extern "C"  int32_t EyewearImpl_GetScreenOrientation_m_366076351_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoCapable()
extern "C"  bool EyewearImpl_IsStereoCapable_m1131853631_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoEnabled()
extern "C"  bool EyewearImpl_IsStereoEnabled_m_1691355884_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsStereoGLOnly()
extern "C"  bool EyewearImpl_IsStereoGLOnly_m184082304_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::SetStereo(System.Boolean)
extern "C"  bool EyewearImpl_SetStereo_m499444838_0 (EyewearImpl_t_1142606523_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::IsPredictiveTrackingEnabled()
extern "C"  bool EyewearImpl_IsPredictiveTrackingEnabled_m_842078570_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearImpl::SetPredictiveTracking(System.Boolean)
extern "C"  bool EyewearImpl_SetPredictiveTracking_m_1424558940_0 (EyewearImpl_t_1142606523_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearImpl::setProjectionClippingPlanes(System.Single,System.Single)
extern "C"  void EyewearImpl_setProjectionClippingPlanes_m1248339869_0 (EyewearImpl_t_1142606523_0 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearImpl::GetProjectionMatrix(Vuforia.Eyewear/EyeID,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t1577636070_0  EyewearImpl_GetProjectionMatrix_m_231346874_0 (EyewearImpl_t_1142606523_0 * __this, int32_t ___eyeID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearImpl::GetProjectionMatrix(Vuforia.Eyewear/EyeID,System.Int32,UnityEngine.ScreenOrientation)
extern "C"  Matrix4x4_t1577636070_0  EyewearImpl_GetProjectionMatrix_m_1520040209_0 (EyewearImpl_t_1142606523_0 * __this, int32_t ___eyeID, int32_t ___profileID, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearImpl::.ctor()
extern "C"  void EyewearImpl__ctor_m238303595_0 (EyewearImpl_t_1142606523_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
