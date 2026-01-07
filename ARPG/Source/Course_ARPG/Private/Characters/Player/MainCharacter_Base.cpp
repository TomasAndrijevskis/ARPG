
#include "Characters/Player/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/LevelingComponent.h"
#include "Components/LockonComponent.h"
#include "Components/PlayerActionsComponent.h"
#include "Components/StatsComponent.h"
#include "Components/StatusEffectsComponent.h"
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

	CreatePlayerWidget();
	
	LockonComp->OnUpdatedTargetDelegate.AddUniqueDynamic(PlayerAnimInstance, &UPlayerAnimInstance::HandleUpdatedTarget);
	PlayerActionsComp->OnSprintDelegate.AddUniqueDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	PlayerActionsComp->OnRollDelegate.AddUniqueDynamic(StatsComp, &UStatsComponent::ReduceStamina);
	StatsComp->OnHealthPercentUpdateDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::SetHealth);
	StatsComp->OnManaPercentUpdateDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::SetMana);
	StatsComp->OnStaminaPercentUpdateDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::SetStamina);
	StatsComp->OnZeroHealthDelegate.AddUniqueDynamic(this, &AMainCharacter_Base::HandleDeath);
	StatsComp->OnStatUpdateDelegate.AddUniqueDynamic(StatsComp, &UStatsComponent::OnStatsUpdated);
	StatsComp->OnStatUpdateDelegate.AddUniqueDynamic(GameInstance, &UARPG_GameInstance::SaveStats);
	LevelComp->OnXpUpdatedDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::SetXP);
	LevelComp->OnLevelUpdatedDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::SetLevel);
	LevelComp->OnNewLevelDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::ShowLevelUpAnimation);
	
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


void AMainCharacter_Base::CreatePlayerWidget()
{
	if (!PlayerWidgetClass) return;
	PlayerWidgetRef = Cast<UPlayerWidget>(CreateWidget(GetWorld()->GetFirstPlayerController(), PlayerWidgetClass));
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


void AMainCharacter_Base::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	StatsComp->ReduceHealth(StatsComp->GetReducedDamage(Damage, DamageCauser), DamageCauser);
	PlayHurtAnimation();
}


void AMainCharacter_Base::CreateAbilitiesFooter()
{
	PlayerWidgetRef->RemoveAbilityFooterPanel();
	for (UAbilityComponent_Player* Ability: ArrAbilities)
	{
		if (IsValid(Ability) && Ability->IsAbilityAvailable())
			PlayerWidgetRef->CreateAbilityFooterPanel(Ability->GetIcon(), Ability->GetActionKey(), Ability);
	}
}


void AMainCharacter_Base::HandleDeath()
{
	if (!DeathAnimMontage) return;
	PlayerWidgetRef->CreateDeathWidget();
	PlayAnimMontage(DeathAnimMontage);
	DisableInput(GetController<APlayerController>());
}


void AMainCharacter_Base::EndLockonWithActor(AActor* ActorRef)
{
	if (ActorRef != LockonComp->CurrentTargetActor) return;
	LockonComp->EndLockon();
}


bool AMainCharacter_Base::CanTakeDamage(AActor* Opponent) const
{
	if (PlayerActionsComp->IsRollActive()) return false;
	if (PlayerAnimInstance->bIsBlocking) return false;
	return true;
}


void AMainCharacter_Base::PlayHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	if (CurrentMontage == DeathAnimMontage || CurrentMontage == PlayerActionsComp->RollAnimMontage || !CanPlayHurtAnimation()) return;
	PlayAnimMontage(HurtAnimMontage);
}


void AMainCharacter_Base::InterruptHurtAnimation() const
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	if (CurrentMontage == HurtAnimMontage) PlayerAnimInstance->Montage_Stop(.1f);
}



float AMainCharacter_Base::GetCurrentDamage() const
{
	return StatsComp->GetStatValue(EStats::Strength);
}


bool AMainCharacter_Base::HasEnoughStamina(const float Stamina) const
{
	return StatsComp->GetStatValue(EStats::Stamina) >= Stamina;
}


bool AMainCharacter_Base::HasEnoughMana(const float Mana) const
{
	return StatsComp->GetStatValue(EStats::Mana) >= Mana;
}


UPlayerWidget* AMainCharacter_Base::GetPlayerWidget() const
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


UARPG_GameInstance* AMainCharacter_Base::GetGameInstanceRef() const
{
	return GameInstance;
}


USkeletalMeshComponent* AMainCharacter_Base::GetSkeletalMeshComponent() const
{
	return SkeletalMeshComp;
}


void AMainCharacter_Base::SetSkeletalMeshComponent()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetOwner());
	if (!PlayerController) return;
	APawn* Pawn = PlayerController->GetPawn();
	if (ACharacter* Character = Cast<ACharacter>(Pawn)) SkeletalMeshComp = Character->GetMesh();
}


void AMainCharacter_Base::SetCanPlayHurtAnimation(const bool bCanPlayAnim)
{
	bCanPlayHurtAnim = bCanPlayAnim;
}


bool AMainCharacter_Base::CanPlayHurtAnimation() const
{
	return bCanPlayHurtAnim;
}


TArray<TEnumAsByte<EStats>> AMainCharacter_Base::GetStatsArray() const
{
	return ArrStats;
}