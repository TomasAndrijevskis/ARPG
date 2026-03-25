
#pragma once

#include "CoreMinimal.h"
#include "AllElementsArrowPropertiesData.h"
#include "ArrowBarragePropertiesData.h"
#include "DamageIncreasePropertiesData.h"
#include "ExplosiveArrowPropertiesData.h"
#include "FireStormPropertiesData.h"
#include "FrostBlastPropertiesData.h"
#include "HealArrowPropertiesData.h"
#include "HealingAuraPropertiesData.h"
#include "InvincibilityPropertiesData.h"
#include "LifeStealAttackPropertiesData.h"
#include "MagicShieldPropertiesData.h"
#include "RangeAttackPropertiesData.h"
#include "Engine/DataAsset.h"
#include "AbilitiesUpgradeData.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UAbilitiesUpgradeData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FRangeAttackPropertiesData> RangeAttackLevels;

	UPROPERTY(EditAnywhere)
	TArray<FDamageIncreasePropertiesData> DamageIncreaseLevels;

	UPROPERTY(EditAnywhere)
	TArray<FFireStormPropertiesData> FireStormLevels;

	UPROPERTY(EditAnywhere)
	TArray<FFrostBlastPropertiesData> FrostBlastLevels;
	
	UPROPERTY(EditAnywhere)
	TArray<FInvincibilityPropertiesData> InvincibilityLevels;

	UPROPERTY(EditAnywhere)
	TArray<FHealingAuraPropertiesData> HealingAuraLevels;

	UPROPERTY(EditAnywhere)
	TArray<FLifeStealAttackPropertiesData> LifeStealAttackLevels;

	UPROPERTY(EditAnywhere)
	TArray<FMagicShieldPropertiesData> MagicShieldLevels;

	UPROPERTY(EditAnywhere)
	TArray<FHealArrowPropertiesData> HealArrowLevels;

	UPROPERTY(EditAnywhere)
	TArray<FArrowBarragePropertiesData> ArrowBarrageLevels;

	UPROPERTY(EditAnywhere)
	TArray<FAllElementsArrowPropertiesData> AllElementsArrowLevels;

	UPROPERTY(EditAnywhere)
	TArray<FExplosiveArrowPropertiesData> ExplosiveArrowLevels;
};
