// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_BaseBallGame/Public/BaseBallGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBallGameStateBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallGameStateBase();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_BaseBallGame();
// End Cross Module References

// Begin Class ABaseBallGameStateBase
void ABaseBallGameStateBase::StaticRegisterNativesABaseBallGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBallGameStateBase);
UClass* Z_Construct_UClass_ABaseBallGameStateBase_NoRegister()
{
	return ABaseBallGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ABaseBallGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BaseBallGameStateBase.h" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostAttempts_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuestAttempts_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGameActive_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastResult_MetaData[] = {
		{ "Category", "BaseBallGameStateBase" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMessage_MetaData[] = {
		{ "Category", "BaseBallGameStateBase" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuestScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHostTurn_MetaData[] = {
		{ "Category", "BaseBallGameStateBase" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTurns_MetaData[] = {
		{ "Category", "BaseBallGameStateBase" },
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameEnded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostGuesses_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuestGuesses_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuestResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HostAttempts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GuestAttempts;
	static void NewProp_bIsGameActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGameActive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastResult;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameMessage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HostScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GuestScore;
	static void NewProp_bIsHostTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHostTurn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTurns;
	static void NewProp_bGameEnded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameEnded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostGuesses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HostGuesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuestGuesses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GuestGuesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HostResults;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GuestResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GuestResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBallGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostAttempts = { "HostAttempts", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, HostAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostAttempts_MetaData), NewProp_HostAttempts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestAttempts = { "GuestAttempts", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, GuestAttempts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuestAttempts_MetaData), NewProp_GuestAttempts_MetaData) };
void Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsGameActive_SetBit(void* Obj)
{
	((ABaseBallGameStateBase*)Obj)->bIsGameActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsGameActive = { "bIsGameActive", nullptr, (EPropertyFlags)0x0010000000000024, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseBallGameStateBase), &Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsGameActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGameActive_MetaData), NewProp_bIsGameActive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_LastResult = { "LastResult", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, LastResult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastResult_MetaData), NewProp_LastResult_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GameMessage = { "GameMessage", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, GameMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMessage_MetaData), NewProp_GameMessage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, CurrentRound), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRound_MetaData), NewProp_CurrentRound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostScore = { "HostScore", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, HostScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostScore_MetaData), NewProp_HostScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestScore = { "GuestScore", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, GuestScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuestScore_MetaData), NewProp_GuestScore_MetaData) };
void Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsHostTurn_SetBit(void* Obj)
{
	((ABaseBallGameStateBase*)Obj)->bIsHostTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsHostTurn = { "bIsHostTurn", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseBallGameStateBase), &Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsHostTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHostTurn_MetaData), NewProp_bIsHostTurn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_RemainingTurns = { "RemainingTurns", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, RemainingTurns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTurns_MetaData), NewProp_RemainingTurns_MetaData) };
void Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bGameEnded_SetBit(void* Obj)
{
	((ABaseBallGameStateBase*)Obj)->bGameEnded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bGameEnded = { "bGameEnded", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseBallGameStateBase), &Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bGameEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameEnded_MetaData), NewProp_bGameEnded_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostGuesses_Inner = { "HostGuesses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostGuesses = { "HostGuesses", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, HostGuesses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostGuesses_MetaData), NewProp_HostGuesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestGuesses_Inner = { "GuestGuesses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestGuesses = { "GuestGuesses", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, GuestGuesses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuestGuesses_MetaData), NewProp_GuestGuesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostResults_Inner = { "HostResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostResults = { "HostResults", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, HostResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostResults_MetaData), NewProp_HostResults_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestResults_Inner = { "GuestResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestResults = { "GuestResults", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallGameStateBase, GuestResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuestResults_MetaData), NewProp_GuestResults_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBallGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestAttempts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsGameActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_LastResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GameMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_CurrentRound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bIsHostTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_RemainingTurns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_bGameEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostGuesses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostGuesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestGuesses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestGuesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_HostResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallGameStateBase_Statics::NewProp_GuestResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseBallGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBallGameStateBase_Statics::ClassParams = {
	&ABaseBallGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseBallGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBallGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBallGameStateBase()
{
	if (!Z_Registration_Info_UClass_ABaseBallGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBallGameStateBase.OuterSingleton, Z_Construct_UClass_ABaseBallGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBallGameStateBase.OuterSingleton;
}
template<> NBC_BASEBALLGAME_API UClass* StaticClass<ABaseBallGameStateBase>()
{
	return ABaseBallGameStateBase::StaticClass();
}
void ABaseBallGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_HostAttempts(TEXT("HostAttempts"));
	static const FName Name_GuestAttempts(TEXT("GuestAttempts"));
	static const FName Name_bIsGameActive(TEXT("bIsGameActive"));
	static const FName Name_LastResult(TEXT("LastResult"));
	static const FName Name_GameMessage(TEXT("GameMessage"));
	static const FName Name_CurrentRound(TEXT("CurrentRound"));
	static const FName Name_HostScore(TEXT("HostScore"));
	static const FName Name_GuestScore(TEXT("GuestScore"));
	static const FName Name_bIsHostTurn(TEXT("bIsHostTurn"));
	static const FName Name_RemainingTurns(TEXT("RemainingTurns"));
	static const FName Name_bGameEnded(TEXT("bGameEnded"));
	static const FName Name_HostGuesses(TEXT("HostGuesses"));
	static const FName Name_GuestGuesses(TEXT("GuestGuesses"));
	static const FName Name_HostResults(TEXT("HostResults"));
	static const FName Name_GuestResults(TEXT("GuestResults"));
	const bool bIsValid = true
		&& Name_HostAttempts == ClassReps[(int32)ENetFields_Private::HostAttempts].Property->GetFName()
		&& Name_GuestAttempts == ClassReps[(int32)ENetFields_Private::GuestAttempts].Property->GetFName()
		&& Name_bIsGameActive == ClassReps[(int32)ENetFields_Private::bIsGameActive].Property->GetFName()
		&& Name_LastResult == ClassReps[(int32)ENetFields_Private::LastResult].Property->GetFName()
		&& Name_GameMessage == ClassReps[(int32)ENetFields_Private::GameMessage].Property->GetFName()
		&& Name_CurrentRound == ClassReps[(int32)ENetFields_Private::CurrentRound].Property->GetFName()
		&& Name_HostScore == ClassReps[(int32)ENetFields_Private::HostScore].Property->GetFName()
		&& Name_GuestScore == ClassReps[(int32)ENetFields_Private::GuestScore].Property->GetFName()
		&& Name_bIsHostTurn == ClassReps[(int32)ENetFields_Private::bIsHostTurn].Property->GetFName()
		&& Name_RemainingTurns == ClassReps[(int32)ENetFields_Private::RemainingTurns].Property->GetFName()
		&& Name_bGameEnded == ClassReps[(int32)ENetFields_Private::bGameEnded].Property->GetFName()
		&& Name_HostGuesses == ClassReps[(int32)ENetFields_Private::HostGuesses].Property->GetFName()
		&& Name_GuestGuesses == ClassReps[(int32)ENetFields_Private::GuestGuesses].Property->GetFName()
		&& Name_HostResults == ClassReps[(int32)ENetFields_Private::HostResults].Property->GetFName()
		&& Name_GuestResults == ClassReps[(int32)ENetFields_Private::GuestResults].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseBallGameStateBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBallGameStateBase);
ABaseBallGameStateBase::~ABaseBallGameStateBase() {}
// End Class ABaseBallGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBallGameStateBase, ABaseBallGameStateBase::StaticClass, TEXT("ABaseBallGameStateBase"), &Z_Registration_Info_UClass_ABaseBallGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBallGameStateBase), 3293894311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_3568001289(TEXT("/Script/NBC_BaseBallGame"),
	Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
