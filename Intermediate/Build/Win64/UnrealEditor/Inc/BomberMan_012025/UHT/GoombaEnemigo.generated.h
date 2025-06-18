// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoombaEnemigo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_GoombaEnemigo_generated_h
#error "GoombaEnemigo.generated.h already included, missing '#pragma once' in GoombaEnemigo.h"
#endif
#define BOMBERMAN_012025_GoombaEnemigo_generated_h

#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPatrolRadius); \
	DECLARE_FUNCTION(execSetPatrolRadius); \
	DECLARE_FUNCTION(execGetMovementSpeed); \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execStopPatrol); \
	DECLARE_FUNCTION(execStartPatrol);


#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoombaEnemigo(); \
	friend struct Z_Construct_UClass_AGoombaEnemigo_Statics; \
public: \
	DECLARE_CLASS(AGoombaEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025"), NO_API) \
	DECLARE_SERIALIZER(AGoombaEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<AGoombaEnemigo*>(this); }


#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoombaEnemigo(AGoombaEnemigo&&); \
	AGoombaEnemigo(const AGoombaEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoombaEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoombaEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoombaEnemigo) \
	NO_API virtual ~AGoombaEnemigo();


#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_10_PROLOG
#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class AGoombaEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
