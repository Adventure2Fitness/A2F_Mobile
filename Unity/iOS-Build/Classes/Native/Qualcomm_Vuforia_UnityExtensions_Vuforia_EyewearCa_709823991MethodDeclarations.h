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

// Vuforia.EyewearCalibrationProfileManagerImpl
struct EyewearCalibrationProfileManagerImpl_t_709823991_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Eyewear_Ey685724130.h"

// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getMaxCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getMaxCount_m_584941210_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getUsedCount()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getUsedCount_m_587102727_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::isProfileUsed(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_isProfileUsed_m709369996_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.EyewearCalibrationProfileManagerImpl::getActiveProfile()
extern "C"  int32_t EyewearCalibrationProfileManagerImpl_getActiveProfile_m_2031601878_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setActiveProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setActiveProfile_m1973906837_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.EyewearCalibrationProfileManagerImpl::getProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID)
extern "C"  Matrix4x4_t1577636070_0  EyewearCalibrationProfileManagerImpl_getProjectionMatrix_m_640909422_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, int32_t ___eyeID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProjectionMatrix(System.Int32,Vuforia.Eyewear/EyeID,UnityEngine.Matrix4x4)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setProjectionMatrix_m1711533985_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, int32_t ___eyeID, Matrix4x4_t1577636070_0  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.EyewearCalibrationProfileManagerImpl::getProfileName(System.Int32)
extern "C"  String_t* EyewearCalibrationProfileManagerImpl_getProfileName_m225883561_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::setProfileName(System.Int32,System.String)
extern "C"  bool EyewearCalibrationProfileManagerImpl_setProfileName_m2132022690_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.EyewearCalibrationProfileManagerImpl::clearProfile(System.Int32)
extern "C"  bool EyewearCalibrationProfileManagerImpl_clearProfile_m1325476720_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.EyewearCalibrationProfileManagerImpl::.ctor()
extern "C"  void EyewearCalibrationProfileManagerImpl__ctor_m_404041555_0 (EyewearCalibrationProfileManagerImpl_t_709823991_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
