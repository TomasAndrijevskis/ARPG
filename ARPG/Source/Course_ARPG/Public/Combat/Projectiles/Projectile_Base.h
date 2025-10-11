
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_Base.generated.h"

UCLASS()
class COURSE_ARPG_API AProjectile_Base : public AActor
{
	GENERATED_BODY()
	
public:	

	UFUNCTION()
	void DestroyProjectile();

	void SetStats(const float NewDamage, const float NewAliveTime);

	void StartAliveTimer();

	
protected:

	virtual bool IsPlayerControlledActor(AActor* OtherActor) {return false;};

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* CollisionComponent;
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;
	
private:

	UFUNCTION()
	void HandleBeginOverlap(AActor* OtherActor);
	
	void HandleDestruction();
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* HitTemplate;
	
	float AliveTime;
	
	float Damage;

	FTimerHandle AliveTimerHandle;

};
