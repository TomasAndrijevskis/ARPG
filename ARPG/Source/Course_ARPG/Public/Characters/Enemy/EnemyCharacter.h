
#pragma once

#include "CoreMinimal.h"
#include "Characters/ARPG_Character_Base.h"
#include "Interfaces/Enemy.h"
#include "Data/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "EnemyCharacter.generated.h"


class UEnemyHealthBar;
class UEnemyCharacterConfiguration;
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
class COURSE_ARPG_API AEnemyCharacter : public AARPG_Character_Base, public IEnemy, public IFighter
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
	EEnemyStates GetInitialState() const;

	void SetInitialState(const EEnemyStates NewState);

	virtual void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef){};

	virtual void RemoveStatusEffectIcon(){}

	virtual void ChangeHealthBarColor(bool IsMarked){};
	
	virtual TSubclassOf<UDamageTypeBase> GetDamageType() const override;
	
	bool CanApplyDamage() const;

	void SetCanApplyDamage(bool NewCanApplyDamage);

	float GetResistanceStatValue(const UDamageType* DamageType);
	
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
	
protected:

	virtual void BeginPlay() override;

	virtual void LoadConfigData() override;
	
	UFUNCTION()
	virtual void HandleDeath();

	void GiveRewardXP();

	UFUNCTION()
	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(EditAnywhere)
	TSubclassOf<UEnemyHealthBar> HealthBarWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	UEnemyCharacterConfiguration* CharacterData;
	
private:

	UFUNCTION()
	void SetupAI();
	
	UFUNCTION()
	void HandlePlayerDeath();
	
	UFUNCTION()
	void FinishedDeathAnim();

	void SetResistances();
	
	UPROPERTY(VisibleAnywhere)
	EEnemyStates InitialState;
	
	UPROPERTY(VisibleAnywhere)
	float RewardXP;

	UPROPERTY(VisibleAnywhere)
	bool bRandomAttacks;

	UPROPERTY(VisibleAnywhere)
	TEnumAsByte<ECollisionChannel> CollisionChannel;

	UPROPERTY(VisibleAnywhere)
	UBehaviorTree* BehaviorTree;
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* BlockingSphere;
	
	UPROPERTY()
	AAIController* ControllerRef;
	
	UPROPERTY()
	UBlackboardComponent* BlackboardComp;
	
	UPROPERTY(VisibleAnywhere)
	bool bCanApplyDamage = true;
};
