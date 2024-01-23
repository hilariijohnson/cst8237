// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Lab1/BaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UE4LAB1_API UClass* Z_Construct_UClass_ABaseActor();
	UE4LAB1_API UClass* Z_Construct_UClass_ABaseActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE4Lab1();
// End Cross Module References
	void ABaseActor::StaticRegisterNativesABaseActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseActor);
	UClass* Z_Construct_UClass_ABaseActor_NoRegister()
	{
		return ABaseActor::StaticClass();
	}
	struct Z_Construct_UClass_ABaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTransformComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootTransformComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Lab1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseActor.h" },
		{ "ModuleRelativePath", "BaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseActor_Statics::NewProp_RootTransformComponent_MetaData[] = {
		{ "Category", "Root Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseActor_Statics::NewProp_RootTransformComponent = { "RootTransformComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseActor, RootTransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::NewProp_RootTransformComponent_MetaData), Z_Construct_UClass_ABaseActor_Statics::NewProp_RootTransformComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Root Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ABaseActor_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseActor_Statics::NewProp_RootTransformComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseActor_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseActor_Statics::ClassParams = {
		&ABaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseActor()
	{
		if (!Z_Registration_Info_UClass_ABaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseActor.OuterSingleton, Z_Construct_UClass_ABaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseActor.OuterSingleton;
	}
	template<> UE4LAB1_API UClass* StaticClass<ABaseActor>()
	{
		return ABaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseActor);
	ABaseActor::~ABaseActor() {}
	struct Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseActor, ABaseActor::StaticClass, TEXT("ABaseActor"), &Z_Registration_Info_UClass_ABaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseActor), 2295194433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_3368472373(TEXT("/Script/UE4Lab1"),
		Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_BaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
