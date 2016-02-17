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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t_428219033_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t_1269200048_0;
// Vuforia.WordManager
struct WordManager_t_2061791464_0;
// Vuforia.Trackable
struct Trackable_t400369722_0;
// Vuforia.DataSet
struct DataSet_t1608203437_0;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t_1571999325_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t1696112666_0;
// Vuforia.ImageTarget
struct ImageTarget_t_1244257119_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1620765686_0;
// Vuforia.Marker
struct Marker_t863679813_0;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t_1575672693_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t_661553739_0;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t_1740383825_0;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t_332227092_0;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t_1543273653_0;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t_1380582788_0;
// Vuforia.MultiTarget
struct MultiTarget_t615346687_0;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t1183769033_0;
// Vuforia.CylinderTarget
struct CylinderTarget_t1042969362_0;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t_1924484736_0;
// Vuforia.ObjectTarget
struct ObjectTarget_t_247709061_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1915204500.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C"  Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m_1163477832_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C"  Object_t* StateManagerImpl_GetTrackableBehaviours_m_295340642_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C"  WordManager_t_2061791464_0 * StateManagerImpl_GetWordManager_m1343476670_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m294103510_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C"  void StateManagerImpl_AssociateMarkerBehaviours_m_365131621_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m1522447877_0 (StateManagerImpl_t_428219033_0 * __this, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C"  void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m2142786405_0 (StateManagerImpl_t_428219033_0 * __this, TrackableBehaviour_t_1571999325_0 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C"  void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m560158145_0 (StateManagerImpl_t_428219033_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C"  void StateManagerImpl_RemoveDestroyedTrackables_m342080688_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C"  void StateManagerImpl_ClearTrackableBehaviours_m_68826589_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m_1357021408_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m_2072735648_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C"  MarkerAbstractBehaviour_t1620765686_0 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m501860521_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C"  MarkerAbstractBehaviour_t1620765686_0 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m1988440497_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C"  void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m_1860255227_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C"  void StateManagerImpl_EnableTrackableBehavioursForTrackable_m127100229_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C"  void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m1963257034_0 (StateManagerImpl_t_428219033_0 * __this, LinkedList_1_t_1575672693_0 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C"  void StateManagerImpl_UpdateCameraPose_m_735022905_0 (StateManagerImpl_t_428219033_0 * __this, Transform_t1584899523_0 * ___cameraTransform, Transform_t1584899523_0 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t_661553739_0* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C"  void StateManagerImpl_UpdateTrackablePoses_m1614076878_0 (StateManagerImpl_t_428219033_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, TrackableResultDataU5BU5D_t_661553739_0* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C"  void StateManagerImpl_UpdateVirtualButtons_m1195621459_0 (StateManagerImpl_t_428219033_0 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void StateManagerImpl_UpdateWords_m_416548433_0 (StateManagerImpl_t_428219033_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, WordDataU5BU5D_t_1740383825_0* ___wordData, WordResultDataU5BU5D_t_332227092_0* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C"  void StateManagerImpl_AssociateVirtualButtonBehaviours_m_1252587202_0 (StateManagerImpl_t_428219033_0 * __this, VirtualButtonAbstractBehaviourU5BU5D_t_1543273653_0* ___vbBehaviours, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C"  void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m766241420_0 (StateManagerImpl_t_428219033_0 * __this, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * StateManagerImpl_CreateImageTargetBehaviour_m2144695222_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C"  MultiTargetAbstractBehaviour_t_1380582788_0 * StateManagerImpl_CreateMultiTargetBehaviour_m1044717272_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C"  CylinderTargetAbstractBehaviour_t1183769033_0 * StateManagerImpl_CreateCylinderTargetBehaviour_m_1755486583_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C"  ObjectTargetAbstractBehaviour_t_1924484736_0 * StateManagerImpl_CreateObjectTargetBehaviour_m258530670_0 (StateManagerImpl_t_428219033_0 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C"  void StateManagerImpl_InitializeMarkerBehaviour_m_1451378237_0 (StateManagerImpl_t_428219033_0 * __this, MarkerAbstractBehaviour_t1620765686_0 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionCamera_m1094944102_0 (StateManagerImpl_t_428219033_0 * __this, TrackableBehaviour_t_1571999325_0 * ___trackableBehaviour, Transform_t1584899523_0 * ___cameraTransform, Transform_t1584899523_0 * ___parentTransformToUpdate, PoseData_t1915204500_0  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t_725341337_0  StateManagerImpl_ExtractTranslationFromMatrix_m1188993424_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t1989680039_0  StateManagerImpl_ExtractRotationFromMatrix_m467398563_0 (Object_t * __this /* static, unused */, Matrix4x4_t1577636070_0  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C"  void StateManagerImpl_PositionTrackable_m_429602155_0 (StateManagerImpl_t_428219033_0 * __this, TrackableBehaviour_t_1571999325_0 * ___trackableBehaviour, Transform_t1584899523_0 * ___arCameraTransform, PoseData_t1915204500_0  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C"  void StateManagerImpl__ctor_m741297807_0 (StateManagerImpl_t_428219033_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
