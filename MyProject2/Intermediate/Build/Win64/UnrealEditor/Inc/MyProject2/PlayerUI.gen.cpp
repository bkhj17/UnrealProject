// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/UI/PlayerUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerUI() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UPlayerUI_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UPlayerUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_ABot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerUI::execBindBot)
	{
		P_GET_OBJECT(ABot,Z_Param_bot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindBot(Z_Param_bot);
		P_NATIVE_END;
	}
	void UPlayerUI::StaticRegisterNativesUPlayerUI()
	{
		UClass* Class = UPlayerUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindBot", &UPlayerUI::execBindBot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerUI_BindBot_Statics
	{
		struct PlayerUI_eventBindBot_Parms
		{
			ABot* bot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerUI_BindBot_Statics::NewProp_bot = { "bot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerUI_eventBindBot_Parms, bot), Z_Construct_UClass_ABot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerUI_BindBot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerUI_BindBot_Statics::NewProp_bot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerUI_BindBot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerUI_BindBot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerUI, nullptr, "BindBot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerUI_BindBot_Statics::PlayerUI_eventBindBot_Parms), Z_Construct_UFunction_UPlayerUI_BindBot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUI_BindBot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerUI_BindBot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerUI_BindBot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerUI_BindBot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerUI_BindBot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerUI);
	UClass* Z_Construct_UClass_UPlayerUI_NoRegister()
	{
		return UPlayerUI::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerBot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerBot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerUI_BindBot, "BindBot" }, // 3340536313
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/PlayerUI.h" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerUI_Statics::NewProp_PlayerBot_MetaData[] = {
		{ "Category", "PlayerUI" },
		{ "ModuleRelativePath", "UI/PlayerUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerUI_Statics::NewProp_PlayerBot = { "PlayerBot", nullptr, (EPropertyFlags)0x0020080000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerUI, PlayerBot), Z_Construct_UClass_ABot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::NewProp_PlayerBot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::NewProp_PlayerBot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerUI_Statics::NewProp_PlayerBot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerUI_Statics::ClassParams = {
		&UPlayerUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerUI()
	{
		if (!Z_Registration_Info_UClass_UPlayerUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerUI.OuterSingleton, Z_Construct_UClass_UPlayerUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerUI.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UPlayerUI>()
	{
		return UPlayerUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerUI);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerUI, UPlayerUI::StaticClass, TEXT("UPlayerUI"), &Z_Registration_Info_UClass_UPlayerUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerUI), 2110738997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_3594529414(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
