
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/DamageTypes.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Kismet/GameplayStatics.h"


void UPoisonEffectManager::BeginPlay()
{
	Super::BeginPlay();
	SetVisualData(EEffects::Poison);
}


void UPoisonEffectManager::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
}


void UPoisonEffectManager::HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef)
{
	if (!VisualEffect || !Icon || PoisonDamageResistance == 1) return;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
	OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	PoisonDamage = NewPoisonDamage;
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UPoisonEffectManager::ApplyProlongedDamage, PoisonRate, true);
}


void UPoisonEffectManager::ApplyDamage(float Damage)
{
	UGameplayStatics::ApplyDamage(CharacterRef, Damage, nullptr, nullptr, UPoisonDamageType::StaticClass());
}


void UPoisonEffectManager::ApplyProlongedDamage()
{
	if (PoisonDuration > 0)
	{
		PoisonDuration -= PoisonRate;
		AbilityCompRef->OnAbilityTimerChangedDelegate.Broadcast(PoisonDuration);
		ApplyDamage(PoisonDamage);
	}
	else
	{
		AbilityCompRef->OnAbilityFinishedDelegate.Broadcast();
		StopEffect();
	}
}


void UPoisonEffectManager::SetDamageResistance(float NewResistance)
{
	PoisonDamageResistance = NewResistance;
}