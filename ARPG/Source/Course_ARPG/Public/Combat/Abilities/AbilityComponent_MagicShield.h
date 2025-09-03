
#pragma once

#include "CoreMinimal.h"
#include "Base/AbilityComponent_Player.h"
#include "Characters/MainCharacter_Mage.h"
#include "AbilityComponent_MagicShield.generated.h"

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

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;
	
protected:

	virtual void BeginPlay() override;

	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:

	UFUNCTION()
	void SpawnShield();

	UPROPERTY()
	AMagicShield* ShieldActor;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ShieldClass;
};
