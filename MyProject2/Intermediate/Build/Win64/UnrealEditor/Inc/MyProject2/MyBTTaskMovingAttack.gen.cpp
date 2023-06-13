// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/MyBTTaskMovingAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBTTaskMovingAttack() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyBTTaskMovingAttack_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyBTTaskMovingAttack();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTTaskFocusingMoveTo();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UMyBTTaskMovingAttack::StaticRegisterNativesUMyBTTaskMovingAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBTTaskMovingAttack);
	UClass* Z_Construct_UClass_UMyBTTaskMovingAttack_NoRegister()
	{
		return UMyBTTaskMovingAttack::StaticClass();
	}
	struct Z_Construct_UClass_UMyBTTaskMovingAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskFocusingMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/MyBTTaskMovingAttack.h" },
		{ "ModuleRelativePath", "AI/MyBTTaskMovingAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTaskMovingAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::ClassParams = {
		&UMyBTTaskMovingAttack::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyBTTaskMovingAttack()
	{
		if (!Z_Registration_Info_UClass_UMyBTTaskMovingAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTaskMovingAttack.OuterSingleton, Z_Construct_UClass_UMyBTTaskMovingAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyBTTaskMovingAttack.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UMyBTTaskMovingAttack>()
	{
		return UMyBTTaskMovingAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTaskMovingAttack);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MyBTTaskMovingAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MyBTTaskMovingAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTaskMovingAttack, UMyBTTaskMovingAttack::StaticClass, TEXT("UMyBTTaskMovingAttack"), &Z_Registration_Info_UClass_UMyBTTaskMovingAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTaskMovingAttack), 96982607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MyBTTaskMovingAttack_h_3256218975(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MyBTTaskMovingAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MyBTTaskMovingAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
