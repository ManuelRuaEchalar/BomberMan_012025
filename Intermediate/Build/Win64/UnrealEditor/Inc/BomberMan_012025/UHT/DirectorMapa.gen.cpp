// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/DirectorMapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorMapa() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirectorMapa();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirectorMapa_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ADirectorMapa
void ADirectorMapa::StaticRegisterNativesADirectorMapa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorMapa);
UClass* Z_Construct_UClass_ADirectorMapa_NoRegister()
{
	return ADirectorMapa::StaticClass();
}
struct Z_Construct_UClass_ADirectorMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorMapa.h" },
		{ "ModuleRelativePath", "DirectorMapa.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorMapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirectorMapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorMapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorMapa_Statics::ClassParams = {
	&ADirectorMapa::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorMapa_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorMapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirectorMapa()
{
	if (!Z_Registration_Info_UClass_ADirectorMapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorMapa.OuterSingleton, Z_Construct_UClass_ADirectorMapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirectorMapa.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ADirectorMapa>()
{
	return ADirectorMapa::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorMapa);
ADirectorMapa::~ADirectorMapa() {}
// End Class ADirectorMapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_DirectorMapa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorMapa, ADirectorMapa::StaticClass, TEXT("ADirectorMapa"), &Z_Registration_Info_UClass_ADirectorMapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorMapa), 622765569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_DirectorMapa_h_55158539(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_DirectorMapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_DirectorMapa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
