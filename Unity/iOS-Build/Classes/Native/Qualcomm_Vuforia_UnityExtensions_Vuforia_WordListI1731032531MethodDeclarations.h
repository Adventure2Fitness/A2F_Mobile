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

// Vuforia.WordListImpl
struct WordListImpl_t1731032531_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUn_792352572.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilte_255540752.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C"  bool WordListImpl_LoadWordListFile_m_1861599093_0 (WordListImpl_t1731032531_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadWordListFile_m1695711510_0 (WordListImpl_t1731032531_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m1535684461_0 (WordListImpl_t1731032531_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  int32_t WordListImpl_AddWordsFromFile_m_22743436_0 (WordListImpl_t1731032531_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C"  bool WordListImpl_AddWord_m2022459362_0 (WordListImpl_t1731032531_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C"  bool WordListImpl_RemoveWord_m1345898951_0 (WordListImpl_t1731032531_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C"  bool WordListImpl_ContainsWord_m1747706700_0 (WordListImpl_t1731032531_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C"  bool WordListImpl_UnloadAllLists_m892049088_0 (WordListImpl_t1731032531_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C"  int32_t WordListImpl_GetFilterMode_m1842534254_0 (WordListImpl_t1731032531_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C"  bool WordListImpl_SetFilterMode_m2127823265_0 (WordListImpl_t1731032531_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C"  bool WordListImpl_LoadFilterListFile_m_750000931_0 (WordListImpl_t1731032531_0 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C"  bool WordListImpl_LoadFilterListFile_m482488068_0 (WordListImpl_t1731032531_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C"  bool WordListImpl_AddWordToFilterList_m_851857135_0 (WordListImpl_t1731032531_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C"  bool WordListImpl_RemoveWordFromFilterList_m1364112295_0 (WordListImpl_t1731032531_0 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C"  bool WordListImpl_ClearFilterList_m_977207240_0 (WordListImpl_t1731032531_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C"  int32_t WordListImpl_GetFilterListWordCount_m1758105824_0 (WordListImpl_t1731032531_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C"  String_t* WordListImpl_GetFilterListWord_m1551852453_0 (WordListImpl_t1731032531_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C"  void WordListImpl__ctor_m372914467_0 (WordListImpl_t1731032531_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
