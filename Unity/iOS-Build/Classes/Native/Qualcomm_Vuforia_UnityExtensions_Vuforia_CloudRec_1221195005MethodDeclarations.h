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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t_1221195005_0;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t1630087858_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t_2063400361_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTarg_550965381.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Rectangl_1103401394.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl__ctor_m1854627419_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, String_t* ___name, int32_t ___id, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m588924501_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C"  Vector3_t_725341337_0  CloudRecoImageTargetImpl_GetSize_m_624909426_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl_SetSize_m_408881659_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, Vector3_t_725341337_0  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t1630087858_0 * CloudRecoImageTargetImpl_CreateVirtualButton_m1575669617_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, String_t* ___name, RectangleData_t_1103401394_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t1630087858_0 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m882979142_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C"  Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m_1292702752_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool CloudRecoImageTargetImpl_DestroyVirtualButton_m_1029614975_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, VirtualButton_t1630087858_0 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StartExtendedTracking_m_1282174729_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StopExtendedTracking_m_1708194225_0 (CloudRecoImageTargetImpl_t_1221195005_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
