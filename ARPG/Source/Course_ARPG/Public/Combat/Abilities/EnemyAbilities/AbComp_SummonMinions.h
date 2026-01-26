
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Enemy.h"
#include "AbComp_SummonMinions.generated.h"


class AEnemyCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_SummonMinions : public UAbilityComponent_Enemy
{
	GENERATED_BODY()

public:
	
	virtual void StartAbility() override;
	
private:
	
	int GetRandomSpawnDistance() const;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> MinionClass;

	UPROPERTY(EditAnywhere)
	TArray<int> MinionSpawnAmount;

	UPROPERTY(EditAnywhere)
	int MinSpawnDistance;

	UPROPERTY(EditAnywhere)
	int MaxSpawnDistance;
};