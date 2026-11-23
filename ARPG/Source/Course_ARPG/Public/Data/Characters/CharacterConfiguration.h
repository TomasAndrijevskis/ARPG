
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterConfiguration.generated.h"


class UDamageTypeBase;

UCLASS()
class COURSE_ARPG_API UCharacterConfiguration : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UAnimMontage> DeathAnim;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> DamageType;
	
};
