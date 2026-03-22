
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_Base.generated.h"


class UDamageTypeBase;

UCLASS()
class COURSE_ARPG_API AProjectile_Base : public AActor
{
	GENERATED_BODY()
	
public:	

	UFUNCTION()
	virtual void DestroyProjectile();

	void SetParams(const float NewDamage, const float NewAliveTime, const float NewElementalDamageModificator);

	void StartAliveTimer();
	
	void SetProjectileOwner(AActor* NewProjectileOwner);

	AActor* GetProjectileOwner() const;
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

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

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> DamageType;
};