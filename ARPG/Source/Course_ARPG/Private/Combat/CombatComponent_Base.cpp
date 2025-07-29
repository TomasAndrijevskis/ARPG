
#include "Combat/CombatComponent_Base.h"
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
	if (CharacterRef->Implements<UMainPlayer>()) //проверяет есть ли интерфейс
	{
		//UE_LOG(LogTemp, Error, TEXT("CombatComp|Implements"));
		IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
		if (IPlayerRef && !IPlayerRef->HasEnoughStamina(AttackStaminaCost))
		{
			//UE_LOG(LogTemp, Error, TEXT("CombatComp|Has stamina"));
			return;
		}
	}
	if (!bCanAttack)
	{
		//UE_LOG(LogTemp, Error, TEXT("CombatComp|Cant Attack"));
		return;
	}
	//UE_LOG(LogTemp, Error, TEXT("CombatComp|Can Attack"));
	bCanAttack = false;
	
	
	CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	ComboCounter++;

	int MaxCombo = AttackAnimations.Num();

	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter, -1, (MaxCombo-1));

	OnAttackPerformedDelegate.Broadcast(AttackStaminaCost);
}


void UCombatComponent_Base::HandleResetAttack()
{
	//UE_LOG(LogTemp, Error, TEXT("CombatComp|Attack reset"));
	bCanAttack = true;
}


