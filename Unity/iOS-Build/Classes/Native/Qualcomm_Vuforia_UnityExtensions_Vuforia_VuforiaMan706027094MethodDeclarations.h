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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t706027094_0;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t979194516_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t_428219033_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAb_883970177.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1239377053.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaManagerImpl_set_WorldCenterMode_m_164741589_0 (VuforiaManagerImpl_t706027094_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C"  int32_t VuforiaManagerImpl_get_WorldCenterMode_m1799650250_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C"  void VuforiaManagerImpl_set_WorldCenter_m_836549449_0 (VuforiaManagerImpl_t706027094_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C"  Object_t * VuforiaManagerImpl_get_WorldCenter_m_413430756_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ARCameraTransform_m457765414_0 (VuforiaManagerImpl_t706027094_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_ARCameraTransform_m_889611699_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_CentralAnchorPoint_m1065530230_0 (VuforiaManagerImpl_t706027094_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_CentralAnchorPoint_m_371554287_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaManagerImpl_set_ParentAnchorPoint_m228149355_0 (VuforiaManagerImpl_t706027094_0 * __this, Transform_t1584899523_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaManagerImpl_get_ParentAnchorPoint_m_1038466328_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C"  bool VuforiaManagerImpl_get_Initialized_m612808861_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C"  int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m441069165_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C"  void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m_1355359384_0 (VuforiaManagerImpl_t706027094_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C"  bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m_1654010119_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C"  bool VuforiaManagerImpl_Init_m917939136_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C"  void VuforiaManagerImpl_Deinit_m2048069525_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C"  bool VuforiaManagerImpl_Update_m_292768527_0 (VuforiaManagerImpl_t706027094_0 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C"  void VuforiaManagerImpl_StartRendering_m561019278_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C"  void VuforiaManagerImpl_FinishRendering_m_1149725801_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C"  void VuforiaManagerImpl_Pause_m_1695198773_0 (VuforiaManagerImpl_t706027094_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C"  void VuforiaManagerImpl_SetStatesToDiscard_m_1648904317_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C"  void VuforiaManagerImpl_InitializeTrackableContainer_m_451957407_0 (VuforiaManagerImpl_t706027094_0 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateTrackers_m1025489710_0 (VuforiaManagerImpl_t706027094_0 * __this, FrameState_t1239377053_0  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C"  void VuforiaManagerImpl_UpdateSmartTerrain_m_972664959_0 (VuforiaManagerImpl_t706027094_0 * __this, FrameState_t1239377053_0  ___frameState, StateManagerImpl_t_428219033_0 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C"  void VuforiaManagerImpl_UpdateTrackablesEditor_m1415176616_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C"  void VuforiaManagerImpl_UpdateWordTrackables_m_1826663631_0 (VuforiaManagerImpl_t706027094_0 * __this, FrameState_t1239377053_0  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C"  void VuforiaManagerImpl_UpdateImageContainer_m896342099_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C"  void VuforiaManagerImpl_UpdateCameraFrame_m1632031837_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C"  void VuforiaManagerImpl_InjectCameraFrame_m_489297771_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C"  void VuforiaManagerImpl__ctor_m306190784_0 (VuforiaManagerImpl_t706027094_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
