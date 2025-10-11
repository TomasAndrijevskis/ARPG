
#pragma once

#include "CoreMinimal.h"
#include "Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_GetArmor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_GetArmor : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;
	
	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;

	float GetArmor() const;

	void SetArmor(const float NewArmor);

	float GetDamageReductionPercent() const;

	void SetDamageReductionPercent(const float NewDamageReductionPercent);
	
protected:
	
	virtual void BeginPlay() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	virtual void CreateIcon() override;
	
private:

	void CompleteAbility();

	UPROPERTY(EditAnywhere)
	FString Keyword = "Armor";
	
	UPROPERTY(EditAnywhere)
	float Armor = 25.0f;

	UPROPERTY(EditAnywhere)
	float DamageReductionPercent = 0.3f;

	
};
