
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/InvincibilityPropertiesData.h"
#include "Components/ActorComponent.h"
#include "AbComp_Invincibility.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_Invincibility : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	float GetDefaultArmor() const;

	float GetEnhancedArmor() const;
	
	void SetArmor(const float NewArmor);

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
protected:
	
	virtual void BeginPlay() override;
	
	virtual void CreateIcon() override;

	FInvincibilityPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	void CompleteAbility();

	UPROPERTY(EditAnywhere)
	FString Keyword = "Armor";
	
	UPROPERTY(VisibleAnywhere)
	float Armor = 0.f;
};
