

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathTrigger.generated.h"


class UBoxComponent;

UCLASS()
class COURSE_ARPG_API ADeathTrigger : public AActor
{
	GENERATED_BODY()
	
public:	

	ADeathTrigger();

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);
	
private:

	UPROPERTY(EditAnywhere)
	UBoxComponent* Collision;
};
