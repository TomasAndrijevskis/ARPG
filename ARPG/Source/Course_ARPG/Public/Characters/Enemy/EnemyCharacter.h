
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/AI/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "EnemyCharacter.generated.h"


class UPoisonEffectManager;
class UIceEffectManager;
class UFireEffectManager;
class UStatusEffectsComponent;
class UTraceComponent;
class UCombatComponent_Enemy;
class UStatsComponent;
class UHealthStatsComponent;
class AMainCharacter_Base;
class USphereComponent;
class UBehaviorTree;
class UNiagaraComponent;
class UNiagaraSystem;
class AAIController;
class UBlackboardComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEnemyDied, AEnemyCharacter*);
UCLASS()
class COURSE_ARPG_API AEnemyCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

public:

	AEnemyCharacter();
	
	UFUNCTION(BlueprintCallable)
	virtual void DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState){};

	virtual float GetPhysicalDamage() override;

	virtual float GetMagicalDamage() const override;

	virtual void Attack() override;

	virtual float GetAnimDuration() const override;

	virtual float GetMeleeRange() const override;

	virtual float GetRangeDistance() const override;

	virtual float GetElementalDamageModificator() const override;
	
	UFUNCTION(BlueprintCallable)
	virtual void CreateHealthWidget(){};

	AAIController* GetAIController() const;

	float GetSightRadius() const;
	
	UBlackboardComponent* GetBlackboardComp() const;

	UFUNCTION()
	TEnumAsByte<EEnemyStates> GetInitialState() const;

	void SetInitialState(const TEnumAsByte<EEnemyStates> NewState);

	void ResetAttack();

	virtual void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef){};

	virtual void RemoveStatusEffectIcon(){}

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
	
	UPROPERTY(EditAnywhere)
	UStatsComponent* StatsComp;
	
	UPROPERTY(EditAnywhere)
	UCombatComponent_Enemy* CombatComp;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UTraceComponent* TraceComp;

	UPROPERTY(EditAnywhere)
	UFireEffectManager* FireStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UIceEffectManager* IceStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UPoisonEffectManager* PoisonStatusEffectManager;
	
	FOnEnemyDied OnEnemyDiedDelegate;

	bool CanApplyDamage();

	void SetCanApplyDamage(bool NewCanApplyDamage);
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();

	void GiveRewardXP();

	UFUNCTION()
	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
private:

	UFUNCTION()
	void SetupAI();
	
	UFUNCTION()
	void HandlePlayerDeath();
	
	UFUNCTION()
	void FinishedDeathAnim();

	void SetResistances();
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> InitialState;

	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnim;

	UPROPERTY(EditAnywhere)
	float RewardXP;

	UPROPERTY(EditAnywhere)
	bool bRandomAttacks;

	UPROPERTY(EditDefaultsOnly)
	USphereComponent* BlockingSphere;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* BehaviorTree;
	
	UPROPERTY()
	AAIController* ControllerRef;
	
	UPROPERTY()
	UBlackboardComponent* BlackboardComp;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY(VisibleAnywhere)
	bool bCanApplyDamage = true;
};
