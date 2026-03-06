
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
	virtual void DestroyProjectile();

	void SetStats(const float NewDamage, const float NewAliveTime, const float NewModificator);

	void StartAliveTimer();
	
	void SetOwner(AActor* NewProjectileOwner);
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	virtual TSubclassOf<UDamageType> GetDamageType() const {return nullptr;}

	virtual void HandleDestruction();

	virtual void HandleBeginOverlap(AActor* OtherActor);

	bool IsOpponentHit(AActor* OtherActor);
	
	UPROPERTY(EditAnywhere)
	UPrimitiveComponent* CollisionComponent;

	UPROPERTY(EditAnywhere)
	UParticleSystem* HitTemplate;
	
private:

	UPROPERTY()
	AActor* ProjectileOwner;
	
	float AliveTime;
	
	float Damage;

	float ElementalDamageModificator;
	
	FTimerHandle AliveTimerHandle;
};
