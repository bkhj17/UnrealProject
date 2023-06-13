// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AEnemy();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMissionPoint_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy::execGetTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AUnit**)Z_Param__Result=P_THIS->GetTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execSetTarget)
	{
		P_GET_OBJECT(AUnit,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTarget(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execGetMissionPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMissionPoint**)Z_Param__Result=P_THIS->GetMissionPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execSetMissionPoint)
	{
		P_GET_OBJECT(AMissionPoint,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMissionPoint(Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemy::execGetCenterPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenterPoint();
		P_NATIVE_END;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCenterPoint", &AEnemy::execGetCenterPoint },
			{ "GetMissionPoint", &AEnemy::execGetMissionPoint },
			{ "GetTarget", &AEnemy::execGetTarget },
			{ "SetMissionPoint", &AEnemy::execSetMissionPoint },
			{ "SetTarget", &AEnemy::execSetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics
	{
		struct Enemy_eventGetCenterPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventGetCenterPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "GetCenterPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::Enemy_eventGetCenterPoint_Parms), Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_GetCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_GetCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics
	{
		struct Enemy_eventGetMissionPoint_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventGetMissionPoint_Parms, ReturnValue), Z_Construct_UClass_AMissionPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "GetMissionPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::Enemy_eventGetMissionPoint_Parms), Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_GetMissionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_GetMissionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_GetTarget_Statics
	{
		struct Enemy_eventGetTarget_Parms
		{
			AUnit* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_GetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_GetTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_GetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "GetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_GetTarget_Statics::Enemy_eventGetTarget_Parms), Z_Construct_UFunction_AEnemy_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_GetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_GetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_GetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_GetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics
	{
		struct Enemy_eventSetMissionPoint_Parms
		{
			AMissionPoint* Point;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventSetMissionPoint_Parms, Point), Z_Construct_UClass_AMissionPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "SetMissionPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::Enemy_eventSetMissionPoint_Parms), Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_SetMissionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_SetMissionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_SetTarget_Statics
	{
		struct Enemy_eventSetTarget_Parms
		{
			AUnit* unit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_unit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_SetTarget_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventSetTarget_Parms, unit), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_SetTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_SetTarget_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_SetTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "SetTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_SetTarget_Statics::Enemy_eventSetTarget_Parms), Z_Construct_UFunction_AEnemy_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_SetTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_SetTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_SetTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_SetTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_SetTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_GetCenterPoint, "GetCenterPoint" }, // 2309965578
		{ &Z_Construct_UFunction_AEnemy_GetMissionPoint, "GetMissionPoint" }, // 3853060217
		{ &Z_Construct_UFunction_AEnemy_GetTarget, "GetTarget" }, // 187090700
		{ &Z_Construct_UFunction_AEnemy_SetMissionPoint, "SetMissionPoint" }, // 4067710318
		{ &Z_Construct_UFunction_AEnemy_SetTarget, "SetTarget" }, // 2095672309
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Enemy.h" },
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_MissionPoint_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_MissionPoint = { "MissionPoint", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, MissionPoint), Z_Construct_UClass_AMissionPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_MissionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_MissionPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_target_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Character/Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0020080000030005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, target), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_MissionPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 1292696834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Enemy_h_2405133096(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
