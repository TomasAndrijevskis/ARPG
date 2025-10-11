
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent_Base.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnAttackPerformedSignature, UCombatComponent_Base, OnAttackPerformedDelegate, float, AttackStaminaCost);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UCombatComponent_Base : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	
	UFUNCTION(BlueprintCallable)//character's class
	virtual void ComboAttack();

	UFUNCTION(BlueprintCallable)//anim instance class
	void HandleResetAttack();

	UPROPERTY()
	FOnAttackPerformedSignature OnAttackPerformedDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bCanAttack = true;
	
protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> AttackAnimations;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY(VisibleAnywhere)
	int ComboCounter = 0;
	
private:

	UPROPERTY(EditAnywhere)
	float AttackStaminaCost = 5.0f;
	
};
