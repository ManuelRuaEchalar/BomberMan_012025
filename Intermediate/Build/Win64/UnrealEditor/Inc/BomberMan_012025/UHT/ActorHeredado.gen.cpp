// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ActorHeredado.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorHeredado() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AActorHeredado();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AActorHeredado_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AActorHeredado
void AActorHeredado::StaticRegisterNativesAActorHeredado()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorHeredado);
UClass* Z_Construct_UClass_AActorHeredado_NoRegister()
{
	return AActorHeredado::StaticClass();
}
struct Z_Construct_UClass_AActorHeredado_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActorHeredado.h" },
		{ "ModuleRelativePath", "ActorHeredado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "ActorHeredado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorHeredado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSceneComponent_MetaData[] = {
		{ "Category", "ActorHeredado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorHeredado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxOne_MetaData[] = {
		{ "Category", "ActorHeredado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorHeredado.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTwo_MetaData[] = {
		{ "Category", "ActorHeredado" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorHeredado.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTwo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorHeredado>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorHeredado_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorHeredado, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorHeredado_Statics::NewProp_ChildSceneComponent = { "ChildSceneComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorHeredado, ChildSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSceneComponent_MetaData), NewProp_ChildSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorHeredado_Statics::NewProp_BoxOne = { "BoxOne", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorHeredado, BoxOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxOne_MetaData), NewProp_BoxOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorHeredado_Statics::NewProp_BoxTwo = { "BoxTwo", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorHeredado, BoxTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTwo_MetaData), NewProp_BoxTwo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorHeredado_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorHeredado_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorHeredado_Statics::NewProp_ChildSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorHeredado_Statics::NewProp_BoxOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorHeredado_Statics::NewProp_BoxTwo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorHeredado_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AActorHeredado_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorHeredado_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorHeredado_Statics::ClassParams = {
	&AActorHeredado::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AActorHeredado_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AActorHeredado_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorHeredado_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorHeredado_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActorHeredado()
{
	if (!Z_Registration_Info_UClass_AActorHeredado.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorHeredado.OuterSingleton, Z_Construct_UClass_AActorHeredado_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActorHeredado.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AActorHeredado>()
{
	return AActorHeredado::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActorHeredado);
AActorHeredado::~AActorHeredado() {}
// End Class AActorHeredado

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_ActorHeredado_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActorHeredado, AActorHeredado::StaticClass, TEXT("AActorHeredado"), &Z_Registration_Info_UClass_AActorHeredado, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorHeredado), 2695889302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_ActorHeredado_h_1989537233(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_ActorHeredado_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_ActorHeredado_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
