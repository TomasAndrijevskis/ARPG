
#pragma once

#include "CoreMinimal.h"
#include "DamageIncreasePropertiesData.h"
#include "FireStormPropertiesData.h"
#include "FrostBlastPropertiesData.h"
#include "GetArmorPropertiesData.h"
#include "HealingAuraPropertiesData.h"
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
	TArray<FGetArmorPropertiesData> GetArmorLevels;

	UPROPERTY(EditAnywhere)
	TArray<FHealingAuraPropertiesData> HealingAuraLevels;

	UPROPERTY(EditAnywhere)
	TArray<FLifeStealAttackPropertiesData> LifeStealAttackLevels;

	UPROPERTY(EditAnywhere)
	TArray<FMagicShieldPropertiesData> MagicShieldLevels;
};
