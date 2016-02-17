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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t_788036914_0;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t_1655497798_0;
// Vuforia.TargetFinder
struct TargetFinder_t99717602_0;
// Vuforia.DataSet
struct DataSet_t1608203437_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t_2048019460_0;

#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C"  ImageTargetBuilder_t_1655497798_0 * ObjectTrackerImpl_get_ImageTargetBuilder_m692110144_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C"  TargetFinder_t99717602_0 * ObjectTrackerImpl_get_TargetFinder_m2089854800_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C"  void ObjectTrackerImpl__ctor_m_1249986494_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C"  bool ObjectTrackerImpl_Start_m1840265326_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C"  void ObjectTrackerImpl_Stop_m_1874987964_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C"  DataSet_t1608203437_0 * ObjectTrackerImpl_CreateDataSet_m447789443_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C"  bool ObjectTrackerImpl_DestroyDataSet_m947596939_0 (ObjectTrackerImpl_t_788036914_0 * __this, DataSet_t1608203437_0 * ___dataSet, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_ActivateDataSet_m_1148880651_0 (ObjectTrackerImpl_t_788036914_0 * __this, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C"  bool ObjectTrackerImpl_DeactivateDataSet_m1075175478_0 (ObjectTrackerImpl_t_788036914_0 * __this, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C"  Object_t* ObjectTrackerImpl_GetActiveDataSets_m1229244943_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C"  Object_t* ObjectTrackerImpl_GetDataSets_m_2135815127_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C"  void ObjectTrackerImpl_DestroyAllDataSets_m84535419_0 (ObjectTrackerImpl_t_788036914_0 * __this, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C"  bool ObjectTrackerImpl_PersistExtendedTracking_m_1501008569_0 (ObjectTrackerImpl_t_788036914_0 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C"  bool ObjectTrackerImpl_ResetExtendedTracking_m_859736757_0 (ObjectTrackerImpl_t_788036914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
