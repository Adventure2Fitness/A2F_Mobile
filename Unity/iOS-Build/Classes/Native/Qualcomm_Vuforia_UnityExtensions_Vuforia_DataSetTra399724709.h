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
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t_1204467695_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Trackabl_1571999325.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "UnityEngine_UnityEngine_Quaternion1989680039.h"

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t399724709_0  : public TrackableBehaviour_t_1571999325_0
{
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_9;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mExtendedTracking
	bool ___mExtendedTracking_10;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mInitializeSmartTerrain
	bool ___mInitializeSmartTerrain_11;
	// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::mReconstructionToInitialize
	ReconstructionFromTargetAbstractBehaviour_t_1204467695_0 * ___mReconstructionToInitialize_12;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMin
	Vector3_t_725341337_0  ___mSmartTerrainOccluderBoundsMin_13;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderBoundsMax
	Vector3_t_725341337_0  ___mSmartTerrainOccluderBoundsMax_14;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mIsSmartTerrainOccluderOffset
	bool ___mIsSmartTerrainOccluderOffset_15;
	// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderOffset
	Vector3_t_725341337_0  ___mSmartTerrainOccluderOffset_16;
	// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderRotation
	Quaternion_t1989680039_0  ___mSmartTerrainOccluderRotation_17;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mSmartTerrainOccluderLockedInPlace
	bool ___mSmartTerrainOccluderLockedInPlace_18;
	// System.Boolean Vuforia.DataSetTrackableBehaviour::mAutoSetOccluderFromTargetSize
	bool ___mAutoSetOccluderFromTargetSize_19;
};
