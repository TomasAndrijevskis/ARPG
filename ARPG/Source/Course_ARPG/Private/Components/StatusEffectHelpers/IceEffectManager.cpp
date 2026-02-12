
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


void UIceEffectManager::BeginPlay()
{
	Super::BeginPlay();
	if (!CharacterRef) return;
	OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	SetVisualData(EEffects::Ice);
}


void UIceEffectManager::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
}


void UIceEffectManager::HandleFreeze(const float SlowDuration, const float NewDamage)
{
	if (FreezeDamageResistance == 1) return;
	FreezeDamage = GetFinalDamage(NewDamage);
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (VisualEffect && Icon)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	FDamageEvent TargetAttackedEvent{ };
	CharacterRef->TakeDamage(FreezeDamage, TargetAttackedEvent, nullptr, nullptr);
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this,  &UIceEffectManager::StopFreeze, SlowDuration, false);
}


void UIceEffectManager::StopFreeze()
{
	StopEffect();
}


void UIceEffectManager::StopEffect()
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed;
	Super::StopEffect();
}


float UIceEffectManager::GetFinalDamage(const float Damage)
{
	return Damage - (Damage * FreezeDamageResistance);
}


void UIceEffectManager::SetDamageResistance(float NewResistance)
{
	FreezeDamageResistance = NewResistance;
}
