
#include "Characters/Player/MainCharacter_Mage.h"
#include "Combat/DamageTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_FireStorm.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_FrostBlast.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_HealingAura.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_MagicShield.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"


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
	
	AbilityComp_MagicShield->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FrostBlast->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FireStorm->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_HealingAura->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceMana);
	OnAttackReflectRequestDelegate.AddUObject(AbilityComp_MagicShield, &UAbComp_MagicShield::ReflectAttack);
}


void AMainCharacter_Mage::SpawnParticles(UParticleSystem* ParticleEffect)
{
	if (!ParticleEffect) return;
	const FVector RightHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(RightHandSocketName);
	const FVector LeftHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(LeftHandSocketName);
	
	ParticleComponents.Add(UGameplayStatics::SpawnEmitterAttached(ParticleEffect, GetSkeletalMeshComponent(), RightHandSocketName, RightHandSocketLocation, FRotator::ZeroRotator,
	FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true));
	ParticleComponents.Add(UGameplayStatics::SpawnEmitterAttached(ParticleEffect, GetSkeletalMeshComponent(), LeftHandSocketName, LeftHandSocketLocation, FRotator::ZeroRotator,
	FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true));
}


void AMainCharacter_Mage::HandleDeath()
{
	Super::HandleDeath();
	RemoveParticle();
}


void AMainCharacter_Mage::SpawnProjectile()
{
	CombatComp->SpawnProjectile();
}


void AMainCharacter_Mage::RemoveParticle()
{
	if (ParticleComponents.IsEmpty()) return;
	for (auto& particle : ParticleComponents)
	{
		particle->DestroyComponent();
	}
	ParticleComponents.Empty();
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


TSubclassOf<UDamageType> AMainCharacter_Mage::GetDamageType() const
{
	return UMagicalDamageType::StaticClass();
}


float AMainCharacter_Mage::GetMagicalDamage() const
{
	return StatsComp->GetStatValue(EStats::MagicalStrength) / 2; //half damage for each hand
}


void AMainCharacter_Mage::HandleEffectChange(EEffects NewEffect)
{
	if (CurrentEffect == NewEffect && NewEffect != EEffects::Empty) return;
	RemoveParticle();
	CurrentEffect = NewEffect;
	if (NewEffect == EEffects::Empty)
	{
		SpawnParticles(BaseParticle);
		Cast<UCombatComponent_LongRange>(CombatComp)->RevertBaseProjectileClass();
		return;
	}
	if (!StatusEffectsVisualDataAsset) return;
	if (FStatusEffectData* Data = StatusEffectsVisualDataAsset->StatusEffects.Find(CurrentEffect))
	{
		SpawnParticles(Data->WeaponEffect_P);
		Cast<UCombatComponent_LongRange>(CombatComp)->ChangeProjectileClass(Data->Projectile);
	}
}