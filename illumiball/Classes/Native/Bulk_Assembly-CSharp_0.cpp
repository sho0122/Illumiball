#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// FallInChecker
struct FallInChecker_t151318371;
// GravityController
struct GravityController_t3230462696;
// Hole
struct Hole_t2633764688;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral3452614614;
extern String_t* _stringLiteral3788369572;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var;
extern const uint32_t FallInChecker_OnGUI_m1330894516_MetadataUsageId;
extern const uint32_t GravityController_Update_m1697577267_MetadataUsageId;
extern const uint32_t Hole_OnTriggerEnter_m178509519_MetadataUsageId;
extern const uint32_t Hole_OnTriggerStay_m869598258_MetadataUsageId;
extern const uint32_t Hole_OnatriggerExit_m2569175181_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745541_H
#define U3CMODULEU3E_T692745541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745541 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745541_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_3)); }
	inline Vector3_t3722313464  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t3722313464  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_4)); }
	inline Vector3_t3722313464  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t3722313464 * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t3722313464  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_5)); }
	inline Vector3_t3722313464  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t3722313464 * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t3722313464  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_6)); }
	inline Vector3_t3722313464  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t3722313464 * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t3722313464  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_7)); }
	inline Vector3_t3722313464  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t3722313464 * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t3722313464  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_8)); }
	inline Vector3_t3722313464  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t3722313464 * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t3722313464  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_9)); }
	inline Vector3_t3722313464  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t3722313464  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_10)); }
	inline Vector3_t3722313464  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t3722313464 * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t3722313464  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef FALLINCHECKER_T151318371_H
#define FALLINCHECKER_T151318371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FallInChecker
struct  FallInChecker_t151318371  : public MonoBehaviour_t3962482529
{
public:
	// Hole FallInChecker::red
	Hole_t2633764688 * ___red_4;
	// Hole FallInChecker::blue
	Hole_t2633764688 * ___blue_5;
	// Hole FallInChecker::green
	Hole_t2633764688 * ___green_6;

public:
	inline static int32_t get_offset_of_red_4() { return static_cast<int32_t>(offsetof(FallInChecker_t151318371, ___red_4)); }
	inline Hole_t2633764688 * get_red_4() const { return ___red_4; }
	inline Hole_t2633764688 ** get_address_of_red_4() { return &___red_4; }
	inline void set_red_4(Hole_t2633764688 * value)
	{
		___red_4 = value;
		Il2CppCodeGenWriteBarrier((&___red_4), value);
	}

	inline static int32_t get_offset_of_blue_5() { return static_cast<int32_t>(offsetof(FallInChecker_t151318371, ___blue_5)); }
	inline Hole_t2633764688 * get_blue_5() const { return ___blue_5; }
	inline Hole_t2633764688 ** get_address_of_blue_5() { return &___blue_5; }
	inline void set_blue_5(Hole_t2633764688 * value)
	{
		___blue_5 = value;
		Il2CppCodeGenWriteBarrier((&___blue_5), value);
	}

	inline static int32_t get_offset_of_green_6() { return static_cast<int32_t>(offsetof(FallInChecker_t151318371, ___green_6)); }
	inline Hole_t2633764688 * get_green_6() const { return ___green_6; }
	inline Hole_t2633764688 ** get_address_of_green_6() { return &___green_6; }
	inline void set_green_6(Hole_t2633764688 * value)
	{
		___green_6 = value;
		Il2CppCodeGenWriteBarrier((&___green_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLINCHECKER_T151318371_H
#ifndef GRAVITYCONTROLLER_T3230462696_H
#define GRAVITYCONTROLLER_T3230462696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GravityController
struct  GravityController_t3230462696  : public MonoBehaviour_t3962482529
{
public:
	// System.Single GravityController::gravityScale
	float ___gravityScale_5;

public:
	inline static int32_t get_offset_of_gravityScale_5() { return static_cast<int32_t>(offsetof(GravityController_t3230462696, ___gravityScale_5)); }
	inline float get_gravityScale_5() const { return ___gravityScale_5; }
	inline float* get_address_of_gravityScale_5() { return &___gravityScale_5; }
	inline void set_gravityScale_5(float value)
	{
		___gravityScale_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAVITYCONTROLLER_T3230462696_H
#ifndef HOLE_T2633764688_H
#define HOLE_T2633764688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hole
struct  Hole_t2633764688  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Hole::fallIn
	bool ___fallIn_4;
	// System.String Hole::activeTag
	String_t* ___activeTag_5;

public:
	inline static int32_t get_offset_of_fallIn_4() { return static_cast<int32_t>(offsetof(Hole_t2633764688, ___fallIn_4)); }
	inline bool get_fallIn_4() const { return ___fallIn_4; }
	inline bool* get_address_of_fallIn_4() { return &___fallIn_4; }
	inline void set_fallIn_4(bool value)
	{
		___fallIn_4 = value;
	}

	inline static int32_t get_offset_of_activeTag_5() { return static_cast<int32_t>(offsetof(Hole_t2633764688, ___activeTag_5)); }
	inline String_t* get_activeTag_5() const { return ___activeTag_5; }
	inline String_t** get_address_of_activeTag_5() { return &___activeTag_5; }
	inline void set_activeTag_5(String_t* value)
	{
		___activeTag_5 = value;
		Il2CppCodeGenWriteBarrier((&___activeTag_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLE_T2633764688_H


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Boolean Hole::IsFallIn()
extern "C" IL2CPP_METHOD_ATTR bool Hole_IsFallIn_m2641136289 (Hole_t2633764688 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2454565404 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m3868879071 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_acceleration_m2528400370 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::set_gravity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_gravity_m1577631912 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * GameObject_GetComponent_TisRigidbody_t3916780224_m564316479 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m3920941149_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m914904454 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_mass()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m1622028245 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FallInChecker::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FallInChecker__ctor_m2728786383 (FallInChecker_t151318371 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FallInChecker::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void FallInChecker_OnGUI_m1330894516 (FallInChecker_t151318371 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FallInChecker_OnGUI_m1330894516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		Hole_t2633764688 * L_1 = __this->get_red_4();
		NullCheck(L_1);
		bool L_2 = Hole_IsFallIn_m2641136289(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		Hole_t2633764688 * L_3 = __this->get_blue_5();
		NullCheck(L_3);
		bool L_4 = Hole_IsFallIn_m2641136289(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Hole_t2633764688 * L_5 = __this->get_green_6();
		NullCheck(L_5);
		bool L_6 = Hole_IsFallIn_m2641136289(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		V_0 = _stringLiteral3788369572;
	}

IL_003c:
	{
		Rect_t2360479859  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Rect__ctor_m2614021312((&L_7), (0.0f), (0.0f), (100.0f), (30.0f), /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2454565404(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GravityController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GravityController__ctor_m3560027705 (GravityController_t3230462696 * __this, const RuntimeMethod* method)
{
	{
		__this->set_gravityScale_5((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GravityController::Start()
extern "C" IL2CPP_METHOD_ATTR void GravityController_Start_m1095873673 (GravityController_t3230462696 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void GravityController::Update()
extern "C" IL2CPP_METHOD_ATTR void GravityController_Update_m1697577267 (GravityController_t3230462696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GravityController_Update_m1697577267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0065;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_1);
		float L_2 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		(&V_0)->set_z_2(L_2);
		bool L_3 = Input_GetKey_m3868879071(NULL /*static, unused*/, _stringLiteral3452614614, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		(&V_0)->set_y_1((1.0f));
		goto IL_0060;
	}

IL_0054:
	{
		(&V_0)->set_y_1((-1.0f));
	}

IL_0060:
	{
		goto IL_00a1;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_0();
		(&V_0)->set_x_0(L_5);
		Vector3_t3722313464  L_6 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_y_1();
		(&V_0)->set_z_2(L_7);
		Vector3_t3722313464  L_8 = Input_get_acceleration_m2528400370(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_z_2();
		(&V_0)->set_y_1(L_9);
	}

IL_00a1:
	{
		Vector3_t3722313464  L_10 = Vector3_get_normalized_m2454957984((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (9.81f), L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_gravityScale_5();
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Physics_set_gravity_m1577631912(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hole::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Hole__ctor_m1335877902 (Hole_t2633764688 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Hole::IsFallIn()
extern "C" IL2CPP_METHOD_ATTR bool Hole_IsFallIn_m2641136289 (Hole_t2633764688 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fallIn_4();
		return L_0;
	}
}
// System.Void Hole::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void Hole_OnTriggerEnter_m178509519 (Hole_t2633764688 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hole_OnTriggerEnter_m178509519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_activeTag_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		__this->set_fallIn_4((bool)1);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Hole::OnatriggerExit(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void Hole_OnatriggerExit_m2569175181 (Hole_t2633764688 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hole_OnatriggerExit_m2569175181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_activeTag_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		__this->set_fallIn_4((bool)0);
	}

IL_0022:
	{
		return;
	}
}
// System.Void Hole::OnTriggerStay(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void Hole_OnTriggerStay_m869598258 (Hole_t2633764688 * __this, Collider_t1773347010 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Hole_OnTriggerStay_m869598258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t3916780224 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Collider_t1773347010 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_t3916780224 * L_2 = GameObject_GetComponent_TisRigidbody_t3916780224_m564316479(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3916780224_m564316479_RuntimeMethod_var);
		V_0 = L_2;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Collider_t1773347010 * L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Vector3_Normalize_m914904454((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		Collider_t1773347010 * L_10 = ___other0;
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = GameObject_get_tag_m3951609671(L_11, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_activeTag_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		Rigidbody_t3916780224 * L_15 = V_0;
		Rigidbody_t3916780224 * L_16 = L_15;
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Rigidbody_get_velocity_m2993632669(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, (0.9f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_m2899403247(L_16, L_18, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_19 = V_0;
		Vector3_t3722313464  L_20 = V_1;
		Rigidbody_t3916780224 * L_21 = V_0;
		NullCheck(L_21);
		float L_22 = Rigidbody_get_mass_m1622028245(L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_23, (20.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Rigidbody_AddForce_m3395934484(L_19, L_24, /*hidden argument*/NULL);
		goto IL_00a7;
	}

IL_0086:
	{
		Rigidbody_t3916780224 * L_25 = V_0;
		Vector3_t3722313464  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_27 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_28 = V_0;
		NullCheck(L_28);
		float L_29 = Rigidbody_get_mass_m1622028245(L_28, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_27, L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_30, (80.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody_AddForce_m3395934484(L_25, L_31, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
