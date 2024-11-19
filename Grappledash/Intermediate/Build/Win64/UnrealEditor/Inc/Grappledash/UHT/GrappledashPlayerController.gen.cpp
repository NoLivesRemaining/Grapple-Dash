// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grappledash/GrappledashPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappledashPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GRAPPLEDASH_API UClass* Z_Construct_UClass_AGrappledashPlayerController();
GRAPPLEDASH_API UClass* Z_Construct_UClass_AGrappledashPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Grappledash();
// End Cross Module References

// Begin Class AGrappledashPlayerController
void AGrappledashPlayerController::StaticRegisterNativesAGrappledashPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappledashPlayerController);
UClass* Z_Construct_UClass_AGrappledashPlayerController_NoRegister()
{
	return AGrappledashPlayerController::StaticClass();
}
struct Z_Construct_UClass_AGrappledashPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GrappledashPlayerController.h" },
		{ "ModuleRelativePath", "GrappledashPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "GrappledashPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappledashPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappledashPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappledashPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappledashPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappledashPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGrappledashPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Grappledash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappledashPlayerController_Statics::ClassParams = {
	&AGrappledashPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGrappledashPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappledashPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappledashPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGrappledashPlayerController()
{
	if (!Z_Registration_Info_UClass_AGrappledashPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappledashPlayerController.OuterSingleton, Z_Construct_UClass_AGrappledashPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGrappledashPlayerController.OuterSingleton;
}
template<> GRAPPLEDASH_API UClass* StaticClass<AGrappledashPlayerController>()
{
	return AGrappledashPlayerController::StaticClass();
}
AGrappledashPlayerController::AGrappledashPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappledashPlayerController);
AGrappledashPlayerController::~AGrappledashPlayerController() {}
// End Class AGrappledashPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGrappledashPlayerController, AGrappledashPlayerController::StaticClass, TEXT("AGrappledashPlayerController"), &Z_Registration_Info_UClass_AGrappledashPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappledashPlayerController), 1588905446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_2035545484(TEXT("/Script/Grappledash"),
	Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
