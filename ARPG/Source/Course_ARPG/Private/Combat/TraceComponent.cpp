
#include "Combat/TraceComponent.h"

#include "Characters/MainCharacter_Base.h"
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Interfaces/Fighter.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"

UTraceComponent::UTraceComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UTraceComponent::BeginPlay()
{
	Super::BeginPlay();

	SkeletalComp = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
}


void UTraceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsAttacking)
	{
		return;
	}
	TArray<FHitResult> AllResults;
	for (const FTraceSockets Socket : Sockets)
	{
		FVector StartSocketLocation = SkeletalComp->GetSocketLocation(Socket.StartSocket);
		FVector EndSocketLocation = SkeletalComp->GetSocketLocation(Socket.EndSocket);
		FQuat ShapeRotation = SkeletalComp->GetSocketQuaternion(Socket.SocketRotation);
		
		TArray<FHitResult> OutResults;

		double WeaponDistance = FVector::Distance(StartSocketLocation, EndSocketLocation);

		FVector BoxHalfExtent = FVector(BoxCollisionLength, BoxCollisionLength, WeaponDistance);
		BoxHalfExtent /=2;

		FCollisionShape Box = FCollisionShape::MakeBox(BoxHalfExtent);

		FCollisionQueryParams IgnoreParams { FName{TEXT("Ignore Params")}, false, GetOwner()};
		bool bHasFoundTargets = GetWorld()->SweepMultiByChannel(OutResults, StartSocketLocation, EndSocketLocation,ShapeRotation,ECollisionChannel::ECC_GameTraceChannel1, Box, IgnoreParams);
		
		
		for (FHitResult Hit: OutResults)
		{
			AllResults.Add(Hit);
		}
		if (bDebugMode)
		{
			FLinearColor DebugColor = FColor::Red;
			if (bHasFoundTargets)
			{
				DebugColor = FColor::Green;
			}
			FVector CenterPoint = UKismetMathLibrary::VLerp(StartSocketLocation, EndSocketLocation, 0.5f);
			UKismetSystemLibrary::DrawDebugBox(GetWorld(),CenterPoint ,Box.GetExtent(), DebugColor, ShapeRotation.Rotator(), 1.0f, 2.0f );
		}
	}
	if (AllResults.Num() == 0)
	{
		return;
	}
	float CharacterDamage = 0.0f;
	IFighter* FighterRef = Cast<IFighter>(GetOwner());
	
	if (FighterRef)
	{
		
		CharacterDamage = FighterRef->GetCurrentDamage();
		
		AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
		UAbilityComponent_DamageIncrease* AbilityRef = GetOwner()->FindComponentByClass<UAbilityComponent_DamageIncrease>();

		if (PlayerRef && (AbilityRef->IsAbilityActive()))
		{
			CharacterDamage = CharacterDamage * (AbilityRef->GetDamageMultiplier());
		}
		//UE_LOG(LogTemp, Error, TEXT("Damage: %f"), CharacterDamage);
	}

	FDamageEvent TargetAttackedEvent{ };
	for (const FHitResult& Hit : AllResults)
	{
		AActor* TargetActor = Hit.GetActor();

		if (TargetsToIgnore.Contains(TargetActor))
		{
			continue; //skip iteration (return would stop loop completely)
		}
		TargetActor->TakeDamage(CharacterDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
		TargetsToIgnore.AddUnique(TargetActor);
		OnHitDelegate.Broadcast();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticleTemplate, Hit.ImpactPoint);
	}
}

void UTraceComponent::HandleResetAttack()
{
	TargetsToIgnore.Empty();
}

