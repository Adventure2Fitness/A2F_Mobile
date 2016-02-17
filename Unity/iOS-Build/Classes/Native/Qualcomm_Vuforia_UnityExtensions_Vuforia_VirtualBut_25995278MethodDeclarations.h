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

// Vuforia.VirtualButtonImpl
struct VirtualButtonImpl_t_25995278_0;
// System.String
struct String_t;
// Vuforia.ImageTarget
struct ImageTarget_t_1244257119_0;
// Vuforia.DataSet
struct DataSet_t1608203437_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Rectangl_1103401394.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualBut813683362.h"

// System.String Vuforia.VirtualButtonImpl::get_Name()
extern "C"  String_t* VirtualButtonImpl_get_Name_m_1678569225_0 (VirtualButtonImpl_t_25995278_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VirtualButtonImpl::get_ID()
extern "C"  int32_t VirtualButtonImpl_get_ID_m_546457628_0 (VirtualButtonImpl_t_25995278_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::get_Enabled()
extern "C"  bool VirtualButtonImpl_get_Enabled_m268121088_0 (VirtualButtonImpl_t_25995278_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData Vuforia.VirtualButtonImpl::get_Area()
extern "C"  RectangleData_t_1103401394_0  VirtualButtonImpl_get_Area_m1460056022_0 (VirtualButtonImpl_t_25995278_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonImpl::.ctor(System.String,System.Int32,Vuforia.RectangleData,Vuforia.ImageTarget,Vuforia.DataSet)
extern "C"  void VirtualButtonImpl__ctor_m_540548674_0 (VirtualButtonImpl_t_25995278_0 * __this, String_t* ___name, int32_t ___id, RectangleData_t_1103401394_0  ___area, Object_t * ___imageTarget, DataSet_t1608203437_0 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetArea(Vuforia.RectangleData)
extern "C"  bool VirtualButtonImpl_SetArea_m192096110_0 (VirtualButtonImpl_t_25995278_0 * __this, RectangleData_t_1103401394_0  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetSensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonImpl_SetSensitivity_m_1090460678_0 (VirtualButtonImpl_t_25995278_0 * __this, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonImpl::SetEnabled(System.Boolean)
extern "C"  bool VirtualButtonImpl_SetEnabled_m_676652816_0 (VirtualButtonImpl_t_25995278_0 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
