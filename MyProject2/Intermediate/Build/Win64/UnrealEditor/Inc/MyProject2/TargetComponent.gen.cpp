// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Character/TargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetComponent() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_AUnit_NoRegister();
// End Cross Module References
	void UTargetComponent::StaticRegisterNativesUTargetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetComponent);
	UClass* Z_Construct_UClass_UTargetComponent_NoRegister()
	{
		return UTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockOnRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockOnRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/TargetComponent.h" },
		{ "ModuleRelativePath", "Character/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies_Inner = { "Enemies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies_MetaData[] = {
		{ "Category", "TargetComponent" },
		{ "ModuleRelativePath", "Character/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies = { "Enemies", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetComponent, Enemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::NewProp_LockOnRange_MetaData[] = {
		{ "Category", "TargetComponent" },
		{ "ModuleRelativePath", "Character/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetComponent_Statics::NewProp_LockOnRange = { "LockOnRange", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetComponent, LockOnRange), METADATA_PARAMS(Z_Construct_UClass_UTargetComponent_Statics::NewProp_LockOnRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::NewProp_LockOnRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetComponent_Statics::NewProp_Enemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetComponent_Statics::NewProp_LockOnRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetComponent_Statics::ClassParams = {
		&UTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetComponent.OuterSingleton, Z_Construct_UClass_UTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetComponent.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<UTargetComponent>()
	{
		return UTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetComponent);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_TargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_TargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetComponent, UTargetComponent::StaticClass, TEXT("UTargetComponent"), &Z_Registration_Info_UClass_UTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetComponent), 2296524243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_TargetComponent_h_2283389721(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_TargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Character_TargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
