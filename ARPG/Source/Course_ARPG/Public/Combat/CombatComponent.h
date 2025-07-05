
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnAttackPerformedSignature, UCombatComponent, OnAttackPerformedDelegate, float, AttackStaminaCost);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	
	UCombatComponent(){};
	
	UFUNCTION(BlueprintCallable)
	void ComboAttack();

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();

	void RandomAttack();

	UPROPERTY(BlueprintAssignable)
	FOnAttackPerformedSignature OnAttackPerformedDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bCanAttack = true;

	float AnimDuration;
	
protected:
	
	virtual void BeginPlay() override;

private:

	ACharacter* CharacterRef;

	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> AttackAnimations;

	UPROPERTY(VisibleAnywhere)
	int ComboCounter = 0;

	UPROPERTY(EditAnywhere)
	float AttackStaminaCost = 5.0f;
	
};
