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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t_1571999325_0;
// Vuforia.Trackable
struct Trackable_t400369722_0;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t_38965449_0;
// UnityEngine.Renderer
struct Renderer_t907796364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableB629202430.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C"  int32_t TrackableBehaviour_get_CurrentStatus_m_2124291939_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C"  Object_t * TrackableBehaviour_get_Trackable_m_356110029_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C"  String_t* TrackableBehaviour_get_TrackableName_m2076218645_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  void TrackableBehaviour_RegisterTrackableEventHandler_m1688554955_0 (TrackableBehaviour_t_1571999325_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C"  bool TrackableBehaviour_UnregisterTrackableEventHandler_m2065570854_0 (TrackableBehaviour_t_1571999325_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C"  void TrackableBehaviour_OnTrackerUpdate_m439316226_0 (TrackableBehaviour_t_1571999325_0 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C"  void TrackableBehaviour_OnFrameIndexUpdate_m558666607_0 (TrackableBehaviour_t_1571999325_0 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C"  void TrackableBehaviour_Start_m130221587_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C"  void TrackableBehaviour_OnDisable_m1939406842_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m_810516375_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C"  bool TrackableBehaviour_CorrectScaleImpl_m_564737987_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m991159264_0 (TrackableBehaviour_t_1571999325_0 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C"  Vector3_t_725341337_0  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m_981723915_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m_1003291361_0 (TrackableBehaviour_t_1571999325_0 * __this, Vector3_t_725341337_0  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m_1406420671_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m749500207_0 (TrackableBehaviour_t_1571999325_0 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m1910708182_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m1008827204_0 (TrackableBehaviour_t_1571999325_0 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m_1096471730_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C"  Renderer_t907796364_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m_2099669405_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C"  void TrackableBehaviour__ctor_m1183083795_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C"  bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m_1650416367_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C"  void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m2146826880_0 (TrackableBehaviour_t_1571999325_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m_11804982_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m_921037468_0 (TrackableBehaviour_t_1571999325_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
