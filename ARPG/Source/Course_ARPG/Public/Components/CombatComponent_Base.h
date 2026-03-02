
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent_Base.generated.h"


DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttackPerformed, float);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UCombatComponent_Base : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	
	UFUNCTION(BlueprintCallable)//character's class
	virtual void ComboAttack();

	UFUNCTION(BlueprintCallable)//anim instance class
	void HandleResetAttack();

	void SetCanAttack(bool CanAttack);
	
	FOnAttackPerformed OnAttackPerformedDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bCanAttack = true;
	
protected:
	
	virtual void BeginPlay() override;

	bool HasEnoughResource();
	
	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> AttackAnimations;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY(VisibleAnywhere)
	int ComboCounter = 0;
	
	UPROPERTY(EditAnywhere)
	float AttackCost = 5.0f;

	UPROPERTY(EditAnywhere)
	bool IsResourceMana;
};