// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/UI/LockOnHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnHUD() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ABotHUD_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ABotHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABotHUD::execLockOn)
	{
		P_GET_OBJECT(AUnit,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockOn(Z_Param_unit);
		P_NATIVE_END;
	}
	void ABotHUD::StaticRegisterNativesABotHUD()
	{
		UClass* Class = ABotHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LockOn", &ABotHUD::execLockOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABotHUD_LockOn_Statics
	{
		struct BotHUD_eventLockOn_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABotHUD_LockOn_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BotHUD_eventLockOn_Parms, unit), Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABotHUD_LockOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABotHUD_LockOn_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABotHUD_LockOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/LockOnHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABotHUD_LockOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABotHUD, nullptr, "LockOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABotHUD_LockOn_Statics::BotHUD_eventLockOn_Parms), Z_Construct_UFunction_ABotHUD_LockOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotHUD_LockOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABotHUD_LockOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABotHUD_LockOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABotHUD_LockOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABotHUD_LockOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABotHUD);
	UClass* Z_Construct_UClass_ABotHUD_NoRegister()
	{
		return ABotHUD::StaticClass();
	}
	struct Z_Construct_UClass_ABotHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossHair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossHair;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABotHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABotHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABotHUD_LockOn, "LockOn" }, // 400928711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/LockOnHUD.h" },
		{ "ModuleRelativePath", "UI/LockOnHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABotHUD_Statics::NewProp_CrossHair_MetaData[] = {
		{ "Category", "BotHUD" },
		{ "ModuleRelativePath", "UI/LockOnHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABotHUD_Statics::NewProp_CrossHair = { "CrossHair", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABotHUD, CrossHair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABotHUD_Statics::NewProp_CrossHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABotHUD_Statics::NewProp_CrossHair_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABotHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABotHUD_Statics::NewProp_CrossHair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABotHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABotHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABotHUD_Statics::ClassParams = {
		&ABotHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABotHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABotHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABotHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABotHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABotHUD()
	{
		if (!Z_Registration_Info_UClass_ABotHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABotHUD.OuterSingleton, Z_Construct_UClass_ABotHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABotHUD.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ABotHUD>()
	{
		return ABotHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABotHUD);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_LockOnHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_LockOnHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABotHUD, ABotHUD::StaticClass, TEXT("ABotHUD"), &Z_Registration_Info_UClass_ABotHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABotHUD), 3122316543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_LockOnHUD_h_496135425(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_LockOnHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_UI_LockOnHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
