#include "BaseBallGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "BaseBallPlayerController.h"
ABaseBallGameStateBase::ABaseBallGameStateBase()
{
    HostAttempts = 3; // 변수 이름 수정
    GuestAttempts = 3; // 변수 이름 수정
    bIsGameActive = true;
    LastResult = FString();
    GameMessage = FString();
    CurrentRound = 1;
    HostScore = 0;
    GuestScore = 0;
    bIsHostTurn = true;
}

void ABaseBallGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ABaseBallGameStateBase, HostAttempts);
    DOREPLIFETIME(ABaseBallGameStateBase, GuestAttempts);
    DOREPLIFETIME(ABaseBallGameStateBase, bIsGameActive);
    DOREPLIFETIME(ABaseBallGameStateBase, LastResult);
    DOREPLIFETIME(ABaseBallGameStateBase, GameMessage);
    DOREPLIFETIME(ABaseBallGameStateBase, CurrentRound);
    DOREPLIFETIME(ABaseBallGameStateBase, HostScore);
    DOREPLIFETIME(ABaseBallGameStateBase, GuestScore);
    DOREPLIFETIME(ABaseBallGameStateBase, bIsHostTurn);
    DOREPLIFETIME(ABaseBallGameStateBase, HostGuesses);
    DOREPLIFETIME(ABaseBallGameStateBase, GuestGuesses); 
    DOREPLIFETIME(ABaseBallGameStateBase, HostResults); 
    DOREPLIFETIME(ABaseBallGameStateBase, GuestResults); 
    DOREPLIFETIME(ABaseBallGameStateBase, RemainingTurns);
}

void ABaseBallGameStateBase::TriggerUIUpdate()
{
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABaseBallPlayerController* PC = Cast<ABaseBallPlayerController>(*It);
        if (PC)
        {
            const TArray<FString>& Guesses = PC->bIsHostPlayer ? HostGuesses : GuestGuesses;
            const TArray<FString>& Results = PC->bIsHostPlayer ? HostResults : GuestResults;

            PC->Client_UpdateFullUI(Guesses, Results, GameMessage);
        }
    }
}
