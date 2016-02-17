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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t_1674353861_0;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t1608203437_0;
// Vuforia.DataSetImpl
struct DataSetImpl_t1367733357_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void ObjectTargetImpl__ctor_m392158672_0 (ObjectTargetImpl_t_1674353861_0 * __this, String_t* ___name, int32_t ___id, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C"  Vector3_t_725341337_0  ObjectTargetImpl_GetSize_m_2141937322_0 (ObjectTargetImpl_t_1674353861_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void ObjectTargetImpl_SetSize_m1043118397_0 (ObjectTargetImpl_t_1674353861_0 * __this, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C"  bool ObjectTargetImpl_StartExtendedTracking_m_793821505_0 (ObjectTargetImpl_t_1674353861_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C"  bool ObjectTargetImpl_StopExtendedTracking_m662863751_0 (ObjectTargetImpl_t_1674353861_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C"  DataSetImpl_t1367733357_0 * ObjectTargetImpl_get_DataSet_m_194753087_0 (ObjectTargetImpl_t_1674353861_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
