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

// Vuforia.SmartTerrainTrackableImpl
struct SmartTerrainTrackableImpl_t312467502_0;
// System.String
struct String_t;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t377172206_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>
struct IEnumerable_1_t_907802469_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1915204500.h"

// System.Void Vuforia.SmartTerrainTrackableImpl::.ctor(System.String,System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl__ctor_m_146657194_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, String_t* ___name, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::get_Children()
extern "C"  Object_t* SmartTerrainTrackableImpl_get_Children_m903759121_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.SmartTerrainTrackableImpl::get_MeshRevision()
extern "C"  int32_t SmartTerrainTrackableImpl_get_MeshRevision_m671226829_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::get_Parent()
extern "C"  Object_t * SmartTerrainTrackableImpl_get_Parent_m_1124841585_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::set_Parent(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_set_Parent_m1829176764_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::GetMesh()
extern "C"  Mesh_t_982089418_0 * SmartTerrainTrackableImpl_GetMesh_m2032467060_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.SmartTerrainTrackableImpl::get_LocalPosition()
extern "C"  Vector3_t_725341337_0  SmartTerrainTrackableImpl_get_LocalPosition_m648628293_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::SetLocalPose(Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void SmartTerrainTrackableImpl_SetLocalPose_m1363487235_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, PoseData_t1915204500_0  ___localPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::DestroyMesh()
extern "C"  void SmartTerrainTrackableImpl_DestroyMesh_m976382727_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::AddChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_AddChild_m1293192488_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, Object_t * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainTrackableImpl::RemoveChild(Vuforia.SmartTerrainTrackable)
extern "C"  void SmartTerrainTrackableImpl_RemoveChild_m_13891795_0 (SmartTerrainTrackableImpl_t312467502_0 * __this, Object_t * ___removedChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
