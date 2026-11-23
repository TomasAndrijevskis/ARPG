
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "AbComp_RangeAttack.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_RangeAttack : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	void SpawnProjectile();

	void SetProjectileDamage(const float NewProjectileDamage) {ProjectileDamage = NewProjectileDamage;}

	float GetDefaultProjectileDamage() const {return ProjectileDamage;}

	float GetEnhancedProjectileDamage() const;
	
protected:
	
	virtual void SetAbilityData(const int32 Level) override;
	
private:
	
	void SpawnParticle();
	
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
	UParticleSystemComponent* ParticleComp;
};
