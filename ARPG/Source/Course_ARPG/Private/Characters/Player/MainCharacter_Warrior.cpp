
#include "Characters/Player/MainCharacter_Warrior.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Animations/PlayerAnimInstance.h"
#include "Combat/DamageTypes.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_DamageIncrease.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_Invincibility.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_LifeStealAttack.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_RangeAttack.h"
#include "Components/BlockComponent.h"
#include "Components/CombatComponent_CloseRange.h"
#include "Components/StatsComponent.h"
#include "Components/TraceComponent.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"


AMainCharacter_Warrior::AMainCharacter_Warrior()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_CloseRange>(TEXT("Combat Component"));
	BlockComp = CreateDefaultSubobject<UBlockComponent>(TEXT("Block Component"));
	
	AbilityComp_DamageIncrease = CreateDefaultSubobject<UAbComp_DamageIncrease>(TEXT("Damage Increase"));
	AbilityComp_RangeAttack = CreateDefaultSubobject<UAbComp_RangeAttack>(TEXT("Range Attack"));
	AbilityComp_LifeStealAttack = CreateDefaultSubobject<UAbComp_LifeStealAttack>(TEXT("Life Steal Attack"));
	AbilityComp_Invincibility = CreateDefaultSubobject<UAbComp_Invincibility>(TEXT("Invincibility"));
	
	AddToAbilitiesArray(AbilityComp_DamageIncrease);
	AddToAbilitiesArray(AbilityComp_RangeAttack);
	AddToAbilitiesArray(AbilityComp_LifeStealAttack);
	AddToAbilitiesArray(AbilityComp_Invincibility);
}


void AMainCharacter_Warrior::BeginPlay()
{
	Super::BeginPlay();
	AbilityComp_DamageIncrease->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_RangeAttack->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_LifeStealAttack->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_Invincibility->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
	BlockComp->OnBlockDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
	TraceComp->OnHitDelegate.AddUObject(AbilityComp_LifeStealAttack, &UAbComp_LifeStealAttack::HandleLifeStealOnHit);
}


bool AMainCharacter_Warrior::CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const
{
	if (PlayerAnimInstance->bIsBlocking) return !BlockComp->CanBlock(Opponent);
	return Super::CanTakeDamage(Opponent, Damage, DamageType);
}


float AMainCharacter_Warrior::GetDamageMultiplier()
{
	if (AbilityComp_DamageIncrease->IsAbilityActive()) return AbilityComp_DamageIncrease->GetEnhancedDamageMultiplier();
	return 1.f;
}


void AMainCharacter_Warrior::SetArmor(const float Armor)
{
	StatsComp->SetStatValue(EStats::Armor, Armor);
	StatsComp->SetStatValue(EStats::MaxArmor, Armor);
}


TSubclassOf<UDamageType> AMainCharacter_Warrior::GetDamageType() const
{
	return UPhysicalDamageType::StaticClass();
}


TSubclassOf<UDamageType> AMainCharacter_Warrior::GetEnchantmentDamageType() const
{
	switch (CurrentEffect)
	{
		case EEffects::Fire:
			return UFireDamageType::StaticClass();
		case EEffects::Ice:
			return UIceDamageType::StaticClass();
		case EEffects::Poison:
			return UPoisonDamageType::StaticClass();
		case EEffects::Empty:
			return nullptr;
		default:
			return nullptr;
	}
}


void AMainCharacter_Warrior::RemoveParticle()
{
	if (!WeaponEffectComp) return;
	WeaponEffectComp -> DestroyComponent();
	WeaponEffectComp = nullptr;
}


void AMainCharacter_Warrior::SpawnParticle()
{
	const FVector SocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(SocketName);
	const FRotator SocketRotation = GetSkeletalMeshComponent()->GetSocketRotation(SocketName);
	WeaponEffectComp = UNiagaraFunctionLibrary::SpawnSystemAttached(
				WeaponEffect, GetSkeletalMeshComponent(), SocketName,SocketLocation, SocketRotation, FVector(1, 1,1),
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
}


void AMainCharacter_Warrior::HandleEffectChange(EEffects NewEffect)
{
	if (CurrentEffect == NewEffect) return;
	RemoveParticle();
	CurrentEffect = NewEffect;
	if (NewEffect == EEffects::Empty) return;
	if (!StatusEffectsVisualDataAsset) return;
	if (const FStatusEffectData* Data = StatusEffectsVisualDataAsset->StatusEffects.Find(CurrentEffect)) WeaponEffect = Data->WeaponEffect_N;
	SpawnParticle();
}


bool AMainCharacter_Warrior::IsWeaponEnchanted() const
{
	if (CurrentEffect == EEffects::Empty) return false;
	return true;
}


float AMainCharacter_Warrior::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(PhysicalStrength) * GetDamageMultiplier();
}