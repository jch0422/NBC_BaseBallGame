// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseBallGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NBC_BASEBALLGAME_BaseBallGameStateBase_generated_h
#error "BaseBallGameStateBase.generated.h already included, missing '#pragma once' in BaseBallGameStateBase.h"
#endif
#define NBC_BASEBALLGAME_BaseBallGameStateBase_generated_h

#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseBallGameStateBase(); \
	friend struct Z_Construct_UClass_ABaseBallGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABaseBallGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NBC_BaseBallGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseBallGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HostAttempts=NETFIELD_REP_START, \
		GuestAttempts, \
		bIsGameActive, \
		LastResult, \
		GameMessage, \
		CurrentRound, \
		HostScore, \
		GuestScore, \
		bIsHostTurn, \
		RemainingTurns, \
		bGameEnded, \
		HostGuesses, \
		GuestGuesses, \
		HostResults, \
		GuestResults, \
		NETFIELD_REP_END=GuestResults	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseBallGameStateBase(ABaseBallGameStateBase&&); \
	ABaseBallGameStateBase(const ABaseBallGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseBallGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseBallGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseBallGameStateBase) \
	NO_API virtual ~ABaseBallGameStateBase();


#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_7_PROLOG
#define FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NBC_BASEBALLGAME_API UClass* StaticClass<class ABaseBallGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NBC_BaseBallGame_Source_NBC_BaseBallGame_Public_BaseBallGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
