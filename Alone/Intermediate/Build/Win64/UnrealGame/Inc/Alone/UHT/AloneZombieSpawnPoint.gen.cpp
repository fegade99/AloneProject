// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/AloneZombieSpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAloneZombieSpawnPoint() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_AAloneZombieSpawnPoint();
	ALONE_API UClass* Z_Construct_UClass_AAloneZombieSpawnPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void AAloneZombieSpawnPoint::StaticRegisterNativesAAloneZombieSpawnPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAloneZombieSpawnPoint);
	UClass* Z_Construct_UClass_AAloneZombieSpawnPoint_NoRegister()
	{
		return AAloneZombieSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AAloneZombieSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AloneZombieSpawnPoint.h" },
		{ "ModuleRelativePath", "AloneZombieSpawnPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAloneZombieSpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::ClassParams = {
		&AAloneZombieSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAloneZombieSpawnPoint()
	{
		if (!Z_Registration_Info_UClass_AAloneZombieSpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAloneZombieSpawnPoint.OuterSingleton, Z_Construct_UClass_AAloneZombieSpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAloneZombieSpawnPoint.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<AAloneZombieSpawnPoint>()
	{
		return AAloneZombieSpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAloneZombieSpawnPoint);
	AAloneZombieSpawnPoint::~AAloneZombieSpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneZombieSpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneZombieSpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAloneZombieSpawnPoint, AAloneZombieSpawnPoint::StaticClass, TEXT("AAloneZombieSpawnPoint"), &Z_Registration_Info_UClass_AAloneZombieSpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAloneZombieSpawnPoint), 305260547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneZombieSpawnPoint_h_621118971(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneZombieSpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Alone_Source_Alone_AloneZombieSpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
