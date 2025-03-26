#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseBallGameModeBase.generated.h"


class ABaseBallPlayerController;


UCLASS()
class NBC_BASEBALLGAME_API ABaseBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ABaseBallGameModeBase();
	virtual void PostLogin(APlayerController* NewPlayer) override;
	UFUNCTION()
	void GameStart();
	UFUNCTION()
	void ProcessPlayerGuess(const FString& Guess, bool bIsHost);
	TArray<ABaseBallPlayerController*> JoinedPlayers;
protected:
	virtual void BeginPlay() override;


private:
	void GenerateBaseballNumber();
	void CalculateStrikeAndBall(int32 Guess, int32& OutStrike, int32& OutBall, int32& OutOut);
	int32 BaseballNumber;
};

