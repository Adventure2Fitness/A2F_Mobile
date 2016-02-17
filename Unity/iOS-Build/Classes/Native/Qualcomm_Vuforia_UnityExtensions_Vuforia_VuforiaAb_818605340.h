#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t_1571999325_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.Camera
struct Camera_t814710830_0;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t1957631606_0;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t1066303813_0;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t_1095432767_0;
// System.Action
struct Action_t2132293834_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1180387379_0;
// Vuforia.ICameraConfiguration
struct ICameraConfiguration_t54430835_0;
// UnityEngine.Material
struct Material_t1701708784_0;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t_1140530411_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevi306725511.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDev1100320849.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRen_42839649.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAb_883970177.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUn1514639111.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"

// Vuforia.VuforiaAbstractBehaviour
struct  VuforiaAbstractBehaviour_t_818605340_0  : public MonoBehaviour_t_92453903_0
{
	// System.String Vuforia.VuforiaAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// System.Single Vuforia.VuforiaAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_3;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSkewFrustum
	bool ___mSkewFrustum_4;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_5;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_6;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_7;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_8;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_9;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_10;
	// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_11;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t_1571999325_0 * ___mWorldCenter_12;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mCentralAnchorPoint
	Transform_t1584899523_0 * ___mCentralAnchorPoint_13;
	// UnityEngine.Transform Vuforia.VuforiaAbstractBehaviour::mParentAnchorPoint
	Transform_t1584899523_0 * ___mParentAnchorPoint_14;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mPrimaryCamera
	Camera_t814710830_0 * ___mPrimaryCamera_15;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mPrimaryCameraOriginalRect
	Rect_t_981940947_0  ___mPrimaryCameraOriginalRect_16;
	// UnityEngine.Camera Vuforia.VuforiaAbstractBehaviour::mSecondaryCamera
	Camera_t814710830_0 * ___mSecondaryCamera_17;
	// UnityEngine.Rect Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraOriginalRect
	Rect_t_981940947_0  ___mSecondaryCameraOriginalRect_18;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSecondaryCameraDisabledLocally
	bool ___mSecondaryCameraDisabledLocally_19;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mUsingHeadset
	bool ___mUsingHeadset_20;
	// System.String Vuforia.VuforiaAbstractBehaviour::mHeadsetID
	String_t* ___mHeadsetID_21;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mEyewearUserCalibrationProfileId
	int32_t ___mEyewearUserCalibrationProfileId_22;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mSynchronizePoseUpdates
	bool ___mSynchronizePoseUpdates_23;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.VuforiaAbstractBehaviour::mTrackerEventHandlers
	List_1_t1957631606_0 * ___mTrackerEventHandlers_24;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.VuforiaAbstractBehaviour::mVideoBgEventHandlers
	List_1_t1066303813_0 * ___mVideoBgEventHandlers_25;
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitError
	Action_1_t_1095432767_0 * ___mOnVuforiaInitError_26;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaInitialized
	Action_t2132293834_0 * ___mOnVuforiaInitialized_27;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnVuforiaStarted
	Action_t2132293834_0 * ___mOnVuforiaStarted_28;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnTrackablesUpdated
	Action_t2132293834_0 * ___mOnTrackablesUpdated_29;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mRenderOnUpdate
	Action_t2132293834_0 * ___mRenderOnUpdate_30;
	// System.Action`1<System.Boolean> Vuforia.VuforiaAbstractBehaviour::mOnPause
	Action_1_t_1180387379_0 * ___mOnPause_31;
	// System.Action Vuforia.VuforiaAbstractBehaviour::mOnBackgroundTextureChanged
	Action_t2132293834_0 * ___mOnBackgroundTextureChanged_32;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_33;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStarted
	bool ___mHasStarted_34;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_35;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mBackgroundTextureHasChanged
	bool ___mBackgroundTextureHasChanged_36;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaAbstractBehaviour::mInitError
	int32_t ___mInitError_37;
	// Vuforia.ICameraConfiguration Vuforia.VuforiaAbstractBehaviour::mCameraConfiguration
	Object_t * ___mCameraConfiguration_38;
	// UnityEngine.Material Vuforia.VuforiaAbstractBehaviour::mClearMaterial
	Material_t1701708784_0 * ___mClearMaterial_39;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_40;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_41;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_42;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_43;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_44;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_45;
	// System.Int32 Vuforia.VuforiaAbstractBehaviour::mLastUpdatedFrame
	int32_t ___mLastUpdatedFrame_46;
	// System.Collections.Generic.List`1<System.Type> Vuforia.VuforiaAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t_1140530411_0 * ___mTrackersRequestedToDeinit_47;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyLeftProjectionMatrix
	bool ___mMissedToApplyLeftProjectionMatrix_48;
	// System.Boolean Vuforia.VuforiaAbstractBehaviour::mMissedToApplyRightProjectionMatrix
	bool ___mMissedToApplyRightProjectionMatrix_49;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mLeftProjectMatrixToApply
	Matrix4x4_t1577636070_0  ___mLeftProjectMatrixToApply_50;
	// UnityEngine.Matrix4x4 Vuforia.VuforiaAbstractBehaviour::mRightProjectMatrixToApply
	Matrix4x4_t1577636070_0  ___mRightProjectMatrixToApply_51;
};
