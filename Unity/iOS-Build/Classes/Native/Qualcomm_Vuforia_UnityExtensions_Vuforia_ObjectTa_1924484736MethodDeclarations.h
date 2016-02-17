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

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t_1924484736_0;
// Vuforia.ObjectTarget
struct ObjectTarget_t_247709061_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t_1868393526_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C"  void ObjectTargetAbstractBehaviour__ctor_m_644012464_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C"  Object_t * ObjectTargetAbstractBehaviour_get_ObjectTarget_m_1890456268_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C"  void ObjectTargetAbstractBehaviour_OnDrawGizmos_m1456746704_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m_574809848_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m_56760582_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m_1955543063_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m_443188_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ObjectTargetAbstractBehaviour_SetBoundingBox_m_1060360941_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, Vector3_t_725341337_0  ___minBBox, Vector3_t_725341337_0  ___maxBBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C"  Vector3_t_725341337_0  ObjectTargetAbstractBehaviour_GetSize_m1534836831_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetLength_m_1879258987_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, float ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetWidth_m_1860457549_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ObjectTargetAbstractBehaviour_SetHeight_m606406708_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m1307774184_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C"  float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m1307775145_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m_755764966_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m_1147951491_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m_1998127880_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, bool ___showBoundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m_427456066_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C"  Texture2D_t_485082364_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m1012934386_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m598952670_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, Texture2D_t_485082364_0 * ___previewImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_561484762_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m_1681767427_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1676525507_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_1030909171_0 (ObjectTargetAbstractBehaviour_t_1924484736_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
