
#include "Characters/Player/MainCharacter_Mage.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraSystem.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_FireStorm.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_FrostBlast.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_HealingAura.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_MagicShield.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_Mage.h"


AMainCharacter_Mage::AMainCharacter_Mage()
{
	AbilityComp_MagicShield = CreateDefaultSubobject<UAbilityComponent_MagicShield>(TEXT("Magic Shield"));
	AbilityComp_FrostBlast = CreateDefaultSubobject<UAbilityComponent_FrostBlast>(TEXT("Frost Blast"));
	AbilityComp_FireStorm = CreateDefaultSubobject<UAbilityComponent_FireStorm>(TEXT("Fire Storm"));
	AbilityComp_HealingAura = CreateDefaultSubobject<UAbilityComponent_HealingAura>(TEXT("Healing Aura"));

	CombatComp = CreateDefaultSubobject<UCombatComponent_Mage>(TEXT("Combat Component"));
	
	AddToAbilitiesArray(AbilityComp_MagicShield);
	AddToAbilitiesArray(AbilityComp_FrostBlast);
	AddToAbilitiesArray(AbilityComp_FireStorm);
	AddToAbilitiesArray(AbilityComp_HealingAura);
}


void AMainCharacter_Mage::BeginPlay()
{
	Super::BeginPlay();
	
	AbilityComp_MagicShield->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FrostBlast->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_FireStorm->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_HealingAura->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceMana);
	
	if (GetSkeletalMeshComponent()) SpawnParticles();
}


void AMainCharacter_Mage::SpawnParticles()
{
	FVector RightHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(RightHandSocketName);
	FVector LeftHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(LeftHandSocketName);
	
	if (ParticleFire)
		ParticleComponentFire = UGameplayStatics::SpawnEmitterAttached(ParticleFire, GetSkeletalMeshComponent(), RightHandSocketName, RightHandSocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
	if (ParticleIce)
		ParticleComponentIce = UGameplayStatics::SpawnEmitterAttached(ParticleIce, GetSkeletalMeshComponent(), LeftHandSocketName, LeftHandSocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
}


void AMainCharacter_Mage::HandleDeath()
{
	Super::HandleDeath();
	RemoveParticle(ParticleComponentFire);
	RemoveParticle(ParticleComponentIce);
}


void AMainCharacter_Mage::RemoveParticle(UParticleSystemComponent*& Particle)
{
	if (!Particle) return;
	Particle->DestroyComponent();
	Particle = nullptr;
}


bool AMainCharacter_Mage::CanTakeDamage(AActor* Opponent) const
{
	if (AbilityComp_MagicShield->IsAbilityActive()) return false;
	return Super::CanTakeDamage(Opponent);	
}