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

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t_361948684_0;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t586045924_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m136546563_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m1671326387_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m_1745057204_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m561242020_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m_565715646_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m_1338200502_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m485357912_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m_96596569_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m99777287_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m658152634_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m1633901348_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m1603228927_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetExists_m_1192902487_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetLoad_m_422348735_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m2038961112_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m1709747559_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m104402814_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m_1229336622_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m1155524934_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m_51042034_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m109106976_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m1926951496_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m1689433945_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m_972214774_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m_643179818_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m1381642521_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m_174235060_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m_669002621_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m55538749_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m479407606_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m_1456743810_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m_2099796255_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m755038798_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t586045924_0 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m84916002_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m_1472537187_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m1456341708_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m997552898_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m_1309766133_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m1576715415_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerStart_m1816557899_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_ObjectTrackerStop_m1464871317_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m655563414_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m730908829_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m1853183238_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m882705351_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m192299326_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m_109290456_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerSetSize_m_1118310497_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerTrackerStart_m_414214394_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_MarkerTrackerStop_m_1239488390_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerTrackerCreateMarker_m369162310_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_MarkerTrackerDestroyMarker_m_1807292087_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_InitPlatformNative_m1087726722_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_InitFrameState_m1746657176_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_DeinitFrameState_m_1859103625_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_OnSurfaceChanged_m_697664968_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C"  void VuforiaNativeIosWrapper_OnPause_m433126033_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C"  void VuforiaNativeIosWrapper_OnResume_m_1067408364_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C"  bool VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m1344984380_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_UpdateQCAR_m_952799944_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C"  void VuforiaNativeIosWrapper_RendererEnd_m646931346_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m864509445_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_QcarAddCameraFrame_m772682434_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m507293824_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m_1421472756_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m_1604588441_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m_1282560259_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m1927052604_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m385630930_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetHint_m_937856413_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_GetProjectionGL_m_2120684125_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetApplicationEnvironment_m_1560726192_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetStateBufferSize_m1875958729_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerStart_m1114417080_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_SmartTerrainTrackerStop_m_1038961144_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m47419002_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m1108453595_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m48227898_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m_447687047_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m_7242099_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m1823724194_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m606655863_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m_480269335_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionStart_m1206476144_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionStop_m_1863322702_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m1897611084_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionReset_m216886499_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m1495065408_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m109140364_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m1217523735_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m_2001568100_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m1379857571_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m_1538946364_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m_1285387862_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m_1970480242_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStop_m1858889307_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderSetUIScanlineColor_m2068386266_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderSetUIPointColor_m_1930487031_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderUpdate_m1460467499_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m_806895524_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m_687798449_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m_1751420541_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m_1515764354_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_TextTrackerStart_m_841017607_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_TextTrackerStop_m384332967_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m362002015_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m_1481610086_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m2141135021_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m1398747469_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordU_m1737146656_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m_1255817611_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m19026512_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m1829036765_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m308287910_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m1936031945_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m_284203685_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m_2127580847_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m_462911019_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m_1995360325_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m894229283_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m_62057141_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m46962845_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m1253359652_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m921705412_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m_1190666269_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m589612295_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m_1779885723_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m1212037597_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarInit_m_152450931_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_QcarDeinit_m_2032236714_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m1783056725_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m_336808681_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsDeviceDetected()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsDeviceDetected_m2063779256_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetPresent(System.String)
extern "C"  bool VuforiaNativeIosWrapper_EyewearSetHeadsetPresent_m_399527141_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetNotPresent()
extern "C"  bool VuforiaNativeIosWrapper_EyewearSetHeadsetNotPresent_m429574462_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsSeeThru()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsSeeThru_m_756904372_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearGetScreenOrientation_m_1766686882_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoCapable()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsStereoCapable_m345822582_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoEnabled()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsStereoEnabled_m1817580363_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsStereoGLOnly_m1544199785_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C"  bool VuforiaNativeIosWrapper_EyewearSetStereo_m1218503581_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C"  bool VuforiaNativeIosWrapper_EyewearIsPredictiveTrackingEnabled_m_1361155507_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C"  bool VuforiaNativeIosWrapper_EyewearSetPredictiveTracking_m249483611_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_EyewearSetProjectionClippingPlanes_m242360526_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_EyewearGetProjectionMatrix_m1278991905_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m_2064606575_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m787911214_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m1735941763_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m_2107498273_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m111302718_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetProjectionMatrix_m268908606_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMSetProjectionMatrix_m94118988_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m336320498_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m_2041262051_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearCPMClearProfile_m_26881383_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m1313891188_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m_1595024267_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m2043026979_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m1592915618_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m1308252375_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerStart_m2107050904_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_smartTerrainTrackerStop_m1209816616_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m1178821210_0 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m1209640123_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m_1495766502_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m1454673561_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m643553901_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m_568882494_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m1738058071_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m233460745_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionStart_m_337518256_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionStop_m1273459666_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionIsReconstructing_m_986476692_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionReset_m_1327107901_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m429281056_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m_2097651284_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  bool VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m_82636745_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m1084325564_0 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m_1878354717_0 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m_1631007085_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m503720556_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m_1582974076_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m_203599582_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m1800403498_0 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m_1326229128_0 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m_1569987129_0 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m809897703_0 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m1978576090_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m_1957284706_0 (Object_t * __this /* static, unused */, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m_1280858849_0 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetExists_m1290477769_0 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetLoad_m_1909872543_0 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m_1124603976_0 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m1964207495_0 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m72643422_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m_475468878_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t586045924_0 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m_1237081754_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m736550126_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_getCameraThreadID_m_1144189120_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m770588200_0 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m_1285109895_0 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m_267796950_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m_204814666_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m762456377_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m535885356_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m_1459487581_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m1366202397_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m1799831062_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m1772439134_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m1757489857_0 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m_293194194_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t586045924_0 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m555469570_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m_1001983619_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m_1136366868_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m_1986750750_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m968655339_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m_439830409_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerStart_m1619084587_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::objectTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_objectTrackerStop_m211575221_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m1093928566_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m406285437_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m379792678_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m_2001382425_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m1084949790_0 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m_2124191736_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_markerSetSize_m1365069759_0 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_markerTrackerStart_m_611687706_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::markerTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_markerTrackerStop_m1802182810_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_markerTrackerCreateMarker_m_1909428122_0 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_markerTrackerDestroyMarker_m2013594921_0 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_initPlatformNative_m890253410_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_initFrameState_m_1843892296_0 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_deinitFrameState_m776559767_0 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_onSurfaceChanged_m2123911768_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C"  void VuforiaNativeIosWrapper_onPause_m_1570841935_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C"  void VuforiaNativeIosWrapper_onResume_m1234094068_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C"  bool VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m_701205156_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_updateQCAR_m2133093720_0 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C"  void VuforiaNativeIosWrapper_rendererEnd_m_152030286_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m_435651035_0 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_qcarAddCameraFrame_m184679138_0 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m2076826720_0 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m148060140_0 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m1534015559_0 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m_1530859747_0 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m572605788_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m924527346_0 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarInit_m1025306797_0 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetHint_m_398959997_0 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_getProjectionGL_m_418425405_0 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setApplicationEnvironment_m1525167472_0 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setStateBufferSize_m1977145257_0 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m_2022459261_0 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m_546312540_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m_1482861174_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m_1608364178_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStop_m17345083_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_targetFinderSetUIScanlineColor_m1556476410_0 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_targetFinderSetUIPointColor_m_1459933463_0 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderUpdate_m_2046907637_0 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m85754940_0 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m25931631_0 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m_1037690461_0 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_targetFinderClearTrackables_m_811346530_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerStart()
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerStart_m1612405465_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerStop()
extern "C"  void VuforiaNativeIosWrapper_textTrackerStop_m740570311_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m422609471_0 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m1506444352_0 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m_1192010611_0 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m242384173_0 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordU_m77842752_0 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m1495155285_0 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m_1995874768_0 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m_315179331_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m_310898234_0 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m_1181177623_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m693995889_0 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m498910645_0 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m253417435_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m608446779_0 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m995415811_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m_536137429_0 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m1457842365_0 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m_1910205436_0 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m1460601828_0 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m1292713987_0 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m138480935_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m_2057023099_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m_60387907_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_qcarDeinit_m2098410294_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_startExtendedTracking_m1534757237_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m625012983_0 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsDeviceDetected()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsDeviceDetected_m1122862002_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetPresent(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetPresent_m1280406421_0 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetNotPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetNotPresent_m1369569848_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsSeeThru_m1982870930_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearGetScreenOrientation_m_1062269058_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoCapable()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsStereoCapable_m_238718916_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsStereoEnabled_m1233038865_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsStereoGLOnly_m832606947_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearSetStereo_m1434277987_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearIsPredictiveTrackingEnabled_m1531382803_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearSetPredictiveTracking_m_1979429599_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C"  void VuforiaNativeIosWrapper_eyewearSetProjectionClippingPlanes_m_2141017874_0 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_eyewearGetProjectionMatrix_m178821633_0 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m_886848847_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m_1356304882_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m1210316157_0 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m_1669133121_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m649635588_0 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetProjectionMatrix_m739462174_0 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProjectionMatrix_m1950405778_0 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m1046440914_0 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m_1698880029_0 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m_1429310369_0 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m1878748602_0 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m_884903851_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m_1541819901_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m2131248488_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m854249501_0 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C"  void VuforiaNativeIosWrapper__ctor_m_549470692_0 (VuforiaNativeIosWrapper_t_361948684_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
