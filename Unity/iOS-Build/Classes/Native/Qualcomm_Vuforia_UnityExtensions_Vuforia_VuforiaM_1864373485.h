#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType_103494864.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaMa1915204500.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableB629202430.h"

// Vuforia.VuforiaManagerImpl/TrackableResultData
struct  TrackableResultData_t_1864373485_0 
{
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.VuforiaManagerImpl/TrackableResultData::pose
	PoseData_t1915204500_0  ___pose_0;
	// Vuforia.TrackableBehaviour/Status Vuforia.VuforiaManagerImpl/TrackableResultData::status
	int32_t ___status_1;
	// System.Int32 Vuforia.VuforiaManagerImpl/TrackableResultData::id
	int32_t ___id_2;
};
// Native definition for marshalling of: Vuforia.VuforiaManagerImpl/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_t_1864373485_0_marshaled
{
	PoseData_t1915204500_0  ___pose_0;
	int32_t ___status_1;
	int32_t ___id_2;
};
#pragma pack(pop, tp)
