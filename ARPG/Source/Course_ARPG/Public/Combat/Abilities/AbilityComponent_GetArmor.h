
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

	float GetArmor();

	void SetArmor(float NewArmor);

	float GetDamageReductionPercent();

	void SetDamageReductionPercent(float NewDamageReductionPercent);
	
protected:
	
	virtual void BeginPlay() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Keyword = "Armor";
	
	virtual void CreateIcon() override;
	
private:

	void CompleteAbility();
	
	UPROPERTY(EditAnywhere)
	float Armor = 25.0f;

	UPROPERTY(EditAnywhere)
	float DamageReductionPercent = 0.3f;

	
};
