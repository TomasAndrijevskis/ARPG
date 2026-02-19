
#include "Components/TraceComponent.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Interfaces/Fighter.h"
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
	DetectHitTargets(AllResults);
	if (AllResults.Num() == 0) return;
	IFighter* FighterRef = Cast<IFighter>(GetOwner());
	if (!FighterRef) return;
	float CharacterDamage = GetDamage(FighterRef);
	for (FHitResult& Hit : AllResults)
	{
		AActor* TargetActor = Hit.GetActor();
		if (CanHit(TargetActor))
		{
			ApplyDamage(TargetActor, CharacterDamage, FighterRef->GetDamageType());
			OnHitDelegate.Broadcast();
			if (HitParticleTemplate) UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticleTemplate, Hit.ImpactPoint);
		}
	}
}


void UTraceComponent::DetectHitTargets(TArray<FHitResult>& OutHits)
{
	for (const FTraceSockets Socket : Sockets)
	{
		FVector StartSocketLocation = SkeletalComp->GetSocketLocation(Socket.StartSocket);
		FVector EndSocketLocation = SkeletalComp->GetSocketLocation(Socket.EndSocket);
		FQuat ShapeRotation = SkeletalComp->GetSocketQuaternion(Socket.SocketRotation);
		FCollisionShape Box = FCollisionShape::MakeBox(GetWeaponHitBox(StartSocketLocation, EndSocketLocation));
		FCollisionQueryParams IgnoreParams { FName{TEXT("Ignore Params")}, false, GetOwner()};
		TArray<FHitResult> OutResults;
		bool bHasFoundTargets = GetWorld()->SweepMultiByChannel(OutResults, StartSocketLocation, EndSocketLocation,ShapeRotation,ECollisionChannel::ECC_GameTraceChannel1, Box, IgnoreParams);
		for (FHitResult Hit: OutResults)
		{
			OutHits.Add(Hit);
		}
		if (bDebugMode) DrawDebugBox(bHasFoundTargets, StartSocketLocation, EndSocketLocation, ShapeRotation, Box);
	}
}


FVector UTraceComponent::GetWeaponHitBox(const FVector& Start, const FVector& End) const
{
	double WeaponDistance = FVector::Distance(Start, End);
	FVector BoxHalfExtent = FVector(BoxCollisionLength, BoxCollisionLength, WeaponDistance);
	return BoxHalfExtent / 2;
}


bool UTraceComponent::CanHit(AActor* TargetActor)
{
	if (TargetsToIgnore.Contains(TargetActor)) return false;
	TargetsToIgnore.AddUnique(TargetActor);
	return true;
}


void UTraceComponent::ApplyDamage(AActor* TargetActor, float Damage, TSubclassOf<UDamageType> DamageType)
{
	UGameplayStatics::ApplyDamage(TargetActor, Damage, GetOwner()->GetInstigatorController(), GetOwner(), DamageType);
	AMainCharacter_Warrior* WarriorRef = Cast<AMainCharacter_Warrior>(GetOwner());
	if (WarriorRef && WarriorRef->IsWeaponEnchanted())
		UGameplayStatics::ApplyDamage(TargetActor, Damage * .1, GetOwner()->GetInstigatorController(), GetOwner(), WarriorRef->GetEnchantmentDamageType());
}


float UTraceComponent::GetDamage(IFighter* FighterRef)
{
	AMainCharacter_Warrior* WarriorRef = Cast<AMainCharacter_Warrior>(GetOwner());
	float Damage = FighterRef->GetPhysicalDamage();
	if (WarriorRef) Damage = Damage * WarriorRef->GetDamageMultiplier();
	return Damage;
}


void UTraceComponent::HandleResetAttack()
{
	TargetsToIgnore.Empty();
}


void UTraceComponent::DrawDebugBox(bool bHasFoundTargets, FVector StartSocketLocation, FVector EndSocketLocation, FQuat ShapeRotation, FCollisionShape Box)
{
	FLinearColor DebugColor = FColor::Red;
	if (bHasFoundTargets) DebugColor = FColor::Green;
	FVector CenterPoint = UKismetMathLibrary::VLerp(StartSocketLocation, EndSocketLocation, 0.5f);
	UKismetSystemLibrary::DrawDebugBox(GetWorld(),CenterPoint ,Box.GetExtent(), DebugColor, ShapeRotation.Rotator(), 1.0f, 2.0f );
}