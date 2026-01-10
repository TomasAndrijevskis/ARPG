
#pragma once

#include "CoreMinimal.h"
#include "Characters/Data/EStats.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"


class UAbilityComponent_Player;
class UARPG_GameInstance;
class UPlayerWidget;
class USkeletalMeshComponent;
class UStatsComponent;
class ULockonComponent;
class UBlockComponent;
class UPlayerActionsComponent;
class UCombatComponent_Base;
class ULevelingComponent;
class UStatusEffectsComponent;
class UPlayerAnimInstance;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBonfireInteractionFinishedSignature);

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetCurrentDamage() const override;

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent) const override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(const float Stamina) const override;

	UFUNCTION()
	virtual bool HasEnoughMana(const float Mana) const override;
	
	UFUNCTION()
	UPlayerWidget* GetPlayerWidget() const;

	UFUNCTION()
	TArray<UAbilityComponent_Player*>& GetAbilitiesArray();

	UFUNCTION()
	void AddToAbilitiesArray(UAbilityComponent_Player* NewAbility);

	UFUNCTION()
	UARPG_GameInstance* GetGameInstanceRef() const;

	UFUNCTION()
	void CreateAbilitiesFooterPanel();

	UFUNCTION()
	USkeletalMeshComponent* GetSkeletalMeshComponent() const;

	UFUNCTION()
	void SetSkeletalMeshComponent();

	void SetCanPlayHurtAnimation(const bool bCanPlayAnim);

	bool CanPlayHurtAnimation() const;

	void InterruptHurtAnimation() const;

	void ResetStats();

	virtual void ResetAbilities();

	void IncreaseUsedAbilityPoints(const int UsedPoints);

	void SetUsedAbilityPoints(const int NewUsedPoints);

	int GetUsedAbilityPoints() const;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UCombatComponent_Base* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULevelingComponent* LevelComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStatusEffectsComponent* StatusEffectsComp;
	
	TArray<TEnumAsByte<EStats>> GetStatsArray() const;

	UPROPERTY(BlueprintReadOnly)
	UPlayerAnimInstance* PlayerAnimInstance;

	FOnBonfireInteractionFinishedSignature FOnBonfireInteractionFinishedDelegate;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TEnumAsByte<EStats>> ArrStats;
	
private:

	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void PlayHurtAnimation();
	
	UFUNCTION()
	void CreatePlayerWidget();
	
	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* HurtAnimMontage;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidgetClass;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstance;
	
	TArray<UAbilityComponent_Player*> ArrAbilities;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	bool bCanPlayHurtAnim = true;

	bool bIsInFight = false;
	
	int UsedAbilityPoints = 0;
};
