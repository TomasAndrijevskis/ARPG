

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Combat/FTraceSockets.h"
#include "TraceComponent.generated.h"


class IFighter;
DECLARE_MULTICAST_DELEGATE(FOnHit);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UTraceComponent : public UActorComponent
{
	GENERATED_BODY()

	
public:	

	UTraceComponent();
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();

	UPROPERTY(VisibleAnywhere)
	bool bIsAttacking = false;
	
	FOnHit OnHitDelegate;
	
protected:

	virtual void BeginPlay() override;

private:

	void DrawDebugBox(bool bHasFoundTargets, FVector StartSocketLocation, FVector EndSocketLocation, FQuat ShapeRotation, FCollisionShape Box);

	float GetDamage(IFighter* FighterRef);

	bool CanHit(AActor* TargetActor);

	void ApplyDamage(AActor* TargetActor, float Damage,  TSubclassOf<UDamageType> DamageType);

	void DetectHitTargets(TArray<FHitResult>& Results);

	FVector GetWeaponHitBox(const FVector& Start, const FVector& End) const;
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalComp;

	UPROPERTY(EditAnywhere)
	TArray<FTraceSockets> Sockets;
	
	UPROPERTY(EditAnywhere)
	double BoxCollisionLength = 30.0f;

	UPROPERTY(EditAnywhere)
	bool bDebugMode = true;

	UPROPERTY()
	TArray<AActor*> TargetsToIgnore;

	UPROPERTY(EditAnywhere)
	UParticleSystem* HitParticleTemplate;
};