// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoidsC/BoidsCPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidsCPlayerController() {}
// Cross Module References
	BOIDSC_API UClass* Z_Construct_UClass_ABoidsCPlayerController_NoRegister();
	BOIDSC_API UClass* Z_Construct_UClass_ABoidsCPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BoidsC();
// End Cross Module References
	void ABoidsCPlayerController::StaticRegisterNativesABoidsCPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ABoidsCPlayerController_NoRegister()
	{
		return ABoidsCPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABoidsCPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoidsCPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BoidsC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoidsCPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BoidsCPlayerController.h" },
		{ "ModuleRelativePath", "BoidsCPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoidsCPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidsCPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoidsCPlayerController_Statics::ClassParams = {
		&ABoidsCPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoidsCPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoidsCPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoidsCPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoidsCPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoidsCPlayerController, 3360652182);
	template<> BOIDSC_API UClass* StaticClass<ABoidsCPlayerController>()
	{
		return ABoidsCPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoidsCPlayerController(Z_Construct_UClass_ABoidsCPlayerController, &ABoidsCPlayerController::StaticClass, TEXT("/Script/BoidsC"), TEXT("ABoidsCPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidsCPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
