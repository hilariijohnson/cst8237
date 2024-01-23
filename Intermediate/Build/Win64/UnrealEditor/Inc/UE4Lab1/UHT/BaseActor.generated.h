// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4LAB1_BaseActor_generated_h
#error "BaseActor.generated.h already included, missing '#pragma once' in BaseActor.h"
#endif
#define UE4LAB1_BaseActor_generated_h

#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_SPARSE_DATA
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_ACCESSORS
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseActor(); \
	friend struct Z_Construct_UClass_ABaseActor_Statics; \
public: \
	DECLARE_CLASS(ABaseActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4Lab1"), NO_API) \
	DECLARE_SERIALIZER(ABaseActor)


#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseActor(ABaseActor&&); \
	NO_API ABaseActor(const ABaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseActor) \
	NO_API virtual ~ABaseActor();


#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_9_PROLOG
#define FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_SPARSE_DATA \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_ACCESSORS \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4LAB1_API UClass* StaticClass<class ABaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE4Lab1_Source_UE4Lab1_BaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
