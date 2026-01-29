
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/GetArmorPropertiesData.h"
#include "Components/ActorComponent.h"
#include "AbComp_GetArmor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_GetArmor : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	float GetArmor() const;

	void SetArmor(const float NewArmor);

	float GetDamageReductionPercent() const;

	void SetDamageReductionPercent(const float NewDamageReductionPercent);

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
protected:
	
	virtual void BeginPlay() override;
	
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
