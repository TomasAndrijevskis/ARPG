
#pragma once

#include "CoreMinimal.h"
#include "CombatComponent_Base.h"
#include "CombatComponent_Mage.generated.h"


UCLASS()
class COURSE_ARPG_API UCombatComponent_Mage : public UCombatComponent_Base
{
	GENERATED_BODY()

public:

	virtual void ComboAttack() override;

	void ChangeProjectileClass(TSubclassOf<AActor> &NewProjectileClass);

	void RevertBaseProjectileClass();
	
private:

	UFUNCTION()
	void SpawnProjectile();
	
	UPROPERTY(EditAnywhere)
	float AttackManaCost = 5.0f;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> BaseProjectileClass;

	UPROPERTY()
	TSubclassOf<AActor> CurrentProjectileClass;
	
	UPROPERTY(EditAnywhere)
	FName ComponentName; //ProjectileSpawnLocation

	UPROPERTY(EditAnywhere)
	float AliveTime = 3.0f;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;
	
	FTimerHandle ProjectileTimerHandle;
};
