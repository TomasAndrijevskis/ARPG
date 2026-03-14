
#pragma once

#include "CoreMinimal.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "MainCharacter_Archer.generated.h"


class UAbComp_HealArrow;

UCLASS()
class COURSE_ARPG_API AMainCharacter_Archer : public AMainCharacter_Base
{
	GENERATED_BODY()

public:

	AMainCharacter_Archer();
	
	virtual void HandleEffectChange(EEffects NewEffect) override;

	virtual float GetPhysicalDamage() override;

	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser) override;

	virtual void SpawnProjectile() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_HealArrow* AbilityComp_HealArrow;

protected:

	virtual void BeginPlay() override;

	virtual void BindAbilityDelegates() override;
	
};
