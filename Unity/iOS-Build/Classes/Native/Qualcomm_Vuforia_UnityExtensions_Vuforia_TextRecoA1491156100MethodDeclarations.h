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

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t1491156100_0;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t_743256134_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1135066398_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t_1409128319_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilte_255540752.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefab548123771.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C"  bool TextRecoAbstractBehaviour_get_IsInitialized_m908138743_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C"  void TextRecoAbstractBehaviour_Awake_m531103663_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C"  void TextRecoAbstractBehaviour_Start_m_759363764_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C"  void TextRecoAbstractBehaviour_OnEnable_m1130309050_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C"  void TextRecoAbstractBehaviour_OnDisable_m1120779443_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C"  void TextRecoAbstractBehaviour_OnDestroy_m_996655803_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m2085969122_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C"  bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m_1170921835_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StartTextTracker_m352496705_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C"  void TextRecoAbstractBehaviour_StopTextTracker_m827434451_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C"  void TextRecoAbstractBehaviour_SetupWordList_m_1133970033_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C"  void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m1430395833_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, Object_t* ___lostWords, Object_t* ___newWords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m1528182401_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m431063344_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m1929260882_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m_1040163649_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m1944651062_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m1602880349_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m_1314146503_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m1536143416_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m600306287_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m_819621822_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C"  String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m227999567_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m1284176356_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m361789827_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m2007317698_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C"  int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m276412052_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C"  void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m_1110071213_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaInitialized_m1837180073_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C"  void TextRecoAbstractBehaviour_OnVuforiaStarted_m662638870_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C"  void TextRecoAbstractBehaviour_OnTrackablesUpdated_m711347448_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C"  void TextRecoAbstractBehaviour_OnPause_m_1174819208_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C"  void TextRecoAbstractBehaviour__ctor_m293498444_0 (TextRecoAbstractBehaviour_t1491156100_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
