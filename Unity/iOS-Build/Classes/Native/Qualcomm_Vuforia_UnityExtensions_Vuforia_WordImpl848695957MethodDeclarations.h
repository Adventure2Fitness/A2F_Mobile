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

// Vuforia.WordImpl
struct WordImpl_t848695957_0;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t1687075568_0;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t488185392_0;
// Vuforia.ImageImpl
struct ImageImpl_t_1208313552_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaM_1191957063.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C"  void WordImpl__ctor_m_2116255966_0 (WordImpl_t848695957_0 * __this, int32_t ___id, String_t* ___text, Vector2_t_725341338_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C"  String_t* WordImpl_get_StringValue_m_323616141_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C"  Vector2_t_725341338_0  WordImpl_get_Size_m1114667944_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C"  Image_t1687075568_0 * WordImpl_GetLetterMask_m111053987_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C"  RectangleDataU5BU5D_t488185392_0* WordImpl_GetLetterBoundingBoxes_m_819509760_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C"  void WordImpl_InitImageHeader_m_1809612201_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C"  void WordImpl_CreateLetterMask_m1051299025_0 (WordImpl_t848695957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void WordImpl_SetImageValues_m_161061919_0 (Object_t * __this /* static, unused */, ImageHeaderData_t_1191957063_0  ___imageHeader, ImageImpl_t_1208313552_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void WordImpl_AllocateImage_m_1843524186_0 (Object_t * __this /* static, unused */, ImageImpl_t_1208313552_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
