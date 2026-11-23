
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ARPG_Character_Base.generated.h"

class UDamageTypeBase;
class UStatsComponent;

UCLASS(abstract)
class COURSE_ARPG_API AARPG_Character_Base : public ACharacter
{
	GENERATED_BODY()

public:

	AARPG_Character_Base();

	void PlayDeathAnimation();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStatsComponent* StatsComp;
	
protected:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAnimMontage> DeathAnimMontage;

	UPROPERTY(VisibleAnywhere)
	TSubclassOf<UDamageTypeBase> BaseAttackDamageType;
	
	virtual void BeginPlay() override;

	virtual void LoadConfigData() {};
};
