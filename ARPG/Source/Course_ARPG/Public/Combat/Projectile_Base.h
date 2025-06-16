
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_Base.generated.h"

UCLASS()
class COURSE_ARPG_API AProjectile_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AProjectile_Base();
	
	UFUNCTION(BlueprintCallable)
	void HandleBeginOverlap(AActor* OtherActor);
	
	UFUNCTION()
	void DestroyProjectile();

	void SetStats(float NewDamage, float NewAliveTime);

	void StartAliveTimer();
	
protected:

	virtual bool IsPlayerControlledActor(AActor* OtherActor) {return false;};

	
private:

	void HandleDestruction();
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* HitTemplate;
	
	float AliveTime;
	
	float Damage;

	FTimerHandle AliveTimerHandle;
	
};
