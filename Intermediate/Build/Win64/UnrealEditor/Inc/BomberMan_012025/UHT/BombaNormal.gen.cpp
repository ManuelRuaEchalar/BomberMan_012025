// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BombaNormal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaNormal() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaBase();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaNormal();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaNormal_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABombaNormal
void ABombaNormal::StaticRegisterNativesABombaNormal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombaNormal);
UClass* Z_Construct_UClass_ABombaNormal_NoRegister()
{
	return ABombaNormal::StaticClass();
}
struct Z_Construct_UClass_ABombaNormal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Clase BombaNormal - Representa una hoja en el patr\xef\xbf\xbdn Composite\n * Implementa una bomba simple que explota y se destruye\n */" },
#endif
		{ "IncludePath", "BombaNormal.h" },
		{ "ModuleRelativePath", "BombaNormal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase BombaNormal - Representa una hoja en el patr\xef\xbf\xbdn Composite\nImplementa una bomba simple que explota y se destruye" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaNormal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABombaNormal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABombaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNormal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombaNormal_Statics::ClassParams = {
	&ABombaNormal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABombaNormal_Statics::Class_MetaDataParams), Z_Construct_UClass_ABombaNormal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABombaNormal()
{
	if (!Z_Registration_Info_UClass_ABombaNormal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombaNormal.OuterSingleton, Z_Construct_UClass_ABombaNormal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABombaNormal.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaNormal>()
{
	return ABombaNormal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaNormal);
ABombaNormal::~ABombaNormal() {}
// End Class ABombaNormal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaNormal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABombaNormal, ABombaNormal::StaticClass, TEXT("ABombaNormal"), &Z_Registration_Info_UClass_ABombaNormal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombaNormal), 3472227414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaNormal_h_3485448754(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaNormal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_BombaNormal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
