// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MissionOperater.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissionOperater() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionOperator_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionOperator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMissionOperator::execGetCurPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMissionPoint**)Z_Param__Result=P_THIS->GetCurPoint();
		P_NATIVE_END;
	}
	void AMissionOperator::StaticRegisterNativesAMissionOperator()
	{
		UClass* Class = AMissionOperator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurPoint", &AMissionOperator::execGetCurPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics
	{
		struct MissionOperator_eventGetCurPoint_Parms
		{
			AMissionPoint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MissionOperator_eventGetCurPoint_Parms, ReturnValue), Z_Construct_UClass_AMissionPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MissionOperater.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissionOperator, nullptr, "GetCurPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::MissionOperator_eventGetCurPoint_Parms), Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissionOperator_GetCurPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionOperator_GetCurPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMissionOperator);
	UClass* Z_Construct_UClass_AMissionOperator_NoRegister()
	{
		return AMissionOperator::StaticClass();
	}
	struct Z_Construct_UClass_AMissionOperator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurPoint_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissionOperator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMissionOperator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMissionOperator_GetCurPoint, "GetCurPoint" }, // 1429833948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionOperator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MissionOperater.h" },
		{ "ModuleRelativePath", "MissionOperater.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMissionPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "MissionOperator" },
		{ "ModuleRelativePath", "MissionOperater.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0020080000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionOperator, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionOperator_Statics::NewProp_CurPoint_MetaData[] = {
		{ "Category", "MissionOperator" },
		{ "ModuleRelativePath", "MissionOperater.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMissionOperator_Statics::NewProp_CurPoint = { "CurPoint", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionOperator, CurPoint), METADATA_PARAMS(Z_Construct_UClass_AMissionOperator_Statics::NewProp_CurPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionOperator_Statics::NewProp_CurPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissionOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionOperator_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionOperator_Statics::NewProp_CurPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissionOperator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissionOperator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMissionOperator_Statics::ClassParams = {
		&AMissionOperator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMissionOperator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMissionOperator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMissionOperator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionOperator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissionOperator()
	{
		if (!Z_Registration_Info_UClass_AMissionOperator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMissionOperator.OuterSingleton, Z_Construct_UClass_AMissionOperator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMissionOperator.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AMissionOperator>()
	{
		return AMissionOperator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissionOperator);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MissionOperater_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MissionOperater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMissionOperator, AMissionOperator::StaticClass, TEXT("AMissionOperator"), &Z_Registration_Info_UClass_AMissionOperator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMissionOperator), 2441468735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MissionOperater_h_323664990(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MissionOperater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_MissionOperater_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
