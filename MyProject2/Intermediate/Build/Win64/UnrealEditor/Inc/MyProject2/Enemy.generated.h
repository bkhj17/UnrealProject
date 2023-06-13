// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUnit;
class AMissionPoint;
#ifdef MYPROJECT2_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define MYPROJECT2_Enemy_generated_h

#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetMissionPoint); \
	DECLARE_FUNCTION(execSetMissionPoint); \
	DECLARE_FUNCTION(execGetCenterPoint);


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetMissionPoint); \
	DECLARE_FUNCTION(execSetMissionPoint); \
	DECLARE_FUNCTION(execGetCenterPoint);


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AUnit, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, AUnit, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_12_PROLOG
#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_INCLASS \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Character_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
