
#include "Components/EnemyProjectileComponent.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Interfaces/Fighter.h"
#include "Kismet/KismetMathLibrary.h"


void UEnemyProjectileComponent::BeginPlay()
{
	Super::BeginPlay();
	FighterRef = Cast<IFighter>(GetOwner());
}


void UEnemyProjectileComponent::SpawnProjectile()
{
	float ProjectileDamage = GetProjectileDamage();
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	const FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	const FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, PlayerLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetProjectileOwner(GetOwner());
	Projectile->SetParams(ProjectileDamage, AliveTime, GetElementalDamageModificator());
	Projectile->StartAliveTimer();
}


float UEnemyProjectileComponent::GetProjectileDamage() const
{
	if (!FighterRef) return 0.f;
	return FighterRef->GetMagicalDamage();
}


float UEnemyProjectileComponent::GetElementalDamageModificator() const
{
	if (!FighterRef) return 0.f;
	return FighterRef->GetElementalDamageModificator();
}
