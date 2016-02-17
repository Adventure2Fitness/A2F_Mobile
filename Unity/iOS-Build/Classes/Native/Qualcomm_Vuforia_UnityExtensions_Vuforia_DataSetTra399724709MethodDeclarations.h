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

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t399724709_0;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t_1204467695_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableB629202430.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C"  void DataSetTrackableBehaviour_OnDrawGizmos_m_1424169099_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void DataSetTrackableBehaviour_OnTrackerUpdate_m_1637664310_0 (DataSetTrackableBehaviour_t399724709_0 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C"  bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m_778787514_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetName()
extern "C"  String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetName_m_781605720_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetPath()
extern "C"  String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetPath_m_724135998_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetDataSetPath(System.String)
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetDataSetPath_m_819956854_0 (DataSetTrackableBehaviour_t399724709_0 * __this, String_t* ___dataSetPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ExtendedTracking()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ExtendedTracking_m898822134_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetExtendedTracking(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetExtendedTracking_m900250906_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool ___extendedTracking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_InitializeSmartTerrain()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_InitializeSmartTerrain_m850509570_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetInitializeSmartTerrain(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetInitializeSmartTerrain_m646721894_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool ___initializeSmartTerrain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ReconstructionToInitialize()
extern "C"  ReconstructionFromTargetAbstractBehaviour_t_1204467695_0 * DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ReconstructionToInitialize_m_1390266484_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetReconstructionToInitialize_m1335516352_0 (DataSetTrackableBehaviour_t399724709_0 * __this, ReconstructionFromTargetAbstractBehaviour_t_1204467695_0 * ___reconstructionToInitialize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C"  Vector3_t_725341337_0  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMin_m391364486_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMin_m1779134386_0 (DataSetTrackableBehaviour_t399724709_0 * __this, Vector3_t_725341337_0  ___occluderBoundsMin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C"  Vector3_t_725341337_0  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMax_m391135768_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMax_m1505226720_0 (DataSetTrackableBehaviour_t399724709_0 * __this, Vector3_t_725341337_0  ___occluderBoundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_IsSmartTerrainOccluderOffset()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_IsSmartTerrainOccluderOffset_m_1804746200_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetIsSmartTerrainOccluderOffset(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetIsSmartTerrainOccluderOffset_m_1306397620_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool ___isOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderOffset()
extern "C"  Vector3_t_725341337_0  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderOffset_m_1331754132_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderOffset(UnityEngine.Vector3)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderOffset_m1962883118_0 (DataSetTrackableBehaviour_t399724709_0 * __this, Vector3_t_725341337_0  ___occluderOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderRotation()
extern "C"  Quaternion_t1989680039_0  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderRotation_m_272972771_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderRotation(UnityEngine.Quaternion)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderRotation_m1996099457_0 (DataSetTrackableBehaviour_t399724709_0 * __this, Quaternion_t1989680039_0  ___occluderRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderLockedInPlace()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderLockedInPlace_m_944838673_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetLockSmartTerrainOccluderInPlace(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetLockSmartTerrainOccluderInPlace_m509970584_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool ___lockOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.GetDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_GetDefaultOccluderBounds_m992343420_0 (DataSetTrackableBehaviour_t399724709_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_AutoSetOccluderFromTargetSize()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_AutoSetOccluderFromTargetSize_m407964260_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetAutoSetOccluderFromTargetSize(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetAutoSetOccluderFromTargetSize_m2141172686_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool ___autoset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C"  void DataSetTrackableBehaviour__ctor_m1025142603_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_796699615_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m_1658248520_0 (DataSetTrackableBehaviour_t399724709_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m_1350042114_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_1354773326_0 (DataSetTrackableBehaviour_t399724709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
