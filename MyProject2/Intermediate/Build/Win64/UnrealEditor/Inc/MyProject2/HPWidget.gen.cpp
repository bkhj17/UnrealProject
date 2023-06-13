// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/UI/HPWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPWidget() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UHPWidget_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UHPWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	DEFINE_FUNCTION(UHPWidget::execMaxInvisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MaxInvisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHPWidget::execSetPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurParam);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercent(Z_Param_CurParam,Z_Param_MaxParam);
		P_NATIVE_END;
	}
	static FName NAME_UHPWidget_Update = FName(TEXT("Update"));
	void UHPWidget::Update(float CurParam, float MaxParam)
	{
		HPWidget_eventUpdate_Parms Parms;
		Parms.CurParam=CurParam;
		Parms.MaxParam=MaxParam;
		ProcessEvent(FindFunctionChecked(NAME_UHPWidget_Update),&Parms);
	}
	void UHPWidget::StaticRegisterNativesUHPWidget()
	{
		UClass* Class = UHPWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MaxInvisible", &UHPWidget::execMaxInvisible },
			{ "SetPercent", &UHPWidget::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPWidget, nullptr, "MaxInvisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHPWidget_MaxInvisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPWidget_MaxInvisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHPWidget_SetPercent_Statics
	{
		struct HPWidget_eventSetPercent_Parms
		{
			float CurParam;
			float MaxParam;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurParam;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPWidget_SetPercent_Statics::NewProp_CurParam = { "CurParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HPWidget_eventSetPercent_Parms, CurParam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPWidget_SetPercent_Statics::NewProp_MaxParam = { "MaxParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HPWidget_eventSetPercent_Parms, MaxParam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPWidget_SetPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPWidget_SetPercent_Statics::NewProp_CurParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPWidget_SetPercent_Statics::NewProp_MaxParam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHPWidget_SetPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPWidget_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPWidget, nullptr, "SetPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHPWidget_SetPercent_Statics::HPWidget_eventSetPercent_Parms), Z_Construct_UFunction_UHPWidget_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPWidget_SetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHPWidget_SetPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPWidget_SetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHPWidget_SetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPWidget_SetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHPWidget_Update_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurParam;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPWidget_Update_Statics::NewProp_CurParam = { "CurParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HPWidget_eventUpdate_Parms, CurParam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHPWidget_Update_Statics::NewProp_MaxParam = { "MaxParam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HPWidget_eventUpdate_Parms, MaxParam), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHPWidget_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPWidget_Update_Statics::NewProp_CurParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHPWidget_Update_Statics::NewProp_MaxParam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHPWidget_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/HPWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHPWidget_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHPWidget, nullptr, "Update", nullptr, nullptr, sizeof(HPWidget_eventUpdate_Parms), Z_Construct_UFunction_UHPWidget_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPWidget_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHPWidget_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHPWidget_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHPWidget_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHPWidget_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHPWidget);
	UClass* Z_Construct_UClass_UHPWidget_NoRegister()
	{
		return UHPWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHPWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHPWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHPWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHPWidget_MaxInvisible, "MaxInvisible" }, // 462715894
		{ &Z_Construct_UFunction_UHPWidget_SetPercent, "SetPercent" }, // 2925927215
		{ &Z_Construct_UFunction_UHPWidget_Update, "Update" }, // 2250887603
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HPWidget.h" },
		{ "ModuleRelativePath", "UI/HPWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPWidget_Statics::NewProp_Percent_MetaData[] = {
		{ "Category", "HPWidget" },
		{ "ModuleRelativePath", "UI/HPWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHPWidget_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHPWidget, Percent), METADATA_PARAMS(Z_Construct_UClass_UHPWidget_Statics::NewProp_Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHPWidget_Statics::NewProp_Percent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHPWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPWidget_Statics::NewProp_Percent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHPWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHPWidget_Statics::ClassParams = {
		&UHPWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHPWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHPWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHPWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHPWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHPWidget()
	{
		if (!Z_Registration_Info_UClass_UHPWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHPWidget.OuterSingleton, Z_Construct_UClass_UHPWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHPWidget.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UHPWidget>()
	{
		return UHPWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPWidget);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_HPWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_HPWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHPWidget, UHPWidget::StaticClass, TEXT("UHPWidget"), &Z_Registration_Info_UClass_UHPWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHPWidget), 392914777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_HPWidget_h_4181992816(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_HPWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_HPWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
