// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUD() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_APlayerHUD();
	ALONE_API UClass* Z_Construct_UClass_APlayerHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	void APlayerHUD::StaticRegisterNativesAPlayerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerHUD);
	UClass* Z_Construct_UClass_APlayerHUD_NoRegister()
	{
		return APlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlayerHUD.h" },
		{ "ModuleRelativePath", "PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerHUD_Statics::ClassParams = {
		&APlayerHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerHUD()
	{
		if (!Z_Registration_Info_UClass_APlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerHUD.OuterSingleton, Z_Construct_UClass_APlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerHUD.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<APlayerHUD>()
	{
		return APlayerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerHUD);
	APlayerHUD::~APlayerHUD() {}
	struct Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerHUD, APlayerHUD::StaticClass, TEXT("APlayerHUD"), &Z_Registration_Info_UClass_APlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerHUD), 292057283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_PlayerHUD_h_3445714265(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
