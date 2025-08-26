
#include "Characters/MainCharacter_Warrior.h"

#include "Animations/PlayerAnimInstance.h"
#include "Characters/StatsComponent.h"
#include "Combat/BlockComponent.h"
#include "Combat/CombatComponent_Base.h"
#include "Combat/TraceComponent.h"
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"


AMainCharacter_Warrior::AMainCharacter_Warrior()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_Base>(TEXT("Combat Component"));
	BlockComp = CreateDefaultSubobject<UBlockComponent>(TEXT("Block Component"));
	
	AbilityComp_DamageIncrease = CreateDefaultSubobject<UAbilityComponent_DamageIncrease>(TEXT("Damage Increase"));
	AbilityComp_RangeAttack = CreateDefaultSubobject<UAbilityComponent_RangeAttack>(TEXT("Range Attack"));
	AbilityComp_LifeStealAttack = CreateDefaultSubobject<UAbilityComponent_LifeStealAttack>(TEXT("Life Steal Attack"));
	AbilityComp_GetArmor = CreateDefaultSubobject<UAbilityComponent_GetArmor>(TEXT("Get Armor"));
	
	AddToAbilitiesArray(AbilityComp_DamageIncrease);
	AddToAbilitiesArray(AbilityComp_RangeAttack);
	AddToAbilitiesArray(AbilityComp_LifeStealAttack);
	AddToAbilitiesArray(AbilityComp_GetArmor);
}


void AMainCharacter_Warrior::BeginPlay()
{
	Super::BeginPlay();
	
	
	AbilityComp_DamageIncrease->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_RangeAttack->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_LifeStealAttack->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_GetArmor->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	
	CombatComp->OnAttackPerformedDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	BlockComp->OnBlockDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	
}


bool AMainCharacter_Warrior::CanTakeDamage(AActor* Opponent)
{
	if (PlayerAnimInstance->bIsBlocking)
	{
		return !BlockComp->CanBlock(Opponent);
	}
	return Super::CanTakeDamage(Opponent);
}



