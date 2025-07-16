
#include "Characters/MainCharacter_Mage.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Mage.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraSystem.h"
#include "Combat/Abilities/AbilityComponent_FireStorm.h"
#include "Combat/Abilities/AbilityComponent_FrostBlast.h"
#include "Combat/Abilities/AbilityComponent_MagicShield.h"


AMainCharacter_Mage::AMainCharacter_Mage()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Mage>(TEXT("Combat Component"));

	AbilityComp_MagicShield = CreateDefaultSubobject<UAbilityComponent_MagicShield>(TEXT("Magic Shield"));
	AbilityComp_FrostBlast = CreateDefaultSubobject<UAbilityComponent_FrostBlast>(TEXT("Frost Blast"));
	AbilityComp_FireStorm = CreateDefaultSubobject<UAbilityComponent_FireStorm>(TEXT("Fire Storm"));
	
	AddToAbilitiesArray(AbilityComp_MagicShield);
	AddToAbilitiesArray(AbilityComp_FrostBlast);
	AddToAbilitiesArray(AbilityComp_FireStorm);
}


void AMainCharacter_Mage::BeginPlay()
{
	Super::BeginPlay();

	
	AbilityComp_MagicShield->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_FrostBlast->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);
	AbilityComp_FireStorm->OnAbilityUnlockedDelegate.AddDynamic(this, &AMainCharacter_Base::CreateAbilitiesFooter);

	CombatComp->OnAttackPerformedDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceMana);
	
	if (GetSkeletalMeshComponent())
	{
		SpawnParticles();
	}
}


void AMainCharacter_Mage::SpawnParticles()
{
	FVector RightHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(RightHandSocketName);
	FVector LeftHandSocketLocation = GetSkeletalMeshComponent()->GetSocketLocation(LeftHandSocketName);
	
	if (ParticleFire)
	{
		UE_LOG(LogTemp, Error, TEXT("SpawnParticles: Fire"));
		ParticleComponentFire = UGameplayStatics::SpawnEmitterAttached(ParticleFire, GetSkeletalMeshComponent(), RightHandSocketName, RightHandSocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
	}
	
	if (ParticleIce)
	{
		UE_LOG(LogTemp, Error, TEXT("SpawnParticles: Ice"));
		ParticleComponentIce = UGameplayStatics::SpawnEmitterAttached(ParticleIce, GetSkeletalMeshComponent(), LeftHandSocketName, LeftHandSocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
	}
}


void AMainCharacter_Mage::HandleDeath()
{
	Super::HandleDeath();

	if (ParticleComponentFire)
	{
		ParticleComponentFire->DestroyComponent();
		ParticleComponentFire = nullptr;
	}
	
	if (ParticleComponentIce)
	{
		ParticleComponentIce->DestroyComponent();
		ParticleComponentIce = nullptr;
	}
}