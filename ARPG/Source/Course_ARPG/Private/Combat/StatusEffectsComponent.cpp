
#include "Combat/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/CharacterMovementComponent.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	EnemyCharacterRef = Cast<AEnemyCharacter_Base>(GetOwner());
	if (EnemyCharacterRef)
	{
		SkeletalMeshComp = EnemyCharacterRef->GetMesh();
		OriginalSpeed = EnemyCharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	}
}


void UStatusEffectsComponent::SlowDownEnemy(float SlowDuration, UNiagaraSystem* FrozenEffect)
{
	EnemyCharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed / 3;
	GetWorld()->GetTimerManager().SetTimer(FreezeTimerHandle, this, &UStatusEffectsComponent::ReturnSpeed, SlowDuration, false);

	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);

	if (FrozenEffect)
	{
		FrozenEffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				FrozenEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,FVector(1.f, 1.f, 1.f),
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
	}
}


void UStatusEffectsComponent::ReturnSpeed()
{
	GetWorld()->GetTimerManager().ClearTimer(FreezeTimerHandle);
	EnemyCharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalSpeed;
	if (FrozenEffectRef)
	{
		FrozenEffectRef->DestroyComponent();
		FrozenEffectRef = nullptr;	
	}
}


void UStatusEffectsComponent::HandleBurn(float NewBurnDuration, float NewBurnDamage, UNiagaraSystem* BurnEffect, bool bNewIsOverlapping)
{
	BurnDamage = NewBurnDamage;
	BurnDuration = NewBurnDuration;
	bIsOverlapping = bNewIsOverlapping;
	UE_LOG(LogTemp, Error, TEXT("Handle Burn"));
	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	
	if (BurnEffect && !BurnEffectRef)
	{
		UE_LOG(LogTemp, Warning, TEXT("EFFECT CREATED"));
		BurnEffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				BurnEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,FVector(1.f, 1.f, 1.f),
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
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
		UE_LOG(LogTemp, Error, TEXT("Burning time left: %f"), BurnDuration);
		FDamageEvent TargetAttackedEvent{ };
		EnemyCharacterRef->TakeDamage(BurnDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		StopBurning();
	}
}


void UStatusEffectsComponent::StopBurning()
{
	UE_LOG(LogTemp, Error, TEXT("Stop Burning"));
	GetWorld()->GetTimerManager().ClearTimer(BurnTimerHandle);
	if (BurnEffectRef)
	{
		BurnEffectRef->DestroyComponent();
		BurnEffectRef = nullptr;
	}
}

