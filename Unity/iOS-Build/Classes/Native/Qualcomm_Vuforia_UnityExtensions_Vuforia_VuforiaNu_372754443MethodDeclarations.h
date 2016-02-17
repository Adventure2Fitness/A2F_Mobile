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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t_372754443_0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m888590218_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m1677188602_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m_359394779_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m_363890517_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetNumVideoModes_m1654150409_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CameraDeviceGetVideoMode_m_1336788603_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m1435807537_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFlashTorchMode_m_1542540992_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetFocusMode_m1259224014_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m1679617043_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m177375409_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetFrameFormat_m_674924968_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetExists_m_242452862_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetLoad_m656617626_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m1127179935_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m_222636480_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackableName_m1368705733_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetCreateTrackable_m_1186151719_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m1313072095_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetHasReachedTrackableLimit_m_1954336043_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNullWrapper_GetCameraThreadID_m1676506553_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m_1779021105_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNullWrapper_FrameCounterGetBenchmarkingData_m_644440450_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStartScan_m946792751_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStopScan_m2051122961_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m1682996658_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m_911760879_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m_807651684_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m1023450500_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonGetId_m1500872015_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m931511301_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m1598237480_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m_2133854635_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t586045924_0 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m_1109484567_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m1628029540_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetTopDiameter_m_1210337563_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetBottomDiameter_m1965464649_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetSetSize_m290859474_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetGetSize_m_1117626274_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerStart()
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerStart_m_1133662766_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ObjectTrackerStop()
extern "C"  void VuforiaNullWrapper_ObjectTrackerStop_m604348154_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m1691376795_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m130076132_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m407238815_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m_1395448544_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerPersistExtendedTracking_m751570821_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerResetExtendedTracking_m642753199_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerStart()
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerStart_m930532237_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::MarkerTrackerStop()
extern "C"  void VuforiaNullWrapper_MarkerTrackerStop_m_2100011553_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_OnSurfaceChanged_m1314869405_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C"  void VuforiaNullWrapper_OnPause_m823261750_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C"  void VuforiaNullWrapper_OnResume_m_1858103025_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNullWrapper_HasSurfaceBeenRecreated_m_765634295_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerSetSize_m_167860872_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerCreateMarker_m297181407_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_MarkerTrackerDestroyMarker_m24482896_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C"  void VuforiaNullWrapper_InitPlatformNative_m181312445_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_InitFrameState_m_629302595_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_DeinitFrameState_m_233842084_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_UpdateQCAR_m557738001_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererEnd()
extern "C"  void VuforiaNullWrapper_RendererEnd_m_1337063241_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarGetBufferSize_m_635354658_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_QcarAddCameraFrame_m1327867559_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m_1528650053_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m837550663_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m_1603176542_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m_156140586_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m_1240486827_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererGetRecommendedFps_m1968741099_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetHint_m645253756_0 (VuforiaNullWrapper_t_372754443_0 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_GetProjectionGL_m_492396100_0 (VuforiaNullWrapper_t_372754443_0 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_SetApplicationEnvironment_m_1483013643_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNullWrapper_SetStateBufferSize_m719458948_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStart()
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainTrackerStart_m1120279295_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SmartTerrainTrackerStop()
extern "C"  void VuforiaNullWrapper_SmartTerrainTrackerStop_m_1963865171_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m737761741_0 (VuforiaNullWrapper_t_372754443_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m_1394166674_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m211835149_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m_707715372_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m_683198702_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m367198255_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m1296998602_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_SmartTerrainBuilderDestroyReconstruction_m_554480906_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStart_m1370083395_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionStop_m_2135139713_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionIsReconstructing_m1114299033_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionReset_m380493750_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m_935525509_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m120930201_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_ReconstructionSetMaximumArea_m_1380319260_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m_491030155_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartInit_m1939129066_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetInitState_m_1533084149_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderDeinit_m59358769_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m249385813_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStop_m108335266_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNullWrapper_TargetFinderSetUIScanlineColor_m1736075647_0 (VuforiaNullWrapper_t_372754443_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNullWrapper_TargetFinderSetUIPointColor_m2065460612_0 (VuforiaNullWrapper_t_372754443_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderUpdate_m_871478618_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetResults_m_247624029_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m1111756136_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderGetImageTargets_m1655756904_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNullWrapper_TargetFinderClearTrackables_m403243171_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerStart()
extern "C"  int32_t VuforiaNullWrapper_TextTrackerStart_m1703395648_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerStop()
extern "C"  void VuforiaNullWrapper_TextTrackerStop_m_1462370484_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TextTrackerSetRegionOfInterest_m_668239130_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_TextTrackerGetRegionOfInterest_m_1975658241_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadWordList_m_1563306828_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m1987742164_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordU_m1833517625_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordU_m693566140_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListContainsWordU_m771070167_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNullWrapper_WordListUnloadAllLists_m903904228_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListSetFilterMode_m609642047_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterMode_m_172021022_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadFilterList_m275067810_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m721442026_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListRemoveWordFromFilterListU_m127614428_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNullWrapper_WordListClearFilterList_m_609697900_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNullWrapper_WordListGetFilterListWordCount_m_413237974_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_WordListGetFilterListWordU_m_154765360_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterMask_m2063776246_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordGetLetterBoundingBoxes_m341578475_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m_1790151715_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m_240216644_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m_1074966496_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m919891966_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m_1563381596_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNullWrapper_QcarInit_m2034463398_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNullWrapper_QcarDeinit_m197800669_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StartExtendedTracking_m_1385490898_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StopExtendedTracking_m253716766_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsDeviceDetected()
extern "C"  bool VuforiaNullWrapper_EyewearIsDeviceDetected_m_46839419_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetPresent(System.String)
extern "C"  bool VuforiaNullWrapper_EyewearSetHeadsetPresent_m_420148184_0 (VuforiaNullWrapper_t_372754443_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetHeadsetNotPresent()
extern "C"  bool VuforiaNullWrapper_EyewearSetHeadsetNotPresent_m1948032651_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsSeeThru()
extern "C"  bool VuforiaNullWrapper_EyewearIsSeeThru_m_594475233_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearGetScreenOrientation()
extern "C"  int32_t VuforiaNullWrapper_EyewearGetScreenOrientation_m1075868343_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoCapable()
extern "C"  bool VuforiaNullWrapper_EyewearIsStereoCapable_m693380105_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoEnabled()
extern "C"  bool VuforiaNullWrapper_EyewearIsStereoEnabled_m_2129829410_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsStereoGLOnly()
extern "C"  bool VuforiaNullWrapper_EyewearIsStereoGLOnly_m1555411318_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetStereo(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearSetStereo_m_1284116688_0 (VuforiaNullWrapper_t_372754443_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNullWrapper_EyewearIsPredictiveTrackingEnabled_m1246590048_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNullWrapper_EyewearSetPredictiveTracking_m2025330798_0 (VuforiaNullWrapper_t_372754443_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C"  void VuforiaNullWrapper_EyewearSetProjectionClippingPlanes_m_638004557_0 (VuforiaNullWrapper_t_372754443_0 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_EyewearGetProjectionMatrix_m_246639908_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetMaxCount_m122307754_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetUsedCount_m_137221323_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMIsProfileUsed_m971675344_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetActiveProfile_m_768876954_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetActiveProfile_m_527949615_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_EyewearCPMGetProjectionMatrix_m_925491963_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetProjectionMatrix_m517925279_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_EyewearCPMGetProfileName_m_401205321_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearCPMSetProfileName_m51074096_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearCPMClearProfile_m_1714103124_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorInit_m_1053940281_0 (VuforiaNullWrapper_t_372754443_0 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMinScaleHint_m_570635000_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m_1227551050_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorIsStereoStretched_m953663285_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  bool VuforiaNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m_1128744534_0 (VuforiaNullWrapper_t_372754443_0 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C"  void VuforiaNullWrapper__ctor_m831939329_0 (VuforiaNullWrapper_t_372754443_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
