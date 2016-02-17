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

// UnityEngine.Mesh
struct Mesh_t_982089418_0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t_1268319991_0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t_1268320952_0;
// System.Int32[]
struct Int32U5BU5D_t1872284309_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds799257534.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m_1610763488_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m_545236936_0 (Object_t * __this /* static, unused */, Mesh_t_982089418_0 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C"  void Mesh_Clear_m1789068674_0 (Mesh_t_982089418_0 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m90337099_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t_1268319991_0* Mesh_get_vertices_m_609481122_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m_1666101187_0 (Mesh_t_982089418_0 * __this, Vector3U5BU5D_t_1268319991_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m_531269014_0 (Mesh_t_982089418_0 * __this, Vector3U5BU5D_t_1268319991_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t_1268320952_0* Mesh_get_uv_m558008935_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m498907190_0 (Mesh_t_982089418_0 * __this, Vector2U5BU5D_t_1268320952_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t799257534_0  Mesh_get_bounds_m1625335237_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_get_bounds_m739771994_0 (Mesh_t_982089418_0 * __this, Bounds_t799257534_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C"  void Mesh_RecalculateNormals_m1806625021_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C"  Int32U5BU5D_t1872284309_0* Mesh_get_triangles_m2145908418_0 (Mesh_t_982089418_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m_1953627429_0 (Mesh_t_982089418_0 * __this, Int32U5BU5D_t1872284309_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
