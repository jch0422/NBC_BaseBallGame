// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_BaseBallGame/Public/BaseBallGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBallGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallGameModeBase();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_BaseBallGame();
// End Cross Module References

// Begin Class ABaseBallGameModeBase Function GameStart
struct Z_Construct_UFunction_ABaseBallGameModeBase_GameStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallGameModeBase_GameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallGameModeBase, nullptr, "GameStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallGameModeBase_GameStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallGameModeBase_GameStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABaseBallGameModeBase_GameStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallGameModeBase_GameStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallGameModeBase::execGameStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameStart();
	P_NATIVE_END;
}
// End Class ABaseBallGameModeBase Function GameStart

// Begin Class ABaseBallGameModeBase Function ProcessPlayerGuess
struct Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics
{
	struct BaseBallGameModeBase_eventProcessPlayerGuess_Parms
	{
		FString Guess;
		bool bIsHost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static void NewProp_bIsHost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallGameModeBase_eventProcessPlayerGuess_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
void Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_bIsHost_SetBit(void* Obj)
{
	((BaseBallGameModeBase_eventProcessPlayerGuess_Parms*)Obj)->bIsHost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_bIsHost = { "bIsHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseBallGameModeBase_eventProcessPlayerGuess_Parms), &Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_bIsHost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::NewProp_bIsHost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallGameModeBase, nullptr, "ProcessPlayerGuess", nullptr, nullptr, Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::BaseBallGameModeBase_eventProcessPlayerGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::BaseBallGameModeBase_eventProcessPlayerGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallGameModeBase::execProcessPlayerGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_GET_UBOOL(Z_Param_bIsHost);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPlayerGuess(Z_Param_Guess,Z_Param_bIsHost);
	P_NATIVE_END;
}
// End Class ABaseBallGameModeBase Function ProcessPlayerGuess

// Begin Class ABaseBallGameModeBase
void ABaseBallGameModeBase::StaticRegisterNativesABaseBallGameModeBase()
{
	UClass* Class = ABaseBallGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GameStart", &ABaseBallGameModeBase::execGameStart },
		{ "ProcessPlayerGuess", &ABaseBallGameModeBase::execProcessPlayerGuess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBallGameModeBase);
UClass* Z_Construct_UClass_ABaseBallGameModeBase_NoRegister()
{
	return ABaseBallGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABaseBallGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseBallGameModeBase.h" },
		{ "ModuleRelativePath", "Public/BaseBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseBallGameModeBase_GameStart, "GameStart" }, // 953936839
		{ &Z_Construct_UFunction_ABaseBallGameModeBase_ProcessPlayerGuess, "ProcessPlayerGuess" }, // 2337950621
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBallGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseBallGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBallGameModeBase_Statics::ClassParams = {
	&ABaseBallGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBallGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBallGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton, Z_Construct_UClass_ABaseBallGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBallGameModeBase.OuterSingleton;
}
template<> NBC_BASEBALLGAME_API UClass* StaticClass<ABaseBallGameModeBase>()
{
	return ABaseBallGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBallGameModeBase);
ABaseBallGameModeBase::~ABaseBallGameModeBase() {}
// End Class ABaseBallGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBallGameModeBase, ABaseBallGameModeBase::StaticClass, TEXT("ABaseBallGameModeBase"), &Z_Registration_Info_UClass_ABaseBallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBallGameModeBase), 846079485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameModeBase_h_660272697(TEXT("/Script/NBC_BaseBallGame"),
	Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
