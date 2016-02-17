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

// Vuforia.TextureRenderer
struct TextureRenderer_t1727728211_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// UnityEngine.RenderTexture
struct RenderTexture_t1203146108_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRe2008990966.h"

// System.Int32 Vuforia.TextureRenderer::get_Width()
extern "C"  int32_t TextureRenderer_get_Width_m_194892898_0 (TextureRenderer_t1727728211_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextureRenderer::get_Height()
extern "C"  int32_t TextureRenderer_get_Height_m_1242898191_0 (TextureRenderer_t1727728211_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::.ctor(UnityEngine.Texture,System.Int32,Vuforia.VuforiaRenderer/Vec2I)
extern "C"  void TextureRenderer__ctor_m16357981_0 (TextureRenderer_t1727728211_0 * __this, Texture_t1814018354_0 * ___textureToRender, int32_t ___renderTextureLayer, Vec2I_t2008990966_0  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Vuforia.TextureRenderer::Render()
extern "C"  RenderTexture_t1203146108_0 * TextureRenderer_Render_m953647864_0 (TextureRenderer_t1727728211_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextureRenderer::Destroy()
extern "C"  void TextureRenderer_Destroy_m_1909092939_0 (TextureRenderer_t1727728211_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
