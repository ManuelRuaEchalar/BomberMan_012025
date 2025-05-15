// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Tablero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTablero() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ATablero();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ATablero_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ATablero
void ATablero::StaticRegisterNativesATablero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATablero);
UClass* Z_Construct_UClass_ATablero_NoRegister()
{
	return ATablero::StaticClass();
}
struct Z_Construct_UClass_ATablero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tablero.h" },
		{ "ModuleRelativePath", "Tablero.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATablero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATablero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATablero_Statics::ClassParams = {
	&ATablero::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATablero_Statics::Class_MetaDataParams), Z_Construct_UClass_ATablero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATablero()
{
	if (!Z_Registration_Info_UClass_ATablero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATablero.OuterSingleton, Z_Construct_UClass_ATablero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATablero.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ATablero>()
{
	return ATablero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATablero);
ATablero::~ATablero() {}
// End Class ATablero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Tablero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATablero, ATablero::StaticClass, TEXT("ATablero"), &Z_Registration_Info_UClass_ATablero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATablero), 2845889205U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Tablero_h_67873642(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Tablero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Tablero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
