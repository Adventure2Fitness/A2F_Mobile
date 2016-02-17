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

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmoni1017025914.h"
#include "UnityEngine_UnityEngine_Color_388944582.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C"  void SphericalHarmonicsL2_Clear_m1586128327_0 (SphericalHarmonicsL2_t1017025914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_ClearInternal_m860831504_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m_164676657_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C"  void SphericalHarmonicsL2_AddAmbientLight_m_1345240339_0 (SphericalHarmonicsL2_t1017025914_0 * __this, Color_t_388944582_0  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_AddAmbientLightInternal_m_1958224482_0 (Object_t * __this /* static, unused */, Color_t_388944582_0  ___color, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m3069739_0 (Object_t * __this /* static, unused */, Color_t_388944582_0 * ___color, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C"  void SphericalHarmonicsL2_AddDirectionalLight_m161815543_0 (SphericalHarmonicsL2_t1017025914_0 * __this, Vector3_t_725341337_0  ___direction, Color_t_388944582_0  ___color, float ___intensity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_AddDirectionalLightInternal_m256581187_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___direction, Color_t_388944582_0  ___color, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C"  void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m273059906_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0 * ___direction, Color_t_388944582_0 * ___color, SphericalHarmonicsL2_t1017025914_0 * ___sh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern "C"  float SphericalHarmonicsL2_get_Item_m250475286_0 (SphericalHarmonicsL2_t1017025914_0 * __this, int32_t ___rgb, int32_t ___coefficient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern "C"  void SphericalHarmonicsL2_set_Item_m632567571_0 (SphericalHarmonicsL2_t1017025914_0 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C"  int32_t SphericalHarmonicsL2_GetHashCode_m_184170293_0 (SphericalHarmonicsL2_t1017025914_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern "C"  bool SphericalHarmonicsL2_Equals_m_1770162073_0 (SphericalHarmonicsL2_t1017025914_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern "C"  SphericalHarmonicsL2_t1017025914_0  SphericalHarmonicsL2_op_Multiply_m_1770596014_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0  ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C"  SphericalHarmonicsL2_t1017025914_0  SphericalHarmonicsL2_op_Multiply_m1344414440_0 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t1017025914_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C"  SphericalHarmonicsL2_t1017025914_0  SphericalHarmonicsL2_op_Addition_m1377129401_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0  ___lhs, SphericalHarmonicsL2_t1017025914_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C"  bool SphericalHarmonicsL2_op_Equality_m_1124603430_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0  ___lhs, SphericalHarmonicsL2_t1017025914_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C"  bool SphericalHarmonicsL2_op_Inequality_m_1159217067_0 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1017025914_0  ___lhs, SphericalHarmonicsL2_t1017025914_0  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
