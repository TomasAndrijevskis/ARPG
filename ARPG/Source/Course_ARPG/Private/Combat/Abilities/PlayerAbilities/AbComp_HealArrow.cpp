
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAbComp_HealArrow::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_HealArrow::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		HandlePlayerActions(false);
		OnAbilityStartedDelegate.Broadcast();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_HealArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	PlayerRef->PlayAnimMontage(ShootMontage);
	CompleteAbility();
}


void UAbComp_HealArrow::CompleteAbility()
{
	SetAbilityActive(false);
	HandlePlayerActions(true);
	StartCooldown();
}

void UAbComp_HealArrow::CreateIcon()
{
	//PlayerRef->CreateAbilityIconWithAmount();
}
