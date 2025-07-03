
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "EnemyCharacter.generated.h"

class UEnemyHealthBar;

UCLASS()
class COURSE_ARPG_API AEnemyCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	AEnemyCharacter();

	virtual void Tick(float DeltaTime) override;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

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
	
	UFUNCTION(BlueprintCallable)
	void CreateHealthWidget();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UPROPERTY(BlueprintReadOnly)
	UEnemyHealthBar* EnemyHealthBarWidgetRef;
	
	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
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

	UPROPERTY(EditAnywhere)
	TSubclassOf<UEnemyHealthBar> EnemyHealthBarWidget;

	
};
