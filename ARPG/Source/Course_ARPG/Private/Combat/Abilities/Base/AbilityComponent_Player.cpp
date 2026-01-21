
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Characters/Data/AbilityUpgradeRequirements.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Components/LevelingComponent.h"
#include "SaveGame/AbilityData.h"
#include "UI/PlayerWidget.h"


void UAbilityComponent_Player::BeginPlay()
{
	Super::BeginPlay();
	if (CurrentAbilityLevel == 0) SetAbilityData(0);
	PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
	SkeletalMeshComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
	UpdateAbilityDescription();
	UpdateUpgradeDescription();
}


void UAbilityComponent_Player::StartCooldown()
{
	OnAbilityFinishedDelegate.Broadcast();
	TimerDuration = CooldownDuration;
	bIsOnCooldown = true;
	
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_Player::StartCooldownTimer, 1, true, 0.f);
}


void UAbilityComponent_Player::StartCooldownTimer()
{
	if (TimerDuration > 0)
	{
		OnAbilityCooldownChangedDelegate.Broadcast(TimerDuration);
		TimerDuration--;
	}
	else
	{
		bIsOnCooldown = false;
		OnAbilityCooldownFinishedDelegate.Broadcast();
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}


void UAbilityComponent_Player::HandlePlayerActions(const bool bCanDo)
{
	PlayerRef->SetCanAttack(bCanDo);
	PlayerRef->SetCanRoll(bCanDo);
}


bool UAbilityComponent_Player::HasEnoughMana() const 
{
	if (!PlayerRef || !PlayerRef -> Implements<UMainPlayer>()) return false;
	IMainPlayer* IPlayerRef = Cast<IMainPlayer>(PlayerRef);
	if (!IPlayerRef) return false;
	return IPlayerRef->HasEnoughMana(ManaCost);
}


void UAbilityComponent_Player::StartAbilityTimer()
{
	if (TimerDuration > 0)
	{
		TimerDuration--;
		OnAbilityTimerChangedDelegate.Broadcast(TimerDuration);
	}
	else
	{
		TimerDuration = CooldownDuration;
		OnAbilityTimerFinished();
		StartCooldown();
	}
}


void UAbilityComponent_Player::StartAbility()
{
	if (!PlayerRef) return;
	PlayerRef->SetCanPlayHurtAnimation(false);
	PlayerRef->InterruptHurtAnimation();
}


void UAbilityComponent_Player::FinishAbilityCast()
{
	if (!PlayerRef) return;
	PlayerRef->SetCanPlayHurtAnimation(true);
}


void UAbilityComponent_Player::CreateIcon()
{
	PlayerRef->GetPlayerWidget()->CreateStatusIconWithTimer(GetAbilityDuration(), GetIcon(), this);
}


void UAbilityComponent_Player::UpgradeAbility(int AvailablePoints)
{
	if (!PlayerRef) return;
	const int PointsRequired = GetRequiredUpgradePoints();
	if (AvailablePoints >= PointsRequired && PointsRequired > 0)
	{
		CurrentAbilityLevel++;
		AvailablePoints -= PointsRequired;
		PlayerRef->IncreaseUsedAbilityPoints(PointsRequired);
		PlayerRef->LevelComp->SetAbilityPoints(AvailablePoints);
		PlayerRef->LevelComp->OnAbilityPointsUpdateDelegate.Broadcast(AvailablePoints);
		if (IsAbilityAvailable()) SetAbilityData(CurrentAbilityLevel - 1);
		else
		{
			SetAbilityAvailability(true);
			OnAbilityUnlockedDelegate.Broadcast();
		}
		UpdateAbilityDescription();
		UpdateUpgradeDescription();
	}
}


int UAbilityComponent_Player::GetRequiredUpgradePoints()
{
	if (!RequirementsDataTable) return -1;
	FName RowName = FName(*FString::FromInt(GetCurrentAbilityLevel() + 1));
	FAbilityUpgradeRequirements* RequirementsRow = RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"));
	if (!RequirementsRow) return -1;
	return RequirementsRow->RequiredPoints;
}


bool UAbilityComponent_Player::IsAbilityMaxLevel()
{
	FName RowName = FName(*FString::FromInt(GetCurrentAbilityLevel() + 1));
	if (RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"))) return false;
	return true;
}


void UAbilityComponent_Player::SaveAbilityProperties(FAbilityData& Data)
{
	Data.bIsUnlocked = IsAbilityAvailable();
	Data.CurrentLevel = GetCurrentAbilityLevel();
}


void UAbilityComponent_Player::LoadAbilityProperties(const FAbilityData& SavedData)
{
	SetCurrentAbilityLevel(SavedData.CurrentLevel);
	SetAbilityAvailability(SavedData.bIsUnlocked);
	SetAbilityData(CurrentAbilityLevel - 1);
}


void UAbilityComponent_Player::ClearAbilityData()
{
	SetCurrentAbilityLevel(0);
	SetAbilityAvailability(false);
	UpdateAbilityDescription();
	UpdateUpgradeDescription();
}


void UAbilityComponent_Player::SetCommonAbilityProperties(const FAbilityPropertiesBaseData* Data)
{
	SetCooldownDuration(Data->CooldownDuration);
	SetManaCost(Data->ManaCost);
	SetAbilityDuration(Data->AbilityDuration);
}


bool UAbilityComponent_Player::CanPlayMontage() const
{
	return AnimMontage && PlayerRef && !PlayerRef->GetCurrentMontage();
}


int UAbilityComponent_Player::GetCurrentAbilityLevel()
{
	return CurrentAbilityLevel;
}


void UAbilityComponent_Player::SetCurrentAbilityLevel(const int NewLevel)
{
	UE_LOG(LogTemp, Warning, TEXT("Current level: %d"), NewLevel);
	CurrentAbilityLevel = NewLevel;
}


FString UAbilityComponent_Player::GetAbilityDescription() const
{
	return AbilityDescription;
}


FString UAbilityComponent_Player::GetUpgradeDescription() const
{
	return UpgradeDescription;
}

void UAbilityComponent_Player::SetUpgradeDescription(const FString& NewDescription)
{
	UpgradeDescription = NewDescription;
}

void UAbilityComponent_Player::SetAbilityDescription(const FString& NewDescription)
{
	AbilityDescription = NewDescription;
}


bool UAbilityComponent_Player::IsAbilityAvailable() const
{
	return bIsAbilityAvailable;
}


void UAbilityComponent_Player::SetAbilityAvailability(const bool NewAvailability)
{
	bIsAbilityAvailable = NewAvailability;
}


float UAbilityComponent_Player::GetManaCost() const
{
	return ManaCost;
}


void UAbilityComponent_Player::SetManaCost(const float NewManaCost)
{
	ManaCost = NewManaCost;
}


float UAbilityComponent_Player::GetCooldownDuration() const
{
	return CooldownDuration;
}


void UAbilityComponent_Player::SetCooldownDuration(const float NewCooldownDuration)
{
	CooldownDuration = NewCooldownDuration;
}



FString UAbilityComponent_Player::GetActionKey() const
{
	return ActionKey;
}


bool UAbilityComponent_Player::IsOnCooldown() const
{
	return bIsOnCooldown;
}


bool UAbilityComponent_Player::IsAbilityActive() const
{
	return bIsAbilityActive;
}


void UAbilityComponent_Player::SetAbilityActive(const bool NewIsActive)
{
	bIsAbilityActive = NewIsActive;
}