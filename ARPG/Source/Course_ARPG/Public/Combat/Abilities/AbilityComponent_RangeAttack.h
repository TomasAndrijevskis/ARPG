

#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_RangeAttack.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnAttackPerformedignature, UAbilityComponent_RangeAttack, OnAttackPerformedDelegate);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_RangeAttack : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	UAbilityComponent_RangeAttack(){};
	
	UPROPERTY(BlueprintAssignable)
	FOnAttackPerformedignature OnAttackPerformedDelegate;
	
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
	float AliveTime = 10.0f;

	FTimerHandle ParticleTimerHandle;

	bool bIsCasting = false;

	UParticleSystemComponent* ParticleComponent;
	
};
