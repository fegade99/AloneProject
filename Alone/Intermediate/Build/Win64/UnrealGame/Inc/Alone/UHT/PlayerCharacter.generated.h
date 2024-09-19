// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALONE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define ALONE_PlayerCharacter_generated_h

#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_SPARSE_DATA
#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_RPC_WRAPPERS
#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_ACCESSORS
#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	NO_API virtual ~APlayerCharacter();


#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_23_PROLOG
#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_SPARSE_DATA \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_RPC_WRAPPERS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_ACCESSORS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_INCLASS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_SPARSE_DATA \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_ACCESSORS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALONE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Alone_Source_Alone_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
