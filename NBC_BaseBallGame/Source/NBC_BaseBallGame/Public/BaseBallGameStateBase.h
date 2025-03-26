#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "BaseBallGameStateBase.generated.h"

UCLASS()
class NBC_BASEBALLGAME_API ABaseBallGameStateBase : public AGameStateBase
{
    GENERATED_BODY()
public:
    ABaseBallGameStateBase();

    UPROPERTY(Replicated, BlueprintReadWrite, Category = "Game State")
    int32 HostAttempts;

    UPROPERTY(Replicated, BlueprintReadWrite, Category = "Game State")
    int32 GuestAttempts;

    UPROPERTY(Replicated, BlueprintReadWrite, Category = "Game State")
    bool bIsGameActive;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly)
    FString LastResult;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly)
    FString GameMessage;

    UPROPERTY(Replicated)
    int32 CurrentRound;

    UPROPERTY(Replicated)
    int32 HostScore;

    UPROPERTY(Replicated)
    int32 GuestScore;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly)
    bool bIsHostTurn;

    UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly)
    int32 RemainingTurns;

    UPROPERTY(Replicated)
    bool bGameEnded;

    UPROPERTY(Replicated)
    TArray<FString> HostGuesses;

    UPROPERTY(Replicated)
    TArray<FString> GuestGuesses;

    UPROPERTY(Replicated)
    TArray<FString> HostResults;

    UPROPERTY(Replicated)
    TArray<FString> GuestResults;

    UFUNCTION(BlueprintCallable)
    void TriggerUIUpdate();

protected:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};