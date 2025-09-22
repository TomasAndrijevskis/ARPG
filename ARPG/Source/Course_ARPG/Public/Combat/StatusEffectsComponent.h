
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
	
	
	void SlowDownEnemy(float SlowDuration, UNiagaraSystem* FrozenEffect);

	void HandleBurn(float NewBurnDuration, float NewBurnDamage, UNiagaraSystem* BurnEffect, bool bIsOverlapping, float NewBurnRate);

	void HandlePoison(float NewPoisonDuration, float NewPoisonDamage, UNiagaraSystem* PoisonEffect, float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* Icon);

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	UFUNCTION()
	void StopFreeze();
	
	UFUNCTION()
	void StopEffect(FStatusEffectData& Data);
	
	UFUNCTION()
	void Burn();

	UFUNCTION()
	void Poison();

	UPROPERTY()
	UNiagaraComponent* FrozenEffectRef;
	
	UPROPERTY()
	UNiagaraComponent* BurnEffectRef;

	UPROPERTY()
	UNiagaraComponent* PoisonEffectRef;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY()
	ACharacter* CharacterRef;
	
	UPROPERTY(EditAnywhere)
	FName SocketName;

	UPROPERTY(EditAnywhere)
	FVector EffectScale;

	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
	
	float BurnDamage;
	
	float BurnDuration;

	float BurnRate;
	
	float OriginalSpeed;

	bool bIsOverlapping;

	FTimerHandle FreezeTimerHandle;
	
	FTimerHandle BurnTimerHandle;

	FTimerHandle PoisonTimerHandle;

	float PoisonDuration;

	float PoisonDamage;

	float PoisonRate;

	FStatusEffectData FreezeData;

	FStatusEffectData BurnData;
	
	FStatusEffectData PoisonData;

};
