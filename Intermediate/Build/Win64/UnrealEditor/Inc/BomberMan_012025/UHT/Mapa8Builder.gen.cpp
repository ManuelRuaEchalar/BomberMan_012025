// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Mapa8Builder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapa8Builder() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa8Builder();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapa8Builder_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMapaBuilder();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AMapa8Builder
void AMapa8Builder::StaticRegisterNativesAMapa8Builder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapa8Builder);
UClass* Z_Construct_UClass_AMapa8Builder_NoRegister()
{
	return AMapa8Builder::StaticClass();
}
struct Z_Construct_UClass_AMapa8Builder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mapa8Builder.h" },
		{ "ModuleRelativePath", "Mapa8Builder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapa8Builder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapa8Builder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMapaBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa8Builder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapa8Builder_Statics::ClassParams = {
	&AMapa8Builder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapa8Builder_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapa8Builder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapa8Builder()
{
	if (!Z_Registration_Info_UClass_AMapa8Builder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapa8Builder.OuterSingleton, Z_Construct_UClass_AMapa8Builder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapa8Builder.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AMapa8Builder>()
{
	return AMapa8Builder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapa8Builder);
AMapa8Builder::~AMapa8Builder() {}
// End Class AMapa8Builder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Mapa8Builder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapa8Builder, AMapa8Builder::StaticClass, TEXT("AMapa8Builder"), &Z_Registration_Info_UClass_AMapa8Builder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapa8Builder), 663667839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Mapa8Builder_h_63981408(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Mapa8Builder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Mapa8Builder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
