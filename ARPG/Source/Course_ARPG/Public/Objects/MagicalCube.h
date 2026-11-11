
#pragma once

#include "CoreMinimal.h"
#include "InteractableObject_Base.h"
#include "MagicalCube.generated.h"


UCLASS()
class COURSE_ARPG_API AMagicalCube : public AInteractableObject_Base
{
	GENERATED_BODY()

public:

	virtual void OnInteract() override;
	
protected:
	
	virtual void SetupWidget() const override;
};
