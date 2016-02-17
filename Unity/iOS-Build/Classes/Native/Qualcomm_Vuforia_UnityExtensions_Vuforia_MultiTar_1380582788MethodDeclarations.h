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

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t_1380582788_0;
// Vuforia.MultiTarget
struct MultiTarget_t615346687_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t_1868393526_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C"  Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m_972883516_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m865462724_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1925661619_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1948240322_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C"  void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m_1350988941_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C"  void MultiTargetAbstractBehaviour__ctor_m_697607014_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1926588568_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m_294871353_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m_1339055343_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1486533437_0 (MultiTargetAbstractBehaviour_t_1380582788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
