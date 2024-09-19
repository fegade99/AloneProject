// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/ZombieAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	ALONE_API UClass* Z_Construct_UClass_AZombieAIController();
	ALONE_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void AZombieAIController::StaticRegisterNativesAZombieAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieAIController);
	UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
	{
		return AZombieAIController::StaticClass();
	}
	struct Z_Construct_UClass_AZombieAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ZombieAIController.h" },
		{ "ModuleRelativePath", "ZombieAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
		&AZombieAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieAIController()
	{
		if (!Z_Registration_Info_UClass_AZombieAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieAIController.OuterSingleton, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieAIController.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<AZombieAIController>()
	{
		return AZombieAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
	AZombieAIController::~AZombieAIController() {}
	struct Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_ZombieAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_ZombieAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieAIController, AZombieAIController::StaticClass, TEXT("AZombieAIController"), &Z_Registration_Info_UClass_AZombieAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieAIController), 1782539649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_ZombieAIController_h_2827578511(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_ZombieAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_ZombieAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
