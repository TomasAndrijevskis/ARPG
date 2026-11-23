
#pragma once

#include "CoreMinimal.h"
#include "Data/EEnemyStates.h"
#include "Data/Characters/CharacterConfiguration.h"
#include "EnemyCharacterConfiguration.generated.h"


class UBehaviorTree;
class UEnemyHealthBar;

UCLASS()
class COURSE_ARPG_API UEnemyCharacterConfiguration : public UCharacterConfiguration
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	EEnemyStates InitialState;
	
	UPROPERTY(EditAnywhere)
	float RewardXP;

	UPROPERTY(EditAnywhere)
	bool bRandomAttacks;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UBehaviorTree> BehaviorTree;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UEnemyHealthBar> HealthBarWidgetClass;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* DeathParticleClass;
	
	UPROPERTY(EditAnywhere)
	FText BossName;

};
