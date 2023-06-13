// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/BotAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotAnim() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBotAnim_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBotAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBotAnim::StaticRegisterNativesUBotAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBotAnim);
	UClass* Z_Construct_UClass_UBotAnim_NoRegister()
	{
		return UBotAnim::StaticClass();
	}
	struct Z_Construct_UClass_UBotAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFalling_MetaData[];
#endif
		static void NewProp_bFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlying_MetaData[];
#endif
		static void NewProp_bFlying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBotAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/BotAnim.h" },
		{ "ModuleRelativePath", "Character/BotAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling_MetaData[] = {
		{ "Category", "BotAnim" },
		{ "ModuleRelativePath", "Character/BotAnim.h" },
	};
#endif
	void Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling_SetBit(void* Obj)
	{
		((UBotAnim*)Obj)->bFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling = { "bFalling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBotAnim), &Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying_MetaData[] = {
		{ "Category", "BotAnim" },
		{ "ModuleRelativePath", "Character/BotAnim.h" },
	};
#endif
	void Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying_SetBit(void* Obj)
	{
		((UBotAnim*)Obj)->bFlying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying = { "bFlying", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBotAnim), &Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotAnim_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "BotAnim" },
		{ "ModuleRelativePath", "Character/BotAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBotAnim_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBotAnim, Rotation), METADATA_PARAMS(Z_Construct_UClass_UBotAnim_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotAnim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BotAnim" },
		{ "ModuleRelativePath", "Character/BotAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBotAnim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBotAnim, Speed), METADATA_PARAMS(Z_Construct_UClass_UBotAnim_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBotAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotAnim_Statics::NewProp_bFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotAnim_Statics::NewProp_bFlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotAnim_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotAnim_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBotAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBotAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBotAnim_Statics::ClassParams = {
		&UBotAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBotAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBotAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBotAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBotAnim()
	{
		if (!Z_Registration_Info_UClass_UBotAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBotAnim.OuterSingleton, Z_Construct_UClass_UBotAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBotAnim.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBotAnim>()
	{
		return UBotAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBotAnim);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BotAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BotAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBotAnim, UBotAnim::StaticClass, TEXT("UBotAnim"), &Z_Registration_Info_UClass_UBotAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBotAnim), 816785272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BotAnim_h_3109972118(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BotAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BotAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
