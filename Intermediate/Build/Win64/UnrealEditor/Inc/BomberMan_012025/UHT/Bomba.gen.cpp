// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Bomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Interface UBomba
void UBomba::StaticRegisterNativesUBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBomba);
UClass* Z_Construct_UClass_UBomba_NoRegister()
{
	return UBomba::StaticClass();
}
struct Z_Construct_UClass_UBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Bomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBomba_Statics::ClassParams = {
	&UBomba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_UBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBomba()
{
	if (!Z_Registration_Info_UClass_UBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBomba.OuterSingleton, Z_Construct_UClass_UBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBomba>()
{
	return UBomba::StaticClass();
}
UBomba::UBomba(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBomba);
UBomba::~UBomba() {}
// End Interface UBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Bomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBomba, UBomba::StaticClass, TEXT("UBomba"), &Z_Registration_Info_UClass_UBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBomba), 278589683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Bomba_h_4265638072(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Bomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_Bomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
