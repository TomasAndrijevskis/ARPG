
#pragma once

#include "CoreMinimal.h"
#include "EnchantmentData.h"
#include "EnchantmentFXType.h"
#include "Data/EEffects.h"
#include "Engine/DataAsset.h"
#include "EnchantmentDataAsset.generated.h"

UCLASS()
class COURSE_ARPG_API UEnchantmentDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly)
	EEnchantmentFXType FXType;
	
	UPROPERTY(EditDefaultsOnly)
	TMap<EEffects, FEnchantmentData> EnchantmentData;

	UPROPERTY(EditDefaultsOnly)
	TArray<FName> SocketNames;

	UPROPERTY(EditDefaultsOnly)
	FVector Scale;
};
