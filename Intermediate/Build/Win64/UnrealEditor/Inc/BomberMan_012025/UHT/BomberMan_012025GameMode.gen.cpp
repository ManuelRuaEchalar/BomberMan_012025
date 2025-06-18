// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGoombaEnemigo_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025GameMode Function ClonarGoomba
struct Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics
{
	struct BomberMan_012025GameMode_eventClonarGoomba_Parms
	{
		FVector Ubicacion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ubicacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::NewProp_Ubicacion = { "Ubicacion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventClonarGoomba_Parms, Ubicacion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::NewProp_Ubicacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "ClonarGoomba", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::BomberMan_012025GameMode_eventClonarGoomba_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::BomberMan_012025GameMode_eventClonarGoomba_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execClonarGoomba)
{
	P_GET_STRUCT(FVector,Z_Param_Ubicacion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClonarGoomba(Z_Param_Ubicacion);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function ClonarGoomba

// Begin Class ABomberMan_012025GameMode Function CrearBombaEspecial
struct Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics
{
	struct BomberMan_012025GameMode_eventCrearBombaEspecial_Parms
	{
		FVector Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bombas" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventCrearBombaEspecial_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "CrearBombaEspecial", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::BomberMan_012025GameMode_eventCrearBombaEspecial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::BomberMan_012025GameMode_eventCrearBombaEspecial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execCrearBombaEspecial)
{
	P_GET_STRUCT(FVector,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearBombaEspecial(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function CrearBombaEspecial

// Begin Class ABomberMan_012025GameMode Function CrearBombaNormal
struct Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics
{
	struct BomberMan_012025GameMode_eventCrearBombaNormal_Parms
	{
		FVector Posicion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bombas" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Posicion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventCrearBombaNormal_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::NewProp_Posicion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "CrearBombaNormal", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::BomberMan_012025GameMode_eventCrearBombaNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::BomberMan_012025GameMode_eventCrearBombaNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execCrearBombaNormal)
{
	P_GET_STRUCT(FVector,Z_Param_Posicion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearBombaNormal(Z_Param_Posicion);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function CrearBombaNormal

// Begin Class ABomberMan_012025GameMode Function CrearBombas
struct Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bombas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos para gestionar las bombas\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos para gestionar las bombas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "CrearBombas", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execCrearBombas)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearBombas();
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function CrearBombas

// Begin Class ABomberMan_012025GameMode Function CrearGoombaPrototipo
struct Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics
{
	struct BomberMan_012025GameMode_eventCrearGoombaPrototipo_Parms
	{
		FVector Ubicacion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos para gestionar los Goombas\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos para gestionar los Goombas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ubicacion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::NewProp_Ubicacion = { "Ubicacion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventCrearGoombaPrototipo_Parms, Ubicacion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::NewProp_Ubicacion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "CrearGoombaPrototipo", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::BomberMan_012025GameMode_eventCrearGoombaPrototipo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::BomberMan_012025GameMode_eventCrearGoombaPrototipo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execCrearGoombaPrototipo)
{
	P_GET_STRUCT(FVector,Z_Param_Ubicacion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CrearGoombaPrototipo(Z_Param_Ubicacion);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function CrearGoombaPrototipo

// Begin Class ABomberMan_012025GameMode Function DestruirBloque
struct Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GamePlay" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "DestruirBloque", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execDestruirBloque)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestruirBloque();
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function DestruirBloque

// Begin Class ABomberMan_012025GameMode Function DestruirGoomba
struct Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemigos" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "DestruirGoomba", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execDestruirGoomba)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestruirGoomba();
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function DestruirGoomba

// Begin Class ABomberMan_012025GameMode Function IniciarExplosiones
struct Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bombas" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "IniciarExplosiones", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execIniciarExplosiones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IniciarExplosiones();
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function IniciarExplosiones

// Begin Class ABomberMan_012025GameMode Function SpawnBloque
struct Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics
{
	struct BomberMan_012025GameMode_eventSpawnBloque_Parms
	{
		FVector posicion;
		int32 tipoBloque;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GamePlay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xc3\xa9todos para la gesti\xc3\xb3n de bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xc3\xa9todos para la gesti\xc3\xb3n de bloques" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_posicion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_tipoBloque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::NewProp_posicion = { "posicion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventSpawnBloque_Parms, posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::NewProp_tipoBloque = { "tipoBloque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventSpawnBloque_Parms, tipoBloque), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::NewProp_posicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::NewProp_tipoBloque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "SpawnBloque", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::BomberMan_012025GameMode_eventSpawnBloque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::BomberMan_012025GameMode_eventSpawnBloque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execSpawnBloque)
{
	P_GET_STRUCT(FVector,Z_Param_posicion);
	P_GET_PROPERTY(FIntProperty,Z_Param_tipoBloque);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBloque(Z_Param_posicion,Z_Param_tipoBloque);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function SpawnBloque

// Begin Class ABomberMan_012025GameMode
void ABomberMan_012025GameMode::StaticRegisterNativesABomberMan_012025GameMode()
{
	UClass* Class = ABomberMan_012025GameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClonarGoomba", &ABomberMan_012025GameMode::execClonarGoomba },
		{ "CrearBombaEspecial", &ABomberMan_012025GameMode::execCrearBombaEspecial },
		{ "CrearBombaNormal", &ABomberMan_012025GameMode::execCrearBombaNormal },
		{ "CrearBombas", &ABomberMan_012025GameMode::execCrearBombas },
		{ "CrearGoombaPrototipo", &ABomberMan_012025GameMode::execCrearGoombaPrototipo },
		{ "DestruirBloque", &ABomberMan_012025GameMode::execDestruirBloque },
		{ "DestruirGoomba", &ABomberMan_012025GameMode::execDestruirGoomba },
		{ "IniciarExplosiones", &ABomberMan_012025GameMode::execIniciarExplosiones },
		{ "SpawnBloque", &ABomberMan_012025GameMode::execSpawnBloque },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025GameMode);
UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister()
{
	return ABomberMan_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aBloques_MetaData[] = {
		{ "Category", "Bloques" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array con todos los bloques creados (se mantiene UPROPERTY por ser contenedor de UObjects)\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array con todos los bloques creados (se mantiene UPROPERTY por ser contenedor de UObjects)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XInicial_MetaData[] = {
		{ "Category", "Spawns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Posici\xc3\xb3n inicial de los bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posici\xc3\xb3n inicial de los bloques" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YInicial_MetaData[] = {
		{ "Category", "Spawns" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchoBloque_MetaData[] = {
		{ "Category", "Spawns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tama\xc3\xb1o de los bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tama\xc3\xb1o de los bloques" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargoBloque_MetaData[] = {
		{ "Category", "Spawns" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloqueActual_MetaData[] = {
		{ "Category", "BomberMan_012025GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al bloque que se va a destruir\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al bloque que se va a destruir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoombaPrototipo_MetaData[] = {
		{ "Category", "Enemigos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencia al prototipo de Goomba\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencia al prototipo de Goomba" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aGoombas_MetaData[] = {
		{ "Category", "Enemigos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array con todos los Goombas creados\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array con todos los Goombas creados" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_aBombas_MetaData[] = {
		{ "Category", "Bombas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array con todas las bombas creadas\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array con todas las bombas creadas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aBloques_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_aBloques;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XInicial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YInicial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchoBloque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LargoBloque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueActual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoombaPrototipo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aGoombas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_aGoombas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aBombas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_aBombas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_ClonarGoomba, "ClonarGoomba" }, // 85839455
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaEspecial, "CrearBombaEspecial" }, // 3710673506
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombaNormal, "CrearBombaNormal" }, // 2151368295
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_CrearBombas, "CrearBombas" }, // 3544665299
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_CrearGoombaPrototipo, "CrearGoombaPrototipo" }, // 3078704785
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque, "DestruirBloque" }, // 1514927346
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirGoomba, "DestruirGoomba" }, // 3839463098
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_IniciarExplosiones, "IniciarExplosiones" }, // 3046384859
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque, "SpawnBloque" }, // 2021424864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques_Inner = { "aBloques", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques = { "aBloques", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, aBloques), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aBloques_MetaData), NewProp_aBloques_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_XInicial = { "XInicial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, XInicial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XInicial_MetaData), NewProp_XInicial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_YInicial = { "YInicial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, YInicial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YInicial_MetaData), NewProp_YInicial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_AnchoBloque = { "AnchoBloque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, AnchoBloque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchoBloque_MetaData), NewProp_AnchoBloque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_LargoBloque = { "LargoBloque", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, LargoBloque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargoBloque_MetaData), NewProp_LargoBloque_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloqueActual = { "BloqueActual", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, BloqueActual), Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloqueActual_MetaData), NewProp_BloqueActual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_GoombaPrototipo = { "GoombaPrototipo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, GoombaPrototipo), Z_Construct_UClass_AGoombaEnemigo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoombaPrototipo_MetaData), NewProp_GoombaPrototipo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aGoombas_Inner = { "aGoombas", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGoombaEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aGoombas = { "aGoombas", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, aGoombas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aGoombas_MetaData), NewProp_aGoombas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBombas_Inner = { "aBombas", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABombaBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBombas = { "aBombas", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan_012025GameMode, aBombas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_aBombas_MetaData), NewProp_aBombas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_XInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_YInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_AnchoBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_LargoBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloqueActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_GoombaPrototipo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aGoombas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aGoombas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBombas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBombas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams = {
	&ABomberMan_012025GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025GameMode>()
{
	return ABomberMan_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025GameMode);
ABomberMan_012025GameMode::~ABomberMan_012025GameMode() {}
// End Class ABomberMan_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025GameMode, ABomberMan_012025GameMode::StaticClass, TEXT("ABomberMan_012025GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025GameMode), 1934494283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_3385627199(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
