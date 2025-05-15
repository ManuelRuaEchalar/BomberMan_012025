// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/MapaObuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaObuilder() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaBuilder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaOBuilder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaOBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMapaOBuilder
void AMapaOBuilder::StaticRegisterNativesAMapaOBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaOBuilder);
UClass* Z_Construct_UClass_AMapaOBuilder_NoRegister()
{
	return AMapaOBuilder::StaticClass();
}
struct Z_Construct_UClass_AMapaOBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaObuilder.h" },
		{ "ModuleRelativePath", "MapaObuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaOBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapaOBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMapaBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaOBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaOBuilder_Statics::ClassParams = {
	&AMapaOBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaOBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaOBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaOBuilder()
{
	if (!Z_Registration_Info_UClass_AMapaOBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaOBuilder.OuterSingleton, Z_Construct_UClass_AMapaOBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaOBuilder.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapaOBuilder>()
{
	return AMapaOBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaOBuilder);
AMapaOBuilder::~AMapaOBuilder() {}
// End Class AMapaOBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaObuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaOBuilder, AMapaOBuilder::StaticClass, TEXT("AMapaOBuilder"), &Z_Registration_Info_UClass_AMapaOBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaOBuilder), 927229640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaObuilder_h_4055803716(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaObuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaObuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
