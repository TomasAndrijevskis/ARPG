
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraComponentPoolMethodEnum.h"
#include "NiagaraFunctionLibrary.h"
#include "Combat/DamageTypes.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UFireEffectManager::BeginPlay()
{
	Super::BeginPlay();
	SetVisualData(EEffects::Fire);
}


void UFireEffectManager::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
}


void UFireEffectManager::HandleBurn(const float NewFireDuration, const float NewFireDamage, const bool bNewIsOverlapping, const float NewFireRate)
{
	bIsOverlapping = bNewIsOverlapping;
	if (!VisualEffect || !Icon || !bIsOverlapping || FireDamageResistance == 1) return;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator, EffectScale,
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
	OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	FireDamage = NewFireDamage;
	FireDuration = NewFireDuration;
	FireRate = NewFireRate;
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UFireEffectManager::ApplyProlongedDamage, FireRate, true);
}


void UFireEffectManager::ApplyDamage(float Damage)
{
	UGameplayStatics::ApplyDamage(CharacterRef, Damage, nullptr, nullptr, UFireDamageType::StaticClass());
}


void UFireEffectManager::ApplyProlongedDamage()
{
	if (FireDuration > 0)
	{
		if (!bIsOverlapping) FireDuration -= FireRate;
		ApplyDamage(FireDamage);
	}
	else StopEffect();
}


void UFireEffectManager::SetDamageResistance(float NewResistance)
{
	FireDamageResistance = NewResistance;
}