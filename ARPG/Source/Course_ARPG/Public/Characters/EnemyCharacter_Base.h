
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/AI/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "EnemyCharacter_Base.generated.h"

class UBehaviorTree;
class UEnemyHealthBar;
class UNiagaraComponent;
class UNiagaraSystem;
class AAIController;
class UBlackboardComponent;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter_Base : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	AEnemyCharacter_Base();
	
	UFUNCTION(BlueprintCallable)
	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState){};

	virtual float GetCurrentDamage() override;

	virtual void Attack() override;

	virtual float GetAnimDuration();

	virtual float GetMeleeRange() override;
	
	UFUNCTION(BlueprintCallable)
	virtual void CreateHealthWidget(){};

	AAIController* GetAIController();
	
	UPROPERTY(EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(EditAnywhere)
	class UCombatComponent_Enemy* CombatComp;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(EditAnywhere)
	class UStatusEffectsComponent* StatusEffectsComp;

	float GetSightRadius();
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();

	void GiveRewardXP();
	
	UPROPERTY()
	UBlackboardComponent* BlackboardComp;

	UFUNCTION()
	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
private:

	UFUNCTION()
	void SetupAI();
	
	UFUNCTION()
	void HandlePlayerDeath();
	
	UFUNCTION()
	void FinishedDeathAnim();
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> InitialState;

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnim;

	UPROPERTY(EditAnywhere)
	float RewardXP;

	UPROPERTY(EditAnywhere)
	bool bRandomAttacks;
	
	UPROPERTY()
	AAIController* ControllerRef;
	
	UPROPERTY(EditAnywhere)
	UBehaviorTree* BehaviorTree;
	
};
