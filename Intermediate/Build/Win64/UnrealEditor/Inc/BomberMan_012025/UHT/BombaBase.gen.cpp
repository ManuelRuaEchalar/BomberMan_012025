// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BombaBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaBase() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBomba_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABombaBase
void ABombaBase::StaticRegisterNativesABombaBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaBase);
UClass* Z_Construct_UClass_ABombaBase_NoRegister()
{
	return ABombaBase::StaticClass();
}
struct Z_Construct_UClass_ABombaBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombaBase.h" },
		{ "ModuleRelativePath", "BombaBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente de malla est\xef\xbf\xbdtica\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BombaBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente de malla est\xef\xbf\xbdtica" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticleComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente del sistema de part\xef\xbf\xbd""culas para la explosi\xef\xbf\xbdn\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BombaBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente del sistema de part\xef\xbf\xbd""culas para la explosi\xef\xbf\xbdn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactorEscala_MetaData[] = {
		{ "Category", "Bomba" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Factor de escala para bombas m\xef\xbf\xbds peque\xef\xbf\xbd""as\n" },
#endif
		{ "ModuleRelativePath", "BombaBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factor de escala para bombas m\xef\xbf\xbds peque\xef\xbf\xbd""as" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticleComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FactorEscala;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombaBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombaBase_Statics::NewProp_ExplosionParticleComponent = { "ExplosionParticleComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaBase, ExplosionParticleComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionParticleComponent_MetaData), NewProp_ExplosionParticleComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABombaBase_Statics::NewProp_FactorEscala = { "FactorEscala", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaBase, FactorEscala), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactorEscala_MetaData), NewProp_FactorEscala_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombaBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaBase_Statics::NewProp_ExplosionParticleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaBase_Statics::NewProp_FactorEscala,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABombaBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBomba_NoRegister, (int32)VTABLE_OFFSET(ABombaBase, IBomba), false },  // 278589683
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaBase_Statics::ClassParams = {
	&ABombaBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABombaBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaBase()
{
	if (!Z_Registration_Info_UClass_ABombaBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaBase.OuterSingleton, Z_Construct_UClass_ABombaBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaBase.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaBase>()
{
	return ABombaBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaBase);
ABombaBase::~ABombaBase() {}
// End Class ABombaBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaBase, ABombaBase::StaticClass, TEXT("ABombaBase"), &Z_Registration_Info_UClass_ABombaBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaBase), 1434223446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_3913751770(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
