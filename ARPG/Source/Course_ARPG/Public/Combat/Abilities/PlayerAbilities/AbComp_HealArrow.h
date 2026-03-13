
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/HealArrowPropertiesData.h"
#include "AbComp_HealArrow.generated.h"


class AEnemyCharacter;

UCLASS()
class COURSE_ARPG_API UAbComp_HealArrow : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void CreateIcon() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

	void SpawnArrow();

	void HandleEnemyHit(float Damage);
	
protected:

	void OnHitEnemy(AEnemyCharacter* NewEnemyRef);

	void OnHitNothing();

	FHealArrowPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;

	virtual void StartAbilityTimer() override;
	
private:

	UFUNCTION()
	void FinishAnimation();
	
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* ShootMontage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowClass;

	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;

	UPROPERTY(EditDefaultsOnly)
	float AliveTime = 10.0f;

	UPROPERTY(VisibleAnywhere)
	float HealCap = 20;

	UPROPERTY(VisibleAnywhere)
	float HealPercent = .5;

	UPROPERTY(VisibleAnywhere)
	float HealedAmount = 0;

	UPROPERTY()
	AEnemyCharacter* EnemyRef;
};