// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/AloneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAloneGameModeBase() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_AAloneGameModeBase();
	ALONE_API UClass* Z_Construct_UClass_AAloneGameModeBase_NoRegister();
	ALONE_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void AAloneGameModeBase::StaticRegisterNativesAAloneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAloneGameModeBase);
	UClass* Z_Construct_UClass_AAloneGameModeBase_NoRegister()
	{
		return AAloneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAloneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombieClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ZombieClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAloneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAloneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AloneGameModeBase.h" },
		{ "ModuleRelativePath", "AloneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAloneGameModeBase_Statics::NewProp_ZombieClass_MetaData[] = {
		{ "Category", "GameSettings" },
		{ "ModuleRelativePath", "AloneGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAloneGameModeBase_Statics::NewProp_ZombieClass = { "ZombieClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAloneGameModeBase, ZombieClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAloneGameModeBase_Statics::NewProp_ZombieClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAloneGameModeBase_Statics::NewProp_ZombieClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAloneGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAloneGameModeBase_Statics::NewProp_ZombieClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAloneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAloneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAloneGameModeBase_Statics::ClassParams = {
		&AAloneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAloneGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAloneGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAloneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAloneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAloneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAloneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAloneGameModeBase.OuterSingleton, Z_Construct_UClass_AAloneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAloneGameModeBase.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<AAloneGameModeBase>()
	{
		return AAloneGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAloneGameModeBase);
	AAloneGameModeBase::~AAloneGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAloneGameModeBase, AAloneGameModeBase::StaticClass, TEXT("AAloneGameModeBase"), &Z_Registration_Info_UClass_AAloneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAloneGameModeBase), 906362472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameModeBase_h_2099206760(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
