
#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "Boss.generated.h"


class UEnemyProjectileComponent;
class UBossHealthBar;

UCLASS()
class COURSE_ARPG_API ABoss : public AEnemyCharacter
{
	GENERATED_BODY()
	
public:
	
	ABoss();

	UPROPERTY(BlueprintReadOnly)
	UBossHealthBar* HealthBarWidgetRef;
	
	virtual void CreateHealthWidget() override;

	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState) override;

	virtual float GetAttackAnimReductionTime() const override;

	FText GetBossName() const;

	void ActivateSecondPhase();

	bool IsSecondPhaseActive() const;

	void SetCanTakeDamage(const bool CanTakeDamage);

	bool GetCanTakeDamage() const;

	UBossHealthBar* GetBossWidget() const;

	virtual void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef) override;
	
protected:

	virtual void HandleDeath() override;

	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) override;

private:

	UFUNCTION()
	void CheckSecondPhase(const float CurrentHealth);
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBossHealthBar> HealthBarWidget;

	UPROPERTY(EditAnywhere)
	float SecondPhaseHealthPercent;

	UPROPERTY(EditAnywhere)
	float AttackAnimReductionTime;

	UPROPERTY(EditAnywhere)
	FText BossName;

	UPROPERTY(EditAnywhere)
	float DamageMultiplier;
	
	bool bCanTakeDamage = true;

	bool bSecondPhase = false;
};
