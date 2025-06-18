// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BombaEspecial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaEspecial() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaEspecial();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaEspecial_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABombaEspecial
void ABombaEspecial::StaticRegisterNativesABombaEspecial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaEspecial);
UClass* Z_Construct_UClass_ABombaEspecial_NoRegister()
{
	return ABombaEspecial::StaticClass();
}
struct Z_Construct_UClass_ABombaEspecial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Clase BombaEspecial - Representa un composite en el patr\xef\xbf\xbdn Composite\n * Contiene otras bombas como componentes hijos\n */" },
#endif
		{ "IncludePath", "BombaEspecial.h" },
		{ "ModuleRelativePath", "BombaEspecial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase BombaEspecial - Representa un composite en el patr\xef\xbf\xbdn Composite\nContiene otras bombas como componentes hijos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombasHijas_MetaData[] = {
		{ "Category", "Bombas Hijas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array de bombas hijas\n" },
#endif
		{ "ModuleRelativePath", "BombaEspecial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array de bombas hijas" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BombasHijas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BombasHijas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaEspecial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABombaEspecial_Statics::NewProp_BombasHijas_Inner = { "BombasHijas", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABombaBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABombaEspecial_Statics::NewProp_BombasHijas = { "BombasHijas", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABombaEspecial, BombasHijas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombasHijas_MetaData), NewProp_BombasHijas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABombaEspecial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaEspecial_Statics::NewProp_BombasHijas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABombaEspecial_Statics::NewProp_BombasHijas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEspecial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABombaEspecial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABombaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEspecial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaEspecial_Statics::ClassParams = {
	&ABombaEspecial::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABombaEspecial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEspecial_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaEspecial_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaEspecial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaEspecial()
{
	if (!Z_Registration_Info_UClass_ABombaEspecial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaEspecial.OuterSingleton, Z_Construct_UClass_ABombaEspecial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaEspecial.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaEspecial>()
{
	return ABombaEspecial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaEspecial);
ABombaEspecial::~ABombaEspecial() {}
// End Class ABombaEspecial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaEspecial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaEspecial, ABombaEspecial::StaticClass, TEXT("ABombaEspecial"), &Z_Registration_Info_UClass_ABombaEspecial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaEspecial), 2842848185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaEspecial_h_4186948052(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaEspecial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaEspecial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
