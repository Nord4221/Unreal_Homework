// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TANKS_MapLoader_generated_h
#error "MapLoader.generated.h already included, missing '#pragma once' in MapLoader.h"
#endif
#define TANKS_MapLoader_generated_h

#define FID_Tanks_Source_Tanks_MapLoader_h_18_SPARSE_DATA
#define FID_Tanks_Source_Tanks_MapLoader_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define FID_Tanks_Source_Tanks_MapLoader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerOverlapBegin);


#define FID_Tanks_Source_Tanks_MapLoader_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapLoader(); \
	friend struct Z_Construct_UClass_AMapLoader_Statics; \
public: \
	DECLARE_CLASS(AMapLoader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AMapLoader)


#define FID_Tanks_Source_Tanks_MapLoader_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMapLoader(); \
	friend struct Z_Construct_UClass_AMapLoader_Statics; \
public: \
	DECLARE_CLASS(AMapLoader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AMapLoader)


#define FID_Tanks_Source_Tanks_MapLoader_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapLoader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapLoader(AMapLoader&&); \
	NO_API AMapLoader(const AMapLoader&); \
public:


#define FID_Tanks_Source_Tanks_MapLoader_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMapLoader(AMapLoader&&); \
	NO_API AMapLoader(const AMapLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapLoader)


#define FID_Tanks_Source_Tanks_MapLoader_h_15_PROLOG
#define FID_Tanks_Source_Tanks_MapLoader_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_MapLoader_h_18_SPARSE_DATA \
	FID_Tanks_Source_Tanks_MapLoader_h_18_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_MapLoader_h_18_INCLASS \
	FID_Tanks_Source_Tanks_MapLoader_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_MapLoader_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_MapLoader_h_18_SPARSE_DATA \
	FID_Tanks_Source_Tanks_MapLoader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_MapLoader_h_18_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_MapLoader_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class AMapLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_MapLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
