

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Combat/FTraceSockets.h"
#include "TraceComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnHitSignature, UTraceComponent, OnHitDelegate);
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

	UPROPERTY(BlueprintAssignable)
	FOnHitSignature OnHitDelegate;
	
protected:

	virtual void BeginPlay() override;

private:
	
	USkeletalMeshComponent* SkeletalComp;

	UPROPERTY(EditAnywhere)
	TArray<FTraceSockets> Sockets;
	
	UPROPERTY(EditAnywhere)
	double BoxCollisionLength = 30.0f;

	UPROPERTY(EditAnywhere)
	bool bDebugMode = true;

	TArray<AActor*> TargetsToIgnore;

	UPROPERTY(EditAnywhere)
	UParticleSystem* HitParticleTemplate;
	
};
