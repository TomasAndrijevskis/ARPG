
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_AllElementsArrow.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;

UCLASS()
class COURSE_ARPG_API AProjectile_AllElementsArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_AllElementsArrow();

	void SetEffectsParams(float NewEffectDuration, float NewDamageRate);
	
protected:

	virtual void HandleBeginOverlap(AActor* OtherActor) override;

	virtual void BeginPlay() override;

	virtual void HandleDestruction() override;
	
private:
	
	UPROPERTY(EditAnywhere)
	USceneComponent* EffectSpawnComponent;

	FRotator GetRandomRotation();

	void SpawnEffects();

	void DestroyEffects();
	
	UPROPERTY(EditAnywhere)
	TArray<UNiagaraSystem*> Particles;

	UPROPERTY()
	TArray<UNiagaraComponent*> ParticleComponents;
	
	UPROPERTY(EditDefaultsOnly)
	FVector VisualEffectScale;
	
	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;

	UPROPERTY(VisibleAnywhere)
	float EffectDuration;

	UPROPERTY(VisibleAnywhere)
	float DamageRate;
};
