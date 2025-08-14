
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Minion.h"
#include "EC_Minion_Elemental.generated.h"


class UEnemyProjectileComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AEC_Minion_Elemental : public AEnemyCharacter_Minion
{
	GENERATED_BODY()


public:

	AEC_Minion_Elemental();

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
