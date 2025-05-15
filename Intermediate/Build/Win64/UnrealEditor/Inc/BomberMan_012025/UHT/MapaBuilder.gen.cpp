// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/MapaBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaBuilder() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaBuilder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaBuilder_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ATablero_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMapaBuilder
void AMapaBuilder::StaticRegisterNativesAMapaBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaBuilder);
UClass* Z_Construct_UClass_AMapaBuilder_NoRegister()
{
	return AMapaBuilder::StaticClass();
}
struct Z_Construct_UClass_AMapaBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaBuilder.h" },
		{ "ModuleRelativePath", "MapaBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableroActual_MetaData[] = {
		{ "Category", "Builder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// El producto que estamos construyendo\n" },
#endif
		{ "ModuleRelativePath", "MapaBuilder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "El producto que estamos construyendo" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableroActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapaBuilder_Statics::NewProp_TableroActual = { "TableroActual", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapaBuilder, TableroActual), Z_Construct_UClass_ATablero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableroActual_MetaData), NewProp_TableroActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapaBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapaBuilder_Statics::NewProp_TableroActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapaBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaBuilder_Statics::ClassParams = {
	&AMapaBuilder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapaBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapaBuilder_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaBuilder()
{
	if (!Z_Registration_Info_UClass_AMapaBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaBuilder.OuterSingleton, Z_Construct_UClass_AMapaBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaBuilder.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapaBuilder>()
{
	return AMapaBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaBuilder);
AMapaBuilder::~AMapaBuilder() {}
// End Class AMapaBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaBuilder, AMapaBuilder::StaticClass, TEXT("AMapaBuilder"), &Z_Registration_Info_UClass_AMapaBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaBuilder), 3289805153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaBuilder_h_1894537992(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_MapaBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
