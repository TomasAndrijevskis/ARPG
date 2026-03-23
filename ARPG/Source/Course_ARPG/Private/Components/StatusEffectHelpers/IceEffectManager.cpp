
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


void UIceEffectManager::HandleEffect()
{
	if (!VisualEffectComponent || !Icon || Resistance == 1) return;
	Super::HandleEffect();
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	ApplyDamage();
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this,  &UIceEffectManager::StopEffect, Duration, false);
}


void UIceEffectManager::StopEffect()
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed;
	Super::StopEffect();
}


void UIceEffectManager::SetEffectType(){EffectType = EEffects::Ice;}