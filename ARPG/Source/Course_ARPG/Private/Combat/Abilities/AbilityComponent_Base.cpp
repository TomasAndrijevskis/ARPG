
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/PlayerActionsComponent.h"
#include "Characters/Data/AbilityUpgradeRequirements.h"
#include "Combat/CombatComponent.h"
#include "SaveGame/AbilityData.h"
#include "UI/PlayerWidget.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAbilityComponent_Base::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
	SkeletalMeshComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();

	UpdateAbilityDescription();
	UpdateUpgradeDescription();
}


void UAbilityComponent_Base::StartAbilityTimer()
{
	if (TimerDuration > 0)
	{
		TimerDuration--;
		OnAbilityTimerChangedDelegate.Broadcast(TimerDuration);
		//UE_LOG(LogTemp, Warning,TEXT("Ability time left: %f"), TimerDuration);
	}
	else
	{
		OnAbilityFinishedDelegate.Broadcast();
		TimerDuration = CooldownDuration;
		OnAbilityTimerFinished();
		StartCooldown();
	}
}


void UAbilityComponent_Base::StartCooldown()
{
	OnAbilityFinishedDelegate.Broadcast();
	TimerDuration = CooldownDuration;
	bIsOnCooldown = true;
	
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_Base::StartCooldownTimer, 1, true);
}


void UAbilityComponent_Base::CreateIcon()
{
	PlayerRef->GetPlayerWidget()->CreateStatusIconWithTimer(GetAbilityDuration(), GetIcon(), this);
}


void UAbilityComponent_Base::StartCooldownTimer()
{
	if (TimerDuration > 0)
	{
		OnAbilityCooldownChangedDelegate.Broadcast(TimerDuration);
		TimerDuration--;
		//UE_LOG(LogTemp, Warning,TEXT("Cooldown time left: %f"), TimerDuration);
	}
	else
	{
		bIsOnCooldown = false;
		OnAbilityCooldownFinishedDelegate.Broadcast();
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}


void UAbilityComponent_Base::HandlePlayerActions(bool bCanDo)
{
	PlayerRef->CombatComp->bCanAttack = bCanDo;
	PlayerRef->PlayerActionsComp->SetCanRoll(bCanDo);
}


bool UAbilityComponent_Base::CheckMana()
{
	if (!PlayerRef || !PlayerRef -> Implements<UMainPlayer>())
	{
		return false;
	}

	IMainPlayer* IPlayerRef = Cast<IMainPlayer>(PlayerRef);
	if (!IPlayerRef)
	{
		return false;
	}
	
	return IPlayerRef->HasEnoughMana(ManaCost);
}


void UAbilityComponent_Base::UpgradeAbility(int AvailablePoints)
{
	int PointsRequired = GetRequiredUpgradePoints();

	if (AvailablePoints >= PointsRequired && PointsRequired > 0)
	{
		CurrentLevel++;
		AvailablePoints -= PointsRequired;
		PlayerRef->LevelComp->SetAbilityPoints(AvailablePoints);
		PlayerRef->LevelComp->OnAbilityPointsUpdateDelegate.Broadcast(AvailablePoints);
		if (IsAbilityAvailable())
		{
			UpdateAbilityProperties();
		}
		else
		{
			//UE_LOG(LogTemp, Warning, TEXT("Ability unlocked"));
			SetAbilityAvailability(true);
			OnAbilityUnlockedDelegate.Broadcast();
		}
		UpdateAbilityDescription();
		UpdateUpgradeDescription();
	}
}


void UAbilityComponent_Base::UpdateAbilityProperties()
{
	SetCooldownDuration(CooldownDuration - 1);
	SetManaCost(ManaCost - (ManaCost * .2f));
	SetAbilityDuration(AbilityDuration + 1);
}


int UAbilityComponent_Base::GetRequiredUpgradePoints()
{
	if (!RequirementsDataTable)
	{
		//UE_LOG(LogTemp, Error, TEXT("Cant load levels data table"));
		return -1;
	}

	FName RowName = FName(*FString::FromInt(GetCurrentAbilityLevel() + 1));
	FAbilityUpgradeRequirements* RequirementsRow = RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"));
	if (!RequirementsRow)
	{
		//UE_LOG(LogTemp, Warning, TEXT("No level row found for %s"), *RowName.ToString());
		return -1;
	}
	return RequirementsRow->RequiredPoints;
}


bool UAbilityComponent_Base::IsAbilityMaxLevel()
{
	FName RowName = FName(*FString::FromInt(GetCurrentAbilityLevel() + 1));
	FAbilityUpgradeRequirements* RequirementsRow = RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"));
	if (RequirementsRow)
	{
		return false;
	}
	return true;
}


void UAbilityComponent_Base::SaveCustomProperties(FAbilityData& Data)
{
	Data.bIsUnlocked = IsAbilityAvailable();
	Data.CurrentLevel = GetCurrentAbilityLevel();
	Data.AbilityDuration = GetAbilityDuration();
	Data.CooldownDuration = GetCooldownDuration();
	Data.ManaCost = GetManaCost();
}


void UAbilityComponent_Base::LoadCustomProperties(FAbilityData& SavedData)
{
	SetCurrentAbilityLevel(SavedData.CurrentLevel);
	SetAbilityAvailability(SavedData.bIsUnlocked);
	SetCooldownDuration(SavedData.CooldownDuration);
	SetManaCost(SavedData.ManaCost);
	SetAbilityDuration(SavedData.AbilityDuration);
}



bool UAbilityComponent_Base::CanPlayMontage() const
{
	return AnimMontage && PlayerRef && !PlayerRef->GetCurrentMontage();
}


int UAbilityComponent_Base::GetCurrentAbilityLevel()
{
	return CurrentLevel;
}


void UAbilityComponent_Base::SetCurrentAbilityLevel(int NewLevel)
{
	CurrentLevel = NewLevel;
}


FString UAbilityComponent_Base::GetAbilityDescription()
{
	return AbilityDescription;
}


FString UAbilityComponent_Base::GetUpgradeDescription()
{
	return UpgradeDescription;
}

void UAbilityComponent_Base::SetUpgradeDescription(FString NewDescription)
{
	UpgradeDescription = NewDescription;
}

void UAbilityComponent_Base::SetAbilityDescription(FString NewDescription)
{
	AbilityDescription = NewDescription;
}


bool UAbilityComponent_Base::IsAbilityAvailable()
{
	return bIsAbilityAvailable;
}


void UAbilityComponent_Base::SetAbilityAvailability(bool NewAvailability)
{
	bIsAbilityAvailable = NewAvailability;
}


UTexture2D* UAbilityComponent_Base::GetIcon()
{
	if (!Icon)
	{
		return nullptr;
	}
	return Icon;
}


float UAbilityComponent_Base::GetManaCost()
{
	return ManaCost;
}


void UAbilityComponent_Base::SetManaCost(float NewManaCost)
{
	ManaCost = NewManaCost;
}


float UAbilityComponent_Base::GetCooldownDuration()
{
	return CooldownDuration;
}


void UAbilityComponent_Base::SetCooldownDuration(float NewCooldownDuration)
{
	CooldownDuration = NewCooldownDuration;
}


float UAbilityComponent_Base::GetAbilityDuration()
{
	return AbilityDuration;
}


void UAbilityComponent_Base::SetAbilityDuration(float NewAbilityDuration)
{
	AbilityDuration = NewAbilityDuration;
}


FString UAbilityComponent_Base::GetActionKey()
{
	return ActionKey;
}


bool UAbilityComponent_Base::IsOnCooldown()
{
	return bIsOnCooldown;
}


bool UAbilityComponent_Base::IsAbilityActive()
{
	return bIsAbilityActive;
}


void UAbilityComponent_Base::SetAbilityActive(bool NewIsActive)
{
	bIsAbilityActive = NewIsActive;
}
