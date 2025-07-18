
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bonfire.generated.h"

class USphereComponent;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ABonfire : public AActor
{
	GENERATED_BODY()
	
public:	

	ABonfire();
	
protected:

	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);
	
private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BonfireMesh;

	UPROPERTY(EditAnywhere)
	UBoxComponent* BonfireCollision;

	UPROPERTY(EditAnywhere)
	USphereComponent* InteractionRangeCollision;
};
