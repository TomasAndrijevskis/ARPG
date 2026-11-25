
#pragma once

#include "CoreMinimal.h"
#include "EnchantmentData.generated.h"


class UDamageTypeBase;
class UFXSystemAsset;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FEnchantmentData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UFXSystemAsset> EnchantmentEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> DamageType;
	
	UPROPERTY(EditDefaultsOnly)
	bool HasProjectile = false;
	
	UPROPERTY(EditDefaultsOnly, meta = (EditCondition = HasProjectile))
	TSubclassOf<AActor> Projectile;
};