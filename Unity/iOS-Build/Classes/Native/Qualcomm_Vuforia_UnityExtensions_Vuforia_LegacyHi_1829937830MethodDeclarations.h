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

// Vuforia.LegacyHideExcessAreaClipping
struct LegacyHideExcessAreaClipping_t_1829937830_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t1278883054_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// UnityEngine.GameObject Vuforia.LegacyHideExcessAreaClipping::CreateQuad(UnityEngine.GameObject,System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Int32)
extern "C"  GameObject_t_184308134_0 * LegacyHideExcessAreaClipping_CreateQuad_m_1926290862_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, GameObject_t_184308134_0 * ___parent, String_t* ___name, Vector3_t_725341337_0  ___position, Quaternion_t1989680039_0  ___rotation, Vector3_t_725341337_0  ___scale, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnVuforiaStarted()
extern "C"  void LegacyHideExcessAreaClipping_OnVuforiaStarted_m1967721958_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::HasCalculationDataChanged()
extern "C"  bool LegacyHideExcessAreaClipping_HasCalculationDataChanged_m1418740489_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::.ctor(UnityEngine.GameObject,UnityEngine.Shader)
extern "C"  void LegacyHideExcessAreaClipping__ctor_m_283510666_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, GameObject_t_184308134_0 * ___gameObject, Shader_t1278883054_0 * ___matteShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::SetPlanesRenderingActive(System.Boolean)
extern "C"  void LegacyHideExcessAreaClipping_SetPlanesRenderingActive_m_1642907368_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, bool ___activeflag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.LegacyHideExcessAreaClipping::IsPlanesRenderingActive()
extern "C"  bool LegacyHideExcessAreaClipping_IsPlanesRenderingActive_m_1215227009_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPreCull()
extern "C"  void LegacyHideExcessAreaClipping_OnPreCull_m_1527870864_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnPostRender()
extern "C"  void LegacyHideExcessAreaClipping_OnPostRender_m_1435574371_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Start()
extern "C"  void LegacyHideExcessAreaClipping_Start_m_1789858692_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDisable()
extern "C"  void LegacyHideExcessAreaClipping_OnDisable_m562792931_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnEnable()
extern "C"  void LegacyHideExcessAreaClipping_OnEnable_m2082140810_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::OnDestroy()
extern "C"  void LegacyHideExcessAreaClipping_OnDestroy_m_1554642315_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.LegacyHideExcessAreaClipping::Update(UnityEngine.Vector3)
extern "C"  void LegacyHideExcessAreaClipping_Update_m284433704_0 (LegacyHideExcessAreaClipping_t_1829937830_0 * __this, Vector3_t_725341337_0  ___planeOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
