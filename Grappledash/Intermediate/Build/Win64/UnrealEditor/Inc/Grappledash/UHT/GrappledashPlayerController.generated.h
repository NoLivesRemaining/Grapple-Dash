// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrappledashPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAPPLEDASH_GrappledashPlayerController_generated_h
#error "GrappledashPlayerController.generated.h already included, missing '#pragma once' in GrappledashPlayerController.h"
#endif
#define GRAPPLEDASH_GrappledashPlayerController_generated_h

#define FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappledashPlayerController(); \
	friend struct Z_Construct_UClass_AGrappledashPlayerController_Statics; \
public: \
	DECLARE_CLASS(AGrappledashPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Grappledash"), NO_API) \
	DECLARE_SERIALIZER(AGrappledashPlayerController)


#define FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrappledashPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGrappledashPlayerController(AGrappledashPlayerController&&); \
	AGrappledashPlayerController(const AGrappledashPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappledashPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappledashPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrappledashPlayerController) \
	NO_API virtual ~AGrappledashPlayerController();


#define FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_14_PROLOG
#define FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPPLEDASH_API UClass* StaticClass<class AGrappledashPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Grappledash_Source_Grappledash_GrappledashPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
