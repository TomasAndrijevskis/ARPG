
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Components/StatusEffectHelpers/Data/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"
#include "UI/PlayerWidget.h"


void UPoisonEffectManager::SetVisualData()
{
	if (!StatusEffectsVisualDataAsset) return;
	Effect = StatusEffectsVisualDataAsset->PoisonEffectData.Effect;
	Icon = StatusEffectsVisualDataAsset->PoisonEffectData.Icon;
}


void UPoisonEffectManager::HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef)
{
	PoisonDamage = NewPoisonDamage;
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (Effect && Icon)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				Effect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	//Cast<AMainCharacter_Base>(CharacterRef)->GetPlayerWidget()->CreateStatusIconWithTimer(PoisonDuration, Icon, AbilityCompRef);
	//Cast<AMainCharacter_Base>(CharacterRef)->GetPlayerWidget()->CreateStatusEffectIcon(Icon);
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UPoisonEffectManager::Poison, PoisonRate, true);
}


void UPoisonEffectManager::Poison()
{
	if (PoisonDuration > 0)
	{
		PoisonDuration -= PoisonRate;
		AbilityCompRef->OnAbilityTimerChangedDelegate.Broadcast(PoisonDuration);
		FDamageEvent TargetAttackedEvent{ };
		UE_LOG(LogTemp, Warning, TEXT("PoisonDamage: %f"), PoisonDamage);
		CharacterRef->TakeDamage(PoisonDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		AbilityCompRef->OnAbilityFinishedDelegate.Broadcast();
		StopEffect();
	}
}
