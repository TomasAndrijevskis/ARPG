
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_MagicShield.generated.h"


struct FMagicShieldPropertiesData;
class AMagicShield;
class USphereComponent;
class UNiagaraSystem;


UCLASS()
class COURSE_ARPG_API UAbilityComponent_MagicShield : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
protected:

	virtual void BeginPlay() override;

	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	FMagicShieldPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	UFUNCTION()
	void SpawnShield();

	UPROPERTY()
	AMagicShield* ShieldActor;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ShieldClass;
};
