// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/MissionPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMissionPoint() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionPoint_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMissionPoint::execIsInArea)
	{
		P_GET_OBJECT(AUnit,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInArea(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMissionPoint::execGetNumOfAliveUnits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumOfAliveUnits();
		P_NATIVE_END;
	}
	void AMissionPoint::StaticRegisterNativesAMissionPoint()
	{
		UClass* Class = AMissionPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumOfAliveUnits", &AMissionPoint::execGetNumOfAliveUnits },
			{ "IsInArea", &AMissionPoint::execIsInArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics
	{
		struct MissionPoint_eventGetNumOfAliveUnits_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MissionPoint_eventGetNumOfAliveUnits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MissionPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissionPoint, nullptr, "GetNumOfAliveUnits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::MissionPoint_eventGetNumOfAliveUnits_Parms), Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMissionPoint_IsInArea_Statics
	{
		struct MissionPoint_eventIsInArea_Parms
		{
			AUnit* unit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_unit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MissionPoint_eventIsInArea_Parms, unit), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MissionPoint_eventIsInArea_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MissionPoint_eventIsInArea_Parms), &Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_unit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/MissionPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMissionPoint, nullptr, "IsInArea", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::MissionPoint_eventIsInArea_Parms), Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMissionPoint_IsInArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMissionPoint_IsInArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMissionPoint);
	UClass* Z_Construct_UClass_AMissionPoint_NoRegister()
	{
		return AMissionPoint::StaticClass();
	}
	struct Z_Construct_UClass_AMissionPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Units_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Units;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMissionPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMissionPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMissionPoint_GetNumOfAliveUnits, "GetNumOfAliveUnits" }, // 2147394669
		{ &Z_Construct_UFunction_AMissionPoint_IsInArea, "IsInArea" }, // 3708399796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/MissionPoint.h" },
		{ "ModuleRelativePath", "AI/MissionPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units_MetaData[] = {
		{ "Category", "MissionPoint" },
		{ "ModuleRelativePath", "AI/MissionPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionPoint, Units), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMissionPoint_Statics::NewProp_AreaRadius_MetaData[] = {
		{ "Category", "MissionPoint" },
		{ "ModuleRelativePath", "AI/MissionPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMissionPoint_Statics::NewProp_AreaRadius = { "AreaRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMissionPoint, AreaRadius), METADATA_PARAMS(Z_Construct_UClass_AMissionPoint_Statics::NewProp_AreaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPoint_Statics::NewProp_AreaRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMissionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPoint_Statics::NewProp_Units,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMissionPoint_Statics::NewProp_AreaRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMissionPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMissionPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMissionPoint_Statics::ClassParams = {
		&AMissionPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMissionPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMissionPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMissionPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMissionPoint()
	{
		if (!Z_Registration_Info_UClass_AMissionPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMissionPoint.OuterSingleton, Z_Construct_UClass_AMissionPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMissionPoint.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AMissionPoint>()
	{
		return AMissionPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMissionPoint);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMissionPoint, AMissionPoint::StaticClass, TEXT("AMissionPoint"), &Z_Registration_Info_UClass_AMissionPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMissionPoint), 3415133801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_2515014042(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
