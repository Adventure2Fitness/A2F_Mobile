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

// System.String
struct String_t;
// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_t1824746697_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1219597595.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRe2008990966.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi_36928065.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBo477370392.h"

// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m265434284_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m1011200876_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C"  String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m267534258_0 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C"  int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m2109638246_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m_1711397063_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C"  bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m_2115626189_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C"  void VuforiaRuntimeUtilities_ForceDisableTrackables_m1764547848_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C"  bool VuforiaRuntimeUtilities_IsPlayMode_m1446042578_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C"  bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m_1220030470_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vec2I_t2008990966_0  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m1858857701_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___screenSpaceCoordinate, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_36928065_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  Vector2_t_725341338_0  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m_590978018_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___cameraFrameCoordinate, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_36928065_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C"  OrientedBoundingBox_t477370392_0  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m936391166_0 (Object_t * __this /* static, unused */, OrientedBoundingBox_t477370392_0  ___cameraFrameObb, Rect_t_981940947_0  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t_36928065_0  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m449078980_0 (Object_t * __this /* static, unused */, Rect_t_981940947_0  ___screenSpaceRect, bool ___isMirrored, Vector2_t_725341338_0 * ___topLeft, Vector2_t_725341338_0 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  Rect_t_981940947_0  VuforiaRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m_1183452514_0 (Object_t * __this /* static, unused */, Vector2_t_725341338_0  ___topLeft, Vector2_t_725341338_0  ___bottomRight, bool ___isMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C"  void VuforiaRuntimeUtilities_DisableSleepMode_m515010063_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C"  void VuforiaRuntimeUtilities_ResetSleepMode_m797768_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C"  void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m665761984_0 (Object_t * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C"  void VuforiaRuntimeUtilities__ctor_m1694550759_0 (VuforiaRuntimeUtilities_t1824746697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C"  void VuforiaRuntimeUtilities__cctor_m509369766_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
