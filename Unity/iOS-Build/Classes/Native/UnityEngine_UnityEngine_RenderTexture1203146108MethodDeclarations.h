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

// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat321021075.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite9279949.h"

// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C"  RenderTexture_t1203146108_0 * RenderTexture_GetTemporary_m800385162_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern "C"  RenderTexture_t1203146108_0 * RenderTexture_GetTemporary_m52998487_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m_1249006230_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___temp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetWidth_m1030655936_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetHeight_m1940011033_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C"  int32_t RenderTexture_get_width_m1498578543_0 (RenderTexture_t1203146108_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C"  int32_t RenderTexture_get_height_m_284891072_0 (RenderTexture_t1203146108_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1002947377_0 (Object_t * __this /* static, unused */, RenderTexture_t1203146108_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
