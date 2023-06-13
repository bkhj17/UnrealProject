// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_BoosterComponent_generated_h
#error "BoosterComponent.generated.h already included, missing '#pragma once' in BoosterComponent.h"
#endif
#define MYPROJECT2_BoosterComponent_generated_h

#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBoostOff); \
	DECLARE_FUNCTION(execBoostOn); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetCurVolume); \
	DECLARE_FUNCTION(execGetMaxVolume); \
	DECLARE_FUNCTION(execIsBoosting); \
	DECLARE_FUNCTION(execIsFloating);


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBoostOff); \
	DECLARE_FUNCTION(execBoostOn); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetCurVolume); \
	DECLARE_FUNCTION(execGetMaxVolume); \
	DECLARE_FUNCTION(execIsBoosting); \
	DECLARE_FUNCTION(execIsFloating);


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoosterComponent(); \
	friend struct Z_Construct_UClass_UBoosterComponent_Statics; \
public: \
	DECLARE_CLASS(UBoosterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UBoosterComponent)


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBoosterComponent(); \
	friend struct Z_Construct_UClass_UBoosterComponent_Statics; \
public: \
	DECLARE_CLASS(UBoosterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UBoosterComponent)


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoosterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoosterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoosterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoosterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoosterComponent(UBoosterComponent&&); \
	NO_API UBoosterComponent(const UBoosterComponent&); \
public:


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoosterComponent(UBoosterComponent&&); \
	NO_API UBoosterComponent(const UBoosterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoosterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoosterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoosterComponent)


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_11_PROLOG
#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_INCLASS \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UBoosterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Character_BoosterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
