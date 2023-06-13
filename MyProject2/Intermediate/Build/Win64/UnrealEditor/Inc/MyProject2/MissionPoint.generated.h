// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUnit;
#ifdef MYPROJECT2_MissionPoint_generated_h
#error "MissionPoint.generated.h already included, missing '#pragma once' in MissionPoint.h"
#endif
#define MYPROJECT2_MissionPoint_generated_h

#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_SPARSE_DATA
#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInArea); \
	DECLARE_FUNCTION(execGetNumOfAliveUnits);


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInArea); \
	DECLARE_FUNCTION(execGetNumOfAliveUnits);


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissionPoint(); \
	friend struct Z_Construct_UClass_AMissionPoint_Statics; \
public: \
	DECLARE_CLASS(AMissionPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMissionPoint)


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMissionPoint(); \
	friend struct Z_Construct_UClass_AMissionPoint_Statics; \
public: \
	DECLARE_CLASS(AMissionPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMissionPoint)


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissionPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionPoint(AMissionPoint&&); \
	NO_API AMissionPoint(const AMissionPoint&); \
public:


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissionPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissionPoint(AMissionPoint&&); \
	NO_API AMissionPoint(const AMissionPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissionPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissionPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissionPoint)


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_9_PROLOG
#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_RPC_WRAPPERS \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_INCLASS \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_SPARSE_DATA \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Source_MyProject2_AI_MissionPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMissionPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Source_MyProject2_AI_MissionPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
