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
// Vuforia.ImageTarget
struct ImageTarget_t_1244257119_0;
// Vuforia.DataSetImpl
struct DataSetImpl_t1367733357_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualBu1630087858.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Rectangl_1103401394.h"

// Vuforia.VirtualButtonImpl
struct  VirtualButtonImpl_t_25995278_0  : public VirtualButton_t1630087858_0
{
	// System.String Vuforia.VirtualButtonImpl::mName
	String_t* ___mName_1;
	// System.Int32 Vuforia.VirtualButtonImpl::mID
	int32_t ___mID_2;
	// Vuforia.RectangleData Vuforia.VirtualButtonImpl::mArea
	RectangleData_t_1103401394_0  ___mArea_3;
	// System.Boolean Vuforia.VirtualButtonImpl::mIsEnabled
	bool ___mIsEnabled_4;
	// Vuforia.ImageTarget Vuforia.VirtualButtonImpl::mParentImageTarget
	Object_t * ___mParentImageTarget_5;
	// Vuforia.DataSetImpl Vuforia.VirtualButtonImpl::mParentDataSet
	DataSetImpl_t1367733357_0 * ___mParentDataSet_6;
};
