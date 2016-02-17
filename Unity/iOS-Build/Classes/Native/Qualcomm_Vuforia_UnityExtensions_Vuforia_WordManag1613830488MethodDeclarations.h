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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t1613830488_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t_1409128319_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1135066398_0;
// Vuforia.Word
struct Word_t_222253355_0;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t_353024922_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t_2069076957_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t_1740383825_0;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t_332227092_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t1569569692_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t1939412863_0;
// Vuforia.WordResult
struct WordResult_t_196595886_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefab548123771.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C"  Object_t* WordManagerImpl_GetActiveWordResults_m2121799625_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C"  Object_t* WordManagerImpl_GetNewWords_m_1420613688_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C"  Object_t* WordManagerImpl_GetLostWords_m_1264689947_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C"  bool WordManagerImpl_TryGetWordBehaviour_m1713680897_0 (WordManagerImpl_t1613830488_0 * __this, Object_t * ___word, WordAbstractBehaviour_t_353024922_0 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C"  Object_t* WordManagerImpl_GetTrackableBehaviours_m1495298272_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C"  void WordManagerImpl_DestroyWordBehaviour_m89618613_0 (WordManagerImpl_t1613830488_0 * __this, WordAbstractBehaviour_t_353024922_0 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m_1882221487_0 (WordManagerImpl_t1613830488_0 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C"  void WordManagerImpl_InitializeWordBehaviourTemplates_m_1265123998_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C"  void WordManagerImpl_RemoveDestroyedTrackables_m12135385_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C"  void WordManagerImpl_UpdateWords_m_1593015642_0 (WordManagerImpl_t1613830488_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, WordDataU5BU5D_t_1740383825_0* ___newWordData, WordResultDataU5BU5D_t_332227092_0* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C"  void WordManagerImpl_SetWordBehavioursToNotFound_m803708226_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C"  void WordManagerImpl_CleanupWordBehaviours_m779155482_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWords_m1811488495_0 (WordManagerImpl_t1613830488_0 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C"  void WordManagerImpl_UpdateWordResultPoses_m918015267_0 (WordManagerImpl_t1613830488_0 * __this, Transform_t1584899523_0 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C"  void WordManagerImpl_AssociateWordResultsWithBehaviours_m935457334_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C"  void WordManagerImpl_UnregisterLostWords_m2054062943_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C"  void WordManagerImpl_UpdateWordBehaviourPoses_m94973476_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C"  WordAbstractBehaviour_t_353024922_0 * WordManagerImpl_AssociateWordBehaviour_m189434944_0 (WordManagerImpl_t1613830488_0 * __this, WordResult_t_196595886_0 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t_353024922_0 * WordManagerImpl_AssociateWordBehaviour_m_1486303769_0 (WordManagerImpl_t1613830488_0 * __this, WordResult_t_196595886_0 * ___wordResult, WordAbstractBehaviour_t_353024922_0 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C"  WordAbstractBehaviour_t_353024922_0 * WordManagerImpl_InstantiateWordBehaviour_m2060413126_0 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t_353024922_0 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C"  WordAbstractBehaviour_t_353024922_0 * WordManagerImpl_CreateWordBehaviour_m_1625407973_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C"  void WordManagerImpl__ctor_m1595616312_0 (WordManagerImpl_t1613830488_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
