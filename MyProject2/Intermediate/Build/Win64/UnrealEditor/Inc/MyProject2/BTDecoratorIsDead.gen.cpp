// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/BTDecoratorIsDead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecoratorIsDead() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTDecoratorIsDead_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTDecoratorIsDead();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBTDecoratorIsDead::StaticRegisterNativesUBTDecoratorIsDead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecoratorIsDead);
	UClass* Z_Construct_UClass_UBTDecoratorIsDead_NoRegister()
	{
		return UBTDecoratorIsDead::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecoratorIsDead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecoratorIsDead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecoratorIsDead_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTDecoratorIsDead.h" },
		{ "ModuleRelativePath", "AI/BTDecoratorIsDead.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecoratorIsDead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecoratorIsDead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecoratorIsDead_Statics::ClassParams = {
		&UBTDecoratorIsDead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecoratorIsDead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecoratorIsDead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecoratorIsDead()
	{
		if (!Z_Registration_Info_UClass_UBTDecoratorIsDead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecoratorIsDead.OuterSingleton, Z_Construct_UClass_UBTDecoratorIsDead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecoratorIsDead.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBTDecoratorIsDead>()
	{
		return UBTDecoratorIsDead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecoratorIsDead);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorIsDead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorIsDead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecoratorIsDead, UBTDecoratorIsDead::StaticClass, TEXT("UBTDecoratorIsDead"), &Z_Registration_Info_UClass_UBTDecoratorIsDead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecoratorIsDead), 4061508238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorIsDead_h_1087467597(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorIsDead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorIsDead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
