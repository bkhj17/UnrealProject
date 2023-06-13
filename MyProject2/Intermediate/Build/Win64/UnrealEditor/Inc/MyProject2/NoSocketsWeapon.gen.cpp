// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Weapon/NoSocketsWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoSocketsWeapon() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_ANoSocketsWeapon_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_ANoSocketsWeapon();
	MYPROJECT2_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void ANoSocketsWeapon::StaticRegisterNativesANoSocketsWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoSocketsWeapon);
	UClass* Z_Construct_UClass_ANoSocketsWeapon_NoRegister()
	{
		return ANoSocketsWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ANoSocketsWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoSocketsWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoSocketsWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/NoSocketsWeapon.h" },
		{ "ModuleRelativePath", "Weapon/NoSocketsWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoSocketsWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoSocketsWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoSocketsWeapon_Statics::ClassParams = {
		&ANoSocketsWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANoSocketsWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoSocketsWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoSocketsWeapon()
	{
		if (!Z_Registration_Info_UClass_ANoSocketsWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoSocketsWeapon.OuterSingleton, Z_Construct_UClass_ANoSocketsWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoSocketsWeapon.OuterSingleton;
	}
	template<> MYPROJECT2_API UClass* StaticClass<ANoSocketsWeapon>()
	{
		return ANoSocketsWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoSocketsWeapon);
	struct Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Weapon_NoSocketsWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Weapon_NoSocketsWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoSocketsWeapon, ANoSocketsWeapon::StaticClass, TEXT("ANoSocketsWeapon"), &Z_Registration_Info_UClass_ANoSocketsWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoSocketsWeapon), 1002946501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Weapon_NoSocketsWeapon_h_3598417662(TEXT("/Script/MyProject2"),
		Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Weapon_NoSocketsWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Source_MyProject2_Weapon_NoSocketsWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
