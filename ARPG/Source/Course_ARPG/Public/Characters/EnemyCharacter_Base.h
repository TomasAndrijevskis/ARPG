
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "EnemyCharacter_Base.generated.h"

class UEnemyHealthBar;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Base : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	AEnemyCharacter_Base();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect);

	virtual float GetCurrentDamage() override;

	virtual void Attack() override;

	virtual float GetAnimDuration();

	virtual float GetMeleeRange() override;
	
	void SlowDownEnemy(float SlowDuration);

	UFUNCTION()
	void ReturnSpeed();
	
	UFUNCTION(BlueprintCallable)
	virtual void CreateHealthWidget(){};
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent_Enemy* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();
	
private:

	UFUNCTION()
	void HandlePlayerDeath();
	
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

	UPROPERTY()
	class AAIController* ControllerRef;

	UPROPERTY()
	class UBlackboardComponent* BlackboardComp;

	float OriginalSpeed;

	FTimerHandle TimerHandle;
	
};
