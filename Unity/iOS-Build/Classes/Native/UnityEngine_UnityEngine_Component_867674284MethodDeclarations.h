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

// UnityEngine.Component
struct Component_t_867674284_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void UnityEngine.Component::.ctor()
extern "C"  void Component__ctor_m_56363908_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1584899523_0 * Component_get_transform_m_37826853_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t_184308134_0 * Component_get_gameObject_m1170635899_0 (Component_t_867674284_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C"  void Component_GetComponentFastPath_m1455568887_0 (Component_t_867674284_0 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern "C"  Component_t_867674284_0 * Component_GetComponentInChildren_m680239315_0 (Component_t_867674284_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
