
#include "Characters/Player/MainCharacter_Mage.h"
#include "Animations/Player/AnimInstance_Mage.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_FireStorm.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_FrostBlast.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_HealingAura.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_MagicShield.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"


AMainCharacter_Mage::AMainCharacter_Mage()
{
	AbilityComp_MagicShield = CreateDefaultSubobject<UAbComp_MagicShield>(TEXT("Magic Shield"));
	AbilityComp_FrostBlast = CreateDefaultSubobject<UAbComp_FrostBlast>(TEXT("Frost Blast"));
	AbilityComp_FireStorm = CreateDefaultSubobject<UAbComp_FireStorm>(TEXT("Fire Storm"));
	AbilityComp_HealingAura = CreateDefaultSubobject<UAbComp_HealingAura>(TEXT("Healing Aura"));

	CombatComp = CreateDefaultSubobject<UCombatComponent_LongRange>(TEXT("Combat Component"));
	
	AddToAbilitiesArray(AbilityComp_MagicShield);
	AddToAbilitiesArray(AbilityComp_FrostBlast);
	AddToAbilitiesArray(AbilityComp_FireStorm);
	AddToAbilitiesArray(AbilityComp_HealingAura);
}


void AMainCharacter_Mage::BeginPlay()
{
	Super::BeginPlay();
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceMana);
	OnAttackReflectRequestDelegate.AddUObject(AbilityComp_MagicShield, &UAbComp_MagicShield::ReflectAttack);
}


void AMainCharacter_Mage::BindAbilityDelegates()
{
	/*AbilityComp_MagicShield->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FrostBlast->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FireStorm->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_HealingAura->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
*/
	Cast<UAnimInstance_Mage>(PlayerAnimInstance)->OnFrostBlastSummoned.AddUObject(AbilityComp_FrostBlast, &UAbComp_FrostBlast::SpawnFrostBlast);
	Cast<UAnimInstance_Mage>(PlayerAnimInstance)->OnFireStormSummoned.AddUObject(AbilityComp_FireStorm, &UAbComp_FireStorm::SpawnFireStorm);
	Cast<UAnimInstance_Mage>(PlayerAnimInstance)->OnHealingAuraSummoned.AddUObject(AbilityComp_HealingAura, &UAbComp_HealingAura::SpawnHealingAura);
	Cast<UAnimInstance_Mage>(PlayerAnimInstance)->OnMagicShieldSummoned.AddUObject(AbilityComp_MagicShield, &UAbComp_MagicShield::SpawnShield);
}


bool AMainCharacter_Mage::CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const
{
	if (AbilityComp_MagicShield->IsAbilityActive())
	{
		OnAttackReflectRequestDelegate.Broadcast(Opponent, Damage, DamageType);
		return false;
	}
	return Super::CanTakeDamage(Opponent, Damage, DamageType);	
}


float AMainCharacter_Mage::GetMagicalDamage() const
{
	return StatsComp->GetStatValue(EStats::MagicalStrength) / 2; //half damage for each hand
}
