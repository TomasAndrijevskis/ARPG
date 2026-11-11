
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "Data/SpawnPoint.h"
#include "TeleportDoor.generated.h"


UCLASS()
class COURSE_ARPG_API ATeleportDoor : public AInteractableObject_Base
{
	GENERATED_BODY()

public:

	ATeleportDoor();
	
protected:
	
	virtual void SetupWidget() const override;

	virtual void OnInteract() override;
	
private:

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<UStaticMeshComponent> DoorEffect;

	UPROPERTY(EditInstanceOnly)
	FSpawnPoint SpawnPoint;
};
