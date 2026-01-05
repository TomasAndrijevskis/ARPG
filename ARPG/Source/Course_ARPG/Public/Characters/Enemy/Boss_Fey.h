
#pragma once

#include "CoreMinimal.h"
#include "Boss.h"
#include "Boss_Fey.generated.h"


class USummonMinionsComponent;
class UPoisonExplosionComponent;

UCLASS()
class COURSE_ARPG_API ABoss_Fey : public ABoss
{
	GENERATED_BODY()

public:
	
	ABoss_Fey();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;

	UPROPERTY(EditAnywhere)
	UPoisonExplosionComponent* PoisonExplosionComp;

	UPROPERTY(EditAnywhere)
	USummonMinionsComponent* SummonMinionsComp;
	
protected:

	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) override;
	
private:

	void HandleBehaviour();
	
	void SummonMinions();

	void SwitchToMeleeAttack();

	UPROPERTY(EditAnywhere)
	TArray<float> MeleeAttackHealthThresholds;

	UPROPERTY(EditAnywhere)
	TArray<float> SummonHealthThresholds;
	
	int MeleeAttacksCounter = 0;

	int SummonCounter = 0;
};
