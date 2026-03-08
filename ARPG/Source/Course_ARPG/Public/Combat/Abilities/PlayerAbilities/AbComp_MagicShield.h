
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/MagicShieldPropertiesData.h"
#include "AbComp_MagicShield.generated.h"


class AMagicShield;
class USphereComponent;
class UNiagaraSystem;

UCLASS()
class COURSE_ARPG_API UAbComp_MagicShield : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void CreateIcon() override;

	void ReflectAttack(AActor* Opponent, float Damage, const UDamageType* DamageType);

	void SetReflectionPercent(float NewReflectionPercent);

	void SpawnShield();
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	FMagicShieldPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	float GetDefaultDamageReflectionPercent() const;

	float GetEnhancedDamageReflectionPercent() const;
	
	UPROPERTY()
	AMagicShield* ShieldActor;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ShieldClass;

	float DamageReflectionPercent = .2f;
};
