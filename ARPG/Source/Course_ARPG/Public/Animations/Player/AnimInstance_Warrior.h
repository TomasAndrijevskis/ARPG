
#pragma once

#include "CoreMinimal.h"
#include "Animations/Player/AnimInstance_Player.h"
#include "AnimInstance_Warrior.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnDamageIncreaseRequestedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnStealLifeRequestedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnLightningBallSummonedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnInvincibilityRequestedDelegate);
UCLASS()
class COURSE_ARPG_API UAnimInstance_Warrior : public UAnimInstance_Player
{
	GENERATED_BODY()

public:

	FOnDamageIncreaseRequestedDelegate OnDamageIncreaseRequested;

	FOnStealLifeRequestedDelegate OnStealLifeRequested;

	FOnLightningBallSummonedDelegate OnLightningBallSummoned;

	FOnInvincibilityRequestedDelegate OnInvincibilityRequested;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void BecomeInvincible();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void IncreaseDamage();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void StealLife();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SummonLightningBall();
};
