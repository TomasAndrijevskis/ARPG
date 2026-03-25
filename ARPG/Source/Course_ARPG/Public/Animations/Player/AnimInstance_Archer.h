
#pragma once

#include "CoreMinimal.h"
#include "AnimInstance_Player.h"
#include "AnimInstance_Archer.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHealingArrowFireRequestDelegate);
DECLARE_MULTICAST_DELEGATE(FOnArrowBarrageSpawnRequestDelegate);
DECLARE_MULTICAST_DELEGATE(FOnAllElementsArrowSpawnRequestDelegate);
DECLARE_MULTICAST_DELEGATE(FOnExplosiveArrowSpawnRequestDelegate);
UCLASS()
class COURSE_ARPG_API UAnimInstance_Archer : public UAnimInstance_Player
{
	GENERATED_BODY()

public:

	FOnHealingArrowFireRequestDelegate OnHealingArrowFireRequest;

	FOnArrowBarrageSpawnRequestDelegate OnArrowBarrageSpawnRequest;

	FOnAllElementsArrowSpawnRequestDelegate OnAllElementsArrowSpawnRequest;

	FOnExplosiveArrowSpawnRequestDelegate OnExplosiveArrowSpawnRequest;
	
protected:

	virtual void HandleLongRangeAttack() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void FireHealingArrow();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnArrowBarrage();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnAllElementsArrow();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnExplosiveArrow();
};