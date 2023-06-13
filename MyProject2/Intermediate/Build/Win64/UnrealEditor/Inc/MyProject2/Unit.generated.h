// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_Unit_generated_h
#error "Unit.generated.h already included, missing '#pragma once' in Unit.h"
#endif
#define MYPROJECT2_Unit_generated_h

#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execAttackTarget); \
	DECLARE_FUNCTION(execAttackTargetAll); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execAttackAll);


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execAttackTarget); \
	DECLARE_FUNCTION(execAttackTargetAll); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execAttackAll);


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AUnit)


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnit(); \
	friend struct Z_Construct_UClass_AUnit_Statics; \
public: \
	DECLARE_CLASS(AUnit, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AUnit)


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public:


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnit(AUnit&&); \
	NO_API AUnit(const AUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnit)


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_9_PROLOG
#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_INCLASS \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_Character_Unit_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Unit_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AUnit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Character_Unit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
