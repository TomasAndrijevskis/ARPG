
#include "Characters/MainCharacter_Warrior.h"
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"
#include "UI/PlayerWidget.h"

AMainCharacter_Warrior::AMainCharacter_Warrior()
{
	AbilityComp_DamageIncrease = CreateDefaultSubobject<UAbilityComponent_DamageIncrease>(TEXT("Damage Increase"));
	AbilityComp_RangeAttack = CreateDefaultSubobject<UAbilityComponent_RangeAttack>(TEXT("Range Attack"));
	AbilityComp_LifeStealAttack = CreateDefaultSubobject<UAbilityComponent_LifeStealAttack>(TEXT("Life Steal Attack"));
	AbilityComp_GetArmor = CreateDefaultSubobject<UAbilityComponent_GetArmor>(TEXT("Get Armor"));

	GetAbilitiesArray().Add(AbilityComp_DamageIncrease);
	GetAbilitiesArray().Add(AbilityComp_RangeAttack);
	GetAbilitiesArray().Add(AbilityComp_LifeStealAttack);
	GetAbilitiesArray().Add(AbilityComp_GetArmor);
}


void AMainCharacter_Warrior::BeginPlay()
{
	Super::BeginPlay();
	

	AbilityComp_DamageIncrease->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_RangeAttack->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_LifeStealAttack->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_GetArmor->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
}



