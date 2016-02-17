#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
struct List_1_t_2082746610_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t377172206_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableI408768890.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1915204500.h"

// Vuforia.SmartTerrainTrackableImpl
struct  SmartTerrainTrackableImpl_t312467502_0  : public TrackableImpl_t408768890_0
{
	// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::mChildren
	List_1_t_2082746610_0 * ___mChildren_2;
	// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::mMesh
	Mesh_t_982089418_0 * ___mMesh_3;
	// System.Int32 Vuforia.SmartTerrainTrackableImpl::mMeshRevision
	int32_t ___mMeshRevision_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.SmartTerrainTrackableImpl::mLocalPose
	PoseData_t1915204500_0  ___mLocalPose_5;
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::<Parent>k__BackingField
	Object_t * ___U3CParentU3Ek__BackingField_6;
};
