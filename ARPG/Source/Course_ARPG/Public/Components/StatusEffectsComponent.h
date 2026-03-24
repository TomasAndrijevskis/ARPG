
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/EEffects.h"
#include "StatusEffectsComponent.generated.h"


class UDamageTypeBase;
class UStatusEffectsVisualData;
class UNiagaraComponent;
class UAbilityComponent_Base;
class UNiagaraSystem;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnStatusIconCreateRequest, UTexture2D*, UStatusEffectsComponent*);
DECLARE_MULTICAST_DELEGATE(FOnStatusIconRemoveRequest);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnResistanceChanged, float);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatusEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void SetDamageResistance(float NewResistance);

	void SetParams(float NewDamage, float NewDuration, float NewDamageRate, bool NewIsAffected);

	virtual void HandleEffect(bool bIsProlongedDamage);
	
	FOnStatusIconCreateRequest OnStatusIconCreateRequestDelegate;

	FOnStatusIconRemoveRequest OnStatusIconRemoveRequestDelegate;

	FOnResistanceChanged OnResistanceChangedDelegate;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void StopEffect();

	void SetVisualData();

	virtual void ApplyDamage();
	
	virtual void ApplyProlongedDamage();

	virtual void SetEffectType(){};
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY()
	UNiagaraComponent* VisualEffectRef;
	
	UPROPERTY()
	UNiagaraSystem* VisualEffectComponent;
	
	UPROPERTY()
	UTexture2D* Icon;

	UPROPERTY()
	TSubclassOf<UDamageTypeBase> DamageType;

	UPROPERTY(EditDefaultsOnly)
	FName SocketName;

	UPROPERTY(EditDefaultsOnly)
	FVector VisualEffectScale;
	
	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY(VisibleAnywhere)
	EEffects EffectType;

	UPROPERTY(VisibleAnywhere)
	float Damage;

	UPROPERTY(VisibleAnywhere)
	float DamageRate;

	UPROPERTY(VisibleAnywhere)
	float Duration;

	UPROPERTY(VisibleAnywhere)
	float Resistance;

	UPROPERTY(visibleAnywhere)
	bool bIsStillAffected = false;
	
	FTimerHandle EffectTimerHandle;

private:

	void HandleOwner();
};