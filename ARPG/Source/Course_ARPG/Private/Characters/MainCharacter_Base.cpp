
#include "Characters/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/StatsComponent.h"
#include "Characters/EStats.h"
#include "Characters/LevelingComponent.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/BlockComponent.h"
#include "Combat/LockonComponent.h"
#include "Combat/StatusEffectsComponent.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/PlayerWidget.h"


AMainCharacter_Base::AMainCharacter_Base()
{
 	PrimaryActorTick.bCanEverTick = true;
	
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockonComp = CreateDefaultSubobject<ULockonComponent>(TEXT("Lockon Component"));
	PlayerActionsComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Actions Component"));
	LevelComp = CreateDefaultSubobject<ULevelingComponent>(TEXT("Leveling Component"));
	StatusEffectsComp = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("Status Effects Component"));
	
	ArrStats.Add(EStats::MaxHealth);
	ArrStats.Add(EStats::MaxStamina);
	ArrStats.Add(EStats::Strength);
	ArrStats.Add(EStats::MaxMana);
}


void AMainCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

	PlayerAnimInstance = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());

	SetSkeletalMeshComponent();

	CreateUI();
	
	LockonComp->OnUpdatedTargetDelegate.AddDynamic(PlayerAnimInstance, &UPlayerAnimInstance::HandleUpdatedTarget);
	PlayerActionsComp->OnSprintDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	PlayerActionsComp->OnRollDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(PlayerWidgetRef, &UPlayerWidget::SetHealth);
	StatsComp->OnManaPercentUpdateDelegate.AddDynamic(PlayerWidgetRef, &UPlayerWidget::SetMana);
	StatsComp->OnStaminaPercentUpdateDelegate.AddDynamic(PlayerWidgetRef, &UPlayerWidget::SetStamina);
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AMainCharacter_Base::HandleDeath);
	StatsComp->OnStatUpdateDelegate.AddDynamic(StatsComp, &UStatsComponent::OnStatsUpdated);
	StatsComp->OnStatUpdateDelegate.AddDynamic(GameInstance, &UARPG_GameInstance::SaveStats);
	LevelComp->OnXpUpdateDelegate.AddDynamic(PlayerWidgetRef, &UPlayerWidget::SetXP);
	LevelComp->OnNewLevelDelegate.AddDynamic(PlayerWidgetRef, &UPlayerWidget::SetLevel);
	
	FOnBonfireInteractionDelegate.AddDynamic(StatsComp, &UStatsComponent::RestoreStats);
	
	OnTakeAnyDamage.AddDynamic(this, &AMainCharacter_Base::ReceiveDamage);
	
}


void AMainCharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StatsComp->RegenStamina();
	StatsComp->RegenMana();
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

	if (PlayerWidgetRef)
	{
		PlayerWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
		PlayerWidgetRef->SetStamina(StatsComp->GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
		PlayerWidgetRef->SetMana(StatsComp->GetStatPercentage(EStats::Mana, EStats::MaxMana));
		PlayerWidgetRef->SetLevel(LevelComp->GetCurrentLevel());
		PlayerWidgetRef->SetXP(LevelComp->GetXPPercentage());
		
		CreateAbilitiesFooter();
	}
}


void AMainCharacter_Base::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	StatsComp->ReduceHealth(StatsComp->GetReducedDamage(Damage, DamageCauser), DamageCauser);
	PlayHurtAnimation();
}


void AMainCharacter_Base::CreateAbilitiesFooter()
{
	PlayerWidgetRef->RemoveAbilityFooter();
	for (UAbilityComponent_Player* Ability: ArrAbilities)
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

	PlayerWidgetRef->CreateDeathWidget();
	
	PlayAnimMontage(DeathAnimMontage);
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
	if (PlayerActionsComp->IsRollActive())
	{
		return false;
	}
	if (PlayerAnimInstance->bIsBlocking)
	{
		return false;
	}
	return true;
}


void AMainCharacter_Base::PlayHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	
	if (CurrentMontage == DeathAnimMontage || CurrentMontage == PlayerActionsComp->RollAnimMontage || !GetCanPlayHurtAnimation())
	{
		return;
	}
	PlayAnimMontage(HurtAnimMontage);
}


void AMainCharacter_Base::InterruptHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	if (CurrentMontage == HurtAnimMontage)
	{
		PlayerAnimInstance->Montage_Stop(.1f);
	}
}



void AMainCharacter_Base::SetIsInFight(bool bNewIsInFight)
{
	bIsInFight = bNewIsInFight;
}


bool AMainCharacter_Base::GetIsInFight()
{
	return bIsInFight;
}


float AMainCharacter_Base::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
}


bool AMainCharacter_Base::HasEnoughStamina(float Stamina)
{
	return StatsComp->GetStatValue(EStats::Stamina) >= Stamina;
}


bool AMainCharacter_Base::HasEnoughMana(float Mana)
{
	return StatsComp->GetStatValue(EStats::Mana) >= Mana;
}


UPlayerWidget* AMainCharacter_Base::GetPlayerWidget()
{
	return PlayerWidgetRef;
}


TArray<UAbilityComponent_Player*>& AMainCharacter_Base::GetAbilitiesArray()
{
	return ArrAbilities;
}


void AMainCharacter_Base::AddToAbilitiesArray(UAbilityComponent_Player* NewAbility)
{
	ArrAbilities.Add(NewAbility);
}


UARPG_GameInstance* AMainCharacter_Base::GetGameInstanceRef()
{
	return GameInstance;
}


USkeletalMeshComponent* AMainCharacter_Base::GetSkeletalMeshComponent()
{
	return SkeletalMeshComp;
}


void AMainCharacter_Base::SetSkeletalMeshComponent()
{
	APlayerController* PC = Cast<APlayerController>(GetOwner());
	if (PC)
	{
		APawn* Pawn = PC->GetPawn();
		if (ACharacter* Character = Cast<ACharacter>(Pawn))
		{
			SkeletalMeshComp = Character->GetMesh();
		}
	}
}


void AMainCharacter_Base::SetCanPlayHurtAnimation(bool bCanPlayAnim)
{
	bCanPlayHurtAnim = bCanPlayAnim;
}


bool AMainCharacter_Base::GetCanPlayHurtAnimation()
{
	return bCanPlayHurtAnim;
}
