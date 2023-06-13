// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/BotPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotPlayerController() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ABotPlayerController_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ABotPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT2_API UClass* Z_Construct_UClass_UPlayerUI_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ABot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABotPlayerController::execLose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABotPlayerController::execWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Win();
		P_NATIVE_END;
	}
	void ABotPlayerController::StaticRegisterNativesABotPlayerController()
	{
		UClass* Class = ABotPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Lose", &ABotPlayerController::execLose },
			{ "Win", &ABotPlayerController::execWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotPlayerController_Lose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotPlayerController_Lose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotPlayerController_Lose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotPlayerController, nullptr, "Lose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotPlayerController_Lose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotPlayerController_Lose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotPlayerController_Lose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABotPlayerController_Lose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABotPlayerController_Win_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotPlayerController_Win_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotPlayerController_Win_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotPlayerController, nullptr, "Win", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotPlayerController_Win_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotPlayerController_Win_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotPlayerController_Win()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABotPlayerController_Win_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABotPlayerController);
	UClass* Z_Construct_UClass_ABotPlayerController_NoRegister()
	{
		return ABotPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABotPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotPlayerController_Lose, "Lose" }, // 35533950
		{ &Z_Construct_UFunction_ABotPlayerController_Win, "Win" }, // 4273052376
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BotPlayerController.h" },
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUIClass_MetaData[] = {
		{ "Category", "BotPlayerController" },
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUIClass = { "PlayerUIClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotPlayerController, PlayerUIClass), Z_Construct_UClass_UPlayerUI_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerBot_MetaData[] = {
		{ "Category", "BotPlayerController" },
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerBot = { "PlayerBot", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotPlayerController, PlayerBot), Z_Construct_UClass_ABot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerBot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerBot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUI_MetaData[] = {
		{ "Category", "BotPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BotPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUI = { "PlayerUI", nullptr, (EPropertyFlags)0x00200800000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotPlayerController, PlayerUI), Z_Construct_UClass_UPlayerUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerBot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotPlayerController_Statics::NewProp_PlayerUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABotPlayerController_Statics::ClassParams = {
		&ABotPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABotPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotPlayerController()
	{
		if (!Z_Registration_Info_UClass_ABotPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABotPlayerController.OuterSingleton, Z_Construct_UClass_ABotPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABotPlayerController.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ABotPlayerController>()
	{
		return ABotPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotPlayerController);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_BotPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_BotPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABotPlayerController, ABotPlayerController::StaticClass, TEXT("ABotPlayerController"), &Z_Registration_Info_UClass_ABotPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABotPlayerController), 3595340677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_BotPlayerController_h_1771426879(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_BotPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_BotPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
