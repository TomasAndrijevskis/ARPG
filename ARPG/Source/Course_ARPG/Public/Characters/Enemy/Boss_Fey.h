
#pragma once

#include "CoreMinimal.h"
#include "Boss.h"
#include "Boss_Fey.generated.h"


class UAbComp_SummonMinions;
class UAbComp_PoisonExplosion;

UCLASS()
class COURSE_ARPG_API ABoss_Fey : public ABoss
{
	GENERATED_BODY()

public:
	
	ABoss_Fey();

	void StartPoisonAbility();

	void FinishPoisonAbility();

	void StartSummonAbility();

	void SpawnProjectile();

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;

	UPROPERTY(EditAnywhere)
	UAbComp_PoisonExplosion* PoisonExplosionComp;

	UPROPERTY(EditAnywhere)
	UAbComp_SummonMinions* SummonMinionsComp;
	
protected:

	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) override;
	
private:

	void HandleBehaviour();
	
	void HandleSummonMinions();

	void SwitchToMeleeAttack();

	UPROPERTY(EditAnywhere)
	TArray<float> MeleeAttackHealthThresholds;

	UPROPERTY(EditAnywhere)
	TArray<float> SummonHealthThresholds;
	
	int MeleeAttacksCounter = 0;

	int SummonCounter = 0;
};
