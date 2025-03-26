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
    // �÷��̾� �Է� ó��
    UFUNCTION(BlueprintCallable)
    void SubmitGuess(const FString& Guess);

    // ������ �Է� ����
    UFUNCTION(Server, Reliable)
    void Server_ProcessGuess(const FString& Guess, bool bIsHost);

    UFUNCTION(Client, Reliable)
    void Client_UpdateFullUI(const TArray<FString>& Guesses, const TArray<FString>& Results, const FString& Message);

    UPROPERTY(Replicated)
    bool bIsHostPlayer;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // UI �ν��Ͻ�
    UPROPERTY()
    UUserWidget * BaseballGameUI;

    // UI Ŭ���� (�������Ʈ���� ����)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> BaseballGameUIClass;

private:
    // �Է� ���ε� ó��
    void OnSubmitGuess();
    bool IsHost() const;
};