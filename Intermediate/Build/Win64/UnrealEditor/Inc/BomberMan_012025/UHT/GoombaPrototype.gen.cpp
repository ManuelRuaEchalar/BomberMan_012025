// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/GoombaPrototype.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoombaPrototype() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGoombaPrototype();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UGoombaPrototype
void UGoombaPrototype::StaticRegisterNativesUGoombaPrototype()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoombaPrototype);
UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister()
{
	return UGoombaPrototype::StaticClass();
}
struct Z_Construct_UClass_UGoombaPrototype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoombaPrototype.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGoombaPrototype>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGoombaPrototype_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoombaPrototype_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoombaPrototype_Statics::ClassParams = {
	&UGoombaPrototype::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoombaPrototype_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoombaPrototype_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGoombaPrototype()
{
	if (!Z_Registration_Info_UClass_UGoombaPrototype.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoombaPrototype.OuterSingleton, Z_Construct_UClass_UGoombaPrototype_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoombaPrototype.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UGoombaPrototype>()
{
	return UGoombaPrototype::StaticClass();
}
UGoombaPrototype::UGoombaPrototype(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGoombaPrototype);
UGoombaPrototype::~UGoombaPrototype() {}
// End Interface UGoombaPrototype

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaPrototype_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoombaPrototype, UGoombaPrototype::StaticClass, TEXT("UGoombaPrototype"), &Z_Registration_Info_UClass_UGoombaPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoombaPrototype), 3355703046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaPrototype_h_933809656(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaPrototype_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaPrototype_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
