
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionArea.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/SphereComponent.h"
#include "Components/StatusEffectsComponent.h"
#include "Engine/DamageEvents.h"
#include "Particles/ParticleSystemComponent.h"


APoisonExplosionArea::APoisonExplosionArea()
{
	PrimaryActorTick.bCanEverTick = true;

	PoisonArea = CreateDefaultSubobject<USphereComponent>(TEXT("Effect Area"));
	PoisonArea->SetupAttachment(GetRootComponent());
	SpawnEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SpawnEffect"));
	SpawnEffect->SetupAttachment(PoisonArea);

	OnExplosionTriggeredDelegate.AddDynamic(this, &APoisonExplosionArea::CheckPlayerInRange);
}


void APoisonExplosionArea::CheckPlayerInRange()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerRef) return;
	const FVector PlayerLocation = PlayerRef->GetActorLocation();
	const float Radius = PoisonArea->GetScaledSphereRadius();
	const FVector Center = GetActorLocation();
	const float DistBtwEnemyAndCenter = FVector::DistSquared(PlayerLocation, Center);
	FDamageEvent TargetAttackedEvent{ };
	if (DistBtwEnemyAndCenter < Radius * Radius)
	{
		PlayerRef->TakeDamage(ExplosionDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
		if (PlayerRef->FindComponentByClass<UStatusEffectsComponent>())
			PlayerRef->FindComponentByClass<UStatusEffectsComponent>()->HandlePoison(PoisonDuration, PoisonDamage, PoisonEffect, PoisonRate, AbilityCompRef, Icon);
	}
	this->Destroy();
}


void APoisonExplosionArea::SetParams(const float NewExplosionDamage, const float NewPoisonDamage, const float NewPoisonRate, const float NewPoisonDuration, UNiagaraSystem* NewPoisonEffect, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* NewIcon)
{
	ExplosionDamage = NewExplosionDamage;
	PoisonDamage = NewPoisonDamage;
	PoisonRate = NewPoisonRate;
	PoisonDuration = NewPoisonDuration;
	PoisonEffect = NewPoisonEffect;
	AbilityCompRef = NewAbilityCompRef;
	Icon = NewIcon;
}

