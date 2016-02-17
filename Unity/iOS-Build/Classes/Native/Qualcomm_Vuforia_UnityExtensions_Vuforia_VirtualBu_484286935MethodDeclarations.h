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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t_484286935_0;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t1630087858_0;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t_1872400593_0;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t1696112666_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.Renderer
struct Renderer_t907796364_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualBut813683362.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C"  String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m_1012814777_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C"  bool VirtualButtonAbstractBehaviour_get_Pressed_m_1760435272_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C"  bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m1209832638_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C"  bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m_1334256363_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m1258246276_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C"  VirtualButton_t1630087858_0 * VirtualButtonAbstractBehaviour_get_VirtualButton_m_2101297699_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C"  void VirtualButtonAbstractBehaviour__ctor_m_549760307_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  void VirtualButtonAbstractBehaviour_RegisterEventHandler_m_1071446950_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m998096287_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m1051557858_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, Vector2_t_725341338_0 * ___topLeft, Vector2_t_725341338_0 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m1576338072_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m1500849109_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateEnabled_m_533843337_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdatePose_m_1113658627_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m1081254704_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C"  ImageTargetAbstractBehaviour_t1696112666_0 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m683492696_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m_269165131_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C"  int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m55142727_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m1869573027_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C"  Matrix4x4_t1577636070_0  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m_451107240_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m_766006880_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, Matrix4x4_t1577636070_0  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C"  GameObject_t_184308134_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m_1954104526_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m1142081942_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, GameObject_t_184308134_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C"  void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m1785848557_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, VirtualButton_t1630087858_0 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m_1191325127_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, Vector2_t_725341338_0  ___topLeft, Vector2_t_725341338_0  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C"  Renderer_t907796364_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m_39859675_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C"  void VirtualButtonAbstractBehaviour_LateUpdate_m833531814_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C"  void VirtualButtonAbstractBehaviour_OnDisable_m1720875188_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C"  void VirtualButtonAbstractBehaviour_OnDestroy_m_396560058_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool VirtualButtonAbstractBehaviour_Equals_m1219583569_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___vec1, Vector2_t_725341338_0  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C"  bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m385653459_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m_619127614_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C"  Transform_t1584899523_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m_1286893556_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C"  GameObject_t_184308134_0 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m_1982624158_0 (VirtualButtonAbstractBehaviour_t_484286935_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
