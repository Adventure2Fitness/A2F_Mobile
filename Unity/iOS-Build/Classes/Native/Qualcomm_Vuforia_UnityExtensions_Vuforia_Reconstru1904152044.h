#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler>
struct List_1_t323898690_0;
// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t_1704757565_0;
// System.Action`1<Vuforia.Prop>
struct Action_1_t_599718662_0;
// System.Action`1<Vuforia.Surface>
struct Action_1_t224092434_0;
// Vuforia.Reconstruction
struct Reconstruction_t246108303_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface>
struct Dictionary_2_t1868139158_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour>
struct Dictionary_2_t126891435_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct Dictionary_2_t_2084902410_0;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour>
struct Dictionary_2_t_85097909_0;
// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t_1767995943_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Rect_981940947.h"

// Vuforia.ReconstructionAbstractBehaviour
struct  ReconstructionAbstractBehaviour_t1904152044_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mHasInitialized
	bool ___mHasInitialized_2;
	// System.Collections.Generic.List`1<Vuforia.ISmartTerrainEventHandler> Vuforia.ReconstructionAbstractBehaviour::mSmartTerrainEventHandlers
	List_1_t323898690_0 * ___mSmartTerrainEventHandlers_3;
	// System.Action`1<Vuforia.SmartTerrainInitializationInfo> Vuforia.ReconstructionAbstractBehaviour::mOnInitialized
	Action_1_t_1704757565_0 * ___mOnInitialized_4;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropCreated
	Action_1_t_599718662_0 * ___mOnPropCreated_5;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropUpdated
	Action_1_t_599718662_0 * ___mOnPropUpdated_6;
	// System.Action`1<Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mOnPropDeleted
	Action_1_t_599718662_0 * ___mOnPropDeleted_7;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceCreated
	Action_1_t224092434_0 * ___mOnSurfaceCreated_8;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceUpdated
	Action_1_t224092434_0 * ___mOnSurfaceUpdated_9;
	// System.Action`1<Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mOnSurfaceDeleted
	Action_1_t224092434_0 * ___mOnSurfaceDeleted_10;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_11;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mMaximumExtentEnabled
	bool ___mMaximumExtentEnabled_12;
	// UnityEngine.Rect Vuforia.ReconstructionAbstractBehaviour::mMaximumExtent
	Rect_t_981940947_0  ___mMaximumExtent_13;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mAutomaticStart
	bool ___mAutomaticStart_14;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mNavMeshUpdates
	bool ___mNavMeshUpdates_15;
	// System.Single Vuforia.ReconstructionAbstractBehaviour::mNavMeshPadding
	float ___mNavMeshPadding_16;
	// Vuforia.Reconstruction Vuforia.ReconstructionAbstractBehaviour::mReconstruction
	Object_t * ___mReconstruction_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Surface> Vuforia.ReconstructionAbstractBehaviour::mSurfaces
	Dictionary_2_t1868139158_0 * ___mSurfaces_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.SurfaceAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActiveSurfaceBehaviours
	Dictionary_2_t126891435_0 * ___mActiveSurfaceBehaviours_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop> Vuforia.ReconstructionAbstractBehaviour::mProps
	Dictionary_2_t_2084902410_0 * ___mProps_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.PropAbstractBehaviour> Vuforia.ReconstructionAbstractBehaviour::mActivePropBehaviours
	Dictionary_2_t_85097909_0 * ___mActivePropBehaviours_21;
	// Vuforia.SurfaceAbstractBehaviour Vuforia.ReconstructionAbstractBehaviour::mPreviouslySetWorldCenterSurfaceTemplate
	SurfaceAbstractBehaviour_t_1767995943_0 * ___mPreviouslySetWorldCenterSurfaceTemplate_22;
	// System.Boolean Vuforia.ReconstructionAbstractBehaviour::mIgnoreNextUpdate
	bool ___mIgnoreNextUpdate_23;
};
