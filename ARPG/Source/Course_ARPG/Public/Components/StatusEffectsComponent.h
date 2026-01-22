
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectsComponent.generated.h"


class UAbilityComponent_Base;
class UNiagaraComponent;
class UNiagaraSystem;
class AEnemyCharacter;


enum EStatusEffects
{
	Slow,
	Burn,
	Poison
};

USTRUCT()
struct FStatusEffectData
{
	GENERATED_BODY()
	EStatusEffects Type;
	UNiagaraComponent* Effect;
	FTimerHandle TimerHandle;
	float SavedSpeed;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatusEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	void SlowDownEnemy(const float SlowDuration, UNiagaraSystem* FrozenEffect);

	void HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, UNiagaraSystem* PoisonEffect, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* Icon);

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void StopEffect(FStatusEffectData& Data) const;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY(EditDefaultsOnly)
	FName SocketName;

	UPROPERTY(EditDefaultsOnly)
	FVector EffectScale;

	UPROPERTY()
	ACharacter* CharacterRef;
	
	bool bIsOverlapping;
	
private:
	
	UFUNCTION()
	void StopFreeze();

	UFUNCTION()
	void Poison();

	UPROPERTY()
	UNiagaraComponent* FrozenEffectRef;

	UPROPERTY()
	UNiagaraComponent* PoisonEffectRef;

	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
	
	float OriginalSpeed;

	FTimerHandle FreezeTimerHandle;
	
	FTimerHandle PoisonTimerHandle;

	float PoisonDuration;

	float PoisonDamage;

	float PoisonRate;

	FStatusEffectData FreezeData;
	
	FStatusEffectData PoisonData;
};
