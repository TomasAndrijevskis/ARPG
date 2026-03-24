
#include "Characters/Player/MainCharacter_Archer.h"
#include "Animations/Player/AnimInstance_Archer.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_ArrowBarrage.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"
#include "Data/StatusEffects/StatusEffectData.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


AMainCharacter_Archer::AMainCharacter_Archer()
{
	AbilityComp_HealArrow = CreateDefaultSubobject<UAbComp_HealArrow>(TEXT("Healing Arrow"));
	AbilityComp_ArrowBarrage = CreateDefaultSubobject<UAbComp_ArrowBarrage>(TEXT("Arrow Barrage"));
	AbilityComp_AllElementsArrow = CreateDefaultSubobject<UAbComp_AllElementsArrow>(TEXT("All Elements Arrow"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_LongRange>(TEXT("Combat Component"));
	AddToAbilitiesArray(AbilityComp_HealArrow);
	AddToAbilitiesArray(AbilityComp_ArrowBarrage);
	AddToAbilitiesArray(AbilityComp_AllElementsArrow);
}


void AMainCharacter_Archer::BeginPlay()
{
	Super::BeginPlay();
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
}


void AMainCharacter_Archer::BindAbilityDelegates()
{
	AbilityComp_HealArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_ArrowBarrage->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_AllElementsArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnHealingArrowFireRequest.AddUObject(AbilityComp_HealArrow, &UAbComp_HealArrow::SpawnArrow);
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnArrowBarrageSpawnRequest.AddUObject(AbilityComp_ArrowBarrage, &UAbComp_ArrowBarrage::SpawnArrowBarrage);
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnAllElementsArrowSpawnRequest.AddUObject(AbilityComp_AllElementsArrow, &UAbComp_AllElementsArrow::SpawnArrow);
}


void AMainCharacter_Archer::SpawnParticle(UParticleSystem* ParticleEffect)
{
	if (!ParticleEffect) return;
	const FVector SpawnLocation = GetSkeletalMeshComponent()->GetSocketLocation(EffectSocketName);
	ParticleRef = UGameplayStatics::SpawnEmitterAttached(ParticleEffect, GetSkeletalMeshComponent(), EffectSocketName, SpawnLocation, FRotator::ZeroRotator,
	FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
}


void AMainCharacter_Archer::RemoveParticle()
{
	if (!ParticleRef) return;
	ParticleRef->DestroyComponent();
	ParticleRef = nullptr;
}


void AMainCharacter_Archer::HandleEffectChange(EEffects NewEffect)
{
	if (CurrentEffect == NewEffect && NewEffect != EEffects::Empty) return;
	RemoveParticle();
	CurrentEffect = NewEffect;
	if (NewEffect == EEffects::Empty)
	{
		Cast<UCombatComponent_LongRange>(CombatComp)->RevertBaseProjectileClass();
		return;
	}
	if (!StatusEffectsVisualDataAsset) return;
	if (FStatusEffectData* Data = StatusEffectsVisualDataAsset->StatusEffects.Find(CurrentEffect))
	{
		SpawnParticle(Data->ArcherEnchantmentData.WeaponEffect);
		Cast<UCombatComponent_LongRange>(CombatComp)->ChangeProjectileClass(Data->ArcherEnchantmentData.Projectile);
		CurrentEnchantmentDamageType = Data->DamageType;
	}
}


void AMainCharacter_Archer::SpawnProjectile()
{
	CombatComp->SpawnProjectile();
}


float AMainCharacter_Archer::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


void AMainCharacter_Archer::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser)
{
	AEnemyCharacter* EnemyRef = nullptr;
	if (DamageInstigator) EnemyRef = Cast<AEnemyCharacter>(DamageInstigator->GetPawn());
	if (!EnemyRef) return;
	if (EnemyRef->CanApplyDamage()) Super::ReceiveDamage(DamagedActor, Damage, DamageType, DamageInstigator, DamageCauser);
	else
	{
		float FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage,GetResistanceStatValue(DamageType));
		AbilityComp_HealArrow->HandleEnemyHit(FinalDamage);
	}
}