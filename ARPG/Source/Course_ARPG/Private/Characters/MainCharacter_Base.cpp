
#include "Characters/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/StatsComponent.h"
#include "Characters/EStats.h"
#include "Characters/LevelingComponent.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/BlockComponent.h"
#include "Combat/CombatComponent.h"
#include "Combat/LockonComponent.h"
#include "Combat/TraceComponent.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/PlayerWidget.h"


AMainCharacter_Base::AMainCharacter_Base()
{
 	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockonComp = CreateDefaultSubobject<ULockonComponent>(TEXT("Lockon Component"));
	BlockComp = CreateDefaultSubobject<UBlockComponent>(TEXT("Block Component"));
	PlayerActionsComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Actions Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	LevelComp = CreateDefaultSubobject<ULevelingComponent>(TEXT("Leveling Component"));

	ArrStats.Add(EStats::MaxHealth);
	ArrStats.Add(EStats::MaxStamina);
	ArrStats.Add(EStats::Strength);
	ArrStats.Add(EStats::MaxMana);
}


void AMainCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

	PlayerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	
	CreateUI();
	CreateAbilitiesFooter();
}



void AMainCharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AMainCharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AMainCharacter_Base::CreateUI()
{
	if (!PlayerWidget)
	{
		return;
	}
	PlayerWidgetRef = Cast<UPlayerWidget>(CreateWidget(GetWorld()->GetFirstPlayerController(), PlayerWidget));
	PlayerWidgetRef->AddToViewport();

	PlayerWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	PlayerWidgetRef->SetStamina(StatsComp->GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
	PlayerWidgetRef->SetMana(StatsComp->GetStatPercentage(EStats::Mana, EStats::MaxMana));
	PlayerWidgetRef->SetLevel(LevelComp->GetCurrentLevel());
	PlayerWidgetRef->SetXP(LevelComp->GetCurrentXP());
	
}


void AMainCharacter_Base::CreateAbilitiesFooter()
{
	PlayerWidgetRef->RemoveAbilityFooter();
	for (UAbilityComponent_Base* Ability: ArrAbilities)
	{
		if (IsValid(Ability))
		{
			if (Ability->IsAbilityAvailable())
			{
				PlayerWidgetRef->CreateAbilityFooter(Ability->GetIcon(), Ability->GetActionKey(), Ability);
			}
		}
	}
}


void AMainCharacter_Base::HandleDeath()
{
	if (!DeathAnimMontage)
	{
		return;
	}
	
	PlayAnimMontage(DeathAnimMontage);
	UE_LOG(LogTemp, Error, TEXT("Player Death"));
	DisableInput(GetController<APlayerController>());
}


void AMainCharacter_Base::EndLockonWithActor(AActor* ActorRef)
{
	if (ActorRef != LockonComp->CurrentTargetActor)
	{
		return;
	}
	LockonComp->EndLockon();
}


bool AMainCharacter_Base::CanTakeDamage(AActor* Opponent)
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


void AMainCharacter_Base::PlayHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	
	if (CurrentMontage == DeathAnimMontage || CurrentMontage == PlayerActionsComp->RollAnimMontage)
	{
		return;
	}
	PlayAnimMontage(HurtAnimMontage);
}


float AMainCharacter_Base::GetCurrentDamage()
{
	return StatsComp->Stats[EStats::Strength];
}


bool AMainCharacter_Base::HasEnoughStamina(float Stamina)
{
	return StatsComp->Stats[EStats::Stamina] >= Stamina;
}


bool AMainCharacter_Base::HasEnoughMana(float Mana)
{
	return StatsComp->Stats[EStats::Mana] >= Mana;
}
