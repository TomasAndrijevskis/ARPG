
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
	bCanAttack = false;
	ComboCounter++;
	int MaxCombo = AttackAnimations.Num();
	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter, -1, (MaxCombo-1));
}


bool UCombatComponent_Base::HasEnoughResource()
{
	if (!CharacterRef->Implements<UMainPlayer>()) return false;
	IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
	if (!IPlayerRef) return false;
	if (IsResourceMana) return IPlayerRef->HasEnoughMana(AttackCost);
	return IPlayerRef->HasEnoughStamina(AttackCost);
}


void UCombatComponent_Base::HandleResetAttack()
{
	bCanAttack = true;
}


void UCombatComponent_Base::SetCanAttack(bool CanAttack){bCanAttack = CanAttack;}