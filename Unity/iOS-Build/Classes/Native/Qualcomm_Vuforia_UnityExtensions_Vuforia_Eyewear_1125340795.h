#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Eyewear
struct Eyewear_t_1125340795_0;
// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t_1635948471_0;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t46134993_0;

#include "mscorlib_System_Object_887538054.h"

// Vuforia.Eyewear
struct  Eyewear_t_1125340795_0  : public Object_t
{
	// Vuforia.EyewearCalibrationProfileManager Vuforia.Eyewear::mProfileManager
	EyewearCalibrationProfileManager_t_1635948471_0 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.Eyewear::mCalibrator
	EyewearUserCalibrator_t46134993_0 * ___mCalibrator_2;
};
struct Eyewear_t_1125340795_0_StaticFields{
	// Vuforia.Eyewear Vuforia.Eyewear::mInstance
	Eyewear_t_1125340795_0 * ___mInstance_0;
};
