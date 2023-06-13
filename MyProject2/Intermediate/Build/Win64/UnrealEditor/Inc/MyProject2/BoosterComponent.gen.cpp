// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/BoosterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoosterComponent() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UBoosterComponent_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UBoosterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBoosterComponent::execBoostOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoostOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execBoostOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoostOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execGetCurVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execGetMaxVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execIsBoosting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoosting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBoosterComponent::execIsFloating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFloating();
		P_NATIVE_END;
	}
	void UBoosterComponent::StaticRegisterNativesUBoosterComponent()
	{
		UClass* Class = UBoosterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoostOff", &UBoosterComponent::execBoostOff },
			{ "BoostOn", &UBoosterComponent::execBoostOn },
			{ "GetCurVolume", &UBoosterComponent::execGetCurVolume },
			{ "GetMaxVolume", &UBoosterComponent::execGetMaxVolume },
			{ "GetSpeed", &UBoosterComponent::execGetSpeed },
			{ "IsBoosting", &UBoosterComponent::execIsBoosting },
			{ "IsFloating", &UBoosterComponent::execIsFloating },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "BoostOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_BoostOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_BoostOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "BoostOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_BoostOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_BoostOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics
	{
		struct BoosterComponent_eventGetCurVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoosterComponent_eventGetCurVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "GetCurVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::BoosterComponent_eventGetCurVolume_Parms), Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_GetCurVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_GetCurVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics
	{
		struct BoosterComponent_eventGetMaxVolume_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoosterComponent_eventGetMaxVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "GetMaxVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::BoosterComponent_eventGetMaxVolume_Parms), Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_GetMaxVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_GetMaxVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics
	{
		struct BoosterComponent_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoosterComponent_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "GetSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::BoosterComponent_eventGetSpeed_Parms), Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics
	{
		struct BoosterComponent_eventIsBoosting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoosterComponent_eventIsBoosting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoosterComponent_eventIsBoosting_Parms), &Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "IsBoosting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::BoosterComponent_eventIsBoosting_Parms), Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_IsBoosting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_IsBoosting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics
	{
		struct BoosterComponent_eventIsFloating_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BoosterComponent_eventIsFloating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoosterComponent_eventIsFloating_Parms), &Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoosterComponent, nullptr, "IsFloating", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::BoosterComponent_eventIsFloating_Parms), Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoosterComponent_IsFloating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoosterComponent_IsFloating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoosterComponent);
	UClass* Z_Construct_UClass_UBoosterComponent_NoRegister()
	{
		return UBoosterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoosterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDemand_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatingDemand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoostDemand_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostDemand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recovery_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_recovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boosterSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_boosterSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoosterEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoosterEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoosterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoosterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoosterComponent_BoostOff, "BoostOff" }, // 2446534201
		{ &Z_Construct_UFunction_UBoosterComponent_BoostOn, "BoostOn" }, // 2189374946
		{ &Z_Construct_UFunction_UBoosterComponent_GetCurVolume, "GetCurVolume" }, // 2227104845
		{ &Z_Construct_UFunction_UBoosterComponent_GetMaxVolume, "GetMaxVolume" }, // 928898659
		{ &Z_Construct_UFunction_UBoosterComponent_GetSpeed, "GetSpeed" }, // 3842596990
		{ &Z_Construct_UFunction_UBoosterComponent_IsBoosting, "IsBoosting" }, // 4008010352
		{ &Z_Construct_UFunction_UBoosterComponent_IsFloating, "IsFloating" }, // 224606148
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/BoosterComponent.h" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MaxVolume_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MaxVolume = { "MaxVolume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, MaxVolume), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MaxVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MaxVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_CurVolume_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_CurVolume = { "CurVolume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, CurVolume), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_CurVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_CurVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_FloatingDemand_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_FloatingDemand = { "FloatingDemand", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, FloatingDemand), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_FloatingDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_FloatingDemand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostDemand_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostDemand = { "BoostDemand", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, BoostDemand), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostDemand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_recovery_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_recovery = { "recovery", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, recovery), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_recovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_recovery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostSpeed_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostSpeed = { "BoostSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, BoostSpeed), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_boosterSocket_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_boosterSocket = { "boosterSocket", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, boosterSocket), METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_boosterSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_boosterSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoosterEffect_MetaData[] = {
		{ "Category", "BoosterComponent" },
		{ "ModuleRelativePath", "Character/BoosterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoosterEffect = { "BoosterEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoosterComponent, BoosterEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoosterEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoosterEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoosterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MaxVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_CurVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_FloatingDemand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostDemand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_recovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_boosterSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoosterComponent_Statics::NewProp_BoosterEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoosterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoosterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoosterComponent_Statics::ClassParams = {
		&UBoosterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBoosterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBoosterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoosterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoosterComponent()
	{
		if (!Z_Registration_Info_UClass_UBoosterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoosterComponent.OuterSingleton, Z_Construct_UClass_UBoosterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoosterComponent.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UBoosterComponent>()
	{
		return UBoosterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoosterComponent);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoosterComponent, UBoosterComponent::StaticClass, TEXT("UBoosterComponent"), &Z_Registration_Info_UClass_UBoosterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoosterComponent), 2070706568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_1759483487(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
