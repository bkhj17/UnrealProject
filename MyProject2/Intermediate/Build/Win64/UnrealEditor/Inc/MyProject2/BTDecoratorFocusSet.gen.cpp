// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/BTDecoratorFocusSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecoratorFocusSet() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTDecoratorFocusSet_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTDecoratorFocusSet();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBTDecoratorFocusSet::StaticRegisterNativesUBTDecoratorFocusSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecoratorFocusSet);
	UClass* Z_Construct_UClass_UBTDecoratorFocusSet_NoRegister()
	{
		return UBTDecoratorFocusSet::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecoratorFocusSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecoratorFocusSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecoratorFocusSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTDecoratorFocusSet.h" },
		{ "ModuleRelativePath", "AI/BTDecoratorFocusSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecoratorFocusSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecoratorFocusSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecoratorFocusSet_Statics::ClassParams = {
		&UBTDecoratorFocusSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTDecoratorFocusSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecoratorFocusSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecoratorFocusSet()
	{
		if (!Z_Registration_Info_UClass_UBTDecoratorFocusSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecoratorFocusSet.OuterSingleton, Z_Construct_UClass_UBTDecoratorFocusSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecoratorFocusSet.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBTDecoratorFocusSet>()
	{
		return UBTDecoratorFocusSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecoratorFocusSet);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorFocusSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorFocusSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecoratorFocusSet, UBTDecoratorFocusSet::StaticClass, TEXT("UBTDecoratorFocusSet"), &Z_Registration_Info_UClass_UBTDecoratorFocusSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecoratorFocusSet), 3352844098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorFocusSet_h_4088521496(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorFocusSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTDecoratorFocusSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
