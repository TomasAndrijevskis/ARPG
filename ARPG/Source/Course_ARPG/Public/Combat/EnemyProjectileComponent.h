
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyProjectileComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UEnemyProjectileComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UEnemyProjectileComponent();
	
	UFUNCTION(BlueprintCallable)
	void SpawnProjectile();

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere)
	FName ComponentName; //ProjectileSpawnLocation
	
	UPROPERTY(EditAnywhere)
	float ProjectileDamage = 10.0f;

	UPROPERTY(EditAnywhere)
	float AliveTime = 10.0f;

};
