// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrappledashProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GRAPPLEDASH_GrappledashProjectile_generated_h
#error "GrappledashProjectile.generated.h already included, missing '#pragma once' in GrappledashProjectile.h"
#endif
#define GRAPPLEDASH_GrappledashProjectile_generated_h

#define FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrappledashProjectile(); \
	friend struct Z_Construct_UClass_AGrappledashProjectile_Statics; \
public: \
	DECLARE_CLASS(AGrappledashProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Grappledash"), NO_API) \
	DECLARE_SERIALIZER(AGrappledashProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGrappledashProjectile(AGrappledashProjectile&&); \
	AGrappledashProjectile(const AGrappledashProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrappledashProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrappledashProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrappledashProjectile) \
	NO_API virtual ~AGrappledashProjectile();


#define FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_12_PROLOG
#define FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Grappledash_Source_Grappledash_GrappledashProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAPPLEDASH_API UClass* StaticClass<class AGrappledashProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Grappledash_Source_Grappledash_GrappledashProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
