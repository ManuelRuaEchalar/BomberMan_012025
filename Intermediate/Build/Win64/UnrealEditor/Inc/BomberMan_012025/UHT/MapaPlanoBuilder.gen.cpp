// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/MapaPlanoBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaPlanoBuilder() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaBuilder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaPlanoBuilder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaPlanoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMapaPlanoBuilder
void AMapaPlanoBuilder::StaticRegisterNativesAMapaPlanoBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaPlanoBuilder);
UClass* Z_Construct_UClass_AMapaPlanoBuilder_NoRegister()
{
	return AMapaPlanoBuilder::StaticClass();
}
struct Z_Construct_UClass_AMapaPlanoBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaPlanoBuilder.h" },
		{ "ModuleRelativePath", "MapaPlanoBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaPlanoBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapaPlanoBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMapaBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPlanoBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaPlanoBuilder_Statics::ClassParams = {
	&AMapaPlanoBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPlanoBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaPlanoBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaPlanoBuilder()
{
	if (!Z_Registration_Info_UClass_AMapaPlanoBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaPlanoBuilder.OuterSingleton, Z_Construct_UClass_AMapaPlanoBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaPlanoBuilder.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapaPlanoBuilder>()
{
	return AMapaPlanoBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaPlanoBuilder);
AMapaPlanoBuilder::~AMapaPlanoBuilder() {}
// End Class AMapaPlanoBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaPlanoBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaPlanoBuilder, AMapaPlanoBuilder::StaticClass, TEXT("AMapaPlanoBuilder"), &Z_Registration_Info_UClass_AMapaPlanoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaPlanoBuilder), 1233261829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaPlanoBuilder_h_4024290964(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaPlanoBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaPlanoBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
