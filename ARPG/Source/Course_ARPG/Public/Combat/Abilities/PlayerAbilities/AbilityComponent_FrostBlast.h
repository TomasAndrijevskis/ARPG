
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_FrostBlast.generated.h"


class AFrostBlastRange;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_FrostBlast : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& SavedData) override;

	void SetDamage(float NewDamage);

	float GetDamage() const;

	void SetSlowDuration(float NewSlowDuration);

	float GetSlowDuration() const;
	
protected:

	virtual void BeginPlay() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:

	UFUNCTION()
	void CompleteAbility();
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* InitialBlast;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Warmup;

	UPROPERTY(EditAnywhere)
	FName SocketName; //ik_foot_root

	UPROPERTY()
	AFrostBlastRange* FrostBlastRangeActor;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FrostBlastClass;

	UPROPERTY(EditAnywhere)
	float Damage;

	UPROPERTY(EditAnywhere)
	float SlowDuration;
	
	FVector SocketLocation;
};
