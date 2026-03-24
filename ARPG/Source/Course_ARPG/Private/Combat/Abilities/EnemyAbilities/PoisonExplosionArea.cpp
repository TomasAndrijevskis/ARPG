
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionArea.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/SphereComponent.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


APoisonExplosionArea::APoisonExplosionArea()
{
	PrimaryActorTick.bCanEverTick = true;

	PoisonArea = CreateDefaultSubobject<USphereComponent>(TEXT("Effect Area"));
	PoisonArea->SetupAttachment(GetRootComponent());
	SpawnEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SpawnEffect"));
	SpawnEffect->SetupAttachment(PoisonArea);

	OnExplosionTriggeredDelegate.AddUObject(this, &APoisonExplosionArea::CheckPlayerInRange);
}


void APoisonExplosionArea::CheckPlayerInRange()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerRef) return;
	const FVector PlayerLocation = PlayerRef->GetActorLocation();
	const float Radius = PoisonArea->GetScaledSphereRadius();
	const FVector Center = GetActorLocation();
	const float DistBtwEnemyAndCenter = FVector::DistSquared(PlayerLocation, Center);
	if (DistBtwEnemyAndCenter < Radius * Radius)
	{
		UGameplayStatics::ApplyDamage(PlayerRef, ExplosionDamage, Cast<ACharacter>(GetOwner())->GetController(), this, DamageType);
		if (PlayerRef->FindComponentByClass<UPoisonEffectManager>())
		{
			PlayerRef->FindComponentByClass<UPoisonEffectManager>()->SetParams(PoisonDamage, PoisonDuration, PoisonRate, false);
			PlayerRef->FindComponentByClass<UPoisonEffectManager>()->HandleEffect(true);
		}
	}
	this->Destroy();
}


void APoisonExplosionArea::SetParams(const float NewExplosionDamage, const float NewPoisonDamage, const float NewPoisonRate, const float NewPoisonDuration){ExplosionDamage = NewExplosionDamage;PoisonDamage = NewPoisonDamage;PoisonRate = NewPoisonRate;PoisonDuration = NewPoisonDuration;}