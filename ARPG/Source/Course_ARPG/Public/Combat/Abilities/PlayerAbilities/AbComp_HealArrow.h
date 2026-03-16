
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

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void CreateIcon() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

	void SpawnArrow();

	void HandleEnemyHit(float Damage);

	void SetHealCap(float NewHealCap);

	float GetHealCap() const;

	void SetHealPercent(float NewHealPercent);
	
	float GetHealPercent() const;

	void OnEnemyDied(AEnemyCharacter* Enemy);
	
protected:

	virtual void BeginPlay() override;
	
	void OnHitEnemy(AEnemyCharacter* NewEnemyRef);

	void OnHitNothing();

	FHealArrowPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;

	virtual void StartAbilityTimer() override;
	
private:

	UFUNCTION()
	void FinishAnimation();

	void OnAbilityFinished();

	void InterruptAbilityTimer();
	
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* ShootMontage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowClass;

	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;

	UPROPERTY(EditDefaultsOnly)
	float AliveTime = 0.f;

	UPROPERTY(VisibleAnywhere)
	float MaxHealCap = 0.f;

	UPROPERTY(VisibleAnywhere)
	float HealPercent = 0.f;

	UPROPERTY(visibleAnywhere)
	float HealCap;
	
	UPROPERTY()
	AEnemyCharacter* EnemyRef;
};