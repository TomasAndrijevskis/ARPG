
#include "Components/CombatComponent_Base.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Interfaces/MainPlayer.h"


void UCombatComponent_Base::BeginPlay()
{
	Super::BeginPlay();
	CharacterRef = GetOwner<ACharacter>();
}


void UCombatComponent_Base::ComboAttack()
{
	if (CharacterRef->Implements<UMainPlayer>())
	{
		IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
		if (IPlayerRef && !IPlayerRef->HasEnoughStamina(AttackStaminaCost)) return;
	}
	if (!bCanAttack) return;
	bCanAttack = false;
	CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	ComboCounter++;
	int MaxCombo = AttackAnimations.Num();
	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter, -1, (MaxCombo-1));
	OnAttackPerformedDelegate.Broadcast(AttackStaminaCost);
}


void UCombatComponent_Base::HandleResetAttack()
{
	bCanAttack = true;
}


