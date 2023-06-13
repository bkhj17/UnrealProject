// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/Bot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBot() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ABot_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ABot();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBoosterComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	void ABot::StaticRegisterNativesABot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABot);
	UClass* Z_Construct_UClass_ABot_NoRegister()
	{
		return ABot::StaticClass();
	}
	struct Z_Construct_UClass_ABot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Booster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Booster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Bot.h" },
		{ "ModuleRelativePath", "Character/Bot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABot_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Bot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Bot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABot_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABot, Targets), Z_Construct_UClass_UTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABot_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABot_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABot_Statics::NewProp_Booster_MetaData[] = {
		{ "Category", "Bot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Bot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABot_Statics::NewProp_Booster = { "Booster", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABot, Booster), Z_Construct_UClass_UBoosterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABot_Statics::NewProp_Booster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABot_Statics::NewProp_Booster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABot_Statics::NewProp_RotSpeed_MetaData[] = {
		{ "Category", "Bot" },
		{ "ModuleRelativePath", "Character/Bot.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABot_Statics::NewProp_RotSpeed = { "RotSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABot, RotSpeed), METADATA_PARAMS(Z_Construct_UClass_ABot_Statics::NewProp_RotSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABot_Statics::NewProp_RotSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABot_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABot_Statics::NewProp_Booster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABot_Statics::NewProp_RotSpeed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABot_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ABot, IGenericTeamAgentInterface), false },  // 3302830175
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABot_Statics::ClassParams = {
		&ABot::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABot_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABot_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABot()
	{
		if (!Z_Registration_Info_UClass_ABot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABot.OuterSingleton, Z_Construct_UClass_ABot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABot.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ABot>()
	{
		return ABot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABot);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Bot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Bot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABot, ABot::StaticClass, TEXT("ABot"), &Z_Registration_Info_UClass_ABot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABot), 2601747510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Bot_h_1491367335(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Bot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Bot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
