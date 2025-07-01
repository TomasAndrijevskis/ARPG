
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

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetCurrentDamage() override;

	UFUNCTION()
	virtual bool HasEnoughStamina(float Stamina) override;

	UFUNCTION()
	virtual bool HasEnoughMana(float Mana) override;

	UFUNCTION(BlueprintCallable)
	void HandleDeath();

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent) override;

	UFUNCTION(BlueprintCallable)
	void PlayHurtAnimation();

	void CreateUI();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULevelingComponent* LevelComp;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<UAbilityComponent_Base*> ArrAbilities;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TEnumAsByte<EStats>> ArrStats;
	
	UPROPERTY(BlueprintReadOnly)
	UPlayerWidget* PlayerWidgetRef;

	UPROPERTY(BlueprintReadOnly)
	UARPG_GameInstance* GameInstance;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void CreateAbilitiesFooter();
	
	
	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* PlayerAnim;
	
	class USkeletalMeshComponent* SkeletalComp;


private:
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* HurtAnimMontage;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidget;

};
