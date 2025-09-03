
#include "Combat/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Boss.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/Minion.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UI/BossHealthBar.h"
#include "UI/MinionHealthBar.h"
#include "UI/PlayerWidget.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	CharacterRef = Cast<ACharacter>(GetOwner());
	if (CharacterRef)
	{
		SkeletalMeshComp = CharacterRef->GetMesh();
		OriginalSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	}
}


void UStatusEffectsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


void UStatusEffectsComponent::SlowDownEnemy(float SlowDuration, UNiagaraSystem* FrozenEffect)
{
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;

	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (FrozenEffect && !FreezeData.Effect)
	{
		FreezeData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				FrozenEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);

		FreezeData.Type = EStatusEffects::Slow;
		FreezeData.TimerHandle = FreezeTimerHandle;
		FreezeData.SavedSpeed = OriginalSpeed;
	}
	GetWorld()->GetTimerManager().SetTimer(FreezeTimerHandle, this,  &UStatusEffectsComponent::StopFreeze, SlowDuration, false);
}


void UStatusEffectsComponent::StopFreeze()
{
	StopEffect(FreezeData);
}



void UStatusEffectsComponent::HandleBurn(float NewBurnDuration, float NewBurnDamage, UNiagaraSystem* BurnEffect, bool bNewIsOverlapping, float NewBurnRate)
{
	BurnDamage = NewBurnDamage;
	BurnDuration = NewBurnDuration;
	bIsOverlapping = bNewIsOverlapping;
	BurnRate = NewBurnRate;
	
	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	
	if (BurnEffect && !BurnData.Effect)
	{
		UE_LOG(LogTemp, Warning, TEXT("EFFECT CREATED"));
		BurnData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				BurnEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		BurnData.Type = EStatusEffects::Burn;
		BurnData.TimerHandle = BurnTimerHandle;
	}
	GetWorld()->GetTimerManager().SetTimer(BurnTimerHandle, this, &UStatusEffectsComponent::Burn, BurnRate, true);
}


void UStatusEffectsComponent::Burn()
{
	if (BurnDuration > 0)
	{
		if (!bIsOverlapping)
		{
			BurnDuration -= BurnRate;
		}
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(BurnDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		StopEffect(BurnData);
	}
}


void UStatusEffectsComponent::HandlePoison(float NewPoisonDuration, float NewPoisonDamage, UNiagaraSystem* PoisonEffect, float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* Icon)
{
	PoisonDamage = NewPoisonDamage;
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;

	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	
	if (PoisonEffect && !PoisonData.Effect)
	{
		PoisonData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				PoisonEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		PoisonData.Type = EStatusEffects::Poison;
		PoisonData.TimerHandle = PoisonTimerHandle;
	}
	Cast<AMainCharacter_Base>(CharacterRef)->GetPlayerWidget()->CreateStatusIconWithTimer(PoisonDuration, Icon, AbilityCompRef);
	GetWorld()->GetTimerManager().SetTimer(BurnTimerHandle, this, &UStatusEffectsComponent::Poison, PoisonRate, true);
}


void UStatusEffectsComponent::Poison()
{
	if (PoisonDuration > 0)
	{
		PoisonDuration -= PoisonRate;
		AbilityCompRef->OnAbilityTimerChangedDelegate.Broadcast(PoisonDuration);
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(PoisonDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		AbilityCompRef->OnAbilityFinishedDelegate.Broadcast();
		StopEffect(PoisonData);
	}
}


void UStatusEffectsComponent::StopEffect(FStatusEffectData& Data)
{
	GetWorld()->GetTimerManager().ClearTimer(Data.TimerHandle);
	if (Data.Effect)
	{
		Data.Effect->DestroyInstance();
		Data.Effect = nullptr;
	}
	switch (Data.Type)
	{
		case EStatusEffects::Slow:
			CharacterRef->GetCharacterMovement()->MaxWalkSpeed = Data.SavedSpeed;
			break;
		case EStatusEffects::Burn:
			break;
		case EStatusEffects::Poison:
			break;
	}
	
}