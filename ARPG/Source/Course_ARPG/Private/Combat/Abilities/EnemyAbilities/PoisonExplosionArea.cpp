
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionArea.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"
#include "Components/StatusEffectsComponent.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "Engine/DamageEvents.h"
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
		UGameplayStatics::ApplyDamage(PlayerRef, ExplosionDamage, GetOwner()->GetInstigatorController(), GetOwner(), UMagicalDamageType::StaticClass());
		if (PlayerRef->FindComponentByClass<UPoisonEffectManager>())
			PlayerRef->FindComponentByClass<UPoisonEffectManager>()->HandlePoison(PoisonDuration, PoisonDamage, PoisonRate, AbilityCompRef);
	}
	this->Destroy();
}


void APoisonExplosionArea::SetParams(const float NewExplosionDamage, const float NewPoisonDamage, const float NewPoisonRate, const float NewPoisonDuration, UAbilityComponent_Base* NewAbilityCompRef)
{
	ExplosionDamage = NewExplosionDamage;
	PoisonDamage = NewPoisonDamage;
	PoisonRate = NewPoisonRate;
	PoisonDuration = NewPoisonDuration;
	AbilityCompRef = NewAbilityCompRef;
}