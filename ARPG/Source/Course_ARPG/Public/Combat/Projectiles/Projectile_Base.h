
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

	void SetStats(const float NewDamage, const float NewAliveTime, const float NewModificator);

	void StartAliveTimer();
	
	void SetOwner(AActor* NewProjectileOwner);
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	virtual TSubclassOf<UDamageType> GetDamageType() const {return nullptr;}
	
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* CollisionComponent;
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;
	
private:

	UFUNCTION()
	void HandleBeginOverlap(AActor* OtherActor);
	
	void HandleDestruction();

	bool IsOpponentHit(AActor* OtherActor);
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* HitTemplate;

	UPROPERTY()
	AActor* ProjectileOwner;
	
	float AliveTime;
	
	float Damage;

	float ElementalDamageModificator;
	
	FTimerHandle AliveTimerHandle;
};
