
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyProjectileComponent.generated.h"


class IFighter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UEnemyProjectileComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UFUNCTION(BlueprintCallable)
	void SpawnProjectile();

	virtual void BeginPlay() override;
	
private:

	float GetProjectileDamage() const;

	float GetElementalDamageModificator() const;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditAnywhere)
	FName ComponentName; //ProjectileSpawnLocation

	UPROPERTY(EditAnywhere)
	float AliveTime = 10.0f;

	IFighter* FighterRef;
};