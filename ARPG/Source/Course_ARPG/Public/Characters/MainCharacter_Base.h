
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"

enum EStats : int;
class UARPG_GameInstance;
class UPlayerWidget;
class UAbilityComponent_Base;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetCurrentDamage() override;

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent) override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(float Stamina) override;

	UFUNCTION()
	virtual bool HasEnoughMana(float Mana) override;
	
	UFUNCTION()
	UPlayerWidget* GetPlayerWidget();

	UFUNCTION()
	TArray<UAbilityComponent_Base*>& GetAbilitiesArray();

	UFUNCTION()
	void AddToAbilitiesArray(UAbilityComponent_Base* NewAbility);

	UFUNCTION(BlueprintCallable)
	UARPG_GameInstance* GetGameInstanceRef();

	UFUNCTION()
	void CreateAbilitiesFooter();

	UFUNCTION()
	USkeletalMeshComponent* GetSkeletalMeshComponent();

	UFUNCTION()
	void SetSkeletalMeshComponent();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent_Base* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULevelingComponent* LevelComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TEnumAsByte<EStats>> ArrStats;

	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* PlayerAnim;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();

private:

	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void PlayHurtAnimation();
	
	UFUNCTION()
	void CreateUI();
	
	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* HurtAnimMontage;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidget;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstance;

	//UPROPERTY(EditAnywhere)
	TArray<UAbilityComponent_Base*> ArrAbilities;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;
	
};
