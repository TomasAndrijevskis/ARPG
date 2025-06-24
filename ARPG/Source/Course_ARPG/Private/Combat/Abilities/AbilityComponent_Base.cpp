
#include "Combat/Abilities/AbilityComponent_Base.h"

#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Characters/PlayerActionsComponent.h"
#include "Characters/Data/AbilityUpgradeRequirements.h"
#include "Combat/CombatComponent.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAbilityComponent_Base::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerRef = Cast<AMainCharacter>(GetOwner());
	SkeletalMeshComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();

	UpdateDescription();
}


void UAbilityComponent_Base::StartAbilityTimer()
{
	if (TimerDuration > 0)
	{
		TimerDuration--;
		OnTimerChangedDelegate.Broadcast(TimerDuration);
		UE_LOG(LogTemp, Warning,TEXT("Ability time left: %f"), TimerDuration);
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


void UAbilityComponent_Base::StartCooldownTimer()
{
	if (TimerDuration > 0)
	{
		TimerDuration--;
		UE_LOG(LogTemp, Warning,TEXT("Cooldown time left: %f"), TimerDuration);
	}
	else
	{
		bIsOnCooldown = false;
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}


bool UAbilityComponent_Base::CanPlayMontage() const
{
	return AnimMontage && PlayerRef && !PlayerRef->GetCurrentMontage();
}


void UAbilityComponent_Base::HandlePlayerActions(bool bCanDo)
{
	PlayerRef->CombatComp->bCanAttack = bCanDo;
	PlayerRef->PlayerActionsComp->bCanRoll = bCanDo;
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


void UAbilityComponent_Base::OnAbilityUpgraded()
{
	//SetCooldownDuration(GetCooldownDuration()-1);
	UpdateDescription();
	UE_LOG(LogTemp, Error, TEXT("Ability Upgraded"));
}


void UAbilityComponent_Base::UpgradeAbility(int Points)
{
	int PointsRequired = GetRequiredUpgradePoints();

	if (Points >= PointsRequired)
	{
		CurrentLevel++;
		Points -= PointsRequired;
		PlayerRef->LevelComp->SetAbilityPoints(Points);
		PlayerRef->LevelComp->OnAbilityPointsUpdateDelegate.Broadcast(Points);
		OnAbilityUpgraded();
	}
}


int UAbilityComponent_Base::GetRequiredUpgradePoints()
{
	if (!RequirementsDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant load levels data table"));
		return 0;
	}

	FName RowName = FName(*FString::FromInt(GetCurrentAbilityLevel() + 1));
	FAbilityUpgradeRequirements* RequirementsRow = RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"));
	if (!RequirementsRow)
	{
		UE_LOG(LogTemp, Warning, TEXT("No level row found for %s"), *RowName.ToString());
		return 0;
	}
	return RequirementsRow->RequiredPoints;
}


void UAbilityComponent_Base::UpdateDescription()
{
}

int UAbilityComponent_Base::GetCurrentAbilityLevel()
{
	return CurrentLevel;
}


FString UAbilityComponent_Base::GetDescription()
{
	return Description;
}


FString UAbilityComponent_Base::GetUpgradeRequirements()
{
	return UpgradeRequirements;
}

void UAbilityComponent_Base::SetUpgradeRequirements(FString NewRequirements)
{
	UpgradeRequirements = NewRequirements;
}

void UAbilityComponent_Base::SetDescription(FString NewDescription)
{
	Description = NewDescription;
}


bool UAbilityComponent_Base::GetAbilityAvailability()
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
