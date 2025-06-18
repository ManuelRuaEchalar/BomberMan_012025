// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/GoombaEnemigo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoombaEnemigo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGoombaEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AGoombaEnemigo_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UGoombaPrototype_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AGoombaEnemigo Function GetMovementSpeed
struct Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics
{
	struct GoombaEnemigo_eventGetMovementSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoombaEnemigo_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "GetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::GoombaEnemigo_eventGetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::GoombaEnemigo_eventGetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execGetMovementSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function GetMovementSpeed

// Begin Class AGoombaEnemigo Function GetPatrolRadius
struct Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics
{
	struct GoombaEnemigo_eventGetPatrolRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoombaEnemigo_eventGetPatrolRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "GetPatrolRadius", nullptr, nullptr, Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::GoombaEnemigo_eventGetPatrolRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::GoombaEnemigo_eventGetPatrolRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execGetPatrolRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPatrolRadius();
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function GetPatrolRadius

// Begin Class AGoombaEnemigo Function SetMovementSpeed
struct Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics
{
	struct GoombaEnemigo_eventSetMovementSpeed_Parms
	{
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getter y Setter para las propiedades\n" },
#endif
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter y Setter para las propiedades" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoombaEnemigo_eventSetMovementSpeed_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "SetMovementSpeed", nullptr, nullptr, Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::GoombaEnemigo_eventSetMovementSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::GoombaEnemigo_eventSetMovementSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execSetMovementSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementSpeed(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function SetMovementSpeed

// Begin Class AGoombaEnemigo Function SetPatrolRadius
struct Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics
{
	struct GoombaEnemigo_eventSetPatrolRadius_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoombaEnemigo_eventSetPatrolRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "SetPatrolRadius", nullptr, nullptr, Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::GoombaEnemigo_eventSetPatrolRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::GoombaEnemigo_eventSetPatrolRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execSetPatrolRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPatrolRadius(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function SetPatrolRadius

// Begin Class AGoombaEnemigo Function StartPatrol
struct Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para iniciar el movimiento de patrulla\n" },
#endif
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para iniciar el movimiento de patrulla" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "StartPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGoombaEnemigo_StartPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_StartPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execStartPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartPatrol();
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function StartPatrol

// Begin Class AGoombaEnemigo Function StopPatrol
struct Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para detener el movimiento de patrulla\n" },
#endif
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para detener el movimiento de patrulla" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoombaEnemigo, nullptr, "StopPatrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGoombaEnemigo_StopPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoombaEnemigo_StopPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoombaEnemigo::execStopPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopPatrol();
	P_NATIVE_END;
}
// End Class AGoombaEnemigo Function StopPatrol

// Begin Class AGoombaEnemigo
void AGoombaEnemigo::StaticRegisterNativesAGoombaEnemigo()
{
	UClass* Class = AGoombaEnemigo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMovementSpeed", &AGoombaEnemigo::execGetMovementSpeed },
		{ "GetPatrolRadius", &AGoombaEnemigo::execGetPatrolRadius },
		{ "SetMovementSpeed", &AGoombaEnemigo::execSetMovementSpeed },
		{ "SetPatrolRadius", &AGoombaEnemigo::execSetPatrolRadius },
		{ "StartPatrol", &AGoombaEnemigo::execStartPatrol },
		{ "StopPatrol", &AGoombaEnemigo::execStopPatrol },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoombaEnemigo);
UClass* Z_Construct_UClass_AGoombaEnemigo_NoRegister()
{
	return AGoombaEnemigo::StaticClass();
}
struct Z_Construct_UClass_AGoombaEnemigo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GoombaEnemigo.h" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componentes\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componentes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoombaEnemigo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoombaEnemigo_GetMovementSpeed, "GetMovementSpeed" }, // 932427984
		{ &Z_Construct_UFunction_AGoombaEnemigo_GetPatrolRadius, "GetPatrolRadius" }, // 2752730242
		{ &Z_Construct_UFunction_AGoombaEnemigo_SetMovementSpeed, "SetMovementSpeed" }, // 486317384
		{ &Z_Construct_UFunction_AGoombaEnemigo_SetPatrolRadius, "SetPatrolRadius" }, // 804837112
		{ &Z_Construct_UFunction_AGoombaEnemigo_StartPatrol, "StartPatrol" }, // 1244261921
		{ &Z_Construct_UFunction_AGoombaEnemigo_StopPatrol, "StopPatrol" }, // 557942168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoombaEnemigo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoombaEnemigo, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoombaEnemigo, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoombaEnemigo_Statics::NewProp_RootComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoombaEnemigo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGoombaEnemigo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGoombaPrototype_NoRegister, (int32)VTABLE_OFFSET(AGoombaEnemigo, IGoombaPrototype), false },  // 3355703046
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoombaEnemigo_Statics::ClassParams = {
	&AGoombaEnemigo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoombaEnemigo_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoombaEnemigo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoombaEnemigo()
{
	if (!Z_Registration_Info_UClass_AGoombaEnemigo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoombaEnemigo.OuterSingleton, Z_Construct_UClass_AGoombaEnemigo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoombaEnemigo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AGoombaEnemigo>()
{
	return AGoombaEnemigo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoombaEnemigo);
AGoombaEnemigo::~AGoombaEnemigo() {}
// End Class AGoombaEnemigo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoombaEnemigo, AGoombaEnemigo::StaticClass, TEXT("AGoombaEnemigo"), &Z_Registration_Info_UClass_AGoombaEnemigo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoombaEnemigo), 1140204632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_1856244385(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alex_Documents_Unreal_Projects_BomberMan_012025_master_Source_BomberMan_012025_GoombaEnemigo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
