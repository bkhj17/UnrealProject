// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/Unit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MYPROJECT2_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MYPROJECT2_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUnit::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnit::execAttackTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_slot);
		P_GET_STRUCT(FVector,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackTarget(Z_Param_slot,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnit::execAttackTargetAll)
	{
		P_GET_STRUCT(FVector,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackTargetAll(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnit::execAttack)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_slot);
		P_GET_UBOOL(Z_Param_targetSet);
		P_GET_STRUCT(FVector,Z_Param_diraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack(Z_Param_slot,Z_Param_targetSet,Z_Param_diraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUnit::execAttackAll)
	{
		P_GET_UBOOL(Z_Param_targetSet);
		P_GET_STRUCT(FVector,Z_Param_diraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackAll(Z_Param_targetSet,Z_Param_diraction);
		P_NATIVE_END;
	}
	void AUnit::StaticRegisterNativesAUnit()
	{
		UClass* Class = AUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AUnit::execAttack },
			{ "AttackAll", &AUnit::execAttackAll },
			{ "AttackTarget", &AUnit::execAttackTarget },
			{ "AttackTargetAll", &AUnit::execAttackTargetAll },
			{ "IsDead", &AUnit::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUnit_Attack_Statics
	{
		struct Unit_eventAttack_Parms
		{
			FName slot;
			bool targetSet;
			FVector diraction;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_slot;
		static void NewProp_targetSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_targetSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_diraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttack_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_targetSet_SetBit(void* Obj)
	{
		((Unit_eventAttack_Parms*)Obj)->targetSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_targetSet = { "targetSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Unit_eventAttack_Parms), &Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_targetSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_diraction = { "diraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttack_Parms, diraction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_targetSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_Attack_Statics::NewProp_diraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_Attack_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_diraction", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_targetSet", "false" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "Attack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnit_Attack_Statics::Unit_eventAttack_Parms), Z_Construct_UFunction_AUnit_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_AttackAll_Statics
	{
		struct Unit_eventAttackAll_Parms
		{
			bool targetSet;
			FVector diraction;
		};
		static void NewProp_targetSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_targetSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_diraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_targetSet_SetBit(void* Obj)
	{
		((Unit_eventAttackAll_Parms*)Obj)->targetSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_targetSet = { "targetSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Unit_eventAttackAll_Parms), &Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_targetSet_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_diraction = { "diraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttackAll_Parms, diraction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_AttackAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_targetSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_AttackAll_Statics::NewProp_diraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_AttackAll_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_diraction", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_targetSet", "false" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_AttackAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "AttackAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnit_AttackAll_Statics::Unit_eventAttackAll_Parms), Z_Construct_UFunction_AUnit_AttackAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_AttackAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_AttackAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_AttackAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_AttackTarget_Statics
	{
		struct Unit_eventAttackTarget_Parms
		{
			FName slot;
			FVector target;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_slot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUnit_AttackTarget_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttackTarget_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnit_AttackTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttackTarget_Parms, target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_AttackTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_AttackTarget_Statics::NewProp_slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_AttackTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_AttackTarget_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_target", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_AttackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "AttackTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnit_AttackTarget_Statics::Unit_eventAttackTarget_Parms), Z_Construct_UFunction_AUnit_AttackTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_AttackTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_AttackTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_AttackTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_AttackTargetAll_Statics
	{
		struct Unit_eventAttackTargetAll_Parms
		{
			FVector target;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Unit_eventAttackTargetAll_Parms, target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_target", "0.000000,0.000000,0.000000" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "AttackTargetAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::Unit_eventAttackTargetAll_Parms), Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_AttackTargetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_AttackTargetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUnit_IsDead_Statics
	{
		struct Unit_eventIsDead_Parms
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
	void Z_Construct_UFunction_AUnit_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Unit_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnit_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Unit_eventIsDead_Parms), &Z_Construct_UFunction_AUnit_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnit_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnit_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUnit_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnit_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnit, nullptr, "IsDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUnit_IsDead_Statics::Unit_eventIsDead_Parms), Z_Construct_UFunction_AUnit_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUnit_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnit_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUnit_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnit_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnit);
	UClass* Z_Construct_UClass_AUnit_NoRegister()
	{
		return AUnit::StaticClass();
	}
	struct Z_Construct_UClass_AUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Status;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponDatas_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponDatas_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDatas_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeaponDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnit_Attack, "Attack" }, // 3598825834
		{ &Z_Construct_UFunction_AUnit_AttackAll, "AttackAll" }, // 4276261767
		{ &Z_Construct_UFunction_AUnit_AttackTarget, "AttackTarget" }, // 2624596589
		{ &Z_Construct_UFunction_AUnit_AttackTargetAll, "AttackTargetAll" }, // 2116483527
		{ &Z_Construct_UFunction_AUnit_IsDead, "IsDead" }, // 1960157377
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Unit.h" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, Status), Z_Construct_UClass_UStatusComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_Status_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_ValueProp = { "WeaponDatas", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_Key_KeyProp = { "WeaponDatas_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas = { "WeaponDatas", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, WeaponDatas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	void Z_Construct_UClass_AUnit_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AUnit*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnit), &Z_Construct_UClass_AUnit_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, TeamID), nullptr, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_TeamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_TeamID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_HPBarWidget_MetaData[] = {
		{ "Category", "Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_HPBarWidget = { "HPBarWidget", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, HPBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_HPBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_HPBarWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Statics::NewProp_DeadEffect_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Character/Unit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnit_Statics::NewProp_DeadEffect = { "DeadEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnit, DeadEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::NewProp_DeadEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::NewProp_DeadEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_WeaponDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_TeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_HPBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnit_Statics::NewProp_DeadEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnit_Statics::ClassParams = {
		&AUnit::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnit()
	{
		if (!Z_Registration_Info_UClass_AUnit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnit.OuterSingleton, Z_Construct_UClass_AUnit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnit.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<AUnit>()
	{
		return AUnit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Unit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Unit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnit, AUnit::StaticClass, TEXT("AUnit"), &Z_Registration_Info_UClass_AUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnit), 3153947437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Unit_h_489529263(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Unit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_Unit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
