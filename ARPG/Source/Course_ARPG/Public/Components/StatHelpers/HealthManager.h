
#pragma once

#include "CoreMinimal.h"
#include "HealthManager.generated.h"

class IFighter;
class UStatsComponent;

UCLASS()
class COURSE_ARPG_API UHealthManager : public UObject
{
	GENERATED_BODY()

public:

	void Init(UStatsComponent* StatsComponentRef);

	UFUNCTION()
	void AddHealth(const float HealthToAdd);

	UFUNCTION()
	void ReduceHealth(const float Damage, AActor* Owner, AActor* Opponent);

private:

	UPROPERTY()
	UStatsComponent* StatsComponent;
};