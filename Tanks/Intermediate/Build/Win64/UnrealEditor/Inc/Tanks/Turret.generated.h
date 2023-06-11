// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TANKS_Turret_generated_h

#define FID_Tanks_Source_Tanks_Turret_h_19_SPARSE_DATA
#define FID_Tanks_Source_Tanks_Turret_h_19_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_Turret_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_Turret_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AMachinePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_Tanks_Source_Tanks_Turret_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AMachinePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_Tanks_Source_Tanks_Turret_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define FID_Tanks_Source_Tanks_Turret_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define FID_Tanks_Source_Tanks_Turret_h_16_PROLOG
#define FID_Tanks_Source_Tanks_Turret_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_Turret_h_19_SPARSE_DATA \
	FID_Tanks_Source_Tanks_Turret_h_19_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_Turret_h_19_INCLASS \
	FID_Tanks_Source_Tanks_Turret_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_Turret_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_Turret_h_19_SPARSE_DATA \
	FID_Tanks_Source_Tanks_Turret_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_Turret_h_19_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_Turret_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
