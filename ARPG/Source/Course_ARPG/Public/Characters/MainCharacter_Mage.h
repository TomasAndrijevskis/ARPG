
#pragma once

#include "CoreMinimal.h"
#include "Characters/MainCharacter_Base.h"
#include "MainCharacter_Mage.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

UCLASS()
class COURSE_ARPG_API AMainCharacter_Mage : public AMainCharacter_Base
{
	GENERATED_BODY()

public:
	
	AMainCharacter_Mage();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAbilityComponent_MagicShield* AbilityComp_MagicShield;

protected:

	virtual void BeginPlay() override;

	virtual void HandleDeath() override;
	
private:

	UFUNCTION()
	void SpawnParticles();
	
	UPROPERTY(EditAnywhere)
	FName RightHandSocketName;

	UPROPERTY(EditAnywhere)
	FName LeftHandSocketName;

	UPROPERTY()
	UParticleSystemComponent* ParticleComponentFire;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleFire;

	UPROPERTY()
	UParticleSystemComponent* ParticleComponentIce;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleIce;
	
};
