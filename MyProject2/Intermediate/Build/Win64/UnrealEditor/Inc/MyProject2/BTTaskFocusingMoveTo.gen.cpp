// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/BTTaskFocusingMoveTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskFocusingMoveTo() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTTaskFocusingMoveTo_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTTaskFocusingMoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBTTaskFocusingMoveTo::StaticRegisterNativesUBTTaskFocusingMoveTo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTaskFocusingMoveTo);
	UClass* Z_Construct_UClass_UBTTaskFocusingMoveTo_NoRegister()
	{
		return UBTTaskFocusingMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTaskFocusingMoveTo.h" },
		{ "ModuleRelativePath", "AI/BTTaskFocusingMoveTo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskFocusingMoveTo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::ClassParams = {
		&UBTTaskFocusingMoveTo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskFocusingMoveTo()
	{
		if (!Z_Registration_Info_UClass_UBTTaskFocusingMoveTo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskFocusingMoveTo.OuterSingleton, Z_Construct_UClass_UBTTaskFocusingMoveTo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTaskFocusingMoveTo.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBTTaskFocusingMoveTo>()
	{
		return UBTTaskFocusingMoveTo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskFocusingMoveTo);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskFocusingMoveTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskFocusingMoveTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskFocusingMoveTo, UBTTaskFocusingMoveTo::StaticClass, TEXT("UBTTaskFocusingMoveTo"), &Z_Registration_Info_UClass_UBTTaskFocusingMoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskFocusingMoveTo), 4269035355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskFocusingMoveTo_h_2652960010(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskFocusingMoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskFocusingMoveTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
