
#include "Components/TraceComponent.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Combat/Abilities/PlayerAbilities/MagicShield.h"
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

	if (!bIsAttacking) return;
	TArray<FHitResult> AllResults;
	for (const FTraceSockets Socket : Sockets)
	{
		FVector StartSocketLocation = SkeletalComp->GetSocketLocation(Socket.StartSocket);
		FVector EndSocketLocation = SkeletalComp->GetSocketLocation(Socket.EndSocket);
		FQuat ShapeRotation = SkeletalComp->GetSocketQuaternion(Socket.SocketRotation);
		
		TArray<FHitResult> OutResults;

		double WeaponDistance = FVector::Distance(StartSocketLocation, EndSocketLocation);

		FVector BoxHalfExtent = FVector(BoxCollisionLength, BoxCollisionLength, WeaponDistance);
		BoxHalfExtent /= 2;

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
			if (bHasFoundTargets) DebugColor = FColor::Green;
			FVector CenterPoint = UKismetMathLibrary::VLerp(StartSocketLocation, EndSocketLocation, 0.5f);
			UKismetSystemLibrary::DrawDebugBox(GetWorld(),CenterPoint ,Box.GetExtent(), DebugColor, ShapeRotation.Rotator(), 1.0f, 2.0f );
		}
	}
	if (AllResults.Num() == 0) return;
	float CharacterDamage = 0.0f;
	IFighter* FighterRef = Cast<IFighter>(GetOwner());
	if (FighterRef)
	{
		CharacterDamage = FighterRef->GetCurrentDamage();
		AMainCharacter_Warrior* WarriorRef = Cast<AMainCharacter_Warrior>(GetOwner());
		UE_LOG(LogTemp, Warning, TEXT("CharacterDamage: %f"), CharacterDamage);
		UE_LOG(LogTemp, Warning, TEXT("GetDamageMultiplier: %f"), WarriorRef->GetDamageMultiplier());
		if (WarriorRef) CharacterDamage = CharacterDamage * WarriorRef->GetDamageMultiplier();
		UE_LOG(LogTemp, Warning, TEXT("CharacterDamage: %f"), CharacterDamage);
	}

	FDamageEvent TargetAttackedEvent{ };
	for (const FHitResult& Hit : AllResults)
	{
		AActor* TargetActor = Hit.GetActor();

		if (TargetActor == Cast<AMagicShield>(Hit.GetActor())) break;
		if (TargetsToIgnore.Contains(TargetActor)) continue;
		TargetActor->TakeDamage(CharacterDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
		TargetsToIgnore.AddUnique(TargetActor);
		OnHitDelegate.Broadcast();
		if (HitParticleTemplate) UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticleTemplate, Hit.ImpactPoint);
	}
}


void UTraceComponent::HandleResetAttack()
{
	TargetsToIgnore.Empty();
}