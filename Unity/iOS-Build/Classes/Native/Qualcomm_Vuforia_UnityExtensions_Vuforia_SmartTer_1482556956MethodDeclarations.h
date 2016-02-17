#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t_1482556956_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t_1557980771_0;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t1904152044_0;
// Vuforia.Reconstruction
struct Reconstruction_t246108303_0;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t_1425401844_0;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t_311746688_0;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t_365539512_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C"  bool SmartTerrainBuilderImpl_Init_m_180829956_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C"  bool SmartTerrainBuilderImpl_Deinit_m_1504142851_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C"  Object_t* SmartTerrainBuilderImpl_GetReconstructions_m_2125238918_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_AddReconstruction_m_787138932_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, ReconstructionAbstractBehaviour_t1904152044_0 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C"  bool SmartTerrainBuilderImpl_RemoveReconstruction_m_527138669_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, ReconstructionAbstractBehaviour_t1904152044_0 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C"  bool SmartTerrainBuilderImpl_DestroyReconstruction_m_1223253788_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C"  void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m2031957082_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, SmartTerrainRevisionDataU5BU5D_t_1425401844_0* ___smartTerrainRevisions, SurfaceDataU5BU5D_t_311746688_0* ___updatedSurfaces, PropDataU5BU5D_t_365539512_0* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C"  void SmartTerrainBuilderImpl__ctor_m_1158689748_0 (SmartTerrainBuilderImpl_t_1482556956_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
