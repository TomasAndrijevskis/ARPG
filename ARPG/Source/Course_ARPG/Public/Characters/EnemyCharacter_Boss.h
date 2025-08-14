
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Base.h"
#include "EnemyCharacter_Boss.generated.h"

class UEnemyProjectileComponent;
class UBossHealthBar;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Boss : public AEnemyCharacter_Base
{
	GENERATED_BODY()
	
public:
	
	AEnemyCharacter_Boss();

	UPROPERTY(BlueprintReadOnly)
	UBossHealthBar* HealthBarWidgetRef;
	
	virtual void CreateHealthWidget() override;

	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState) override;

	virtual float GetAttackAnimReductionTime() override;

	FText GetBossName();

	void ActivateSecondPhase();
	
protected:

	virtual void HandleDeath() override;

	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
private:

	UFUNCTION()
	void CheckSecondPhase(float CurrentHealth);
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBossHealthBar> HealthBarWidget;

	UPROPERTY(EditAnywhere)
	float SecondPhaseHealthPercent;

	UPROPERTY(EditAnywhere)
	UAnimMontage* PhaseTransitionMontage;

	UPROPERTY(EditAnywhere)
	float AttackAnimReductionTime;

	UPROPERTY(EditAnywhere)
	FText BossName;
	
	bool bCanTakeDamage = true;

	bool bSecondPhase = false;
	
};
