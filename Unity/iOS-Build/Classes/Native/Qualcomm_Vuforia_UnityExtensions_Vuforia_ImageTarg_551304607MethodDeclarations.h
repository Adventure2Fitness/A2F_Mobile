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

// Vuforia.ImageTargetImpl
struct ImageTargetImpl_t_551304607_0;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t1608203437_0;
// Vuforia.VirtualButton
struct VirtualButton_t1630087858_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t_2063400361_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTarg_550965381.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Rectangl_1103401394.h"

// System.Void Vuforia.ImageTargetImpl::.ctor(System.String,System.Int32,Vuforia.ImageTargetType,Vuforia.DataSet)
extern "C"  void ImageTargetImpl__ctor_m_1308375274_0 (ImageTargetImpl_t_551304607_0 * __this, String_t* ___name, int32_t ___id, int32_t ___imageTargetType, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t ImageTargetImpl_get_ImageTargetType_m102237635_0 (ImageTargetImpl_t_551304607_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t1630087858_0 * ImageTargetImpl_CreateVirtualButton_m_1501660591_0 (ImageTargetImpl_t_551304607_0 * __this, String_t* ___name, RectangleData_t_1103401394_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t1630087858_0 * ImageTargetImpl_GetVirtualButtonByName_m_1607552410_0 (ImageTargetImpl_t_551304607_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.ImageTargetImpl::GetVirtualButtons()
extern "C"  Object_t* ImageTargetImpl_GetVirtualButtons_m568114070_0 (ImageTargetImpl_t_551304607_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_DestroyVirtualButton_m_359529675_0 (ImageTargetImpl_t_551304607_0 * __this, VirtualButton_t1630087858_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.ImageTargetImpl::CreateNewVirtualButtonInNative(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t1630087858_0 * ImageTargetImpl_CreateNewVirtualButtonInNative_m342129337_0 (ImageTargetImpl_t_551304607_0 * __this, String_t* ___name, RectangleData_t_1103401394_0  ___rectangleData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetImpl::UnregisterVirtualButtonInNative(Vuforia.VirtualButton)
extern "C"  bool ImageTargetImpl_UnregisterVirtualButtonInNative_m_2023626741_0 (ImageTargetImpl_t_551304607_0 * __this, VirtualButton_t1630087858_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetImpl::CreateVirtualButtonsFromNative()
extern "C"  void ImageTargetImpl_CreateVirtualButtonsFromNative_m_1216568216_0 (ImageTargetImpl_t_551304607_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
