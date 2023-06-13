// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/StatusComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusComponent() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UStatusComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void UStatusComponent::StaticRegisterNativesUStatusComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusComponent);
	UClass* Z_Construct_UClass_UStatusComponent_NoRegister()
	{
		return UStatusComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curHP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_curHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defense_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defense;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/StatusComponent.h" },
		{ "ModuleRelativePath", "Character/StatusComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Character/StatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, Name), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_maxHP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Character/StatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_maxHP = { "maxHP", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, maxHP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_maxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_maxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_curHP_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Character/StatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_curHP = { "curHP", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, curHP), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_curHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_curHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusComponent_Statics::NewProp_defense_MetaData[] = {
		{ "Category", "StatusComponent" },
		{ "ModuleRelativePath", "Character/StatusComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_defense = { "defense", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusComponent, defense), METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::NewProp_defense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::NewProp_defense_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_maxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_curHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_defense,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusComponent_Statics::ClassParams = {
		&UStatusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStatusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusComponent()
	{
		if (!Z_Registration_Info_UClass_UStatusComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusComponent.OuterSingleton, Z_Construct_UClass_UStatusComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatusComponent.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UStatusComponent>()
	{
		return UStatusComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusComponent);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_StatusComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_StatusComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatusComponent, UStatusComponent::StaticClass, TEXT("UStatusComponent"), &Z_Registration_Info_UClass_UStatusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusComponent), 354610236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_StatusComponent_h_766673077(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_StatusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_StatusComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
