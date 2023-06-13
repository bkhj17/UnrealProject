// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMissionPoint;
#ifdef MYPROJECT2_MissionOperater_generated_h
#error "MissionOperater.generated.h already included, missing '#pragma once' in MissionOperater.h"
#endif
#define MYPROJECT2_MissionOperater_generated_h

#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurPoint);


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurPoint);


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissionOperator(); \
	friend struct Z_Construct_UClass_AMissionOperator_Statics; \
public: \
	DECLARE_CLASS(AMissionOperator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMissionOperator)


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMissionOperator(); \
	friend struct Z_Construct_UClass_AMissionOperator_Statics; \
public: \
	DECLARE_CLASS(AMissionOperator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMissionOperator)


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissionOperator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionOperator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionOperator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionOperator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionOperator(AMissionOperator&&); \
	NO_API AMissionOperator(const AMissionOperator&); \
public:


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissionOperator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionOperator(AMissionOperator&&); \
	NO_API AMissionOperator(const AMissionOperator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionOperator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionOperator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionOperator)


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_15_PROLOG
#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_INCLASS \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_MissionOperater_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_MissionOperater_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMissionOperator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_MissionOperater_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
