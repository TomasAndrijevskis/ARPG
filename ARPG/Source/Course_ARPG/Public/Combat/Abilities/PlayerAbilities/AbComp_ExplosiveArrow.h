
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/ExplosiveArrowPropertiesData.h"
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

	float GetDefaultDamage() const;

	float GetEnhancedDamage() const;

	void SetDamage(float NewDamage);

	int GetNumberOfShots() const;

	void SetNumberOfShots(int NewNumberOfShots);
	
protected:
	
	FExplosiveArrowPropertiesData* GetAbilityData(const int32 Level);

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
