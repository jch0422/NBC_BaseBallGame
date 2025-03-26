#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseBallPlayerController.generated.h"

class UUserWidget;

UCLASS()
class NBC_BASEBALLGAME_API ABaseBallPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ABaseBallPlayerController();

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

public:
    // 플레이어 입력 처리
    UFUNCTION(BlueprintCallable)
    void SubmitGuess(const FString& Guess);

    // 서버로 입력 전송
    UFUNCTION(Server, Reliable)
    void Server_ProcessGuess(const FString& Guess, bool bIsHost);

    UFUNCTION(Client, Reliable)
    void Client_UpdateFullUI(const TArray<FString>& Guesses, const TArray<FString>& Results, const FString& Message);

    UPROPERTY(Replicated)
    bool bIsHostPlayer;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // UI 인스턴스
    UPROPERTY()
    UUserWidget * BaseballGameUI;

    // UI 클래스 (블루프린트에서 지정)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> BaseballGameUIClass;

private:
    // 입력 바인딩 처리
    void OnSubmitGuess();
    bool IsHost() const;
};