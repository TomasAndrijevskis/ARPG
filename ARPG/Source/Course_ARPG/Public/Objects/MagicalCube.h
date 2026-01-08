
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "MagicalCube.generated.h"


UCLASS()
class COURSE_ARPG_API AMagicalCube : public AInteractableObject_Base
{
	GENERATED_BODY()

protected:
	
	virtual void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult) override;
	
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
	
	virtual void SetupWidget() const override;
};
