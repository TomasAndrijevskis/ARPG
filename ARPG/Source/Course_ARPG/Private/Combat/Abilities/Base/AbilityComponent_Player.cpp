
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/AbilityUpgradeRequirements.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/LevelingComponent.h"
#include "Data/Abilities/AbilitySaveData.h"
#include "Kismet/KismetMathLibrary.h"


void UAbilityComponent_Player::BeginPlay()
{
	Super::BeginPlay();
	//if (CurrentAbilityLevel == 0)
	SetAbilityData(CurrentAbilityLevel);
	PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
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


void UAbilityComponent_Player::HandlePlayerActions(const bool bCanAttack, const bool bCanRoll, const bool bCanMove)
{
	if (!PlayerRef) return;
	PlayerRef->SetCanAttack(bCanAttack);
	PlayerRef->SetCanRoll(bCanRoll);
	PlayerRef->SetCanMove(bCanMove);
}


bool UAbilityComponent_Player::HasEnoughMana() const 
{
	if (!PlayerRef) return false;
	return PlayerRef->HasEnoughMana(ManaCost);
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
	SkeletalMeshComp = PlayerRef->GetSkeletalMeshComponent();
	PlayerRef->SetCanPlayHurtAnimation(false);
	PlayerRef->InterruptHurtAnimation();
	OnAbilityStartedDelegate.Broadcast();
}


void UAbilityComponent_Player::FinishAbilityCast()
{
	if (!PlayerRef) return;
	PlayerRef->SetCanPlayHurtAnimation(true);
	HandlePlayerActions(true, true, true);
}


void UAbilityComponent_Player::CreateIcon()
{
	//PlayerRef->CreateAbilityIconWithTimer(GetAbilityDuration(), GetIcon(), this);
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
		if (IsAbilityAvailable()) SetAbilityData(CurrentAbilityLevel);
		else
		{
			//CurrentAbilityLevel = 1;
			//SetAbilityData(CurrentAbilityLevel);
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
	FName RowName = FName(*FString::FromInt(CurrentAbilityLevel + 1));
	FAbilityUpgradeRequirements* RequirementsRow = RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"));
	if (!RequirementsRow) return -1;
	return RequirementsRow->RequiredPoints;
}


bool UAbilityComponent_Player::IsAbilityMaxLevel()
{
	FName RowName = FName(*FString::FromInt(CurrentAbilityLevel + 1));
	if (RequirementsDataTable->FindRow<FAbilityUpgradeRequirements>(RowName, TEXT("Level to look for"))) return false;
	return true;
}


void UAbilityComponent_Player::SaveAbilityProperties(FAbilitySaveData& Data)
{
	Data.bIsUnlocked = IsAbilityAvailable();
	Data.CurrentLevel = CurrentAbilityLevel;
}


void UAbilityComponent_Player::LoadAbilityProperties(const FAbilitySaveData& SavedData)
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


FString UAbilityComponent_Player::GetAbilityDescription()
{
	UpdateAbilityDescription();
	return AbilityDescription;
}


FString UAbilityComponent_Player::GetUpgradeDescription()
{
	UpdateUpgradeDescription();
	return UpgradeDescription;
}


UTexture2D* UAbilityComponent_Player::GetIcon() const
{
	if (!Icon) return nullptr;
	return Icon;
}



FTransform UAbilityComponent_Player::GetSpawnTransform(float DefaultSpawnDistance) const
{
	const FVector PlayerLocation = GetOwner()->GetActorLocation();
	const FVector TargetLocation = PlayerRef->GetTargetLocation(DefaultSpawnDistance);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, TargetLocation);
	FTransform SpawnTransform(SpawnRotation, TargetLocation);
	return SpawnTransform;
}


bool UAbilityComponent_Player::CanPlayMontage() const{return AnimMontage && PlayerRef && !PlayerRef->GetCurrentMontage();}

bool UAbilityComponent_Player::CanUseAbility() const{return CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef;}
