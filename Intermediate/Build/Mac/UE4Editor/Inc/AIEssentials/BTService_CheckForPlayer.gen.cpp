// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTService_CheckForPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CheckForPlayer() {}
// Cross Module References
	AIESSENTIALS_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister();
	AIESSENTIALS_API UClass* Z_Construct_UClass_UBTService_CheckForPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_AIEssentials();
// End Cross Module References
	void UBTService_CheckForPlayer::StaticRegisterNativesUBTService_CheckForPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer_NoRegister()
	{
		return UBTService_CheckForPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTService_CheckForPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService,
				(UObject* (*)())Z_Construct_UPackage__Script_AIEssentials,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BTService_CheckForPlayer.h" },
				{ "ModuleRelativePath", "BTService_CheckForPlayer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTService_CheckForPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTService_CheckForPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTService_CheckForPlayer, 2490869326);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_CheckForPlayer(Z_Construct_UClass_UBTService_CheckForPlayer, &UBTService_CheckForPlayer::StaticClass, TEXT("/Script/AIEssentials"), TEXT("UBTService_CheckForPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CheckForPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
