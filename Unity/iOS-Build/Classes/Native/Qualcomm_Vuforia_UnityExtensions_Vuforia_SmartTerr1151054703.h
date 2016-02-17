#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t377172206_0;
// UnityEngine.MeshFilter
struct MeshFilter_t_19924914_0;
// UnityEngine.MeshCollider
struct MeshCollider_t_1878661302_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Trackabl_1571999325.h"

// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t1151054703_0  : public TrackableBehaviour_t_1571999325_0
{
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Object_t * ___mSmartTerrainTrackable_9;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_10;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t_19924914_0 * ___mMeshFilterToUpdate_11;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t_1878661302_0 * ___mMeshColliderToUpdate_12;
};
