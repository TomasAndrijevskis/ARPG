
#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_GetArmor.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_GetArmor : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	UAbilityComponent_GetArmor(){};

	UFUNCTION(BlueprintCallable)
	void GiveArmor();

	float GetArmor();

	void SetArmor(float NewArmor);

	float GetDamageReductionPercent();

	void SetDamageReductionPercent(float NewDamageReductionPercent);

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;
	
	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;
	
protected:
	
	virtual void BeginPlay() override;

private:

	void CompleteAbility();
	
	UPROPERTY(EditAnywhere)
	float Armor = 25.0f;

	UPROPERTY(EditAnywhere)
	float DamageReductionPercent = 0.3f;

	UPROPERTY(EditAnywhere)
	bool bIsCasting = false;
};
