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

// Vuforia.ImageImpl
struct ImageImpl_t_1208313552_0;
// System.Byte[]
struct ByteU5BU5D_t_1238178395_0;
// UnityEngine.Texture2D
struct Texture2D_t_485082364_0;
// UnityEngine.Color32[]
struct Color32U5BU5D_t_1782843845_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIX1632791727.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_TextureFormat_865243191.h"

// System.Int32 Vuforia.ImageImpl::get_Width()
extern "C"  int32_t ImageImpl_get_Width_m_302615007_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Width(System.Int32)
extern "C"  void ImageImpl_set_Width_m2136941560_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Height()
extern "C"  int32_t ImageImpl_get_Height_m_287316274_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Height(System.Int32)
extern "C"  void ImageImpl_set_Height_m_1153436199_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Stride()
extern "C"  int32_t ImageImpl_get_Stride_m_1904209920_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Stride(System.Int32)
extern "C"  void ImageImpl_set_Stride_m2088887307_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferWidth()
extern "C"  int32_t ImageImpl_get_BufferWidth_m744072769_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferWidth(System.Int32)
extern "C"  void ImageImpl_set_BufferWidth_m_1709242472_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferHeight()
extern "C"  int32_t ImageImpl_get_BufferHeight_m2095233710_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferHeight(System.Int32)
extern "C"  void ImageImpl_set_BufferHeight_m_126056903_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::get_PixelFormat()
extern "C"  int32_t ImageImpl_get_PixelFormat_m_725933929_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  void ImageImpl_set_PixelFormat_m_440387602_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.ImageImpl::get_Pixels()
extern "C"  ByteU5BU5D_t_1238178395_0* ImageImpl_get_Pixels_m154568944_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Pixels(System.Byte[])
extern "C"  void ImageImpl_set_Pixels_m898393595_0 (ImageImpl_t_1208313552_0 * __this, ByteU5BU5D_t_1238178395_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C"  IntPtr_t ImageImpl_get_UnmanagedData_m855383610_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C"  void ImageImpl_set_UnmanagedData_m_475516061_0 (ImageImpl_t_1208313552_0 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C"  void ImageImpl__ctor_m_328479456_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::Finalize()
extern "C"  void ImageImpl_Finalize_m_1693466814_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageImpl::IsValid()
extern "C"  bool ImageImpl_IsValid_m_1691527268_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyToTexture(UnityEngine.Texture2D)
extern "C"  void ImageImpl_CopyToTexture_m_603546349_0 (ImageImpl_t_1208313552_0 * __this, Texture2D_t_485082364_0 * ___texture2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C"  void ImageImpl_CopyPixelsFromUnmanagedBuffer_m_435464040_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C"  Color32U5BU5D_t_1782843845_0* ImageImpl_GetPixels32_m_661357274_0 (ImageImpl_t_1208313552_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat Vuforia.ImageImpl::ConvertPixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C"  int32_t ImageImpl_ConvertPixelFormat_m789808742_0 (ImageImpl_t_1208313552_0 * __this, int32_t ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
