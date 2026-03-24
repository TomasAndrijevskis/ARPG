
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Arrow.h"
#include "Projectile_HealingArrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_HealingArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_HealingArrow();
	
protected:

	virtual void HandleBeginOverlap(AActor* OtherActor) override;

	virtual void HandleDestruction() override;
	
private:

	UPROPERTY(EditDefaultsOnly)
	UParticleSystemComponent* Particle;

	UPROPERTY()
	AEnemyCharacter* EnemyRef;
	
	bool bHitEnemy = false;
};
