
#pragma once

#include "CoreMinimal.h"
#include "ArcherEnchantmentData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FArcherEnchantmentData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* WeaponEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> Projectile;
};