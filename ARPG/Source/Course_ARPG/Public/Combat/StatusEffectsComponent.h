
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectsComponent.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;
class AEnemyCharacter_Base;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatusEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	void SlowDownEnemy(float SlowDuration, UNiagaraSystem* FrozenEffect);

	void HandleBurn(float NewBurnDuration, float NewBurnDamage, UNiagaraSystem* BurnEffect, bool bIsOverlapping);

protected:

	virtual void BeginPlay() override;
	
private:

	UFUNCTION()
	void ReturnSpeed();
	
	UFUNCTION()
	void StopBurning();

	UFUNCTION()
	void Burn();

	UPROPERTY()
	UNiagaraComponent* FrozenEffectRef;
	
	UPROPERTY()
	UNiagaraComponent* BurnEffectRef;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY()
	class AEnemyCharacter_Base* EnemyCharacterRef;
	
	UPROPERTY(EditAnywhere)
	FName SocketName;

	float BurnDamage;
	
	float BurnDuration;

	float BurnRate = .2f;
	
	float OriginalSpeed;

	bool bIsOverlapping;

	FTimerHandle FreezeTimerHandle;
	
	FTimerHandle BurnTimerHandle;

};
