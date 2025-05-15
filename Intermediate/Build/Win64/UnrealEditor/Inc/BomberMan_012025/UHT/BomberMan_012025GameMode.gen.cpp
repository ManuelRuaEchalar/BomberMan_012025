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
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

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
		{ "Comment", "// M\xef\xbf\xbdtodos para la gesti\xef\xbf\xbdn de bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodos para la gesti\xef\xbf\xbdn de bloques" },
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
		{ "DestruirBloque", &ABomberMan_012025GameMode::execDestruirBloque },
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
		{ "Comment", "// Posici\xef\xbf\xbdn inicial de los bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Posici\xef\xbf\xbdn inicial de los bloques" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YInicial_MetaData[] = {
		{ "Category", "Spawns" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchoBloque_MetaData[] = {
		{ "Category", "Spawns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tama\xef\xbf\xbdo de los bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tama\xef\xbf\xbdo de los bloques" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_aBloques_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_aBloques;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XInicial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YInicial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnchoBloque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LargoBloque;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloqueActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_DestruirBloque, "DestruirBloque" }, // 1514927346
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_SpawnBloque, "SpawnBloque" }, // 1261918464
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_aBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_XInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_YInicial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_AnchoBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_LargoBloque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan_012025GameMode_Statics::NewProp_BloqueActual,
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
		{ Z_Construct_UClass_ABomberMan_012025GameMode, ABomberMan_012025GameMode::StaticClass, TEXT("ABomberMan_012025GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025GameMode), 3099738720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_3928120886(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
