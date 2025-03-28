#include "BaseBallPlayerController.h"
#include "BaseBallGameModeBase.h"
#include "BaseBallGameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "Blueprint/UserWidget.h"

ABaseBallPlayerController::ABaseBallPlayerController()
{
}

void ABaseBallPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (IsLocalController() && BaseballGameUIClass)
    {
        BaseballGameUI = CreateWidget<UUserWidget>(this, BaseballGameUIClass);
        if (BaseballGameUI)
        {
            BaseballGameUI->AddToViewport();
            UE_LOG(LogTemp, Warning, TEXT("UI Created and Added to Viewport"));
        }
    }
}


void ABaseBallPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    if (!InputComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("InputComponent is null in SetupInputComponent"));
        return;
    }
    UE_LOG(LogTemp, Warning, TEXT("SetupInputComponent Called!"));
    InputComponent->BindAction("SubmitGuess", IE_Pressed, this, &ABaseBallPlayerController::OnSubmitGuess);
}

void ABaseBallPlayerController::OnSubmitGuess()
{
    FString Guess = TEXT("123");
    SubmitGuess(Guess);
}

void ABaseBallPlayerController::SubmitGuess(const FString& Guess)
{
    Server_ProcessGuess(Guess, IsHost());
}



void ABaseBallPlayerController::Server_ProcessGuess_Implementation(const FString& Guess, bool bIsHost)
{
    ABaseBallGameStateBase* GameState = GetWorld()->GetGameState<ABaseBallGameStateBase>();
    if (GameState)
    {
        // 서버 입장에서 이 PlayerController가 지금 턴인지 검사
        if (GameState->bIsHostTurn != bIsHostPlayer)
        {
            UE_LOG(LogTemp, Warning, TEXT("Server: Not player's turn."));
            return;
        }
    }

    ABaseBallGameModeBase* GameMode = Cast<ABaseBallGameModeBase>(GetWorld()->GetAuthGameMode());
    if (GameMode)
    {
        UE_LOG(LogTemp, Warning, TEXT("good gamemode"));
        GameMode->ProcessPlayerGuess(Guess, bIsHostPlayer);
    }
}


void ABaseBallPlayerController::Client_UpdateFullUI_Implementation(const TArray<FString>& Guesses, const TArray<FString>& Results, const FString& Message)
{
    if (!IsLocalController() || !BaseballGameUI) return;

    static FName FunctionName = FName(TEXT("UpdateLog"));
    if (BaseballGameUI->FindFunction(FunctionName))
    {
        struct FUpdateLogParams
        {
            TArray<FString> Guesses;
            TArray<FString> Results;
        };

        FUpdateLogParams Params;
        Params.Guesses = Guesses;
        Params.Results = Results;
        UE_LOG(LogTemp, Warning, TEXT("ProcessEvent"));
        BaseballGameUI->ProcessEvent(BaseballGameUI->FindFunction(FunctionName), &Params);
    }
}




bool ABaseBallPlayerController::IsHost() const
{
    return GetWorld()->GetFirstPlayerController() == this;
}

void ABaseBallPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ABaseBallPlayerController, bIsHostPlayer);
}
