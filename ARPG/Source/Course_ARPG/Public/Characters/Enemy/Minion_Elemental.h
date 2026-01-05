
#pragma once

#include "CoreMinimal.h"
#include "Minion.h"
#include "Minion_Elemental.generated.h"


class UEnemyProjectileComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AMinion_Elemental : public AMinion
{
	GENERATED_BODY()

public:

	AMinion_Elemental();

	UPROPERTY(EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;
	
protected:

	virtual void HandleDeath() override;
	
private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComp;
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* ParticleEffect;

	UPROPERTY(EditAnywhere)
	UNiagaraComponent* NiagaraEffect;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* DeathParticleClass;
	
};
