// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALONE_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define ALONE_Weapon_generated_h

#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_SPARSE_DATA
#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_RPC_WRAPPERS
#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_ACCESSORS
#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	NO_API virtual ~AWeapon();


#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AWeapon) \
	NO_API virtual ~AWeapon();


#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_7_PROLOG
#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_SPARSE_DATA \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_RPC_WRAPPERS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_ACCESSORS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_INCLASS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_SPARSE_DATA \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_ACCESSORS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Alone_Source_Alone_Weapon_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALONE_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Alone_Source_Alone_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
