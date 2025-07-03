
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "BossCharacter.generated.h"

class UEnemyProjectileComponent;
class UBossHealthBar;

UCLASS()
class COURSE_ARPG_API ABossCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	ABossCharacter();
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual float GetCurrentDamage() override;

	virtual void Attack() override;

	virtual float GetAnimDuration();

	virtual float GetMeleeRange() override;

	UFUNCTION()
	UBossHealthBar* GetBossHealthBarWidget();
	
	UFUNCTION(BlueprintCallable)
	void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect);
	
	UFUNCTION(BlueprintCallable)
	void CreateBossWidget();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;


protected:

	virtual void BeginPlay() override;

private:

	UFUNCTION()
	void HandlePlayerDeath();

	UFUNCTION()
	void HandleDeath();
	
	UFUNCTION()
	void FinishedDeathAnim();
	
	void GiveRewardXP();

	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> InitialState;

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnim;

	UPROPERTY(EditAnywhere)
	float RewardXP;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UBossHealthBar> BossHealthBarWidget;

	UPROPERTY()
	UBossHealthBar* BossHealthBarWidgetRef;

	UPROPERTY()
	class AAIController* ControllerRef;

	UPROPERTY()
	class UBlackboardComponent* BlackboardComp;
};
