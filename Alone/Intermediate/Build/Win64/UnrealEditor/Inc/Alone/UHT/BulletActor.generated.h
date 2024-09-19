// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BulletActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ALONE_BulletActor_generated_h
#error "BulletActor.generated.h already included, missing '#pragma once' in BulletActor.h"
#endif
#define ALONE_BulletActor_generated_h

#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_SPARSE_DATA
#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileHit);


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_ACCESSORS
#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletActor(); \
	friend struct Z_Construct_UClass_ABulletActor_Statics; \
public: \
	DECLARE_CLASS(ABulletActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(ABulletActor)


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABulletActor(); \
	friend struct Z_Construct_UClass_ABulletActor_Statics; \
public: \
	DECLARE_CLASS(ABulletActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alone"), NO_API) \
	DECLARE_SERIALIZER(ABulletActor)


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletActor(ABulletActor&&); \
	NO_API ABulletActor(const ABulletActor&); \
public: \
	NO_API virtual ~ABulletActor();


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletActor(ABulletActor&&); \
	NO_API ABulletActor(const ABulletActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletActor) \
	NO_API virtual ~ABulletActor();


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_9_PROLOG
#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_SPARSE_DATA \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_RPC_WRAPPERS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_ACCESSORS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_INCLASS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_SPARSE_DATA \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_ACCESSORS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_AloneProject_Alone_Source_Alone_BulletActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALONE_API UClass* StaticClass<class ABulletActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AloneProject_Alone_Source_Alone_BulletActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
