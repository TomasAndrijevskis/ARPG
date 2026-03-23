
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "GameFramework/Character.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"


AProjectile_AllElementsArrow::AProjectile_AllElementsArrow()
{
	EffectSpawnComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Effect Spawn Component"));
	EffectSpawnComponent->SetupAttachment(GetRootComponent());
}


void AProjectile_AllElementsArrow::HandleBeginOverlap(AActor* OtherActor)
{
	if (!OtherActor || OtherActor == this || OtherActor == GetProjectileOwner() || !IsOpponentHit(OtherActor))
	{
		HandleDestruction();
		return;
	}
	ACharacter* CharacterRef = Cast<ACharacter>(OtherActor);
	if (!CharacterRef)
	{
		HandleDestruction();
		return;
	}
	if (AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(CharacterRef))
	{
		EnemyRef->IceStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->IceStatusEffectManager->HandleEffect();
		EnemyRef->FireStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->FireStatusEffectManager->HandleEffect();
		EnemyRef->PoisonStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->PoisonStatusEffectManager->HandleEffect();
	}
	HandleDestruction();
}


void AProjectile_AllElementsArrow::SetEffectsParams(float NewEffectDuration, float NewDamageRate){EffectDuration = NewEffectDuration; DamageRate = NewDamageRate;}