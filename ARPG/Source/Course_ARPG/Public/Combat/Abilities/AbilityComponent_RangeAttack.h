

#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_RangeAttack.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_RangeAttack : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	UAbilityComponent_RangeAttack(){};

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	void SpawnProjectile();

	float GetProjectileDamage();

	void SetProjectileDamage(float NewProjectileDamage);


private:
	
	UFUNCTION(BlueprintCallable)
	void StartAbilityAttack();
	
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

	FTimerHandle ParticleTimerHandle;
	
	UParticleSystemComponent* ParticleComponent;
	
};
