

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "BossCharacter.generated.h"

UCLASS()
class COURSE_ARPG_API ABossCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	ABossCharacter();

	virtual void Tick(float DeltaTime) override;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UFUNCTION(BlueprintCallable)
	void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect);

	virtual float GetCurrentDamage() override;

	virtual void Attack() override;

	virtual float GetAnimDuration();

	virtual float GetMeleeRange() override;

	UFUNCTION()
	void HandlePlayerDeath();

	UFUNCTION(BlueprintCallable)
	void HandleDeath();

	UFUNCTION()
	void FinishedDeathAnim();

	void GiveRewardXP();
	
protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> InitialState;

	class UBlackboardComponent* BlackboardComp;

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnim;

	UPROPERTY(EditAnywhere)
	float RewardXP;

	class AAIController* ControllerRef;
	
};
