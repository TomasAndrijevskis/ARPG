
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/RangeAttackPropertiesData.h"
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
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void SpawnProjectile();

	void SetProjectileDamage(const float NewProjectileDamage);

	FRangeAttackPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:
	
	void CompleteAbilityAttack();

	float GetDefaultProjectileDamage() const;

	float GetEnhancedProjectileDamage() const;
	
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
