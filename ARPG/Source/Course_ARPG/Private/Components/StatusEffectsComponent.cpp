
#include "Components/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/PlayerWidget.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	CharacterRef = Cast<ACharacter>(GetOwner());
	if (CharacterRef)
	{
		SkeletalMeshComp = CharacterRef->GetMesh();
		OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	}
}


void UStatusEffectsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


void UStatusEffectsComponent::SlowDownEnemy(const float SlowDuration, UNiagaraSystem* FrozenEffect)
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;

	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (FrozenEffect && !FreezeData.Effect)
	{
		FreezeData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				FrozenEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);

		FreezeData.Type = EStatusEffects::Slow;
		FreezeData.TimerHandle = FreezeTimerHandle;
		FreezeData.SavedSpeed = OriginalSpeed;
	}
	GetWorld()->GetTimerManager().SetTimer(FreezeTimerHandle, this,  &UStatusEffectsComponent::StopFreeze, SlowDuration, false);
}


void UStatusEffectsComponent::StopFreeze()
{
	StopEffect(FreezeData);
}


void UStatusEffectsComponent::HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, UNiagaraSystem* PoisonEffect, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* Icon)
{
	PoisonDamage = NewPoisonDamage;
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;

	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	
	if (PoisonEffect && !PoisonData.Effect)
	{
		PoisonData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				PoisonEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		PoisonData.Type = EStatusEffects::Poison;
		PoisonData.TimerHandle = PoisonTimerHandle;
	}
	Cast<AMainCharacter_Base>(CharacterRef)->GetPlayerWidget()->CreateStatusIconWithTimer(PoisonDuration, Icon, AbilityCompRef);
	GetWorld()->GetTimerManager().SetTimer(PoisonTimerHandle, this, &UStatusEffectsComponent::Poison, PoisonRate, true);
}


void UStatusEffectsComponent::Poison()
{
	if (PoisonDuration > 0)
	{
		PoisonDuration -= PoisonRate;
		AbilityCompRef->OnAbilityTimerChangedDelegate.Broadcast(PoisonDuration);
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(PoisonDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		AbilityCompRef->OnAbilityFinishedDelegate.Broadcast();
		StopEffect(PoisonData);
	}
}


void UStatusEffectsComponent::StopEffect(FStatusEffectData& Data) const
{
	GetWorld()->GetTimerManager().ClearTimer(Data.TimerHandle);
	if (Data.Effect)
	{
		Data.Effect->DestroyInstance();
		Data.Effect = nullptr;
	}
	switch (Data.Type)
	{
		case EStatusEffects::Slow:
			CharacterRef->GetCharacterMovement()->MaxWalkSpeed = Data.SavedSpeed;
			break;
		case EStatusEffects::Burn:
			break;
		case EStatusEffects::Poison:
			break;
	}
}