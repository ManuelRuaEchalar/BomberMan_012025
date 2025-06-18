// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BombaBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_BombaBase_generated_h
#error "BombaBase.generated.h already included, missing '#pragma once' in BombaBase.h"
#endif
#define BOMBERMAN_012025_BombaBase_generated_h

#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombaBase(); \
	friend struct Z_Construct_UClass_ABombaBase_Statics; \
public: \
	DECLARE_CLASS(ABombaBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BomberMan_012025"), NO_API) \
	DECLARE_SERIALIZER(ABombaBase) \
	virtual UObject* _getUObject() const override { return const_cast<ABombaBase*>(this); }


#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABombaBase(ABombaBase&&); \
	ABombaBase(const ABombaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombaBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABombaBase) \
	NO_API virtual ~ABombaBase();


#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_10_PROLOG
#define FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class ABombaBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
