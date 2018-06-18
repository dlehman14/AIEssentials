// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIEssentialsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEssentialsGameMode() {}
// Cross Module References
	AIESSENTIALS_API UClass* Z_Construct_UClass_AAIEssentialsGameMode_NoRegister();
	AIESSENTIALS_API UClass* Z_Construct_UClass_AAIEssentialsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AIEssentials();
// End Cross Module References
	void AAIEssentialsGameMode::StaticRegisterNativesAAIEssentialsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAIEssentialsGameMode_NoRegister()
	{
		return AAIEssentialsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIEssentialsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_AIEssentials,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AIEssentialsGameMode.h" },
				{ "ModuleRelativePath", "AIEssentialsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIEssentialsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIEssentialsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIEssentialsGameMode, 1827975635);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIEssentialsGameMode(Z_Construct_UClass_AAIEssentialsGameMode, &AAIEssentialsGameMode::StaticClass, TEXT("/Script/AIEssentials"), TEXT("AAIEssentialsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEssentialsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
