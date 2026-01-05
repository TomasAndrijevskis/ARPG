
#include "Combat/Abilities/EnemyAbilities/GroundSmashArea.h"
#include "NiagaraComponent.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"


AGroundSmashArea::AGroundSmashArea()
{
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(GetRootComponent());

	RangeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX"));
	RangeEffect->SetupAttachment(Collision);
}


void AGroundSmashArea::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AGroundSmashArea::CheckPlayerInRange, .1, false);
}


void AGroundSmashArea::SetParams(const float NewDamage)
{
	Damage = NewDamage;
}


void AGroundSmashArea::CheckPlayerInRange()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!PlayerRef) return;

	FVector PlayerLocation = PlayerRef->GetActorLocation();
	float Radius = Collision->GetScaledSphereRadius();
	FVector Center = GetActorLocation();
	float DistBtwEnemyAndCenter = FVector::DistSquared(PlayerLocation, Center);
	FDamageEvent TargetAttackedEvent{ };
	if (DistBtwEnemyAndCenter < Radius * Radius)
		PlayerRef->TakeDamage(Damage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	this->Destroy();
}

