// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBallPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_BASEBALLGAME_BaseBallPlayerController_generated_h
#error "BaseBallPlayerController.generated.h already included, missing '#pragma once' in BaseBallPlayerController.h"
#endif
#define NBC_BASEBALLGAME_BaseBallPlayerController_generated_h

#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_UpdateFullUI_Implementation(TArray<FString> const& Guesses, TArray<FString> const& Results, const FString& Message); \
	virtual void Server_ProcessGuess_Implementation(const FString& Guess, bool bIsHost); \
	DECLARE_FUNCTION(execClient_UpdateFullUI); \
	DECLARE_FUNCTION(execServer_ProcessGuess); \
	DECLARE_FUNCTION(execSubmitGuess);


#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_CALLBACK_WRAPPERS
#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBallPlayerController(); \
	friend struct Z_Construct_UClass_ABaseBallPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABaseBallPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseBallPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsHostPlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsHostPlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseBallPlayerController(ABaseBallPlayerController&&); \
	ABaseBallPlayerController(const ABaseBallPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBallPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBallPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBallPlayerController) \
	NO_API virtual ~ABaseBallPlayerController();


#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_9_PROLOG
#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_CALLBACK_WRAPPERS \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_BASEBALLGAME_API UClass* StaticClass<class ABaseBallPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
