
#include "Characters/MainCharacter_Mage.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Mage.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"

AMainCharacter_Mage::AMainCharacter_Mage()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Mage>(TEXT("Combat Component"));
}


void AMainCharacter_Mage::BeginPlay()
{
	Super::BeginPlay();

	CombatComp->OnAttackPerformedDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceMana);
	APlayerController* PC = Cast<APlayerController>(GetOwner());
	if (PC)
	{
		APawn* Pawn = PC->GetPawn();
		if (ACharacter* Character = Cast<ACharacter>(Pawn))
		{
			SkeletalMeshComp = Character->GetMesh();
		}
	}

	if (SkeletalMeshComp)
	{
		SpawnParticles();
	}
}


void AMainCharacter_Mage::SpawnParticles()
{
	FVector RightHandSocketLocation = SkeletalMeshComp->GetSocketLocation(RightHandSocketName);
	FVector LeftHandSocketLocation = SkeletalMeshComp->GetSocketLocation(LeftHandSocketName);
	
	if (ParticleFire)
	{
		ParticleComponentFire = UGameplayStatics::SpawnEmitterAttached(ParticleFire, SkeletalMeshComp, RightHandSocketName, RightHandSocketLocation, FRotator::ZeroRotator,
			FVector3d(.4f, .4f, .4f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
	}
	
	if (NiagaraIceFX)
	{
		NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(NiagaraIceFX, SkeletalMeshComp, LeftHandSocketName,LeftHandSocketLocation,
			FRotator::ZeroRotator, FVector(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,
			false, ENCPoolMethod::None,true,true);
	}
}


void AMainCharacter_Mage::HandleDeath()
{
	Super::HandleDeath();

	if (ParticleComponentFire)
	{
		ParticleComponentFire->DestroyComponent();
	}
	
	if (NiagaraComponent)
	{
		NiagaraComponent->DestroyComponent();
	}
}