
#pragma once

#include "CoreMinimal.h"
#include "MageEnchantmentData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FMageEnchantmentData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* WeaponEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> Projectile;
};