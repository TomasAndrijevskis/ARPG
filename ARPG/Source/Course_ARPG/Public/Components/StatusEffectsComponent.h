
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/EEffects.h"
#include "StatusEffectsComponent.generated.h"


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
	
	FOnStatusIconCreateRequest OnStatusIconCreateRequestDelegate;

	FOnStatusIconRemoveRequest OnStatusIconRemoveRequestDelegate;

	FOnResistanceChanged OnResistanceChangedDelegate;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void StopEffect();

	virtual void SetVisualData(EEffects StatusEffect){};

	virtual float GetFinalDamage(const float Damage) {return 0.f;}

	virtual void SetDamageResistance(float NewResistance){};
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY()
	UNiagaraComponent* EffectRef;
	
	UPROPERTY()
	UNiagaraSystem* VisualEffect;
	
	UPROPERTY()
	UTexture2D* Icon;

	UPROPERTY(EditDefaultsOnly)
	FName SocketName;

	UPROPERTY(EditDefaultsOnly)
	FVector EffectScale;
	
	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY()
	ACharacter* CharacterRef;
	
	bool bIsOverlapping;

	FTimerHandle EffectTimerHandle;

private:

	void HandleOwner();
};