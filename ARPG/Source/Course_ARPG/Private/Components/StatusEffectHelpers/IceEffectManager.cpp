
#include "Components/StatusEffectHelpers/IceEffectManager.h"

#include "NiagaraFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


void UIceEffectManager::BeginPlay()
{
	Super::BeginPlay();
	if (!CharacterRef) return;
	OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
}


void UIceEffectManager::SlowDownEnemy(const float SlowDuration)
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (FrozenEffectRef && !FreezeData.Effect)
	{
		FreezeData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				FrozenEffectRef,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);

		FreezeData.Type = EStatusEffects::Slow;
		FreezeData.TimerHandle = FreezeTimerHandle;
		FreezeData.SavedSpeed = OriginalSpeed;
	}
	GetWorld()->GetTimerManager().SetTimer(FreezeTimerHandle, this,  &UIceEffectManager::StopFreeze, SlowDuration, false);
}


void UIceEffectManager::StopFreeze()
{
	StopEffect(FreezeData);
}


void UIceEffectManager::StopEffect(FStatusEffectData& Data) const
{
	Super::StopEffect(Data);
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = Data.SavedSpeed;
}