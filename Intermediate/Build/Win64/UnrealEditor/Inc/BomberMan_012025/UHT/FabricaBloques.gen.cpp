// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FabricaBloques.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloques() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaBloques();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaBloques_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AFabricaBloques
void AFabricaBloques::StaticRegisterNativesAFabricaBloques()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaBloques);
UClass* Z_Construct_UClass_AFabricaBloques_NoRegister()
{
	return AFabricaBloques::StaticClass();
}
struct Z_Construct_UClass_AFabricaBloques_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Forward declaration of ABloque class\n" },
#endif
		{ "IncludePath", "FabricaBloques.h" },
		{ "ModuleRelativePath", "FabricaBloques.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward declaration of ABloque class" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloques>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFabricaBloques_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloques_Statics::ClassParams = {
	&AFabricaBloques::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams), Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFabricaBloques()
{
	if (!Z_Registration_Info_UClass_AFabricaBloques.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaBloques.OuterSingleton, Z_Construct_UClass_AFabricaBloques_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFabricaBloques.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AFabricaBloques>()
{
	return AFabricaBloques::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloques);
AFabricaBloques::~AFabricaBloques() {}
// End Class AFabricaBloques

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_FabricaBloques_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaBloques, AFabricaBloques::StaticClass, TEXT("AFabricaBloques"), &Z_Registration_Info_UClass_AFabricaBloques, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaBloques), 289457729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_FabricaBloques_h_938345088(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_FabricaBloques_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_FabricaBloques_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
