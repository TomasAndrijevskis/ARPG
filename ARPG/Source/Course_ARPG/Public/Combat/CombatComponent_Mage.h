
#pragma once

#include "CoreMinimal.h"
#include "Combat/CombatComponent_Base.h"
#include "CombatComponent_Mage.generated.h"


UCLASS()
class COURSE_ARPG_API UCombatComponent_Mage : public UCombatComponent_Base
{
	GENERATED_BODY()

public:

	virtual void ComboAttack() override;

private:

	UFUNCTION()
	void SpawnProjectile();
	
	UPROPERTY(EditAnywhere)
	float AttackManaCost = 5.0f;
	
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AActor>> ProjectileClasses;

	UPROPERTY(EditAnywhere)
	FName ComponentName; //ProjectileSpawnLocation

	UPROPERTY(EditAnywhere)
	float AliveTime = 4.0f;

	FTimerHandle ProjectileTimerHandle;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	int ProjectileCounter = 0;
};
