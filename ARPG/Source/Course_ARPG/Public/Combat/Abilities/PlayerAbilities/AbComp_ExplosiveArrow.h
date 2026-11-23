
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbComp_ExplosiveArrow.generated.h"


UCLASS()
class COURSE_ARPG_API UAbComp_ExplosiveArrow : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void StartAbility() override;

	void SpawnArrow();
	
	float GetDefaultDamage() const {return ExplosionDamage;}

	float GetEnhancedDamage() const;

	void SetDamage(float NewDamage) {ExplosionDamage = NewDamage;}

	int GetNumberOfShots() const {return NumberOfShots;}

	void SetNumberOfShots(int NewNumberOfShots) {NumberOfShots = NewNumberOfShots;}
	
protected:

	virtual void SetAbilityData(const int32 Level) override;

	virtual void FinishAbilityCast() override;
	
private:

	UFUNCTION()
	void HandleAnimation();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowClass;

	UPROPERTY(VisibleAnywhere)
	int NumberOfShots;

	UPROPERTY(VisibleAnywhere)
	float ExplosionDamage;

	UPROPERTY(EditDefaultsOnly)
	float AliveTime = 3;

	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;
	
	int TempNumberOfShots = 0;
};
