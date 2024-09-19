// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alone/AloneGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAloneGameInstance() {}
// Cross Module References
	ALONE_API UClass* Z_Construct_UClass_UAloneGameInstance();
	ALONE_API UClass* Z_Construct_UClass_UAloneGameInstance_NoRegister();
	ALONE_API UScriptStruct* Z_Construct_UScriptStruct_FMapInfo();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Alone();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapInfo;
class UScriptStruct* FMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapInfo, (UObject*)Z_Construct_UPackage__Script_Alone(), TEXT("MapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MapInfo.OuterSingleton;
}
template<> ALONE_API UScriptStruct* StaticStruct<FMapInfo>()
{
	return FMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "AloneGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "AloneGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL = { "MapURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapInfo, MapURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "MapInfo" },
		{ "ModuleRelativePath", "AloneGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapInfo, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapInfo_Statics::NewProp_MapName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
		nullptr,
		&NewStructOps,
		"MapInfo",
		sizeof(FMapInfo),
		alignof(FMapInfo),
		Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton, Z_Construct_UScriptStruct_FMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapInfo.InnerSingleton;
	}
	void UAloneGameInstance::StaticRegisterNativesUAloneGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAloneGameInstance);
	UClass* Z_Construct_UClass_UAloneGameInstance_NoRegister()
	{
		return UAloneGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAloneGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAloneGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Alone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAloneGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AloneGameInstance.h" },
		{ "ModuleRelativePath", "AloneGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAloneGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAloneGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAloneGameInstance_Statics::ClassParams = {
		&UAloneGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAloneGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAloneGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAloneGameInstance()
	{
		if (!Z_Registration_Info_UClass_UAloneGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAloneGameInstance.OuterSingleton, Z_Construct_UClass_UAloneGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAloneGameInstance.OuterSingleton;
	}
	template<> ALONE_API UClass* StaticClass<UAloneGameInstance>()
	{
		return UAloneGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAloneGameInstance);
	UAloneGameInstance::~UAloneGameInstance() {}
	struct Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ScriptStructInfo[] = {
		{ FMapInfo::StaticStruct, Z_Construct_UScriptStruct_FMapInfo_Statics::NewStructOps, TEXT("MapInfo"), &Z_Registration_Info_UScriptStruct_MapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapInfo), 1194775523U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAloneGameInstance, UAloneGameInstance::StaticClass, TEXT("UAloneGameInstance"), &Z_Registration_Info_UClass_UAloneGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAloneGameInstance), 1393031168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_833788634(TEXT("/Script/Alone"),
		Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AloneProject_Alone_Source_Alone_AloneGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
