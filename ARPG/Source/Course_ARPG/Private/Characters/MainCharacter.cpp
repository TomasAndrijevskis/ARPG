
#include "Characters/MainCharacter.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/StatsComponent.h"
#include "Characters/EStats.h"
#include "Characters/LevelingComponent.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/BlockComponent.h"
#include "Combat/CombatComponent.h"
#include "Combat/LockonComponent.h"
#include "Combat/TraceComponent.h"
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"

AMainCharacter::AMainCharacter()
{
 	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockonComp = CreateDefaultSubobject<ULockonComponent>(TEXT("Lockon Component"));
	BlockComp = CreateDefaultSubobject<UBlockComponent>(TEXT("Block Component"));
	PlayerActionsComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Actions Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	LevelComp = CreateDefaultSubobject<ULevelingComponent>(TEXT("Leveling Component"));
	
	AbilityComp_DamageIncrease = CreateDefaultSubobject<UAbilityComponent_DamageIncrease>(TEXT("Damage Increase"));
	AbilityComp_RangeAttack = CreateDefaultSubobject<UAbilityComponent_RangeAttack>(TEXT("Range Attack"));
	AbilityComp_LifeStealAttack = CreateDefaultSubobject<UAbilityComponent_LifeStealAttack>(TEXT("Life Steal Attack"));
	AbilityComp_GetArmor = CreateDefaultSubobject<UAbilityComponent_GetArmor>(TEXT("Get Armor"));

	Abilities.Add(AbilityComp_DamageIncrease);
	Abilities.Add(AbilityComp_RangeAttack);
	Abilities.Add(AbilityComp_LifeStealAttack);
	Abilities.Add(AbilityComp_GetArmor);
}


void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
	
}


void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AMainCharacter::HandleDeath()
{
	if (!DeathAnimMontage)
	{
		return;
	}
	
	PlayAnimMontage(DeathAnimMontage);
	UE_LOG(LogTemp, Error, TEXT("Player Death"));
	DisableInput(GetController<APlayerController>());
}


void AMainCharacter::EndLockonWithActor(AActor* ActorRef)
{
	if (ActorRef != LockonComp->CurrentTargetActor)
	{
		return;
	}
	LockonComp->EndLockon();
}


bool AMainCharacter::CanTakeDamage(AActor* Opponent)
{
	if (PlayerActionsComp->bIsRollActive)
	{
		return false;
	}
	if (PlayerAnim->bIsBlocking)
	{
		return BlockComp->Check(Opponent);
	}
	return true;
}


void AMainCharacter::PlayHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	
	if (CurrentMontage == DeathAnimMontage || CurrentMontage == PlayerActionsComp->RollAnimMontage)
	{
		return;
	}
	PlayAnimMontage(HurtAnimMontage);
}


float AMainCharacter::GetCurrentDamage()
{
	return StatsComp->Stats[EStats::Strength];
}


bool AMainCharacter::HasEnoughStamina(float Stamina)
{
	return StatsComp->Stats[EStats::Stamina] >= Stamina;
}


bool AMainCharacter::HasEnoughMana(float Mana)
{
	return StatsComp->Stats[EStats::Mana] >= Mana;
}
