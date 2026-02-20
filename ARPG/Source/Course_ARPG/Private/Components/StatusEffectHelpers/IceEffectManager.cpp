
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Combat/DamageTypes.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"


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
	if (!VisualEffect || !Icon || IceDamageResistance == 1) return;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
	OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	IceDamage = NewDamage;
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	ApplyDamage(IceDamage);
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this,  &UIceEffectManager::StopEffect, SlowDuration, false);
}


void UIceEffectManager::ApplyDamage(float Damage)
{
	UGameplayStatics::ApplyDamage(CharacterRef, Damage, nullptr, nullptr, UIceDamageType::StaticClass());
}


void UIceEffectManager::ApplyProlongedDamage(){}


void UIceEffectManager::StopEffect()
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed;
	Super::StopEffect();
}


void UIceEffectManager::SetDamageResistance(float NewResistance)
{
	IceDamageResistance = NewResistance;
}