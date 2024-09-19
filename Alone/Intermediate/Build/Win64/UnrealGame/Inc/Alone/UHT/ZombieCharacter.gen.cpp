// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/ZombieCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCharacter() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_AZombieCharacter();
	ALONE_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void AZombieCharacter::StaticRegisterNativesAZombieCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieCharacter);
	UClass* Z_Construct_UClass_AZombieCharacter_NoRegister()
	{
		return AZombieCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AZombieCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroanSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroanSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPoints_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ZombieCharacter.h" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_GroanSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_GroanSound = { "GroanSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZombieCharacter, GroanSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_GroanSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_GroanSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_HealthPoints_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_HealthPoints = { "HealthPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZombieCharacter, HealthPoints), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_HealthPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_HealthPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZombieCharacter, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZombieCharacter, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((AZombieCharacter*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AZombieCharacter), &Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ZombieCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackDelay = { "AttackDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AZombieCharacter, AttackDelay), METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_GroanSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_HealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieCharacter_Statics::NewProp_AttackDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieCharacter_Statics::ClassParams = {
		&AZombieCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombieCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieCharacter()
	{
		if (!Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton, Z_Construct_UClass_AZombieCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieCharacter.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<AZombieCharacter>()
	{
		return AZombieCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieCharacter);
	AZombieCharacter::~AZombieCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieCharacter, AZombieCharacter::StaticClass, TEXT("AZombieCharacter"), &Z_Registration_Info_UClass_AZombieCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieCharacter), 741491987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieCharacter_h_2933732413(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_ZombieCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
