
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_RangeAttack.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_RangeAttack : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& SavedData) override;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SpawnProjectile();

	float GetProjectileDamage() const;

	void SetProjectileDamage(const float NewProjectileDamage);
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:
	
	void CompleteAbilityAttack();

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
	FName SocketName; //FX_Sword_BeyondTip

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere)
	FName ComponentName; //ProjectileSpawnLocation

	UPROPERTY(EditAnywhere)
	float ProjectileDamage = 10.0f;

	UPROPERTY(EditAnywhere)
	float AliveTime = 4.0f;
	
	UPROPERTY()
	UParticleSystemComponent* ParticleComponent;
};
