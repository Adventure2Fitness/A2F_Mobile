#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t_1287765777_0;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t1662873519_0;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t_1655497798_0;
// Vuforia.TargetFinder
struct TargetFinder_t99717602_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTra1381835662.h"

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t_788036914_0  : public ObjectTracker_t1381835662_0
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t_1287765777_0 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t1662873519_0 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t_1655497798_0 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t99717602_0 * ___mTargetFinder_4;
};
