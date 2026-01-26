
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "AbComp_FrostBlast.generated.h"


struct FFrostBlastPropertiesData;
struct FGetArmorPropertiesData;
class AFrostBlastRange;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_FrostBlast : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	void SetDamage(float NewDamage);

	float GetDamage() const;

	void SetSlowDuration(float NewSlowDuration);

	float GetSlowDuration() const;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
protected:

	FFrostBlastPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	UFUNCTION()
	void CompleteAbility();
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* InitialBlast;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Warmup;

	UPROPERTY(EditAnywhere)
	FName SocketName; //ik_foot_root
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FrostBlastClass;

	UPROPERTY(VisibleAnywhere)
	float Damage = 0.f;

	UPROPERTY(VisibleAnywhere)
	float SlowDuration = 0.f;
	
	FVector SocketLocation;
};
