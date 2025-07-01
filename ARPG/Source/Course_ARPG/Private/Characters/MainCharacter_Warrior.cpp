
#include "Characters/MainCharacter_Warrior.h"
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"

AMainCharacter_Warrior::AMainCharacter_Warrior()
{
	AbilityComp_DamageIncrease = CreateDefaultSubobject<UAbilityComponent_DamageIncrease>(TEXT("Damage Increase"));
	AbilityComp_RangeAttack = CreateDefaultSubobject<UAbilityComponent_RangeAttack>(TEXT("Range Attack"));
	AbilityComp_LifeStealAttack = CreateDefaultSubobject<UAbilityComponent_LifeStealAttack>(TEXT("Life Steal Attack"));
	AbilityComp_GetArmor = CreateDefaultSubobject<UAbilityComponent_GetArmor>(TEXT("Get Armor"));

	ArrAbilities.Add(AbilityComp_DamageIncrease);
	ArrAbilities.Add(AbilityComp_RangeAttack);
	ArrAbilities.Add(AbilityComp_LifeStealAttack);
	ArrAbilities.Add(AbilityComp_GetArmor);
}


void AMainCharacter_Warrior::BeginPlay()
{
	Super::BeginPlay();
	
	//UE_LOG(LogTemp, Warning, TEXT("Warrior|SetupCharacterAbilities|Num Before: %d"), ArrAbilities.Num());
	
}

