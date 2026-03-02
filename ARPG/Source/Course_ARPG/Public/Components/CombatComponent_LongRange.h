
#pragma once

#include "CoreMinimal.h"
#include "CombatComponent_Base.h"
#include "CombatComponent_LongRange.generated.h"


class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UCombatComponent_LongRange : public UCombatComponent_Base
{
	GENERATED_BODY()

public:

	virtual void ComboAttack() override;

	void ChangeProjectileClass(TSubclassOf<AActor> &NewProjectileClass);

	void RevertBaseProjectileClass();
	
	virtual void SpawnProjectile() override;
	
private:

	void GetLocations(FVector& SpawnLocation, FVector& TargetLocation, const AMainCharacter_Base* PlayerRef);
	
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
