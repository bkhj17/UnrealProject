// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_BotPlayerController_generated_h
#error "BotPlayerController.generated.h already included, missing '#pragma once' in BotPlayerController.h"
#endif
#define MYPROJECT2_BotPlayerController_generated_h

#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLose); \
	DECLARE_FUNCTION(execWin);


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLose); \
	DECLARE_FUNCTION(execWin);


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotPlayerController(); \
	friend struct Z_Construct_UClass_ABotPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABotPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ABotPlayerController)


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABotPlayerController(); \
	friend struct Z_Construct_UClass_ABotPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABotPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ABotPlayerController)


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotPlayerController(ABotPlayerController&&); \
	NO_API ABotPlayerController(const ABotPlayerController&); \
public:


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABotPlayerController(ABotPlayerController&&); \
	NO_API ABotPlayerController(const ABotPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABotPlayerController)


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_12_PROLOG
#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_INCLASS \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_BotPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ABotPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_BotPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
