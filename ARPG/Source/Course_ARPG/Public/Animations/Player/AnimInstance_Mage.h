
#pragma once

#include "CoreMinimal.h"
#include "Animations/Player/AnimInstance_Player.h"
#include "AnimInstance_Mage.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnFrostBlastSummonedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnFireStormSummonedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnHealingAuraSummonedDelegate);
DECLARE_MULTICAST_DELEGATE(FOnMagicShieldSummonedDelegate);
UCLASS()
class COURSE_ARPG_API UAnimInstance_Mage : public UAnimInstance_Player
{
	GENERATED_BODY()

public:

	FOnFrostBlastSummonedDelegate OnFrostBlastSummoned;

	FOnFireStormSummonedDelegate OnFireStormSummoned;
	
	FOnHealingAuraSummonedDelegate OnHealingAuraSummoned;

	FOnMagicShieldSummonedDelegate OnMagicShieldSummoned;
	
protected:

	virtual void HandleLongRangeAttack() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnFrostBlast();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnFireStorm();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnHealingAura();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnMagicShield();
};
