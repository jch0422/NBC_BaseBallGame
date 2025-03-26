// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NBC_BaseBallGame/Public/BaseBallPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBallPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallPlayerController();
NBC_BASEBALLGAME_API UClass* Z_Construct_UClass_ABaseBallPlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NBC_BaseBallGame();
// End Cross Module References

// Begin Class ABaseBallPlayerController Function Client_UpdateFullUI
struct BaseBallPlayerController_eventClient_UpdateFullUI_Parms
{
	TArray<FString> Guesses;
	TArray<FString> Results;
	FString Message;
};
static const FName NAME_ABaseBallPlayerController_Client_UpdateFullUI = FName(TEXT("Client_UpdateFullUI"));
void ABaseBallPlayerController::Client_UpdateFullUI(TArray<FString> const& Guesses, TArray<FString> const& Results, const FString& Message)
{
	BaseBallPlayerController_eventClient_UpdateFullUI_Parms Parms;
	Parms.Guesses=Guesses;
	Parms.Results=Results;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ABaseBallPlayerController_Client_UpdateFullUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guesses_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guesses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Guesses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Guesses_Inner = { "Guesses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Guesses = { "Guesses", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallPlayerController_eventClient_UpdateFullUI_Parms, Guesses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guesses_MetaData), NewProp_Guesses_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallPlayerController_eventClient_UpdateFullUI_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallPlayerController_eventClient_UpdateFullUI_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Guesses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Guesses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallPlayerController, nullptr, "Client_UpdateFullUI", nullptr, nullptr, Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::PropPointers), sizeof(BaseBallPlayerController_eventClient_UpdateFullUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseBallPlayerController_eventClient_UpdateFullUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallPlayerController::execClient_UpdateFullUI)
{
	P_GET_TARRAY(FString,Z_Param_Guesses);
	P_GET_TARRAY(FString,Z_Param_Results);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateFullUI_Implementation(Z_Param_Guesses,Z_Param_Results,Z_Param_Message);
	P_NATIVE_END;
}
// End Class ABaseBallPlayerController Function Client_UpdateFullUI

// Begin Class ABaseBallPlayerController Function Server_ProcessGuess
struct BaseBallPlayerController_eventServer_ProcessGuess_Parms
{
	FString Guess;
	bool bIsHost;
};
static const FName NAME_ABaseBallPlayerController_Server_ProcessGuess = FName(TEXT("Server_ProcessGuess"));
void ABaseBallPlayerController::Server_ProcessGuess(const FString& Guess, bool bIsHost)
{
	BaseBallPlayerController_eventServer_ProcessGuess_Parms Parms;
	Parms.Guess=Guess;
	Parms.bIsHost=bIsHost ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ABaseBallPlayerController_Server_ProcessGuess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallPlayerController_eventServer_ProcessGuess_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
void Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_bIsHost_SetBit(void* Obj)
{
	((BaseBallPlayerController_eventServer_ProcessGuess_Parms*)Obj)->bIsHost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_bIsHost = { "bIsHost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseBallPlayerController_eventServer_ProcessGuess_Parms), &Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_bIsHost_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::NewProp_bIsHost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallPlayerController, nullptr, "Server_ProcessGuess", nullptr, nullptr, Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::PropPointers), sizeof(BaseBallPlayerController_eventServer_ProcessGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseBallPlayerController_eventServer_ProcessGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallPlayerController::execServer_ProcessGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_GET_UBOOL(Z_Param_bIsHost);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ProcessGuess_Implementation(Z_Param_Guess,Z_Param_bIsHost);
	P_NATIVE_END;
}
// End Class ABaseBallPlayerController Function Server_ProcessGuess

// Begin Class ABaseBallPlayerController Function SubmitGuess
struct Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics
{
	struct BaseBallPlayerController_eventSubmitGuess_Parms
	{
		FString Guess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseBallPlayerController_eventSubmitGuess_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::NewProp_Guess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBallPlayerController, nullptr, "SubmitGuess", nullptr, nullptr, Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::BaseBallPlayerController_eventSubmitGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::BaseBallPlayerController_eventSubmitGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseBallPlayerController::execSubmitGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubmitGuess(Z_Param_Guess);
	P_NATIVE_END;
}
// End Class ABaseBallPlayerController Function SubmitGuess

// Begin Class ABaseBallPlayerController
void ABaseBallPlayerController::StaticRegisterNativesABaseBallPlayerController()
{
	UClass* Class = ABaseBallPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_UpdateFullUI", &ABaseBallPlayerController::execClient_UpdateFullUI },
		{ "Server_ProcessGuess", &ABaseBallPlayerController::execServer_ProcessGuess },
		{ "SubmitGuess", &ABaseBallPlayerController::execSubmitGuess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBallPlayerController);
UClass* Z_Construct_UClass_ABaseBallPlayerController_NoRegister()
{
	return ABaseBallPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABaseBallPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BaseBallPlayerController.h" },
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHostPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseballGameUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseballGameUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseBallPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsHostPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHostPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseballGameUI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BaseballGameUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseBallPlayerController_Client_UpdateFullUI, "Client_UpdateFullUI" }, // 2441337973
		{ &Z_Construct_UFunction_ABaseBallPlayerController_Server_ProcessGuess, "Server_ProcessGuess" }, // 2860652527
		{ &Z_Construct_UFunction_ABaseBallPlayerController_SubmitGuess, "SubmitGuess" }, // 288230094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBallPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_bIsHostPlayer_SetBit(void* Obj)
{
	((ABaseBallPlayerController*)Obj)->bIsHostPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_bIsHostPlayer = { "bIsHostPlayer", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseBallPlayerController), &Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_bIsHostPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHostPlayer_MetaData), NewProp_bIsHostPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_BaseballGameUI = { "BaseballGameUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallPlayerController, BaseballGameUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseballGameUI_MetaData), NewProp_BaseballGameUI_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_BaseballGameUIClass = { "BaseballGameUIClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseBallPlayerController, BaseballGameUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseballGameUIClass_MetaData), NewProp_BaseballGameUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBallPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_bIsHostPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_BaseballGameUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBallPlayerController_Statics::NewProp_BaseballGameUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseBallPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NBC_BaseBallGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBallPlayerController_Statics::ClassParams = {
	&ABaseBallPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseBallPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBallPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseBallPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseBallPlayerController()
{
	if (!Z_Registration_Info_UClass_ABaseBallPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBallPlayerController.OuterSingleton, Z_Construct_UClass_ABaseBallPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseBallPlayerController.OuterSingleton;
}
template<> NBC_BASEBALLGAME_API UClass* StaticClass<ABaseBallPlayerController>()
{
	return ABaseBallPlayerController::StaticClass();
}
void ABaseBallPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsHostPlayer(TEXT("bIsHostPlayer"));
	const bool bIsValid = true
		&& Name_bIsHostPlayer == ClassReps[(int32)ENetFields_Private::bIsHostPlayer].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABaseBallPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBallPlayerController);
ABaseBallPlayerController::~ABaseBallPlayerController() {}
// End Class ABaseBallPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBallPlayerController, ABaseBallPlayerController::StaticClass, TEXT("ABaseBallPlayerController"), &Z_Registration_Info_UClass_ABaseBallPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBallPlayerController), 364204221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_740429022(TEXT("/Script/NBC_BaseBallGame"),
	Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
