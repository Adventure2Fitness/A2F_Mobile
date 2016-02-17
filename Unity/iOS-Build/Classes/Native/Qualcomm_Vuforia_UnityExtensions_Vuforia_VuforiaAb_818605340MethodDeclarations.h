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

// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t_818605340_0;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t_1571999325_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// System.String
struct String_t;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t_1095432767_0;
// System.Action
struct Action_t2132293834_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1180387379_0;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t1029437770_0;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t_935930213_0;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t1038097240_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAb_883970177.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDev1100320849.h"

// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SkewFrustum()
extern "C"  bool VuforiaAbstractBehaviour_get_SkewFrustum_m2038042931_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaAbstractBehaviour::get_CameraOffset()
extern "C"  float VuforiaAbstractBehaviour_get_CameraOffset_m_424339777_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_CameraOffset(System.Single)
extern "C"  void VuforiaAbstractBehaviour_set_CameraOffset_m1679036068_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::get_WorldCenterModeSetting()
extern "C"  int32_t VuforiaAbstractBehaviour_get_WorldCenterModeSetting_m_1090655530_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::get_WorldCenter()
extern "C"  TrackableBehaviour_t_1571999325_0 * VuforiaAbstractBehaviour_get_WorldCenter_m_527301603_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_CentralAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaAbstractBehaviour_get_CentralAnchorPoint_m_64722209_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::get_ParentAnchorPoint()
extern "C"  Transform_t1584899523_0 * VuforiaAbstractBehaviour_get_ParentAnchorPoint_m79810138_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C"  int32_t VuforiaAbstractBehaviour_get_VideoBackGroundMirrored_m1743583737_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::get_CameraDeviceMode()
extern "C"  int32_t VuforiaAbstractBehaviour_get_CameraDeviceMode_m_1802016250_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_HasStarted()
extern "C"  bool VuforiaAbstractBehaviour_get_HasStarted_m1086502734_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_IsStereoRendering()
extern "C"  bool VuforiaAbstractBehaviour_get_IsStereoRendering_m_2144357595_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_PrimaryCamera()
extern "C"  Camera_t814710830_0 * VuforiaAbstractBehaviour_get_PrimaryCamera_m612524469_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C"  void VuforiaAbstractBehaviour_set_PrimaryCamera_m1798637470_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Camera_t814710830_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::get_SecondaryCamera()
extern "C"  Camera_t814710830_0 * VuforiaAbstractBehaviour_get_SecondaryCamera_m_934593561_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C"  void VuforiaAbstractBehaviour_set_SecondaryCamera_m444558352_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Camera_t814710830_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::get_AppLicenseKey()
extern "C"  String_t* VuforiaAbstractBehaviour_get_AppLicenseKey_m1324606659_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t VuforiaAbstractBehaviour_get_EyewearUserCalibrationProfileId_m_1214617610_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void VuforiaAbstractBehaviour_set_EyewearUserCalibrationProfileId_m_1962261863_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::get_SynchronizePoseUpdates()
extern "C"  bool VuforiaAbstractBehaviour_get_SynchronizePoseUpdates_m335166672_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::set_SynchronizePoseUpdates(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_set_SynchronizePoseUpdates_m_970222705_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetSkewFrustum(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_SetSkewFrustum_m1319095359_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitErrorCallback_m_1837483070_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_1_t_1095432767_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitErrorCallback_m20288137_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_1_t_1095432767_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaInitializedCallback_m1858113105_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaInitializedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaInitializedCallback_m672186648_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterVuforiaStartedCallback_m_1299130108_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterVuforiaStartedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterVuforiaStartedCallback_m_1157658805_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackablesUpdatedCallback_m_524456610_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m684213687_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_RegisterOnPauseCallback_m2029746474_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_1_t_1180387379_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void VuforiaAbstractBehaviour_UnregisterOnPauseCallback_m1618536579_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_1_t_1180387379_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterBackgroundTextureChangedCallback_m_1597260548_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterBackgroundTextureChangedCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterBackgroundTextureChangedCallback_m883326595_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterTrackerEventHandler_m509369802_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterTrackerEventHandler_m629442277_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  void VuforiaAbstractBehaviour_RegisterVideoBgEventHandler_m_1327703935_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C"  bool VuforiaAbstractBehaviour_UnregisterVideoBgEventHandler_m_1459374436_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenterMode_m1462309114_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C"  void VuforiaAbstractBehaviour_SetWorldCenter_m1389922067_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, TrackableBehaviour_t_1571999325_0 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCentralAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaAbstractBehaviour_SetCentralAnchorPoint_m_1385413819_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Transform_t1584899523_0 * ___anchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetParentAnchorPoint(UnityEngine.Transform)
extern "C"  void VuforiaAbstractBehaviour_SetParentAnchorPoint_m426181308_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Transform_t1584899523_0 * ___parentAnchorPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetCameraOffset(System.Single)
extern "C"  void VuforiaAbstractBehaviour_SetCameraOffset_m2103474625_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C"  void VuforiaAbstractBehaviour_SetAppLicenseKey_m_1533865549_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetPresent(System.String)
extern "C"  bool VuforiaAbstractBehaviour_SetHeadsetPresent_m_2119092061_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::SetHeadsetNotPresent()
extern "C"  bool VuforiaAbstractBehaviour_SetHeadsetNotPresent_m_1850468154_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::GetViewportRectangle()
extern "C"  Rect_t_981940947_0  VuforiaAbstractBehaviour_GetViewportRectangle_m375644735_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaAbstractBehaviour::GetSurfaceOrientation()
extern "C"  int32_t VuforiaAbstractBehaviour_GetSurfaceOrientation_m1565887779_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState()
extern "C"  void VuforiaAbstractBehaviour_UpdateState_m1214973912_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateState(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateState_m_358725554_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ApplyCorrectedProjectionMatrix_m_799246496_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Matrix4x4_t1577636070_0  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureVideoBackground()
extern "C"  void VuforiaAbstractBehaviour_ConfigureVideoBackground_m1153995093_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_ResetBackgroundPlane_m1377076936_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_RegisterRenderOnUpdateCallback_m1188367557_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C"  void VuforiaAbstractBehaviour_UnregisterRenderOnUpdateCallback_m1329838860_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Action_t2132293834_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidPrimaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidPrimaryCamera_m560583959_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::IsValidSecondaryCamera(UnityEngine.Camera)
extern "C"  bool VuforiaAbstractBehaviour_IsValidSecondaryCamera_m381075273_0 (Object_t * __this /* static, unused */, Camera_t814710830_0 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Start()
extern "C"  void VuforiaAbstractBehaviour_Start_m_1314499662_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnEnable()
extern "C"  void VuforiaAbstractBehaviour_OnEnable_m_1299138668_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Update()
extern "C"  void VuforiaAbstractBehaviour_Update_m_2088931685_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_OnApplicationPause_m1388711182_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDisable()
extern "C"  void VuforiaAbstractBehaviour_OnDisable_m_1177655783_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnDestroy()
extern "C"  void VuforiaAbstractBehaviour_OnDestroy_m999876267_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C"  void VuforiaAbstractBehaviour_SetUnityPlayerImplementation_m_2127719873_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::UpdateStatePrivate(System.Boolean,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_UpdateStatePrivate_m931783001_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___forceUpdate, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StartVuforia(System.Boolean,System.Boolean)
extern "C"  bool VuforiaAbstractBehaviour_StartVuforia_m1560071912_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::StopVuforia()
extern "C"  bool VuforiaAbstractBehaviour_StopVuforia_m_1725008188_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::DeinitRequestedTrackers()
extern "C"  void VuforiaAbstractBehaviour_DeinitRequestedTrackers_m487994568_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::OnVideoBackgroundConfigChanged()
extern "C"  void VuforiaAbstractBehaviour_OnVideoBackgroundConfigChanged_m_1092963302_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::ConfigureView()
extern "C"  void VuforiaAbstractBehaviour_ConfigureView_m585371835_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_EnableObjectRenderer_m919222478_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, GameObject_t_184308134_0 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDeviceMode_m_1303525947_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousImageTargets()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousImageTargets_m230882093_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousImageTargets_m1725592684_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMaximumSimultaneousObjectTargets_m_1629177633_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMaximumSimultaneousObjectTargets_m593683970_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetDelayedLoadingObjectTargets()
extern "C"  bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetDelayedLoadingObjectTargets_m1879160954_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUseDelayedLoadingObjectTargets_m1109781378_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetCameraDirection()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetCameraDirection_m_831579326_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetCameraDirection_m1430992193_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetMirrorVideoBackground()
extern "C"  int32_t VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetMirrorVideoBackground_m1661652964_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetMirrorVideoBackground(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetMirrorVideoBackground_m_837590703_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetUsingHeadset()
extern "C"  bool VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetUsingHeadset_m_947447665_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetUsingHeadset(System.Boolean)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetUsingHeadset_m438609790_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.GetHeadsetID()
extern "C"  String_t* VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_GetHeadsetID_m_1666416091_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::Vuforia.IEditorVuforiaBehaviour.SetHeadsetID(System.String)
extern "C"  void VuforiaAbstractBehaviour_Vuforia_IEditorVuforiaBehaviour_SetHeadsetID_m1758438476_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaAbstractBehaviour::.ctor()
extern "C"  void VuforiaAbstractBehaviour__ctor_m_261637454_0 (VuforiaAbstractBehaviour_t_818605340_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
