// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_Bot_generated_h
#error "Bot.generated.h already included, missing '#pragma once' in Bot.h"
#endif
#define MYPROJECT2_Bot_generated_h

#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_RPC_WRAPPERS
#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABot(); \
	friend struct Z_Construct_UClass_ABot_Statics; \
public: \
	DECLARE_CLASS(ABot, AUnit, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ABot) \
	virtual UObject* _getUObject() const override { return const_cast<ABot*>(this); }


#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABot(); \
	friend struct Z_Construct_UClass_ABot_Statics; \
public: \
	DECLARE_CLASS(ABot, AUnit, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ABot) \
	virtual UObject* _getUObject() const override { return const_cast<ABot*>(this); }


#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABot(ABot&&); \
	NO_API ABot(const ABot&); \
public:


#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABot(ABot&&); \
	NO_API ABot(const ABot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABot)


#define FID_MyProject2_Source_MyProject2_Character_Bot_h_10_PROLOG
#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_INCLASS \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_Character_Bot_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_Character_Bot_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ABot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_Character_Bot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
