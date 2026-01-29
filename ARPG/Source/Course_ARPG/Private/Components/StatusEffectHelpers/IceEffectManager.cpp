
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


void UIceEffectManager::BeginPlay()
{
	Super::BeginPlay();
	if (!CharacterRef) return;
	OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
}


void UIceEffectManager::SetVisualData()
{
	if (!StatusEffectsVisualDataAsset) return;
	Effect = StatusEffectsVisualDataAsset->IceEffectData.Effect;
	Icon = StatusEffectsVisualDataAsset->IceEffectData.Icon;
}


void UIceEffectManager::SlowDownEnemy(const float SlowDuration)
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (Effect && Icon)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				Effect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		SavedSpeed = OriginalSpeed;
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this,  &UIceEffectManager::StopFreeze, SlowDuration, false);
}


void UIceEffectManager::StopFreeze()
{
	StopEffect();
}


void UIceEffectManager::StopEffect()
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = SavedSpeed;
	Super::StopEffect();
}