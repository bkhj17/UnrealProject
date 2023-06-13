// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/AI/AIEnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIEnemyController() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AAIEnemyController_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AAIEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAIEnemyController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdateActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdateActors);
		P_NATIVE_END;
	}
	void AAIEnemyController::StaticRegisterNativesAAIEnemyController()
	{
		UClass* Class = AAIEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &AAIEnemyController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics
	{
		struct AIEnemyController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdateActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner = { "UpdateActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors = { "UpdateActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIEnemyController_eventOnPerceptionUpdated_Parms, UpdateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::NewProp_UpdateActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIEnemyController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::AIEnemyController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIEnemyController);
	UClass* Z_Construct_UClass_AAIEnemyController_NoRegister()
	{
		return AAIEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AAIEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustCircleHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustCircleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIEnemyController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2756317799
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/AIEnemyController.h" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "AIEnemyController" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	void Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AAIEnemyController*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAIEnemyController), &Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "AIEnemyController" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIEnemyController, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AdjustCircleHeight_MetaData[] = {
		{ "Category", "AIEnemyController" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AdjustCircleHeight = { "AdjustCircleHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIEnemyController, AdjustCircleHeight), METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AdjustCircleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AdjustCircleHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::NewProp_SightDist_MetaData[] = {
		{ "Category", "AIEnemyController" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIEnemyController_Statics::NewProp_SightDist = { "SightDist", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIEnemyController, SightDist), METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_SightDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_SightDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIEnemyController_Statics::NewProp_Perception_MetaData[] = {
		{ "Category", "AIEnemyController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/AIEnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIEnemyController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIEnemyController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::NewProp_Perception_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIEnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemyController_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemyController_Statics::NewProp_AdjustCircleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemyController_Statics::NewProp_SightDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIEnemyController_Statics::NewProp_Perception,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIEnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIEnemyController_Statics::ClassParams = {
		&AAIEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIEnemyController()
	{
		if (!Z_Registration_Info_UClass_AAIEnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIEnemyController.OuterSingleton, Z_Construct_UClass_AAIEnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIEnemyController.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AAIEnemyController>()
	{
		return AAIEnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIEnemyController);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_AIEnemyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_AIEnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIEnemyController, AAIEnemyController::StaticClass, TEXT("AAIEnemyController"), &Z_Registration_Info_UClass_AAIEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIEnemyController), 3210363319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_AIEnemyController_h_1647323284(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_AIEnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_AI_AIEnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
