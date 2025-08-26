
#include "Combat/PoisonExplosionArea.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/StatusEffectsComponent.h"
#include "Components/SphereComponent.h"
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
	if (!PlayerRef)
	{
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("Player found"));

	FVector PlayerLocation = PlayerRef->GetActorLocation();
	float Radius = PoisonArea->GetScaledSphereRadius();
	FVector Center = GetActorLocation();
	float DistBtwEnemyAndCenter = FVector::DistSquared(PlayerLocation, Center);

	FDamageEvent TargetAttackedEvent{ };
	if (DistBtwEnemyAndCenter < Radius * Radius)
	{
		PlayerRef->TakeDamage(ExplosionDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
		if (PlayerRef->FindComponentByClass<UStatusEffectsComponent>())
		{
			PlayerRef->FindComponentByClass<UStatusEffectsComponent>()->HandlePoison(PoisonDuration, PoisonDamage, PoisonEffect, PoisonRate);
		}
	}
	this->Destroy();
}


void APoisonExplosionArea::SetParams(float NewExplosionDamage, float NewPoisonDamage, float NewPoisonRate, float NewPoisonDuration, UNiagaraSystem* NewPoisonEffect)
{
	ExplosionDamage = NewExplosionDamage;
	PoisonDamage = NewPoisonDamage;
	PoisonRate = NewPoisonRate;
	PoisonDuration = NewPoisonDuration;
	PoisonEffect = NewPoisonEffect;
}

