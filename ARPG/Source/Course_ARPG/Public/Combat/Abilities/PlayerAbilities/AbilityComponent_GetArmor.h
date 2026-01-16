
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_GetArmor.generated.h"


struct FGetArmorPropertiesData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_GetArmor : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	float GetArmor() const;

	void SetArmor(const float NewArmor);

	float GetDamageReductionPercent() const;

	void SetDamageReductionPercent(const float NewDamageReductionPercent);
	
protected:
	
	virtual void BeginPlay() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	virtual void CreateIcon() override;

	FGetArmorPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	void CompleteAbility();

	UPROPERTY(EditAnywhere)
	FString Keyword = "Armor";
	
	UPROPERTY(VisibleAnywhere)
	float Armor = 0.f;

	UPROPERTY(VisibleAnywhere)
	float DamageReductionPercent = 0.f;
};
