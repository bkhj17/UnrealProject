// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/BTServiceSearchMovePoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTServiceSearchMovePoint() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTServiceSearchMovePoint_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBTServiceSearchMovePoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UBTServiceSearchMovePoint::StaticRegisterNativesUBTServiceSearchMovePoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTServiceSearchMovePoint);
	UClass* Z_Construct_UClass_UBTServiceSearchMovePoint_NoRegister()
	{
		return UBTServiceSearchMovePoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTServiceSearchMovePoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTServiceSearchMovePoint.h" },
		{ "ModuleRelativePath", "AI/BTServiceSearchMovePoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "BTServiceSearchMovePoint" },
		{ "ModuleRelativePath", "AI/BTServiceSearchMovePoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTServiceSearchMovePoint, Range), METADATA_PARAMS(Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::NewProp_Range_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::NewProp_Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTServiceSearchMovePoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::ClassParams = {
		&UBTServiceSearchMovePoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTServiceSearchMovePoint()
	{
		if (!Z_Registration_Info_UClass_UBTServiceSearchMovePoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTServiceSearchMovePoint.OuterSingleton, Z_Construct_UClass_UBTServiceSearchMovePoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTServiceSearchMovePoint.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBTServiceSearchMovePoint>()
	{
		return UBTServiceSearchMovePoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTServiceSearchMovePoint);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTServiceSearchMovePoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTServiceSearchMovePoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTServiceSearchMovePoint, UBTServiceSearchMovePoint::StaticClass, TEXT("UBTServiceSearchMovePoint"), &Z_Registration_Info_UClass_UBTServiceSearchMovePoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTServiceSearchMovePoint), 759519572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTServiceSearchMovePoint_h_2472426861(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTServiceSearchMovePoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_BTServiceSearchMovePoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
