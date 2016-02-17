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

// Vuforia.PropImpl
struct PropImpl_t_173335954_0;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t377172206_0;
// UnityEngine.Mesh
struct Mesh_t_982089418_0;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedB_808552311.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void PropImpl__ctor_m412170776_0 (PropImpl_t_173335954_0 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C"  OrientedBoundingBox3D_t_808552311_0  PropImpl_get_BoundingBox_m1257868089_0 (PropImpl_t_173335954_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C"  void PropImpl_SetMesh_m1379513436_0 (PropImpl_t_173335954_0 * __this, int32_t ___meshRev, Mesh_t_982089418_0 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C"  void PropImpl_SetObb_m_1741814207_0 (PropImpl_t_173335954_0 * __this, OrientedBoundingBox3D_t_808552311_0  ___obb3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
