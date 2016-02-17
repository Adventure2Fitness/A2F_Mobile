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

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t1696112666_0;
// Vuforia.ImageTarget
struct ImageTarget_t_1244257119_0;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t_1868393526_0;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t_484286935_0;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t_618719222_0;
// Vuforia.VirtualButton
struct VirtualButton_t1630087858_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTarg_550965381.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C"  Object_t * ImageTargetAbstractBehaviour_get_ImageTarget_m_1655866838_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C"  void ImageTargetAbstractBehaviour__ctor_m1753622716_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C"  bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m2075447796_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C"  void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m921047142_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1957789525_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, Vector3_t_725341337_0 * ___boundsMin, Vector3_t_725341337_0 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C"  void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m_120876064_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  VirtualButtonAbstractBehaviour_t_484286935_0 * ImageTargetAbstractBehaviour_CreateVirtualButton_m1768290202_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, String_t* ___vbName, Vector2_t_725341338_0  ___position, Vector2_t_725341338_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C"  VirtualButtonAbstractBehaviour_t_484286935_0 * ImageTargetAbstractBehaviour_CreateVirtualButton_m_971760744_0 (Object_t * __this /* static, unused */, String_t* ___vbName, Vector2_t_725341338_0  ___localScale, GameObject_t_184308134_0 * ___immediateParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C"  Object_t* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m_1464675185_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C"  void ImageTargetAbstractBehaviour_DestroyVirtualButton_m_385746345_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, String_t* ___vbName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C"  Vector2_t_725341338_0  ImageTargetAbstractBehaviour_GetSize_m162691990_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetWidth_m_1989519841_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C"  void ImageTargetAbstractBehaviour_SetHeight_m900442952_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C"  float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m_276923387_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C"  int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m783969387_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m_563663277_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, float ___aspectRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m1749938669_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, int32_t ___imageTargetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m_166882577_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m90072614_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, VirtualButtonAbstractBehaviour_t_484286935_0 * ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m1617671684_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m_715721963_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t_484286935_0 ** ___virtualButtonBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C"  void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m_1029249275_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, VirtualButton_t1630087858_0 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C"  bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m2110661534_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, VirtualButtonAbstractBehaviour_t_484286935_0 * ___newVBB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_1300632902_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1512684905_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m_1732500301_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_2120325669_0 (ImageTargetAbstractBehaviour_t1696112666_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
