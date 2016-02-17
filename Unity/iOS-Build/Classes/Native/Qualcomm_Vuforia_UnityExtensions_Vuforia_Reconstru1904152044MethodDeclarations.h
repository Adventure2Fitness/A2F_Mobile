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

// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t1904152044_0;
// Vuforia.Reconstruction
struct Reconstruction_t246108303_0;
// Vuforia.ISmartTerrainEventHandler
struct ISmartTerrainEventHandler_t_718860998_0;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t_1704757565_0;
// System.Action`1<Vuforia.Prop>
struct Action_1_t_599718662_0;
// System.Action`1<Vuforia.Surface>
struct Action_1_t224092434_0;
// Vuforia.PropAbstractBehaviour
struct PropAbstractBehaviour_t394495277_0;
// Vuforia.Prop
struct Prop_t_222459090_0;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t_1767995943_0;
// Vuforia.Surface
struct Surface_t_1688212222_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop>
struct IEnumerable_1_t1128688613_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface>
struct IEnumerable_1_t_1157689785_0;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t_1425401844_0;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t_311746688_0;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t_365539512_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t377172206_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;
// System.Collections.Generic.List`1<Vuforia.Prop>
struct List_1_t_95910638_0;
// System.Collections.Generic.List`1<Vuforia.Surface>
struct List_1_t_1741764102_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMan699409136.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::get_Reconstruction()
extern "C"  Object_t * ReconstructionAbstractBehaviour_get_Reconstruction_m_1915613112_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Start()
extern "C"  void ReconstructionAbstractBehaviour_Start_m1205861668_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnDrawGizmos()
extern "C"  void ReconstructionAbstractBehaviour_OnDrawGizmos_m1803189372_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSmartTerrainEventHandler_m_981450694_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::UnregisterSmartTerrainEventHandler(Vuforia.ISmartTerrainEventHandler)
extern "C"  bool ReconstructionAbstractBehaviour_UnregisterSmartTerrainEventHandler_m_1349435411_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterInitializedCallback_m1676354968_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_1704757565_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterInitializedCallback(System.Action`1<Vuforia.SmartTerrainInitializationInfo>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterInitializedCallback_m_466761231_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_1704757565_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m958985328_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropCreatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m_406858231_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropUpdatedCallback_m1264778045_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropUpdatedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropUpdatedCallback_m_101065514_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterPropDeletedCallback_m32718367_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterPropDeletedCallback(System.Action`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterPropDeletedCallback_m_1333125192_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t_599718662_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m553006512_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceCreatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m_21380983_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceUpdatedCallback_m798203843_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceUpdatedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceUpdatedCallback_m223816348_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::RegisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_RegisterSurfaceDeletedCallback_m1298848161_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterSurfaceDeletedCallback(System.Action`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterSurfaceDeletedCallback_m724460666_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Action_1_t224092434_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateProp(Vuforia.PropAbstractBehaviour,Vuforia.Prop)
extern "C"  PropAbstractBehaviour_t394495277_0 * ReconstructionAbstractBehaviour_AssociateProp_m_345335013_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, PropAbstractBehaviour_t394495277_0 * ___templateBehaviour, Object_t * ___newProp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::AssociateSurface(Vuforia.SurfaceAbstractBehaviour,Vuforia.Surface)
extern "C"  SurfaceAbstractBehaviour_t_1767995943_0 * ReconstructionAbstractBehaviour_AssociateSurface_m2064989829_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, SurfaceAbstractBehaviour_t_1767995943_0 * ___templateBehaviour, Object_t * ___newSurface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::GetActiveProps()
extern "C"  Object_t* ReconstructionAbstractBehaviour_GetActiveProps_m1029168549_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetPropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetPropBehaviour_m1173776014_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___prop, PropAbstractBehaviour_t394495277_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::GetActiveSurfaces()
extern "C"  Object_t* ReconstructionAbstractBehaviour_GetActiveSurfaces_m_1630577135_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::TryGetSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour&)
extern "C"  bool ReconstructionAbstractBehaviour_TryGetSurfaceBehaviour_m_1012925902_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___surface, SurfaceAbstractBehaviour_t_1767995943_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Initialize(Vuforia.Reconstruction)
extern "C"  void ReconstructionAbstractBehaviour_Initialize_m261649856_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Deinitialize()
extern "C"  void ReconstructionAbstractBehaviour_Deinitialize_m261005361_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSmartTerrainData_m_1703655582_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1425401844_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_311746688_0* ___updatedSurfaces, PropDataU5BU5D_t_365539512_0* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::SetBehavioursToNotFound()
extern "C"  void ReconstructionAbstractBehaviour_SetBehavioursToNotFound_m244639236_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::ClearOnReset()
extern "C"  void ReconstructionAbstractBehaviour_ClearOnReset_m269311107_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::OnReconstructionRemoved()
extern "C"  void ReconstructionAbstractBehaviour_OnReconstructionRemoved_m_365820833_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.PropAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiatePropBehaviour(Vuforia.PropAbstractBehaviour)
extern "C"  PropAbstractBehaviour_t394495277_0 * ReconstructionAbstractBehaviour_InstantiatePropBehaviour_m947540029_0 (Object_t * __this /* static, unused */, PropAbstractBehaviour_t394495277_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociatePropBehaviour(Vuforia.Prop,Vuforia.PropAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociatePropBehaviour_m_1541148019_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___trackable, PropAbstractBehaviour_t394495277_0 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::InstantiateSurfaceBehaviour(Vuforia.SurfaceAbstractBehaviour)
extern "C"  SurfaceAbstractBehaviour_t_1767995943_0 * ReconstructionAbstractBehaviour_InstantiateSurfaceBehaviour_m_554348003_0 (Object_t * __this /* static, unused */, SurfaceAbstractBehaviour_t_1767995943_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::AssociateSurfaceBehaviour(Vuforia.Surface,Vuforia.SurfaceAbstractBehaviour)
extern "C"  void ReconstructionAbstractBehaviour_AssociateSurfaceBehaviour_m360134699_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t * ___trackable, SurfaceAbstractBehaviour_t_1767995943_0 * ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.SmartTerrainTrackable Vuforia.ReconstructionAbstractBehaviour::FindSmartTerrainTrackable(System.Int32)
extern "C"  Object_t * ReconstructionAbstractBehaviour_FindSmartTerrainTrackable_m_1621357255_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifySurfaceEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>,System.Collections.Generic.IEnumerable`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_NotifySurfaceEventHandlers_m1030891609_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t* ___newSurfaces, Object_t* ___updatedSurfaces, Object_t* ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::NotifyPropEventHandlers(System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>,System.Collections.Generic.IEnumerable`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_NotifyPropEventHandlers_m_2106993741_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Object_t* ___newProps, Object_t* ___updatedProps, Object_t* ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.ReconstructionAbstractBehaviour::UpdateMesh(Vuforia.VuforiaManagerImpl/MeshData,UnityEngine.Mesh,System.Boolean)
extern "C"  Mesh_t_982089418_0 * ReconstructionAbstractBehaviour_UpdateMesh_m_107108455_0 (Object_t * __this /* static, unused */, MeshData_t699409136_0  ___meshData, Mesh_t_982089418_0 * ___oldMesh, bool ___setNormalsUpwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.ReconstructionAbstractBehaviour::ReadMeshBoundaries(System.Int32,System.IntPtr)
extern "C"  Int32U5BU5D_t1872284309_0* ReconstructionAbstractBehaviour_ReadMeshBoundaries_m_554512666_0 (Object_t * __this /* static, unused */, int32_t ___numBoundaries, IntPtr_t ___boundaryArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedProps(System.Collections.Generic.List`1<Vuforia.Prop>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedProps_m1493024014_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, List_1_t_95910638_0 * ___deletedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UnregisterDeletedSurfaces(System.Collections.Generic.List`1<Vuforia.Surface>)
extern "C"  void ReconstructionAbstractBehaviour_UnregisterDeletedSurfaces_m1414197066_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, List_1_t_1741764102_0 * ___deletedSurfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateSurfaces(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateSurfaces_m565213325_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1425401844_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_311746688_0* ___updatedSurfaceData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::UpdateProps(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void ReconstructionAbstractBehaviour_UpdateProps_m1845822147_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1425401844_0* ___smartTerrainRevisions, PropDataU5BU5D_t_365539512_0* ___updatedPropData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_InitializedInEditor()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_InitializedInEditor_m_964604942_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetInitializedInEditor(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetInitializedInEditor_m739613564_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtentEnabled(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtentEnabled_m_544268271_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, bool ___maxExtendEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtentEnabled()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtentEnabled_m_1618666355_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetMaximumExtent(UnityEngine.Rect)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetMaximumExtent_m963697550_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, Rect_t_981940947_0  ___rectangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_MaximumExtent()
extern "C"  Rect_t_981940947_0  ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_MaximumExtent_m_409709016_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetAutomaticStart(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetAutomaticStart_m1371367441_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, bool ___autoStart, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_AutomaticStart()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_AutomaticStart_m637040333_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshUpdates(System.Boolean)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshUpdates_m2001536532_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, bool ___navMeshUpdates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshUpdates()
extern "C"  bool ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshUpdates_m_2019457520_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.SetNavMeshPadding(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_SetNavMeshPadding_m1218148167_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, float ___navMeshPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.get_NavMeshPadding()
extern "C"  float ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_get_NavMeshPadding_m_1639525065_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorMeshesByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorMeshesByFactor_m_1107107918_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::Vuforia.IEditorReconstructionBehaviour.ScaleEditorPropPositionsByFactor(System.Single)
extern "C"  void ReconstructionAbstractBehaviour_Vuforia_IEditorReconstructionBehaviour_ScaleEditorPropPositionsByFactor_m883409940_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionAbstractBehaviour::.ctor()
extern "C"  void ReconstructionAbstractBehaviour__ctor_m_2036243420_0 (ReconstructionAbstractBehaviour_t1904152044_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
