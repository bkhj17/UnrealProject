// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/BTTaskPatrolMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskPatrolMove() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTTaskPatrolMove_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTTaskPatrolMove();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBTTaskPatrolMove::StaticRegisterNativesUBTTaskPatrolMove()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTaskPatrolMove);
	UClass* Z_Construct_UClass_UBTTaskPatrolMove_NoRegister()
	{
		return UBTTaskPatrolMove::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskPatrolMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskPatrolMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskPatrolMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTaskPatrolMove.h" },
		{ "ModuleRelativePath", "AI/BTTaskPatrolMove.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskPatrolMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskPatrolMove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskPatrolMove_Statics::ClassParams = {
		&UBTTaskPatrolMove::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskPatrolMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskPatrolMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskPatrolMove()
	{
		if (!Z_Registration_Info_UClass_UBTTaskPatrolMove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskPatrolMove.OuterSingleton, Z_Construct_UClass_UBTTaskPatrolMove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTaskPatrolMove.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBTTaskPatrolMove>()
	{
		return UBTTaskPatrolMove::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskPatrolMove);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskPatrolMove_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskPatrolMove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskPatrolMove, UBTTaskPatrolMove::StaticClass, TEXT("UBTTaskPatrolMove"), &Z_Registration_Info_UClass_UBTTaskPatrolMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskPatrolMove), 545470641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskPatrolMove_h_2976232815(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskPatrolMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTTaskPatrolMove_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
