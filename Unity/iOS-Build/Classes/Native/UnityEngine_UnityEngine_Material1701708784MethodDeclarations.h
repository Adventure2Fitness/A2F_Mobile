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

// UnityEngine.Material
struct Material_t1701708784_0;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t1278883054_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Material::.ctor(System.String)
extern "C"  void Material__ctor_m1122544796_0 (Material_t1701708784_0 * __this, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m_1609057654_0 (Material_t1701708784_0 * __this, Shader_t1278883054_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t1278883054_0 * Material_get_shader_m_1413121793_0 (Material_t1701708784_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C"  void Material_set_mainTexture_m_1178528859_0 (Material_t1701708784_0 * __this, Texture_t1814018354_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1833724755_0 (Material_t1701708784_0 * __this, String_t* ___propertyName, Texture_t1814018354_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m_447710544_0 (Material_t1701708784_0 * __this, int32_t ___nameID, Texture_t1814018354_0 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m_53142654_0 (Material_t1701708784_0 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithString(UnityEngine.Material,System.String)
extern "C"  void Material_Internal_CreateWithString_m_908879401_0 (Object_t * __this /* static, unused */, Material_t1701708784_0 * ___mono, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m701341915_0 (Object_t * __this /* static, unused */, Material_t1701708784_0 * ___mono, Shader_t1278883054_0 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
