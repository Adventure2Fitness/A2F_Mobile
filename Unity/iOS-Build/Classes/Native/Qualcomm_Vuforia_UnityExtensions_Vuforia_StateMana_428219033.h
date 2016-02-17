#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t262903713_0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1618554066_0;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t952996285_0;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t1613830488_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_StateMana2031270567.h"

// Vuforia.StateManagerImpl
struct  StateManagerImpl_t_428219033_0  : public StateManager_t2031270567_0
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t262903713_0 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t1618554066_0 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t952996285_0 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t952996285_0 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t1613830488_0 * ___mWordManager_4;
	// UnityEngine.GameObject Vuforia.StateManagerImpl::mCameraPositioningHelper
	GameObject_t_184308134_0 * ___mCameraPositioningHelper_5;
};
