
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"


void UIceEffectManager::BeginPlay()
{
	Super::BeginPlay();
	if (!CharacterRef) return;
	OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
}


void UIceEffectManager::HandleEffect(bool bIsProlongedDamage)
{
	Super::HandleEffect(bIsProlongedDamage);
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
}


void UIceEffectManager::StopEffect()
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed;
	Super::StopEffect();
}


void UIceEffectManager::SetEffectType(){EffectType = EEffects::Ice;}