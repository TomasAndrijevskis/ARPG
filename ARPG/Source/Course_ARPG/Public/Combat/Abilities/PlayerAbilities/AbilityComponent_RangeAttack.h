
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_RangeAttack.generated.h"


struct FRangeAttackPropertiesData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_RangeAttack : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SpawnProjectile();

	float GetProjectileDamage() const;

	void SetProjectileDamage(const float NewProjectileDamage);
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

	FRangeAttackPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
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

	UPROPERTY(VisibleAnywhere)
	float ProjectileDamage = 0.f;

	UPROPERTY(EditAnywhere)
	float AliveTime = 4.0f;
	
	UPROPERTY()
	UParticleSystemComponent* ParticleComponent;
};
