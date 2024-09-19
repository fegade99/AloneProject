// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/AloneGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAloneGameStateBase() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_AAloneGameStateBase();
	ALONE_API UClass* Z_Construct_UClass_AAloneGameStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void AAloneGameStateBase::StaticRegisterNativesAAloneGameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAloneGameStateBase);
	UClass* Z_Construct_UClass_AAloneGameStateBase_NoRegister()
	{
		return AAloneGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AAloneGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAloneGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAloneGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AloneGameStateBase.h" },
		{ "ModuleRelativePath", "AloneGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAloneGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAloneGameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAloneGameStateBase_Statics::ClassParams = {
		&AAloneGameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAloneGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAloneGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAloneGameStateBase()
	{
		if (!Z_Registration_Info_UClass_AAloneGameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAloneGameStateBase.OuterSingleton, Z_Construct_UClass_AAloneGameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAloneGameStateBase.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<AAloneGameStateBase>()
	{
		return AAloneGameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAloneGameStateBase);
	AAloneGameStateBase::~AAloneGameStateBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneGameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneGameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAloneGameStateBase, AAloneGameStateBase::StaticClass, TEXT("AAloneGameStateBase"), &Z_Registration_Info_UClass_AAloneGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAloneGameStateBase), 3356024014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneGameStateBase_h_1133543225(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneGameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
