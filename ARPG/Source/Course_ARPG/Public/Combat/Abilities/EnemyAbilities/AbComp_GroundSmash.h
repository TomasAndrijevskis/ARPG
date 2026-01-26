
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Enemy.h"
#include "Components/ActorComponent.h"
#include "AbComp_GroundSmash.generated.h"


class AGroundSmashArea;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_GroundSmash : public UAbilityComponent_Enemy
{
	GENERATED_BODY()

public:	

	virtual void StartAbility() override;

private:
	
	FVector GetParticleSpawnLocation(const FName& SocketName) const;

	UPROPERTY(EditAnywhere)
	float DamageMultiplier;
	
	UPROPERTY(EditAnywhere)
	FName SpawnSocketName; //FX_Trail_L_03
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> GroundSmashAreaClass;
};
