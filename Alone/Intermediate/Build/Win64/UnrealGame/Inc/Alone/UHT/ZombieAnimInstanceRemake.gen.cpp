// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/ZombieAnimInstanceRemake.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAnimInstanceRemake() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	ALONE_API UClass* Z_Construct_UClass_UZombieAnimInstanceRemake();
	ALONE_API UClass* Z_Construct_UClass_UZombieAnimInstanceRemake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	DEFINE_FUNCTION(UZombieAnimInstanceRemake::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Deltatime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_Deltatime);
		P_NATIVE_END;
	}
	void UZombieAnimInstanceRemake::StaticRegisterNativesUZombieAnimInstanceRemake()
	{
		UClass* Class = UZombieAnimInstanceRemake::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UZombieAnimInstanceRemake::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics
	{
		struct ZombieAnimInstanceRemake_eventUpdateAnimationProperties_Parms
		{
			float Deltatime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Deltatime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::NewProp_Deltatime = { "Deltatime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ZombieAnimInstanceRemake_eventUpdateAnimationProperties_Parms, Deltatime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::NewProp_Deltatime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieAnimInstanceRemake, nullptr, "UpdateAnimationProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::ZombieAnimInstanceRemake_eventUpdateAnimationProperties_Parms), Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZombieAnimInstanceRemake);
	UClass* Z_Construct_UClass_UZombieAnimInstanceRemake_NoRegister()
	{
		return UZombieAnimInstanceRemake::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAnimInstanceRemake_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombieCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZombieCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombieSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZombieSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombiebIsAir_MetaData[];
#endif
		static void NewProp_ZombiebIsAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ZombiebIsAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombiebIsAccelerating_MetaData[];
#endif
		static void NewProp_ZombiebIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ZombiebIsAccelerating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieAnimInstanceRemake_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 2656123254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ZombieAnimInstanceRemake.h" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UZombieAnimInstanceRemake*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZombieAnimInstanceRemake), &Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieCharacter = { "ZombieCharacter", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZombieAnimInstanceRemake, ZombieCharacter), Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieSpeed = { "ZombieSpeed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZombieAnimInstanceRemake, ZombieSpeed), METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir_SetBit(void* Obj)
	{
		((UZombieAnimInstanceRemake*)Obj)->ZombiebIsAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir = { "ZombiebIsAir", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZombieAnimInstanceRemake), &Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ZombieAnimInstanceRemake.h" },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating_SetBit(void* Obj)
	{
		((UZombieAnimInstanceRemake*)Obj)->ZombiebIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating = { "ZombiebIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZombieAnimInstanceRemake), &Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombieSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::NewProp_ZombiebIsAccelerating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAnimInstanceRemake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::ClassParams = {
		&UZombieAnimInstanceRemake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAnimInstanceRemake()
	{
		if (!Z_Registration_Info_UClass_UZombieAnimInstanceRemake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZombieAnimInstanceRemake.OuterSingleton, Z_Construct_UClass_UZombieAnimInstanceRemake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZombieAnimInstanceRemake.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<UZombieAnimInstanceRemake>()
	{
		return UZombieAnimInstanceRemake::StaticClass();
	}
	UZombieAnimInstanceRemake::UZombieAnimInstanceRemake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAnimInstanceRemake);
	UZombieAnimInstanceRemake::~UZombieAnimInstanceRemake() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieAnimInstanceRemake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieAnimInstanceRemake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZombieAnimInstanceRemake, UZombieAnimInstanceRemake::StaticClass, TEXT("UZombieAnimInstanceRemake"), &Z_Registration_Info_UClass_UZombieAnimInstanceRemake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZombieAnimInstanceRemake), 1360690179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieAnimInstanceRemake_h_3585802837(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieAnimInstanceRemake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieAnimInstanceRemake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
