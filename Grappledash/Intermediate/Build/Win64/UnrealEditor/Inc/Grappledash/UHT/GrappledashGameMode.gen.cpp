// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grappledash/GrappledashGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappledashGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GRAPPLEDASH_API UClass* Z_Construct_UClass_AGrappledashGameMode();
GRAPPLEDASH_API UClass* Z_Construct_UClass_AGrappledashGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Grappledash();
// End Cross Module References

// Begin Class AGrappledashGameMode
void AGrappledashGameMode::StaticRegisterNativesAGrappledashGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappledashGameMode);
UClass* Z_Construct_UClass_AGrappledashGameMode_NoRegister()
{
	return AGrappledashGameMode::StaticClass();
}
struct Z_Construct_UClass_AGrappledashGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GrappledashGameMode.h" },
		{ "ModuleRelativePath", "GrappledashGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappledashGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGrappledashGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Grappledash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappledashGameMode_Statics::ClassParams = {
	&AGrappledashGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappledashGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrappledashGameMode()
{
	if (!Z_Registration_Info_UClass_AGrappledashGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappledashGameMode.OuterSingleton, Z_Construct_UClass_AGrappledashGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrappledashGameMode.OuterSingleton;
}
template<> GRAPPLEDASH_API UClass* StaticClass<AGrappledashGameMode>()
{
	return AGrappledashGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappledashGameMode);
AGrappledashGameMode::~AGrappledashGameMode() {}
// End Class AGrappledashGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrappledashGameMode, AGrappledashGameMode::StaticClass, TEXT("AGrappledashGameMode"), &Z_Registration_Info_UClass_AGrappledashGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappledashGameMode), 3590519584U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashGameMode_h_2201507303(TEXT("/Script/Grappledash"),
	Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
