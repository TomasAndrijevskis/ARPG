
#pragma once

#include "CoreMinimal.h"
#include "ManaManager.generated.h"


class UStatsComponent;

UCLASS()
class COURSE_ARPG_API UManaManager : public UObject
{
	GENERATED_BODY()

public:

	void Init(UStatsComponent* StatsComponentRef, const double NewManaRegenRate, const float NewManaDelayDuration);

	UFUNCTION()
	void ReduceMana(const float Mana);

	UFUNCTION()
	void RegenMana();
	
private:

	UFUNCTION()
	void EnableManaRegen();
	
	UPROPERTY()
	UStatsComponent* StatsComponent;
	
	double ManaRegenRate = 0.f;
	
	float ManaDelayDuration = 0.f;
	
	bool bCanRegenMana = true;
};
