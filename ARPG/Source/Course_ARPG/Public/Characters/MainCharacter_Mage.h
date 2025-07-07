
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

	//UPROPERTY()
	//UParticleSystemComponent* ParticleComponentIce;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleFire;

	//UPROPERTY(EditAnywhere)
	//UParticleSystem* ParticleIce;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* NiagaraIceFX;

	UPROPERTY()
	UNiagaraComponent* NiagaraComponent;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;
};
