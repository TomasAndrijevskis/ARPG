
#pragma once

#include "CoreMinimal.h"
#include "Objects/InteractableObject_Base.h"
#include "MagicalSphere.generated.h"


UCLASS()
class COURSE_ARPG_API AMagicalSphere : public AInteractableObject_Base
{
	GENERATED_BODY()

public:

	virtual void OnInteract() override;
	
protected:
	
	virtual void SetupWidget() const override;
};
