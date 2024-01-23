// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4Lab1/OrbitActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrbitActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UE4LAB1_API UClass* Z_Construct_UClass_ABaseActor();
	UE4LAB1_API UClass* Z_Construct_UClass_AOrbitActor();
	UE4LAB1_API UClass* Z_Construct_UClass_AOrbitActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE4Lab1();
// End Cross Module References
	void AOrbitActor::StaticRegisterNativesAOrbitActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOrbitActor);
	UClass* Z_Construct_UClass_AOrbitActor_NoRegister()
	{
		return AOrbitActor::StaticClass();
	}
	struct Z_Construct_UClass_AOrbitActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateAroundActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateAroundActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialRotationAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOrbitActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4Lab1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OrbitActor.h" },
		{ "ModuleRelativePath", "OrbitActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotateAroundActor_MetaData[] = {
		{ "Category", "RotateAround" },
		{ "ModuleRelativePath", "OrbitActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotateAroundActor = { "RotateAroundActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrbitActor, RotateAroundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotateAroundActor_MetaData), Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotateAroundActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RotateAround" },
		{ "ModuleRelativePath", "OrbitActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrbitActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationSpeed_MetaData), Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationRadius_MetaData[] = {
		{ "Category", "RotateAround" },
		{ "ModuleRelativePath", "OrbitActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationRadius = { "RotationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrbitActor, RotationRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationRadius_MetaData), Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "Category", "RotateAround" },
		{ "ModuleRelativePath", "OrbitActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrbitActor, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationAxis_MetaData), Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOrbitActor_Statics::NewProp_InitialRotationAngle_MetaData[] = {
		{ "Category", "RotateAround" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "OrbitActor.h" },
		{ "UIMax", "360.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOrbitActor_Statics::NewProp_InitialRotationAngle = { "InitialRotationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOrbitActor, InitialRotationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::NewProp_InitialRotationAngle_MetaData), Z_Construct_UClass_AOrbitActor_Statics::NewProp_InitialRotationAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOrbitActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotateAroundActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitActor_Statics::NewProp_RotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOrbitActor_Statics::NewProp_InitialRotationAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOrbitActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrbitActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrbitActor_Statics::ClassParams = {
		&AOrbitActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOrbitActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrbitActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrbitActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AOrbitActor()
	{
		if (!Z_Registration_Info_UClass_AOrbitActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrbitActor.OuterSingleton, Z_Construct_UClass_AOrbitActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOrbitActor.OuterSingleton;
	}
	template<> UE4LAB1_API UClass* StaticClass<AOrbitActor>()
	{
		return AOrbitActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOrbitActor);
	AOrbitActor::~AOrbitActor() {}
	struct Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_OrbitActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_OrbitActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOrbitActor, AOrbitActor::StaticClass, TEXT("AOrbitActor"), &Z_Registration_Info_UClass_AOrbitActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrbitActor), 3222309231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_OrbitActor_h_2401798065(TEXT("/Script/UE4Lab1"),
		Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_OrbitActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE4Lab1_Source_UE4Lab1_OrbitActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
