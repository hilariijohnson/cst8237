// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Lab1/MovingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE4LAB1_API UClass* Z_Construct_UClass_AMovingActor();
	UE4LAB1_API UClass* Z_Construct_UClass_AMovingActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE4Lab1();
// End Cross Module References
	void AMovingActor::StaticRegisterNativesAMovingActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingActor);
	UClass* Z_Construct_UClass_AMovingActor_NoRegister()
	{
		return AMovingActor::StaticClass();
	}
	struct Z_Construct_UClass_AMovingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Lab1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingActor.h" },
		{ "ModuleRelativePath", "MovingActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingActor_Statics::ClassParams = {
		&AMovingActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMovingActor()
	{
		if (!Z_Registration_Info_UClass_AMovingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingActor.OuterSingleton, Z_Construct_UClass_AMovingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingActor.OuterSingleton;
	}
	template<> UE4LAB1_API UClass* StaticClass<AMovingActor>()
	{
		return AMovingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingActor);
	AMovingActor::~AMovingActor() {}
	struct Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_MovingActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_MovingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingActor, AMovingActor::StaticClass, TEXT("AMovingActor"), &Z_Registration_Info_UClass_AMovingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingActor), 2286500565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_MovingActor_h_3289841158(TEXT("/Script/UE4Lab1"),
		Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_MovingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_MovingActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
