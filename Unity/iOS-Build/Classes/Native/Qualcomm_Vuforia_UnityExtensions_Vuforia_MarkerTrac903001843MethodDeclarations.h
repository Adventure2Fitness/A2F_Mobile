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

// Vuforia.MarkerTrackerImpl
struct MarkerTrackerImpl_t903001843_0;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t1620765686_0;
// System.String
struct String_t;
// Vuforia.Marker
struct Marker_t863679813_0;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker>
struct IEnumerable_1_t_808545426_0;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.MarkerTrackerImpl::Start()
extern "C"  bool MarkerTrackerImpl_Start_m1994186217_0 (MarkerTrackerImpl_t903001843_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::Stop()
extern "C"  void MarkerTrackerImpl_Stop_m1316565865_0 (MarkerTrackerImpl_t903001843_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.MarkerTrackerImpl::CreateMarker(System.Int32,System.String,System.Single)
extern "C"  MarkerAbstractBehaviour_t1620765686_0 * MarkerTrackerImpl_CreateMarker_m_550234511_0 (MarkerTrackerImpl_t903001843_0 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerTrackerImpl::DestroyMarker(Vuforia.Marker,System.Boolean)
extern "C"  bool MarkerTrackerImpl_DestroyMarker_m_1491594904_0 (MarkerTrackerImpl_t903001843_0 * __this, Object_t * ___marker, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Marker> Vuforia.MarkerTrackerImpl::GetMarkers()
extern "C"  Object_t* MarkerTrackerImpl_GetMarkers_m_66358620_0 (MarkerTrackerImpl_t903001843_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::GetMarkerByMarkerID(System.Int32)
extern "C"  Object_t * MarkerTrackerImpl_GetMarkerByMarkerID_m_1795676713_0 (MarkerTrackerImpl_t903001843_0 * __this, int32_t ___markerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Marker Vuforia.MarkerTrackerImpl::InternalCreateMarker(System.Int32,System.String,System.Single)
extern "C"  Object_t * MarkerTrackerImpl_InternalCreateMarker_m_1601368547_0 (MarkerTrackerImpl_t903001843_0 * __this, int32_t ___markerID, String_t* ___name, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::DestroyAllMarkers(System.Boolean)
extern "C"  void MarkerTrackerImpl_DestroyAllMarkers_m_2014513084_0 (MarkerTrackerImpl_t903001843_0 * __this, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerTrackerImpl::RegisterMarker(System.Int32,System.String,System.Single)
extern "C"  int32_t MarkerTrackerImpl_RegisterMarker_m29500304_0 (MarkerTrackerImpl_t903001843_0 * __this, int32_t ___markerID, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerTrackerImpl::.ctor()
extern "C"  void MarkerTrackerImpl__ctor_m_1096065603_0 (MarkerTrackerImpl_t903001843_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
