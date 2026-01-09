
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "TeleportDoor.generated.h"


UCLASS()
class COURSE_ARPG_API ATeleportDoor : public AInteractableObject_Base
{
	GENERATED_BODY()

public:

	ATeleportDoor();
	
protected:
	
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult) override;
	
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
	virtual void SetupWidget() const override;

private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorEffect;
	
	UPROPERTY(EditAnywhere)
	FString DoorName;
};
