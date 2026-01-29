
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectsComponent.generated.h"


class UStatusEffectsVisualData;
class UNiagaraComponent;
class UAbilityComponent_Base;
class UNiagaraSystem;

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnStatusIconCreateRequest, UTexture2D*, UStatusEffectsComponent*);
DECLARE_MULTICAST_DELEGATE(FOnStatusIconRemoveRequest);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatusEffectsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	FOnStatusIconCreateRequest OnStatusIconCreateRequestDelegate;

	FOnStatusIconRemoveRequest OnStatusIconRemoveRequestDelegate;
	
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void StopEffect();

	virtual void SetVisualData(){};
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY()
	UNiagaraComponent* EffectRef;
	
	UPROPERTY()
	UNiagaraSystem* Effect;
	
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