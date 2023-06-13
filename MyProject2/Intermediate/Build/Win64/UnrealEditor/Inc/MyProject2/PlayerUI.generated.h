// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABot;
#ifdef MYPROJECT2_PlayerUI_generated_h
#error "PlayerUI.generated.h already included, missing '#pragma once' in PlayerUI.h"
#endif
#define MYPROJECT2_PlayerUI_generated_h

#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindBot);


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindBot);


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerUI(); \
	friend struct Z_Construct_UClass_UPlayerUI_Statics; \
public: \
	DECLARE_CLASS(UPlayerUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UPlayerUI)


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerUI(UPlayerUI&&); \
	NO_API UPlayerUI(const UPlayerUI&); \
public:


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerUI(UPlayerUI&&); \
	NO_API UPlayerUI(const UPlayerUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerUI)


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_12_PROLOG
#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_INCLASS \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_UI_PlayerUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UPlayerUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_UI_PlayerUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
