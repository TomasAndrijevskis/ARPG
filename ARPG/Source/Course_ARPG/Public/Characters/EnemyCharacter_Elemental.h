
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Minion.h"
#include "EnemyCharacter_Elemental.generated.h"


class UEnemyProjectileComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Elemental : public AEnemyCharacter_Minion
{
	GENERATED_BODY()


public:

	AEnemyCharacter_Elemental();

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
