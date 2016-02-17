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

// Vuforia.DataSetImpl
struct DataSetImpl_t1367733357_0;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t_1153584305_0;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t399724709_0;
// Vuforia.TrackableSource
struct TrackableSource_t_2021791499_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// Vuforia.Trackable
struct Trackable_t400369722_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUn_792352572.h"

// System.IntPtr Vuforia.DataSetImpl::get_DataSetPtr()
extern "C"  IntPtr_t DataSetImpl_get_DataSetPtr_m_1817235317_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetImpl::get_Path()
extern "C"  String_t* DataSetImpl_get_Path_m1971196940_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::get_FileStorageType()
extern "C"  int32_t DataSetImpl_get_FileStorageType_m1701833889_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::.ctor(System.IntPtr)
extern "C"  void DataSetImpl__ctor_m1641169393_0 (DataSetImpl_t1367733357_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String)
extern "C"  bool DataSetImpl_Load_m_1238580345_0 (DataSetImpl_t1367733357_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Load(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_Load_m957173146_0 (DataSetImpl_t1367733357_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSetImpl::GetTrackables()
extern "C"  Object_t* DataSetImpl_GetTrackables_m_1647402614_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,System.String)
extern "C"  DataSetTrackableBehaviour_t399724709_0 * DataSetImpl_CreateTrackable_m_1498788863_0 (DataSetImpl_t1367733357_0 * __this, TrackableSource_t_2021791499_0 * ___trackableSource, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSetImpl::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
extern "C"  DataSetTrackableBehaviour_t399724709_0 * DataSetImpl_CreateTrackable_m1407643993_0 (DataSetImpl_t1367733357_0 * __this, TrackableSource_t_2021791499_0 * ___trackableSource, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Destroy(Vuforia.Trackable,System.Boolean)
extern "C"  bool DataSetImpl_Destroy_m2114837323_0 (DataSetImpl_t1367733357_0 * __this, Object_t * ___trackable, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::HasReachedTrackableLimit()
extern "C"  bool DataSetImpl_HasReachedTrackableLimit_m_1401306237_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::Contains(Vuforia.Trackable)
extern "C"  bool DataSetImpl_Contains_m1275469893_0 (DataSetImpl_t1367733357_0 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetImpl::DestroyAllTrackables(System.Boolean)
extern "C"  void DataSetImpl_DestroyAllTrackables_m_1781628435_0 (DataSetImpl_t1367733357_0 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::ExistsImpl(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool DataSetImpl_ExistsImpl_m_358516144_0 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateImageTargets()
extern "C"  bool DataSetImpl_CreateImageTargets_m_182984072_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateMultiTargets()
extern "C"  bool DataSetImpl_CreateMultiTargets_m_1509150630_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateCylinderTargets()
extern "C"  bool DataSetImpl_CreateCylinderTargets_m728233021_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetImpl::CreateObjectTargets()
extern "C"  bool DataSetImpl_CreateObjectTargets_m_1574126860_0 (DataSetImpl_t1367733357_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
