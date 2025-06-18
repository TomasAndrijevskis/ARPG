
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "Characters/MainCharacter.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/CombatComponent.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAbilityComponent_Base::BeginPlay()
{
	Super::BeginPlay();
	
	CharacterRef = Cast<AMainCharacter>(GetOwner());
	SkeletalMeshComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
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
	return AnimMontage && CharacterRef && !CharacterRef->GetCurrentMontage();
}


void UAbilityComponent_Base::HandlePlayerActions(bool bCanDo)
{
	CharacterRef->CombatComp->bCanAttack = bCanDo;
	CharacterRef->PlayerActionsComp->bCanRoll = bCanDo;
}


bool UAbilityComponent_Base::CheckMana()
{
	if (!CharacterRef || !CharacterRef -> Implements<UMainPlayer>())
	{
		return false;
	}

	IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
	if (!IPlayerRef)
	{
		return false;
	}
	
	return IPlayerRef->HasEnoughMana(ManaCost);
}


void UAbilityComponent_Base::SetAbilityLevel(int NewLevel)
{
	if (CurrentLevel != MaxLevel && NewLevel <= MaxLevel)
	{
		CurrentLevel = NewLevel;
	}
}


int UAbilityComponent_Base::GetAbilityLevel()
{
	return CurrentLevel;
}


FString UAbilityComponent_Base::GetDescription()
{
	return Description;
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
	UE_LOG(LogTemp, Warning, TEXT("Ability: %s | Available: %s"), *GetName(), bIsAbilityAvailable ? TEXT("True") : TEXT("False"));
}


UTexture2D* UAbilityComponent_Base::GetIcon()
{
	return Icon;
}


float UAbilityComponent_Base::GetManaCost()
{
	return ManaCost;
}