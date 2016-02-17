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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t_1386961118_0;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t18164966_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t1696112666_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t_700486392_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFin1220484436.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFind352027771.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFin1663530920.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFin2093542787.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C"  void TargetFinderImpl__ctor_m1250119476_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C"  void TargetFinderImpl_Finalize_m750392494_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C"  bool TargetFinderImpl_StartInit_m21150598_0 (TargetFinderImpl_t_1386961118_0 * __this, String_t* ___userAuth, String_t* ___secretAuth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C"  int32_t TargetFinderImpl_GetInitState_m_1048611877_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C"  bool TargetFinderImpl_Deinit_m1093234637_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C"  bool TargetFinderImpl_StartRecognition_m_323964431_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C"  bool TargetFinderImpl_Stop_m1548515646_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C"  void TargetFinderImpl_SetUIScanlineColor_m1319935546_0 (TargetFinderImpl_t_1386961118_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C"  void TargetFinderImpl_SetUIPointColor_m_1503689749_0 (TargetFinderImpl_t_1386961118_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C"  bool TargetFinderImpl_IsRequesting_m_1012340935_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C"  int32_t TargetFinderImpl_Update_m_899907278_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C"  int32_t TargetFinderImpl_Update_m_727312519_0 (TargetFinderImpl_t_1386961118_0 * __this, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C"  Object_t* TargetFinderImpl_GetResults_m_1693659234_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * TargetFinderImpl_EnableTracking_m_2041758552_0 (TargetFinderImpl_t_1386961118_0 * __this, TargetSearchResult_t2093542787_0  ___result, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * TargetFinderImpl_EnableTracking_m544918674_0 (TargetFinderImpl_t_1386961118_0 * __this, TargetSearchResult_t2093542787_0  ___result, GameObject_t_184308134_0 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C"  void TargetFinderImpl_ClearTrackables_m_1460998876_0 (TargetFinderImpl_t_1386961118_0 * __this, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C"  Object_t* TargetFinderImpl_GetImageTargets_m_1218102333_0 (TargetFinderImpl_t_1386961118_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
