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

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t1183769033_0;
// Vuforia.CylinderTarget
struct CylinderTarget_t1042969362_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t_1868393526_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C"  Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m356765035_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C"  float CylinderTargetAbstractBehaviour_get_SideLength_m_184587177_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_TopDiameter_m952597802_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C"  float CylinderTargetAbstractBehaviour_get_BottomDiameter_m340694482_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetSideLength_m_1340231141_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetTopDiameter_m1699319354_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m_1873740544_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m130719259_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m_1151505135_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m815152721_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m_635127616_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m_1441530859_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C"  float CylinderTargetAbstractBehaviour_GetScale_m965284037_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C"  bool CylinderTargetAbstractBehaviour_SetScale_m_561426830_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_ApplyScale_m_711601070_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m_1908672309_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m_909381480_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, float ___topRatio, float ___bottomRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C"  void CylinderTargetAbstractBehaviour__ctor_m1578473703_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m323657917_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m82804564_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1347364378_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1514485590_0 (CylinderTargetAbstractBehaviour_t1183769033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
