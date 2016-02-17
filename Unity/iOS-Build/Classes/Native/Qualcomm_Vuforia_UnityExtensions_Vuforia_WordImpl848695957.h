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
// Vuforia.Image
struct Image_t1687075568_0;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t488185392_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableI408768890.h"
#include "UnityEngine_UnityEngine_Vector2_725341338.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaM_1191957063.h"

// Vuforia.WordImpl
struct  WordImpl_t848695957_0  : public TrackableImpl_t408768890_0
{
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t_725341338_0  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t1687075568_0 * ___mLetterMask_4;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t_1191957063_0  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t488185392_0* ___mLetterBoundingBoxes_6;
};
