#include "BaseBallGameModeBase.h"
#include "BaseBallGameStateBase.h"
#include "BaseBallPlayerController.h"


ABaseBallGameModeBase::ABaseBallGameModeBase()
{
    //DefaultPawnClass = nullptr;
    GameStateClass = ABaseBallGameStateBase::StaticClass();
    PlayerControllerClass = ABaseBallPlayerController::StaticClass();
    UE_LOG(LogTemp, Warning, TEXT("GameMode Constructor Called"));
}

void ABaseBallGameModeBase::BeginPlay()
{
    UE_LOG(LogTemp, Warning, TEXT("BeginPlay Called!"));
    Super::BeginPlay();
    GameStart();
}

void ABaseBallGameModeBase::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);

    UE_LOG(LogTemp, Warning, TEXT("PostLogin Called for %s"), *NewPlayer->GetName());

    ABaseBallPlayerController* PC = Cast<ABaseBallPlayerController>(NewPlayer);
    if (PC)
    {
        PC->bIsHostPlayer = (JoinedPlayers.Num() == 0);
        JoinedPlayers.Add(PC);

        UE_LOG(LogTemp, Warning, TEXT("Player joined: %s | IsHost: %s"),
            *PC->GetName(),
            PC->bIsHostPlayer ? TEXT("true") : TEXT("false"));
    }

    // 기존 UI 업데이트 유지
    ABaseBallGameStateBase* CurrentGameState = GetWorld()->GetGameState<ABaseBallGameStateBase>();
    if (CurrentGameState && PC)
    {
        const TArray<FString>& Guesses = PC->bIsHostPlayer ? CurrentGameState->HostGuesses : CurrentGameState->GuestGuesses;
        const TArray<FString>& Results = PC->bIsHostPlayer ? CurrentGameState->HostResults : CurrentGameState->GuestResults;

        PC->Client_UpdateFullUI(Guesses, Results, CurrentGameState->GameMessage);
    }
}


void ABaseBallGameModeBase::GameStart()
{
    ABaseBallGameStateBase* GS = GetWorld()->GetGameState<ABaseBallGameStateBase>();
    if (!GS) return;

    GenerateBaseballNumber();

    GS->RemainingTurns = 8;
    GS->bIsGameActive = true;
    GS->bGameEnded = false;
    GS->LastResult = FString();
    GS->GameMessage = TEXT("Game Start!");
    GS->bIsHostTurn = true;
}

void ABaseBallGameModeBase::GenerateBaseballNumber()
{
    TArray<int32> Numbers;
    for (int32 i = 1; i <= 9; ++i) Numbers.Add(i);

    for (int32 i = Numbers.Num() -1; i >= 0; --i)
    {
        int32 RandomIndex = FMath::RandRange(0, i);
        Numbers.Swap(i, RandomIndex);
    }

    BaseballNumber = Numbers[0] * 100 + Numbers[1] * 10 + Numbers[2];
}

void ABaseBallGameModeBase::ProcessPlayerGuess(const FString& Guess, bool bIsHost)
{
    ABaseBallGameStateBase* GS = GetWorld()->GetGameState<ABaseBallGameStateBase>();
    if (!GS || !GS->bIsGameActive || GS->bGameEnded)
        return;

    int32 Strike = 0, Ball = 0, Out = 0;
    CalculateStrikeAndBall(FCString::Atoi(*Guess), Strike, Ball, Out);
    FString Result = FString::Printf(TEXT("%dS%dB%dO"), Strike, Ball, Out);

    UE_LOG(LogTemp, Warning, TEXT("good Guess"));
    UE_LOG(LogTemp, Warning, TEXT("Guess: %s | Result: %s | %dS %dB %dO"), *Guess, *Result, Strike, Ball, Out);

    if (bIsHost)
    {
        GS->HostGuesses.Add(Guess);
        GS->HostResults.Add(Result);
    }
    else
    {
        GS->GuestGuesses.Add(Guess);
        GS->GuestResults.Add(Result);
    }

    GS->LastResult = Result;
    GS->RemainingTurns--;

    if (Strike == 3)
    {
        GS->bIsGameActive = false;
        GS->bGameEnded = true;
        GS->GameMessage = TEXT("Victory! Correct guess!");
    }
    else if (GS->RemainingTurns <= 0)
    {
        GS->bIsGameActive = false;
        GS->bGameEnded = true;
        GS->GameMessage = TEXT("Game Over. No one guessed correctly.");
    }
    else
    {
        GS->GameMessage = TEXT("");
        GS->bIsHostTurn = !GS->bIsHostTurn;
    }

    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ABaseBallPlayerController* PC = Cast<ABaseBallPlayerController>(*It);
        if (PC)
        {
            const TArray<FString>& Guesses = PC->bIsHostPlayer ? GS->HostGuesses : GS->GuestGuesses;
            const TArray<FString>& Results = PC->bIsHostPlayer ? GS->HostResults : GS->GuestResults;

            PC->Client_UpdateFullUI(Guesses, Results, GS->GameMessage);
            UE_LOG(LogTemp, Warning, TEXT("Client_UpdateFullUI Called for: %s"), *PC->GetName());
        }
    }
}


void ABaseBallGameModeBase::CalculateStrikeAndBall(int32 Guess, int32& OutStrike, int32& OutBall, int32& OutOut)
{
    OutStrike = 0;
    OutBall = 0;
    OutOut = 0;

    int32 SecretDigits[3] = {
        BaseballNumber / 100,
        (BaseballNumber / 10) % 10,
        BaseballNumber % 10
    };

    int32 GuessDigits[3] = {
        Guess / 100,
        (Guess / 10) % 10,
        Guess % 10
    };

    // 스트라이크 계산
    for (int32 i = 0; i < 3; ++i)
    {
        if (SecretDigits[i] == GuessDigits[i])
        {
            OutStrike++;
            SecretDigits[i] = -1;
            GuessDigits[i] = -2;
        }
    }

    // 볼 계산
    for (int32 i = 0; i < 3; ++i)
    {
        for (int32 j = 0; j < 3; ++j)
        {
            if (SecretDigits[i] != -1 && GuessDigits[j] != -2 && SecretDigits[i] == GuessDigits[j])
            {
                OutBall++;
                SecretDigits[i] = -1;
                GuessDigits[j] = -2;
                break;
            }
        }
    }
    OutOut = 3 - (OutStrike + OutBall);
}
