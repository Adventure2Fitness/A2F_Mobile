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
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t_1024829474_0;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet1608203437.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUn_792352572.h"

// Vuforia.DataSetImpl
struct  DataSetImpl_t1367733357_0  : public DataSet_t1608203437_0
{
	// System.IntPtr Vuforia.DataSetImpl::mDataSetPtr
	IntPtr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSetImpl::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSetImpl::mTrackablesDict
	Dictionary_2_t_1024829474_0 * ___mTrackablesDict_3;
};
